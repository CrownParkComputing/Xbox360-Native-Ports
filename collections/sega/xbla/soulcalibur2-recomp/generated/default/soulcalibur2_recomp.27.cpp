#include "soulcalibur2_funcs.27.h"

DEFINE_REX_FUNC(sub_820E1310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f4,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f8,f12,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f8.f64)));
	// fmadds f6,f7,f13,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f5,f9,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f11,f3,f4,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f11.f64)));
	// fnmsubs f8,f7,f4,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f4.f64, -ctx.f8.f64)));
	// fmadds f12,f12,f3,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f6.f64)));
	// fmadds f0,f0,f4,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f5.f64)));
	// fnmsubs f11,f7,f9,f11
	ctx.f11.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f11.f64)));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fnmsubs f11,f9,f3,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f3.f64, -ctx.f8.f64)));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fnmsubs f12,f10,f4,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f4.f64, -ctx.f12.f64)));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fnmsubs f0,f13,f3,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f3.f64, -ctx.f0.f64)));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9690) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822007f0
	ctx.lr = 0x820E96C8;
	sub_822007F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200800
	ctx.lr = 0x820E96D8;
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
	ctx.lr = 0x820E96E8;
	sub_82200808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200750
	ctx.lr = 0x820E96F4;
	sub_82200750(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200758
	ctx.lr = 0x820E9704;
	sub_82200758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a28
	ctx.lr = 0x820E9710;
	sub_821A3A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200790
	ctx.lr = 0x820E971C;
	sub_82200790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200798
	ctx.lr = 0x820E9728;
	sub_82200798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822007a0
	ctx.lr = 0x820E9734;
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
	ctx.lr = 0x820E9744;
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
	ctx.lr = 0x820E9758;
	sub_82200838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200848
	ctx.lr = 0x820E9764;
	sub_82200848(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200850
	ctx.lr = 0x820E9770;
	sub_82200850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200820
	ctx.lr = 0x820E977C;
	sub_82200820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822006f8
	ctx.lr = 0x820E9788;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200828
	ctx.lr = 0x820E9794;
	sub_82200828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x820E97A0;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200830
	ctx.lr = 0x820E97AC;
	sub_82200830(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820E97B8;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f3,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E97DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f1,16168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16168);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E97F8;
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
	ctx.lr = 0x820E9810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,396(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 396, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,400(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 400, temp.u32);
	// stfs f31,404(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 404, temp.u32);
	// stw r31,452(r30)
	REX_STORE_U32(r30.u32 + 452, r31.u32);
	// stw r10,408(r30)
	REX_STORE_U32(r30.u32 + 408, ctx.r10.u32);
	// lfs f0,16376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 460, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

DEFINE_REX_FUNC(sub_820F4E18) {
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
	ctx.lr = 0x820F4E20;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8468);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f540c
	if (!ctx.cr6.eq) goto loc_820F540C;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,175(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f540c
	if (!ctx.cr0.eq) goto loc_820F540C;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8336);
	// stw r29,9364(r3)
	REX_STORE_U32(ctx.r3.u32 + 9364, r29.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x820f4e80
	if (ctx.cr6.eq) goto loc_820F4E80;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x820f4e78
	if (ctx.cr6.eq) goto loc_820F4E78;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x820f4e88
	if (!ctx.cr6.eq) goto loc_820F4E88;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820f4e84
	goto loc_820F4E84;
loc_820F4E78:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820f4e84
	goto loc_820F4E84;
loc_820F4E80:
	// li r11,3
	ctx.r11.s64 = 3;
loc_820F4E84:
	// stw r11,9364(r31)
	REX_STORE_U32(r31.u32 + 9364, ctx.r11.u32);
loc_820F4E88:
	// lwz r11,9364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9364);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x820f4e9c
	if (!ctx.cr6.gt) goto loc_820F4E9C;
	// li r11,13
	ctx.r11.s64 = 13;
loc_820F4E9C:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r9,8392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8392);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,4344
	ctx.r10.s64 = ctx.r10.s64 + 4344;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lfs f31,2344(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x820f4f08
	if (!ctx.cr6.eq) goto loc_820F4F08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4af8
	ctx.lr = 0x820F4EC8;
	sub_820F4AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4ef8
	if (ctx.cr0.eq) goto loc_820F4EF8;
	// lwz r11,8320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f08
	if (ctx.cr6.eq) goto loc_820F4F08;
	// lwz r11,8396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8396(r31)
	REX_STORE_U32(r31.u32 + 8396, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x820f540c
	if (!ctx.cr6.gt) goto loc_820F540C;
	// stfs f31,8440(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8440, temp.u32);
	// b 0x820f4f04
	goto loc_820F4F04;
loc_820F4EF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8440, temp.u32);
loc_820F4F04:
	// stw r29,8380(r31)
	REX_STORE_U32(r31.u32 + 8380, r29.u32);
loc_820F4F08:
	// lwz r11,8408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8408);
	// stw r29,8392(r31)
	REX_STORE_U32(r31.u32 + 8392, r29.u32);
	// stw r29,8396(r31)
	REX_STORE_U32(r31.u32 + 8396, r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f4f24
	if (!ctx.cr6.gt) goto loc_820F4F24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8408(r31)
	REX_STORE_U32(r31.u32 + 8408, ctx.r11.u32);
loc_820F4F24:
	// lwz r11,8380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f5008
	if (ctx.cr6.eq) goto loc_820F5008;
	// lwz r11,8468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4f80
	if (ctx.cr6.eq) goto loc_820F4F80;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f4f58
	if (ctx.cr0.eq) goto loc_820F4F58;
	// lbz r11,174(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f540c
	if (!ctx.cr0.eq) goto loc_820F540C;
loc_820F4F58:
	// lwz r11,9336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820f5008
	if (!ctx.cr6.eq) goto loc_820F5008;
	// lwz r11,8476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8476);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x820f5008
	if (!ctx.cr6.gt) goto loc_820F5008;
	// stw r29,8468(r31)
	REX_STORE_U32(r31.u32 + 8468, r29.u32);
	// stw r29,8476(r31)
	REX_STORE_U32(r31.u32 + 8476, r29.u32);
	// stw r29,9336(r31)
	REX_STORE_U32(r31.u32 + 9336, r29.u32);
	// b 0x820f5008
	goto loc_820F5008;
loc_820F4F80:
	// lwz r11,8460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4fa4
	if (ctx.cr6.eq) goto loc_820F4FA4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f540c
	if (!ctx.cr0.eq) goto loc_820F540C;
	// stw r29,8460(r31)
	REX_STORE_U32(r31.u32 + 8460, r29.u32);
	// b 0x820f5008
	goto loc_820F5008;
loc_820F4FA4:
	// lwz r11,8320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5008
	if (ctx.cr6.eq) goto loc_820F5008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4af8
	ctx.lr = 0x820F4FB8;
	sub_820F4AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4fcc
	if (ctx.cr0.eq) goto loc_820F4FCC;
	// lwz r11,8408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8408);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bgt cr6,0x820f5004
	if (ctx.cr6.gt) goto loc_820F5004;
loc_820F4FCC:
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f4fe4
	if (!ctx.cr6.eq) goto loc_820F4FE4;
	// lwz r10,8320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8320);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x820f5004
	if (ctx.cr6.eq) goto loc_820F5004;
loc_820F4FE4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820f4ff8
	if (ctx.cr6.lt) goto loc_820F4FF8;
	// lwz r11,8320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8320);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820f5004
	if (ctx.cr6.eq) goto loc_820F5004;
loc_820F4FF8:
	// lwz r11,8408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820f540c
	if (ctx.cr6.gt) goto loc_820F540C;
loc_820F5004:
	// stw r29,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r29.u32);
loc_820F5008:
	// stw r29,8408(r31)
	REX_STORE_U32(r31.u32 + 8408, r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,170(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 170);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f5050
	if (ctx.cr0.eq) goto loc_820F5050;
	// lha r11,90(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 90));
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x820f5050
	if (ctx.cr6.eq) goto loc_820F5050;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820f5050
	if (ctx.cr6.eq) goto loc_820F5050;
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f5050
	if (ctx.cr6.eq) goto loc_820F5050;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19792);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,8440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8440, temp.u32);
loc_820F5050:
	// bl 0x820fed40
	ctx.lr = 0x820F5054;
	sub_820FED40(ctx, base);
	// lfs f0,8440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8440);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x820f50a4
	if (ctx.cr6.eq) goto loc_820F50A4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f509c
	if (ctx.cr6.eq) goto loc_820F509C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f5094
	if (ctx.cr6.eq) goto loc_820F5094;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820f508c
	if (ctx.cr6.eq) goto loc_820F508C;
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f50a8
	goto loc_820F50A8;
loc_820F508C:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f50a8
	goto loc_820F50A8;
loc_820F5094:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f50a8
	goto loc_820F50A8;
loc_820F509C:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f50a8
	goto loc_820F50A8;
loc_820F50A4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_820F50A8:
	// lwz r10,8364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8364);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f50bc
	if (ctx.cr0.eq) goto loc_820F50BC;
	// lfs f12,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_820F50BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r30,1
	r30.s64 = 1;
	// lbz r10,192(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 192);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f50e4
	if (ctx.cr0.eq) goto loc_820F50E4;
	// lwz r10,8336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820f50e4
	if (!ctx.cr6.gt) goto loc_820F50E4;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stw r30,8460(r31)
	REX_STORE_U32(r31.u32 + 8460, r30.u32);
loc_820F50E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f50f8
	if (!ctx.cr6.lt) goto loc_820F50F8;
	// stw r29,8380(r31)
	REX_STORE_U32(r31.u32 + 8380, r29.u32);
	// stw r29,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r29.u32);
	// b 0x820f540c
	goto loc_820F540C;
loc_820F50F8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r30,8380(r31)
	REX_STORE_U32(r31.u32 + 8380, r30.u32);
	// bgt cr6,0x820f5278
	if (ctx.cr6.gt) goto loc_820F5278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4af8
	ctx.lr = 0x820F510C;
	sub_820F4AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f5278
	if (ctx.cr0.eq) goto loc_820F5278;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F5124:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stbu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x820f5124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5124;
	// lwz r9,9340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 9340);
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5150
	if (ctx.cr0.eq) goto loc_820F5150;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r30,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_820F5150:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5178
	if (ctx.cr0.eq) goto loc_820F5178;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, r30.u8);
	// ori r8,r7,2
	ctx.r8.u64 = ctx.r7.u64 | 2;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F5178:
	// rlwinm. r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f51a0
	if (ctx.cr0.eq) goto loc_820F51A0;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, r30.u8);
	// ori r8,r7,10
	ctx.r8.u64 = ctx.r7.u64 | 10;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F51A0:
	// rlwinm. r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f51c8
	if (ctx.cr0.eq) goto loc_820F51C8;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, r30.u8);
	// ori r8,r7,9
	ctx.r8.u64 = ctx.r7.u64 | 9;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F51C8:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f51f0
	if (ctx.cr0.eq) goto loc_820F51F0;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, r30.u8);
	// ori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F51F0:
	// rlwinm. r11,r9,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5218
	if (ctx.cr0.eq) goto loc_820F5218;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, r30.u8);
	// ori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_820F5218:
	// rlwinm. r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5240
	if (ctx.cr0.eq) goto loc_820F5240;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r30,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r30.u8);
	// ori r9,r8,8
	ctx.r9.u64 = ctx.r8.u64 | 8;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820F5240:
	// bl 0x820fed80
	ctx.lr = 0x820F5244;
	sub_820FED80(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// stw r11,8464(r31)
	REX_STORE_U32(r31.u32 + 8464, ctx.r11.u32);
	// beq cr6,0x820f540c
	if (ctx.cr6.eq) goto loc_820F540C;
	// lwz r11,8460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f540c
	if (!ctx.cr6.eq) goto loc_820F540C;
	// stw r30,8392(r31)
	REX_STORE_U32(r31.u32 + 8392, r30.u32);
	// stw r29,8396(r31)
	REX_STORE_U32(r31.u32 + 8396, r29.u32);
	// b 0x820f540c
	goto loc_820F540C;
loc_820F5278:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r30,8328(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// lhz r10,90(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bne cr6,0x820f52b8
	if (!ctx.cr6.eq) goto loc_820F52B8;
	// lwz r10,8336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x820f52b8
	if (!ctx.cr6.gt) goto loc_820F52B8;
	// lhz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 592);
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x820f52b4
	if (ctx.cr6.eq) goto loc_820F52B4;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// beq cr6,0x820f52b4
	if (ctx.cr6.eq) goto loc_820F52B4;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x820f52b8
	if (!ctx.cr6.eq) goto loc_820F52B8;
loc_820F52B4:
	// li r30,7
	r30.s64 = 7;
loc_820F52B8:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x820fed80
	ctx.lr = 0x820F52C0;
	sub_820FED80(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,5528
	ctx.r11.s64 = ctx.r11.s64 + 5528;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lbzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// lbzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// addi r30,r11,6
	r30.s64 = ctx.r11.s64 + 6;
	// addi r29,r11,7
	r29.s64 = ctx.r11.s64 + 7;
	// lbzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// lbzx r7,r4,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r6,r4,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lbzx r8,r4,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + r30.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r4,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r29.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bgt cr6,0x820f533c
	if (ctx.cr6.gt) goto loc_820F533C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F533C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820f5354
	if (ctx.cr6.gt) goto loc_820F5354;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F5354:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f536c
	if (ctx.cr6.gt) goto loc_820F536C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F536C:
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x820f5384
	if (ctx.cr6.gt) goto loc_820F5384;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F5384:
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x820f539c
	if (ctx.cr6.gt) goto loc_820F539C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F539C:
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x820f53b4
	if (ctx.cr6.gt) goto loc_820F53B4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F53B4:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x820f53cc
	if (ctx.cr6.gt) goto loc_820F53CC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x820f53e0
	goto loc_820F53E0;
loc_820F53CC:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820f53e4
	if (ctx.cr6.gt) goto loc_820F53E4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_820F53E0:
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
loc_820F53E4:
	// lwz r11,8460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8460);
	// li r10,180
	ctx.r10.s64 = 180;
	// stw r10,8408(r31)
	REX_STORE_U32(r31.u32 + 8408, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f540c
	if (ctx.cr6.eq) goto loc_820F540C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4d28
	ctx.lr = 0x820F5400;
	sub_820F4D28(ctx, base);
	// li r11,360
	ctx.r11.s64 = 360;
	// stw r3,8464(r31)
	REX_STORE_U32(r31.u32 + 8464, ctx.r3.u32);
	// stw r11,8408(r31)
	REX_STORE_U32(r31.u32 + 8408, ctx.r11.u32);
loc_820F540C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82116E50) {
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
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r10,27952
	ctx.r9.s64 = ctx.r10.s64 + 27952;
	// addi r6,r6,31736
	ctx.r6.s64 = ctx.r6.s64 + 31736;
	// addi r8,r8,28200
	ctx.r8.s64 = ctx.r8.s64 + 28200;
	// addi r7,r7,27648
	ctx.r7.s64 = ctx.r7.s64 + 27648;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82116E98;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82116eb4
	if (ctx.cr0.eq) goto loc_82116EB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82116eb8
	goto loc_82116EB8;
loc_82116EB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82116EB8:
	// stw r31,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r31.u32);
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

DEFINE_REX_FUNC(sub_82117F70) {
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
	ctx.lr = 0x82117F78;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// addi r11,r11,32068
	ctx.r11.s64 = ctx.r11.s64 + 32068;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r7,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r7.u32);
	// lfs f3,32064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32064);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// addi r29,r3,208
	r29.s64 = ctx.r3.s64 + 208;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r9,200(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r6,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r6.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r9,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// stw r8,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r8.u32);
	// lfs f13,220(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x82118010;
	sub_82204AE0(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r30,0
	r30.s64 = 0;
	// fdivs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / ctx.f1.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r11.u8);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// lwz r5,228(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x821e7888
	ctx.lr = 0x82118064;
	sub_821E7888(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f5,17136(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17136);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,1056
	ctx.r8.s64 = ctx.r8.s64 + 1056;
	// lfs f4,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f4.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16204(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8210ded0
	ctx.lr = 0x821180B0;
	sub_8210DED0(ctx, base);
	// lwz r30,92(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x821fec88
	ctx.lr = 0x821180B8;
	sub_821FEC88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// stb r10,77(r30)
	REX_STORE_U8(r30.u32 + 77, ctx.r10.u8);
	// lfs f0,26816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821180D0;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fsubs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f30,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	f30.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821180F0;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8211EA90) {
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
	ctx.lr = 0x8211EA98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8211eb64
	if (ctx.cr6.eq) goto loc_8211EB64;
	// lwz r31,80(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8211eb24
	goto loc_8211EB24;
loc_8211EADC:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211eb20
	if (ctx.cr0.eq) goto loc_8211EB20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8211eb20
	if (ctx.cr6.eq) goto loc_8211EB20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211EB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x8211EB20;
	sub_820E1B28(ctx, base);
loc_8211EB20:
	// lwz r31,80(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8211EB24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8211eadc
	if (!ctx.cr6.eq) goto loc_8211EADC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cc0
	ctx.lr = 0x8211EB3C;
	sub_820E1CC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8211EB44;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8211eb64
	if (!ctx.cr6.gt) goto loc_8211EB64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cf8
	ctx.lr = 0x8211EB64;
	sub_820E1CF8(ctx, base);
loc_8211EB64:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82121C98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82121d2c
	if (ctx.cr6.eq) goto loc_82121D2C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82121ccc
	if (!ctx.cr6.eq) goto loc_82121CCC;
	// lbz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// beq cr6,0x82121d2c
	if (ctx.cr6.eq) goto loc_82121D2C;
loc_82121CCC:
	// lhz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82121d2c
	if (!ctx.cr0.eq) goto loc_82121D2C;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82121d2c
	if (ctx.cr6.eq) goto loc_82121D2C;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x82121d2c
	if (ctx.cr6.eq) goto loc_82121D2C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82121d24
	if (ctx.cr6.eq) goto loc_82121D24;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82121d24
	if (ctx.cr6.eq) goto loc_82121D24;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82121d24
	if (ctx.cr6.eq) goto loc_82121D24;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82121d24
	if (ctx.cr6.eq) goto loc_82121D24;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x82121d2c
	if (!ctx.cr6.gt) goto loc_82121D2C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x82121d24
	if (!ctx.cr6.gt) goto loc_82121D24;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x82121d2c
	if (!ctx.cr6.eq) goto loc_82121D2C;
loc_82121D24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82121D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821241E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,1824
	ctx.r5.s64 = ctx.r3.s64 + 1824;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821241FC:
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r6,r9,556
	ctx.r6.s64 = ctx.r9.s64 + 556;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82124210:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r7,458
	ctx.r7.s64 = ctx.r7.s64 + 458;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stwx r8,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r8,r4,r3
	REX_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r8.u32);
	// bdnz 0x82124210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124210;
	// addi r9,r9,49
	ctx.r9.s64 = ctx.r9.s64 + 49;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r9,98
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 98, ctx.xer);
	// blt cr6,0x821241fc
	if (ctx.cr6.lt) goto loc_821241FC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82125420) {
	REX_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125474
	if (ctx.cr6.lt) goto loc_82125474;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-27676
	ctx.r11.s64 = ctx.r11.s64 + -27676;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lha r9,30(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 30));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82125474
	if (!ctx.cr6.lt) goto loc_82125474;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82125478
	goto loc_82125478;
loc_82125474:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125478:
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126CB0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821241e8
	ctx.lr = 0x82126CD8;
	sub_821241E8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x82125c68
	ctx.lr = 0x82126CEC;
	sub_82125C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821bf940
	ctx.lr = 0x82126D00;
	sub_821BF940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x821bf940
	ctx.lr = 0x82126D14;
	sub_821BF940(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x82126D28;
	sub_821BF940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821bf940
	ctx.lr = 0x82126D3C;
	sub_821BF940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x821bf940
	ctx.lr = 0x82126D50;
	sub_821BF940(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x82126D64;
	sub_821BF940(ctx, base);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-27716
	ctx.r8.s64 = ctx.r9.s64 + -27716;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-27716(r9)
	REX_STORE_U32(ctx.r9.u32 + -27716, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82129F08) {
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
	// lwz r10,5560(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5560);
	// li r11,4
	ctx.r11.s64 = 4;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subfc r10,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lbz r30,81(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// rotlwi r7,r7,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// adde r11,r11,r6
	temp.u8 = (ctx.r11.u32 + ctx.r6.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r3,r8,-27096
	ctx.r3.s64 = ctx.r8.s64 + -27096;
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 188);
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// andi. r11,r10,253
	ctx.r11.u64 = ctx.r10.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,5796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5796);
	// rlwimi r30,r11,4,0,27
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0) | (r30.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// rlwimi r10,r11,0,24,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x821a1158
	ctx.lr = 0x82129FA0;
	sub_821A1158(ctx, base);
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

DEFINE_REX_FUNC(sub_8212BBF0) {
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
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82203138
	ctx.lr = 0x8212BC04;
	sub_82203138(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23060
	ctx.r9.s64 = ctx.r10.s64 + -23060;
	// stw r11,-23060(r10)
	REX_STORE_U32(ctx.r10.u32 + -23060, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212C580;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212c604
	if (ctx.cr6.lt) goto loc_8212C604;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bge cr6,0x8212c604
	if (!ctx.cr6.lt) goto loc_8212C604;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,10
	r31.s64 = 10;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r30,5
	r30.s64 = 5;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r29,11
	r29.s64 = 11;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r8,15284
	ctx.r3.s64 = ctx.r8.s64 + 15284;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lwzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r5,r9,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// bl 0x822042f8
	ctx.lr = 0x8212C600;
	sub_822042F8(ctx, base);
	// b 0x8212c608
	goto loc_8212C608;
loc_8212C604:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212C608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8212F220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212F228;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-22928
	r31.s64 = ctx.r11.s64 + -22928;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f13,-22928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -22928);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8212f270
	if (!ctx.cr6.gt) goto loc_8212F270;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8212f268
	if (!ctx.cr6.gt) goto loc_8212F268;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8212f26c
	goto loc_8212F26C;
loc_8212F268:
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
loc_8212F26C:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8212F270:
	// fcmpu cr6,f2,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bge cr6,0x8212f280
	if (!ctx.cr6.lt) goto loc_8212F280;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8212f28c
	goto loc_8212F28C;
loc_8212F280:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x8212f28c
	if (ctx.cr6.gt) goto loc_8212F28C;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_8212F28C:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,2020(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8212f358
	if (ctx.cr6.gt) goto loc_8212F358;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r30,r11,10792
	r30.s64 = ctx.r11.s64 + 10792;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212f2e8
	if (!ctx.cr6.eq) goto loc_8212F2E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8212f304
	goto loc_8212F304;
loc_8212F2E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822ccd80
	ctx.lr = 0x8212F2F0;
	sub_822CCD80(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8212F304:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212f358
	if (ctx.cr0.eq) goto loc_8212F358;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212f358
	if (ctx.cr6.eq) goto loc_8212F358;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r9,r9,-5720
	ctx.r9.s64 = ctx.r9.s64 + -5720;
	// lfs f13,31220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f13.f64 = double(temp.f32);
	// lwa r11,76(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 76));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822ccf20
	ctx.lr = 0x8212F358;
	sub_822CCF20(ctx, base);
loc_8212F358:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-9292(r10)
	REX_STORE_U32(ctx.r10.u32 + -9292, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82133330) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,142
	ctx.r10.s64 = ctx.r10.s64 + 142;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r8
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// mulli r8,r10,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// b 0x82133364
	goto loc_82133364;
loc_82133358:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_82133364:
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82133358
	if (!ctx.cr6.eq) goto loc_82133358;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82133394
	if (!ctx.cr6.lt) goto loc_82133394;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r3,14(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82133394:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135320) {
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
	ctx.lr = 0x82135328;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,71
	ctx.r11.s64 = 71;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r10,23240
	r31.s64 = ctx.r10.s64 + 23240;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82135354:
	// stw r11,288(r10)
	REX_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82135354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82135354;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82135374;
	sub_822D5870(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,288
	ctx.r8.s64 = r31.s64 + 288;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r6,r5
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r6,r4
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r11.u32);
	// stfs f31,608(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 608, temp.u32);
	// stfs f31,576(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821379B0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x821379B8;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138a68
	if (ctx.cr6.eq) goto loc_82138A68;
	// bl 0x820e6960
	ctx.lr = 0x821379EC;
	sub_820E6960(ctx, base);
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// ori r19,r11,15
	r19.u64 = ctx.r11.u64 | 15;
	// ori r29,r10,8
	r29.u64 = ctx.r10.u64 | 8;
	// lis r23,1536
	r23.s64 = 100663296;
	// mr r22,r19
	r22.u64 = r19.u64;
	// ori r23,r23,1
	r23.u64 = r23.u64 | 1;
	// mr r18,r29
	r18.u64 = r29.u64;
	// li r20,2
	r20.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x8212fe30
	ctx.lr = 0x82137A20;
	sub_8212FE30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r21,259
	ctx.cr6.compare<int32_t>(r21.s32, 259, ctx.xer);
	// addi r25,r11,432
	r25.s64 = ctx.r11.s64 + 432;
	// lfs f30,31176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31176);
	f30.f64 = double(temp.f32);
	// bgt cr6,0x8213864c
	if (ctx.cr6.gt) goto loc_8213864C;
	// beq cr6,0x82138530
	if (ctx.cr6.eq) goto loc_82138530;
	// cmplwi cr6,r21,20
	ctx.cr6.compare<uint32_t>(r21.u32, 20, ctx.xer);
	// bgt cr6,0x821387f8
	if (ctx.cr6.gt) goto loc_821387F8;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r21,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-25376
	ctx.r12.s64 = ctx.r12.s64 + -25376;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,31340
	ctx.r12.s64 = ctx.r12.s64 + 31340;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r21.u32) {
	case 0:
		goto loc_82138254;
	case 1:
		goto loc_82137BFC;
	case 2:
		goto loc_82137C70;
	case 3:
		goto loc_821380F0;
	case 4:
		goto loc_821382C8;
	case 5:
		goto loc_821381E0;
	case 6:
		goto loc_821387F8;
	case 7:
		goto loc_82137A74;
	case 8:
		goto loc_82137AF4;
	case 9:
		goto loc_82137B84;
	case 10:
		goto loc_82137C70;
	case 11:
		goto loc_82137D00;
	case 12:
		goto loc_821381E0;
	case 13:
		goto loc_821387F8;
	case 14:
		goto loc_821382C8;
	case 15:
		goto loc_82138164;
	case 16:
		goto loc_8213833C;
	case 17:
		goto loc_8213833C;
	case 18:
		goto loc_82138500;
	case 19:
		goto loc_82137D00;
	case 20:
		goto loc_82137A6C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82137A6C:
	// li r20,0
	r20.s64 = 0;
	// b 0x82138804
	goto loc_82138804;
loc_82137A74:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// bl 0x820e68b8
	ctx.lr = 0x82137A84;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137aa8
	goto loc_82137AA8;
loc_82137A98:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137aa4
	if (!ctx.cr6.eq) goto loc_82137AA4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137AA4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137AA8:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137a98
	if (!ctx.cr0.eq) goto loc_82137A98;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f1,26832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137AE4;
	sub_820E6D50(ctx, base);
	// lis r18,1536
	r18.s64 = 100663296;
	// li r20,21
	r20.s64 = 21;
	// ori r18,r18,9
	r18.u64 = r18.u64 | 9;
	// b 0x82138804
	goto loc_82138804;
loc_82137AF4:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// bl 0x820e68b8
	ctx.lr = 0x82137B04;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137b28
	goto loc_82137B28;
loc_82137B18:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137b24
	if (!ctx.cr6.eq) goto loc_82137B24;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137B24:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137B28:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137b18
	if (!ctx.cr0.eq) goto loc_82137B18;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f1,26832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137B64;
	sub_820E6D50(ctx, base);
	// lis r22,2048
	r22.s64 = 134217728;
	// lis r18,1536
	r18.s64 = 100663296;
	// ori r22,r22,62
	r22.u64 = r22.u64 | 62;
	// ori r18,r18,25
	r18.u64 = r18.u64 | 25;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82138804
	if (ctx.cr6.eq) goto loc_82138804;
	// li r20,3
	r20.s64 = 3;
	// b 0x82138804
	goto loc_82138804;
loc_82137B84:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// b 0x82137ba4
	goto loc_82137BA4;
loc_82137B94:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137ba0
	if (!ctx.cr6.eq) goto loc_82137BA0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137BA0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137BA4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137b94
	if (!ctx.cr0.eq) goto loc_82137B94;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-24732
	ctx.r5.s64 = ctx.r11.s64 + -24732;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137BEC;
	sub_820E6D50(ctx, base);
	// lis r22,2048
	r22.s64 = 134217728;
	// li r20,11
	r20.s64 = 11;
	// ori r22,r22,62
	r22.u64 = r22.u64 | 62;
	// b 0x82138804
	goto loc_82138804;
loc_82137BFC:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x820e68b8
	ctx.lr = 0x82137C0C;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137c30
	goto loc_82137C30;
loc_82137C20:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137c2c
	if (!ctx.cr6.eq) goto loc_82137C2C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137C2C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137C30:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137c20
	if (!ctx.cr0.eq) goto loc_82137C20;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137C6C;
	sub_820E6D50(ctx, base);
	// b 0x82138800
	goto loc_82138800;
loc_82137C70:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// bl 0x820e68b8
	ctx.lr = 0x82137C80;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137ca4
	goto loc_82137CA4;
loc_82137C94:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137ca0
	if (!ctx.cr6.eq) goto loc_82137CA0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137CA0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137CA4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137c94
	if (!ctx.cr0.eq) goto loc_82137C94;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137CE0;
	sub_820E6D50(ctx, base);
	// lis r22,2048
	r22.s64 = 134217728;
	// cmpwi cr6,r21,10
	ctx.cr6.compare<int32_t>(r21.s32, 10, ctx.xer);
	// ori r22,r22,62
	r22.u64 = r22.u64 | 62;
	// bne cr6,0x821387f8
	if (!ctx.cr6.eq) goto loc_821387F8;
	// lis r18,1536
	r18.s64 = 100663296;
	// li r20,3
	r20.s64 = 3;
	// ori r18,r18,9
	r18.u64 = r18.u64 | 9;
	// b 0x821387f8
	goto loc_821387F8;
loc_82137D00:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r28,r10,23912
	r28.s64 = ctx.r10.s64 + 23912;
	// addi r31,r11,22648
	r31.s64 = ctx.r11.s64 + 22648;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r24,60(r28)
	r24.u64 = REX_LOAD_U32(r28.u32 + 60);
	// bl 0x821343f0
	ctx.lr = 0x82137D20;
	sub_821343F0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lfs f0,20484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhax r29,r11,r8
	r29.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82137e00
	if (!ctx.cr6.eq) goto loc_82137E00;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,516(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// bl 0x82134ac0
	ctx.lr = 0x82137D7C;
	sub_82134AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82137dfc
	if (!ctx.cr0.eq) goto loc_82137DFC;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,79
	ctx.r3.u64 = ctx.r3.u64 | 79;
	// bl 0x820e68b8
	ctx.lr = 0x82137D94;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137db8
	goto loc_82137DB8;
loc_82137DA8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137db4
	if (!ctx.cr6.eq) goto loc_82137DB4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137DB4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137DB8:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137da8
	if (!ctx.cr0.eq) goto loc_82137DA8;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f1,26832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6d50
	ctx.lr = 0x82137DF4;
	sub_820E6D50(ctx, base);
loc_82137DF4:
	// li r20,11
	r20.s64 = 11;
	// b 0x821387f8
	goto loc_821387F8;
loc_82137DFC:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82137E00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82137df4
	if (ctx.cr6.lt) goto loc_82137DF4;
	// cmpwi cr6,r29,288
	ctx.cr6.compare<int32_t>(r29.s32, 288, ctx.xer);
	// bge cr6,0x82137df4
	if (!ctx.cr6.lt) goto loc_82137DF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dd490
	ctx.lr = 0x82137E18;
	sub_821DD490(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82138048
	if (ctx.cr6.eq) goto loc_82138048;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82137fc4
	if (ctx.cr6.eq) goto loc_82137FC4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82137ee0
	if (ctx.cr6.eq) goto loc_82137EE0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x821380c8
	if (!ctx.cr6.eq) goto loc_821380C8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dcf00
	ctx.lr = 0x82137E50;
	sub_821DCF00(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,68
	ctx.r3.u64 = ctx.r3.u64 | 68;
	// bl 0x820e68b8
	ctx.lr = 0x82137E60;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137e84
	goto loc_82137E84;
loc_82137E74:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137e80
	if (!ctx.cr6.eq) goto loc_82137E80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137E80:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137E84:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137e74
	if (!ctx.cr0.eq) goto loc_82137E74;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// addis r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 83886080;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x820e68b8
	ctx.lr = 0x82137EA0;
	sub_820E68B8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f1,26832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137EDC;
	sub_820E6D50(ctx, base);
	// b 0x821380c8
	goto loc_821380C8;
loc_82137EE0:
	// cmpwi cr6,r29,73
	ctx.cr6.compare<int32_t>(r29.s32, 73, ctx.xer);
	// beq cr6,0x82137f4c
	if (ctx.cr6.eq) goto loc_82137F4C;
	// cmpwi cr6,r29,74
	ctx.cr6.compare<int32_t>(r29.s32, 74, ctx.xer);
	// beq cr6,0x82137f40
	if (ctx.cr6.eq) goto loc_82137F40;
	// cmpwi cr6,r29,75
	ctx.cr6.compare<int32_t>(r29.s32, 75, ctx.xer);
	// beq cr6,0x82137f34
	if (ctx.cr6.eq) goto loc_82137F34;
	// cmpwi cr6,r29,76
	ctx.cr6.compare<int32_t>(r29.s32, 76, ctx.xer);
	// beq cr6,0x82137f28
	if (ctx.cr6.eq) goto loc_82137F28;
	// cmpwi cr6,r29,77
	ctx.cr6.compare<int32_t>(r29.s32, 77, ctx.xer);
	// beq cr6,0x82137f1c
	if (ctx.cr6.eq) goto loc_82137F1C;
	// cmpwi cr6,r29,82
	ctx.cr6.compare<int32_t>(r29.s32, 82, ctx.xer);
	// bne cr6,0x82137f60
	if (!ctx.cr6.eq) goto loc_82137F60;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,78
	ctx.r3.u64 = ctx.r3.u64 | 78;
	// b 0x82137f54
	goto loc_82137F54;
loc_82137F1C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// b 0x82137f54
	goto loc_82137F54;
loc_82137F28:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// b 0x82137f54
	goto loc_82137F54;
loc_82137F34:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,73
	ctx.r3.u64 = ctx.r3.u64 | 73;
	// b 0x82137f54
	goto loc_82137F54;
loc_82137F40:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,72
	ctx.r3.u64 = ctx.r3.u64 | 72;
	// b 0x82137f54
	goto loc_82137F54;
loc_82137F4C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,71
	ctx.r3.u64 = ctx.r3.u64 | 71;
loc_82137F54:
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82137F5C;
	sub_820E68B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82137F60:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r30,0
	r30.s64 = 0;
	// b 0x82137f80
	goto loc_82137F80;
loc_82137F70:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137f7c
	if (!ctx.cr6.eq) goto loc_82137F7C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137F7C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137F80:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137f70
	if (!ctx.cr0.eq) goto loc_82137F70;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82137FC0;
	sub_820E6D50(ctx, base);
	// b 0x821380c8
	goto loc_821380C8;
loc_82137FC4:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,69
	ctx.r3.u64 = ctx.r3.u64 | 69;
	// bl 0x820e68b8
	ctx.lr = 0x82137FD4;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82137ff8
	goto loc_82137FF8;
loc_82137FE8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82137ff4
	if (!ctx.cr6.eq) goto loc_82137FF4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82137FF4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82137FF8:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82137fe8
	if (!ctx.cr0.eq) goto loc_82137FE8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821dd548
	ctx.lr = 0x82138008;
	sub_821DD548(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138044;
	sub_820E6D50(ctx, base);
	// b 0x821380c8
	goto loc_821380C8;
loc_82138048:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,70
	ctx.r3.u64 = ctx.r3.u64 | 70;
	// bl 0x820e68b8
	ctx.lr = 0x82138058;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8213807c
	goto loc_8213807C;
loc_8213806C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138078
	if (!ctx.cr6.eq) goto loc_82138078;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138078:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8213807C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213806c
	if (!ctx.cr0.eq) goto loc_8213806C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821dd548
	ctx.lr = 0x8213808C;
	sub_821DD548(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821380C8;
	sub_820E6D50(ctx, base);
loc_821380C8:
	// lis r23,1536
	r23.s64 = 100663296;
	// cmpwi cr6,r21,19
	ctx.cr6.compare<int32_t>(r21.s32, 19, ctx.xer);
	// ori r23,r23,16
	r23.u64 = r23.u64 | 16;
	// bne cr6,0x821380e0
	if (!ctx.cr6.eq) goto loc_821380E0;
	// lis r23,1536
	r23.s64 = 100663296;
	// ori r23,r23,1
	r23.u64 = r23.u64 | 1;
loc_821380E0:
	// cmpwi cr6,r24,10002
	ctx.cr6.compare<int32_t>(r24.s32, 10002, ctx.xer);
	// ble cr6,0x821387f8
	if (!ctx.cr6.gt) goto loc_821387F8;
	// li r20,0
	r20.s64 = 0;
	// b 0x821387f8
	goto loc_821387F8;
loc_821380F0:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,225
	ctx.r3.u64 = ctx.r3.u64 | 225;
	// bl 0x820e68b8
	ctx.lr = 0x82138100;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138124
	goto loc_82138124;
loc_82138114:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138120
	if (!ctx.cr6.eq) goto loc_82138120;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138120:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138124:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138114
	if (!ctx.cr0.eq) goto loc_82138114;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138160;
	sub_820E6D50(ctx, base);
	// b 0x82138800
	goto loc_82138800;
loc_82138164:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// bl 0x820e68b8
	ctx.lr = 0x82138174;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138198
	goto loc_82138198;
loc_82138188:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138194
	if (!ctx.cr6.eq) goto loc_82138194;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138194:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138198:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138188
	if (!ctx.cr0.eq) goto loc_82138188;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821381D4;
	sub_820E6D50(ctx, base);
	// lis r23,1536
	r23.s64 = 100663296;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
	// b 0x82138804
	goto loc_82138804;
loc_821381E0:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,412
	ctx.r3.u64 = ctx.r3.u64 | 412;
	// bl 0x820e68b8
	ctx.lr = 0x821381F0;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138214
	goto loc_82138214;
loc_82138204:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138210
	if (!ctx.cr6.eq) goto loc_82138210;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138210:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138214:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138204
	if (!ctx.cr0.eq) goto loc_82138204;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138250;
	sub_820E6D50(ctx, base);
	// b 0x821387f8
	goto loc_821387F8;
loc_82138254:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,229
	ctx.r3.u64 = ctx.r3.u64 | 229;
	// bl 0x820e68b8
	ctx.lr = 0x82138264;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138288
	goto loc_82138288;
loc_82138278:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138284
	if (!ctx.cr6.eq) goto loc_82138284;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138284:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138288:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138278
	if (!ctx.cr0.eq) goto loc_82138278;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821382C4;
	sub_820E6D50(ctx, base);
	// b 0x82138800
	goto loc_82138800;
loc_821382C8:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,222
	ctx.r3.u64 = ctx.r3.u64 | 222;
	// bl 0x820e68b8
	ctx.lr = 0x821382D8;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x821382fc
	goto loc_821382FC;
loc_821382EC:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821382f8
	if (!ctx.cr6.eq) goto loc_821382F8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821382F8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_821382FC:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821382ec
	if (!ctx.cr0.eq) goto loc_821382EC;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138338;
	sub_820E6D50(ctx, base);
	// b 0x821387f8
	goto loc_821387F8;
loc_8213833C:
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(r26.s32, 10, ctx.xer);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bge cr6,0x821383bc
	if (!ctx.cr6.lt) goto loc_821383BC;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// bl 0x820e68b8
	ctx.lr = 0x82138354;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138378
	goto loc_82138378;
loc_82138368:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138374
	if (!ctx.cr6.eq) goto loc_82138374;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138374:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138378:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138368
	if (!ctx.cr0.eq) goto loc_82138368;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r26,1
	ctx.r6.s64 = r26.s64 + 1;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821383B8;
	sub_820E6D50(ctx, base);
	// b 0x82138498
	goto loc_82138498;
loc_821383BC:
	// cmpwi cr6,r26,14
	ctx.cr6.compare<int32_t>(r26.s32, 14, ctx.xer);
	// bge cr6,0x82138430
	if (!ctx.cr6.lt) goto loc_82138430;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// bl 0x820e68b8
	ctx.lr = 0x821383CC;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x821383f0
	goto loc_821383F0;
loc_821383E0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821383ec
	if (!ctx.cr6.eq) goto loc_821383EC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821383EC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_821383F0:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821383e0
	if (!ctx.cr0.eq) goto loc_821383E0;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x8213842C;
	sub_820E6D50(ctx, base);
	// b 0x82138498
	goto loc_82138498;
loc_82138430:
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// bl 0x820e68b8
	ctx.lr = 0x82138438;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8213845c
	goto loc_8213845C;
loc_8213844C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138458
	if (!ctx.cr6.eq) goto loc_82138458;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138458:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8213845C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213844c
	if (!ctx.cr0.eq) goto loc_8213844C;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138498;
	sub_820E6D50(ctx, base);
loc_82138498:
	// lis r23,1536
	r23.s64 = 100663296;
	// cmpwi cr6,r21,16
	ctx.cr6.compare<int32_t>(r21.s32, 16, ctx.xer);
	// ori r23,r23,5
	r23.u64 = r23.u64 | 5;
	// bne cr6,0x821384d0
	if (!ctx.cr6.eq) goto loc_821384D0;
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x821384bc
	if (!ctx.cr6.eq) goto loc_821384BC;
loc_821384B4:
	// li r20,1
	r20.s64 = 1;
	// b 0x82138804
	goto loc_82138804;
loc_821384BC:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x82138804
	if (!ctx.cr6.eq) goto loc_82138804;
	// lis r23,1536
	r23.s64 = 100663296;
	// ori r23,r23,7
	r23.u64 = r23.u64 | 7;
	// b 0x82138804
	goto loc_82138804;
loc_821384D0:
	// mr r22,r19
	r22.u64 = r19.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x821384e4
	if (!ctx.cr6.gt) goto loc_821384E4;
	// li r20,3
	r20.s64 = 3;
	// b 0x821387f8
	goto loc_821387F8;
loc_821384E4:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x821384f4
	if (!ctx.cr6.eq) goto loc_821384F4;
	// li r20,22
	r20.s64 = 22;
	// b 0x821387f8
	goto loc_821387F8;
loc_821384F4:
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(r28.s32, -2, ctx.xer);
	// bne cr6,0x821387f8
	if (!ctx.cr6.eq) goto loc_821387F8;
	// b 0x82137df4
	goto loc_82137DF4;
loc_82138500:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// lis r23,1536
	r23.s64 = 100663296;
	// mr r22,r29
	r22.u64 = r29.u64;
	// ori r23,r23,5
	r23.u64 = r23.u64 | 5;
	// li r20,2
	r20.s64 = 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82138524
	if (!ctx.cr6.eq) goto loc_82138524;
	// lis r23,1536
	r23.s64 = 100663296;
	// ori r23,r23,6
	r23.u64 = r23.u64 | 6;
loc_82138524:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82138804
	if (!ctx.cr6.eq) goto loc_82138804;
	// b 0x821384b4
	goto loc_821384B4;
loc_82138530:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x82138540;
	sub_820E68B8(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x820e68b8
	ctx.lr = 0x82138554;
	sub_820E68B8(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x820e68b8
	ctx.lr = 0x82138568;
	sub_820E68B8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r26,13
	ctx.cr6.compare<int32_t>(r26.s32, 13, ctx.xer);
	// ble cr6,0x82138588
	if (!ctx.cr6.gt) goto loc_82138588;
	// li r29,2
	r29.s64 = 2;
	// li r28,14
	r28.s64 = 14;
	// b 0x82138598
	goto loc_82138598;
loc_82138588:
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(r26.s32, 9, ctx.xer);
	// ble cr6,0x82138598
	if (!ctx.cr6.gt) goto loc_82138598;
	// li r29,1
	r29.s64 = 1;
	// li r28,10
	r28.s64 = 10;
loc_82138598:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// bl 0x820e68b8
	ctx.lr = 0x821385A8;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x821385cc
	goto loc_821385CC;
loc_821385BC:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821385c8
	if (!ctx.cr6.eq) goto loc_821385C8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821385C8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_821385CC:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821385bc
	if (!ctx.cr0.eq) goto loc_821385BC;
	// addis r3,r26,3072
	ctx.r3.s64 = r26.s64 + 201326592;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x820e68b8
	ctx.lr = 0x821385E4;
	sub_820E68B8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subf r11,r28,r26
	ctx.r11.u64 = r26.u64 - r28.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82138634;
	sub_820E6D50(ctx, base);
	// lis r18,1536
	r18.s64 = 100663296;
	// lis r23,1536
	r23.s64 = 100663296;
	// li r20,21
	r20.s64 = 21;
	// ori r18,r18,11
	r18.u64 = r18.u64 | 11;
	// ori r23,r23,10
	r23.u64 = r23.u64 | 10;
	// b 0x82138804
	goto loc_82138804;
loc_8213864C:
	// cmpwi cr6,r21,260
	ctx.cr6.compare<int32_t>(r21.s32, 260, ctx.xer);
	// beq cr6,0x821386e0
	if (ctx.cr6.eq) goto loc_821386E0;
	// cmpwi cr6,r21,261
	ctx.cr6.compare<int32_t>(r21.s32, 261, ctx.xer);
	// bne cr6,0x821387f8
	if (!ctx.cr6.eq) goto loc_821387F8;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// bl 0x820e68b8
	ctx.lr = 0x8213866C;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138690
	goto loc_82138690;
loc_82138680:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8213868c
	if (!ctx.cr6.eq) goto loc_8213868C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8213868C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138690:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138680
	if (!ctx.cr0.eq) goto loc_82138680;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821386CC;
	sub_820E6D50(ctx, base);
	// lis r23,1536
	r23.s64 = 100663296;
	// lis r22,1536
	r22.s64 = 100663296;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
	// ori r22,r22,18
	r22.u64 = r22.u64 | 18;
	// b 0x82138804
	goto loc_82138804;
loc_821386E0:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// bl 0x820e68b8
	ctx.lr = 0x821386F0;
	sub_820E68B8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82138714
	goto loc_82138714;
loc_82138704:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138710
	if (!ctx.cr6.eq) goto loc_82138710;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82138710:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82138714:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138704
	if (!ctx.cr0.eq) goto loc_82138704;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addis r3,r11,3072
	ctx.r3.s64 = ctx.r11.s64 + 201326592;
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// bl 0x820e68b8
	ctx.lr = 0x82138740;
	sub_820E68B8(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
loc_82138748:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82138748
	if (!ctx.cr0.eq) goto loc_82138748;
	// lbz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// b 0x821387a0
	goto loc_821387A0;
loc_82138768:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8213879c
	if (!ctx.cr6.eq) goto loc_8213879C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82138794
	goto loc_82138794;
loc_82138780:
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
loc_82138794:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82138780
	if (!ctx.cr0.eq) goto loc_82138780;
loc_8213879C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_821387A0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82138768
	if (!ctx.cr0.eq) goto loc_82138768;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f31,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x821387E8;
	sub_820E6D50(ctx, base);
	// lis r23,1536
	r23.s64 = 100663296;
	// lis r22,1536
	r22.s64 = 100663296;
	// ori r23,r23,12
	r23.u64 = r23.u64 | 12;
	// ori r22,r22,13
	r22.u64 = r22.u64 | 13;
loc_821387F8:
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(r21.s32, 6, ctx.xer);
	// bge cr6,0x82138804
	if (!ctx.cr6.lt) goto loc_82138804;
loc_82138800:
	// mr r22,r19
	r22.u64 = r19.u64;
loc_82138804:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,-24736(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24736);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,27844(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27844);
	ctx.f3.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-24904(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fadds f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// bl 0x821e86d8
	ctx.lr = 0x82138870;
	sub_821E86D8(ctx, base);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// beq cr6,0x82138a30
	if (ctx.cr6.eq) goto loc_82138A30;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// beq cr6,0x821389e0
	if (ctx.cr6.eq) goto loc_821389E0;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// beq cr6,0x8213897c
	if (ctx.cr6.eq) goto loc_8213897C;
	// cmpwi cr6,r20,11
	ctx.cr6.compare<int32_t>(r20.s32, 11, ctx.xer);
	// beq cr6,0x82138940
	if (ctx.cr6.eq) goto loc_82138940;
	// cmpwi cr6,r20,21
	ctx.cr6.compare<int32_t>(r20.s32, 21, ctx.xer);
	// beq cr6,0x821388f0
	if (ctx.cr6.eq) goto loc_821388F0;
	// cmpwi cr6,r20,22
	ctx.cr6.compare<int32_t>(r20.s32, 22, ctx.xer);
	// bne cr6,0x82138a68
	if (!ctx.cr6.eq) goto loc_82138A68;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821388AC;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821388BC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r5,r10,-24752
	ctx.r5.s64 = ctx.r10.s64 + -24752;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6ee0
	ctx.lr = 0x821388EC;
	sub_820E6EE0(ctx, base);
	// b 0x82138a68
	goto loc_82138A68;
loc_821388F0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821388FC;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213890C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,-24768
	ctx.r5.s64 = ctx.r10.s64 + -24768;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6ee0
	ctx.lr = 0x8213893C;
	sub_820E6EE0(ctx, base);
	// b 0x82138a68
	goto loc_82138A68;
loc_82138940:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213894C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,26732
	ctx.r5.s64 = ctx.r10.s64 + 26732;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6ee0
	ctx.lr = 0x82138978;
	sub_820E6EE0(ctx, base);
	// b 0x82138a68
	goto loc_82138A68;
loc_8213897C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82138988;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82138998;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821389A8;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,-24792
	ctx.r5.s64 = ctx.r10.s64 + -24792;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6ee0
	ctx.lr = 0x821389DC;
	sub_820E6EE0(ctx, base);
	// b 0x82138a68
	goto loc_82138A68;
loc_821389E0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821389EC;
	sub_820E68B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821389FC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,26700
	ctx.r5.s64 = ctx.r10.s64 + 26700;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x820e6ee0
	ctx.lr = 0x82138A2C;
	sub_820E6EE0(ctx, base);
	// b 0x82138a68
	goto loc_82138A68;
loc_82138A30:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82138A3C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,26756
	ctx.r5.s64 = ctx.r10.s64 + 26756;
	// lfs f1,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6ee0
	ctx.lr = 0x82138A68;
	sub_820E6EE0(ctx, base);
loc_82138A68:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82184578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82184580;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822c80d0
	ctx.lr = 0x82184598;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821845b8
	if (ctx.cr0.eq) goto loc_821845B8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821840f0
	ctx.lr = 0x821845B0;
	sub_821840F0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821845c0
	goto loc_821845C0;
loc_821845B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821845C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822ad9c0
	ctx.lr = 0x821845CC;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82185B10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82185B18;
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x82185B30;
	sub_82184A00(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821855a0
	ctx.lr = 0x82185B4C;
	sub_821855A0(ctx, base);
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x822094c8
	ctx.lr = 0x82185B54;
	sub_822094C8(ctx, base);
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// subfic r11,r11,5000
	ctx.xer.ca = ctx.r11.u32 <= 5000;
	ctx.r11.u64 = static_cast<uint64_t>(5000) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r11,31
	r29.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82185b7c
	if (ctx.cr0.eq) goto loc_82185B7C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82184f28
	ctx.lr = 0x82185B7C;
	sub_82184F28(ctx, base);
loc_82185B7C:
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82187DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82187DF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// b 0x82187e20
	goto loc_82187E20;
loc_82187E04:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82187E20:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82187e04
	if (!ctx.cr6.eq) goto loc_82187E04;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82188698) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82185b90
	sub_82185B90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821887F0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82189710
	sub_82189710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82188970) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821890E8) {
	REX_FUNC_PROLOGUE();
	// li r11,300
	ctx.r11.s64 = 300;
	// divw r11,r5,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,300
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(300));
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// ld r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189E88) {
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
	ctx.lr = 0x82189E90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82189f9c
	if (!ctx.cr6.eq) goto loc_82189F9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82189EB0;
	sub_82188300(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82189f94
	if (ctx.cr0.eq) goto loc_82189F94;
	// li r29,0
	r29.s64 = 0;
loc_82189EDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82189f5c
	if (ctx.cr0.eq) goto loc_82189F5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82208a78
	ctx.lr = 0x82189F08;
	sub_82208A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82189f74
	if (!ctx.cr0.eq) goto loc_82189F74;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82189f34
	if (!ctx.cr6.eq) goto loc_82189F34;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82208a78
	ctx.lr = 0x82189F2C;
	sub_82208A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82189f74
	if (!ctx.cr0.eq) goto loc_82189F74;
loc_82189F34:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82189f74
	if (!ctx.cr6.eq) goto loc_82189F74;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82189f74
	goto loc_82189F74;
loc_82189F5C:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82189F74:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82189edc
	if (ctx.cr6.lt) goto loc_82189EDC;
loc_82189F94:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82189F9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8218EFB0) {
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
	// addi r31,r3,16408
	r31.s64 = ctx.r3.s64 + 16408;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8218effc
	if (ctx.cr6.eq) goto loc_8218EFFC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218efe8
	if (ctx.cr6.eq) goto loc_8218EFE8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8218efe8
	if (!ctx.cr6.eq) goto loc_8218EFE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8218EFE8:
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8218f000
	if (!ctx.cr6.eq) goto loc_8218F000;
	// bl 0x821c6800
	ctx.lr = 0x8218EFF8;
	sub_821C6800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8218EFFC:
	// stw r4,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r4.u32);
loc_8218F000:
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8218f018
	if (ctx.cr6.lt) goto loc_8218F018;
	// addi r4,r4,-13
	ctx.r4.s64 = ctx.r4.s64 + -13;
	// bl 0x8218ec90
	ctx.lr = 0x8218F014;
	sub_8218EC90(ctx, base);
	// b 0x8218f02c
	goto loc_8218F02C;
loc_8218F018:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16536
	ctx.r11.s64 = ctx.r11.s64 + -16536;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8218ef30
	ctx.lr = 0x8218F02C;
	sub_8218EF30(ctx, base);
loc_8218F02C:
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

DEFINE_REX_FUNC(sub_821919E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r4,80
	ctx.r4.s64 = 80;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bgt cr6,0x82191ba4
	if (ctx.cr6.gt) goto loc_82191BA4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,3040
	ctx.r12.s64 = ctx.r12.s64 + 3040;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// nop 
	// addi r12,r12,6688
	ctx.r12.s64 = ctx.r12.s64 + 6688;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82191A20;
	case 1:
		goto loc_82191A28;
	case 2:
		goto loc_82191A30;
	case 3:
		goto loc_82191A38;
	case 4:
		goto loc_82191A40;
	case 5:
		goto loc_82191A48;
	case 6:
		goto loc_82191BA4;
	case 7:
		goto loc_82191A50;
	case 8:
		goto loc_82191A58;
	case 9:
		goto loc_82191B60;
	case 10:
		goto loc_82191A60;
	case 11:
		goto loc_82191A68;
	case 12:
		goto loc_82191BA4;
	case 13:
		goto loc_82191A70;
	case 14:
		goto loc_82191A78;
	case 15:
		goto loc_82191A80;
	case 16:
		goto loc_82191B50;
	case 17:
		goto loc_82191A88;
	case 18:
		goto loc_82191A90;
	case 19:
		goto loc_82191B88;
	case 20:
		goto loc_82191A98;
	case 21:
		goto loc_82191AA0;
	case 22:
		goto loc_82191AA8;
	case 23:
		goto loc_82191AB0;
	case 24:
		goto loc_82191AB8;
	case 25:
		goto loc_82191AC0;
	case 26:
		goto loc_82191AC8;
	case 27:
		goto loc_82191AD0;
	case 28:
		goto loc_82191BA4;
	case 29:
		goto loc_82191AD8;
	case 30:
		goto loc_82191AE0;
	case 31:
		goto loc_82191AE8;
	case 32:
		goto loc_82191BA4;
	case 33:
		goto loc_82191BA4;
	case 34:
		goto loc_82191BA4;
	case 35:
		goto loc_82191BA4;
	case 36:
		goto loc_82191AF8;
	case 37:
		goto loc_82191AF0;
	case 38:
		goto loc_82191B08;
	case 39:
		goto loc_82191B00;
	case 40:
		goto loc_82191B10;
	case 41:
		goto loc_82191BA4;
	case 42:
		goto loc_82191B18;
	case 43:
		goto loc_82191B20;
	case 44:
		goto loc_82191B28;
	case 45:
		goto loc_82191BA4;
	case 46:
		goto loc_82191B30;
	case 47:
		goto loc_82191B38;
	case 48:
		goto loc_82191B40;
	case 49:
		goto loc_82191B58;
	case 50:
		goto loc_82191B68;
	case 51:
		goto loc_82191BA4;
	case 52:
		goto loc_82191B48;
	case 53:
		goto loc_82191B70;
	case 54:
		goto loc_82191B78;
	case 55:
		goto loc_82191B80;
	case 56:
		goto loc_82191B90;
	case 57:
		goto loc_82191B98;
	case 58:
		goto loc_82191BA0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82191A20:
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A28:
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A30:
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A38:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A40:
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A48:
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A50:
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A58:
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A60:
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A68:
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A70:
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A78:
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A80:
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A88:
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A90:
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191A98:
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AA0:
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AA8:
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AB0:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AB8:
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AC0:
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AC8:
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AD0:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AD8:
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AE0:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AE8:
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AF0:
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191AF8:
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B00:
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B08:
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B10:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B18:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B20:
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B28:
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B30:
	// li r4,58
	ctx.r4.s64 = 58;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B38:
	// li r4,59
	ctx.r4.s64 = 59;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B40:
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B48:
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B50:
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B58:
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B60:
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B68:
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B70:
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B78:
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B80:
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B88:
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B90:
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191B98:
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82191ba4
	goto loc_82191BA4;
loc_82191BA0:
	// li r4,77
	ctx.r4.s64 = 77;
loc_82191BA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821918a0
	sub_821918A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219A8E8) {
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
	ctx.lr = 0x8219A8F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6136
	ctx.r11.s64 = ctx.r11.s64 + 6136;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8219a93c
	if (ctx.cr6.eq) goto loc_8219A93C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mulli r10,r4,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// addi r11,r11,32056
	ctx.r11.s64 = ctx.r11.s64 + 32056;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r9,32040
	ctx.r3.s64 = ctx.r9.s64 + 32040;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x822d4fa0
	ctx.lr = 0x8219A93C;
	sub_822D4FA0(ctx, base);
loc_8219A93C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8219a240
	ctx.lr = 0x8219A948;
	sub_8219A240(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// addis r11,r29,512
	ctx.r11.s64 = r29.s64 + 33554432;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r11,r11,-10016
	ctx.r11.s64 = ctx.r11.s64 + -10016;
	// addi r10,r10,-8520
	ctx.r10.s64 = ctx.r10.s64 + -8520;
	// beq cr6,0x8219a984
	if (ctx.cr6.eq) goto loc_8219A984;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// b 0x8219a988
	goto loc_8219A988;
loc_8219A984:
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_8219A988:
	// stw r11,388(r10)
	REX_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82106540
	ctx.lr = 0x8219A994;
	sub_82106540(ctx, base);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r26,88(r31)
	REX_STORE_U32(r31.u32 + 88, r26.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r11,-10044(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10044);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r28.u32);
	// lwz r11,-10044(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10044);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// beq cr6,0x8219aa2c
	if (ctx.cr6.eq) goto loc_8219AA2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6816
	ctx.r6.s64 = ctx.r11.s64 + -6816;
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
	ctx.lr = 0x8219A9E8;
	sub_821F7D50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8219aa24
	if (ctx.cr0.eq) goto loc_8219AA24;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,69
	ctx.r3.u64 = ctx.r3.u64 | 69;
	// bl 0x82190770
	ctx.lr = 0x8219A9FC;
	sub_82190770(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f1,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821702c0
	ctx.lr = 0x8219AA20;
	sub_821702C0(ctx, base);
	// b 0x8219aa28
	goto loc_8219AA28;
loc_8219AA24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8219AA28:
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_8219AA2C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// blt cr6,0x8219aa58
	if (ctx.cr6.lt) goto loc_8219AA58;
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r25,96(r31)
	REX_STORE_U32(r31.u32 + 96, r25.u32);
	// beq cr6,0x8219aa60
	if (ctx.cr6.eq) goto loc_8219AA60;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// b 0x8219aa60
	goto loc_8219AA60;
loc_8219AA58:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
loc_8219AA60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8219F3D0) {
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
	ctx.lr = 0x8219F3D8;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
	// mulli r9,r3,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(72));
	// add r23,r9,r11
	r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// or r20,r11,r10
	r20.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x8219f440
	if (ctx.cr6.eq) goto loc_8219F440;
	// rlwinm. r11,r20,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// beq 0x8219f438
	if (ctx.cr0.eq) goto loc_8219F438;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x8219f454
	goto loc_8219F454;
loc_8219F438:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8219f454
	goto loc_8219F454;
loc_8219F440:
	// rlwinm r11,r20,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x100000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8219F454:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,30520
	r31.s64 = ctx.r10.s64 + 30520;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8219ed80
	ctx.lr = 0x8219F468;
	sub_8219ED80(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8219f6d4
	if (ctx.cr0.eq) goto loc_8219F6D4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8219e600
	ctx.lr = 0x8219F480;
	sub_8219E600(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219f6cc
	if (ctx.cr0.eq) goto loc_8219F6CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge cr6,0x8219f498
	if (!ctx.cr6.lt) goto loc_8219F498;
	// lwz r27,60(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 60);
	// b 0x8219f4a8
	goto loc_8219F4A8;
loc_8219F498:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,6288
	ctx.r11.s64 = ctx.r11.s64 + 6288;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8219F4A8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x8219f4b8
	if (!ctx.cr6.lt) goto loc_8219F4B8;
	// lwz r28,64(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 64);
	// b 0x8219f4c8
	goto loc_8219F4C8;
loc_8219F4B8:
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,5880
	ctx.r10.s64 = ctx.r10.s64 + 5880;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219F4C8:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// beq cr6,0x8219f590
	if (ctx.cr6.eq) goto loc_8219F590;
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(r26.s32, 10, ctx.xer);
	// beq cr6,0x8219f580
	if (ctx.cr6.eq) goto loc_8219F580;
	// cmpwi cr6,r26,11
	ctx.cr6.compare<int32_t>(r26.s32, 11, ctx.xer);
	// ble cr6,0x8219f558
	if (!ctx.cr6.gt) goto loc_8219F558;
	// cmpwi cr6,r26,13
	ctx.cr6.compare<int32_t>(r26.s32, 13, ctx.xer);
	// ble cr6,0x8219f548
	if (!ctx.cr6.gt) goto loc_8219F548;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(r26.s32, 17, ctx.xer);
	// beq cr6,0x8219f538
	if (ctx.cr6.eq) goto loc_8219F538;
	// cmpwi cr6,r26,36
	ctx.cr6.compare<int32_t>(r26.s32, 36, ctx.xer);
	// beq cr6,0x8219f510
	if (ctx.cr6.eq) goto loc_8219F510;
	// cmpwi cr6,r26,37
	ctx.cr6.compare<int32_t>(r26.s32, 37, ctx.xer);
	// bne cr6,0x8219f558
	if (!ctx.cr6.eq) goto loc_8219F558;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x821a0aa8
	ctx.lr = 0x8219F50C;
	sub_821A0AA8(ctx, base);
	// b 0x8219f59c
	goto loc_8219F59C;
loc_8219F510:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8219fe70
	ctx.lr = 0x8219F51C;
	sub_8219FE70(ctx, base);
loc_8219F51C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f5b8
	if (ctx.cr0.eq) goto loc_8219F5B8;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// stw r29,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r29.u32);
	// stw r27,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r27.u32);
	// stw r28,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r28.u32);
	// b 0x8219f5bc
	goto loc_8219F5BC;
loc_8219F538:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x821a0650
	ctx.lr = 0x8219F544;
	sub_821A0650(ctx, base);
	// b 0x8219f59c
	goto loc_8219F59C;
loc_8219F548:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x821a0e68
	ctx.lr = 0x8219F554;
	sub_821A0E68(ctx, base);
	// b 0x8219f59c
	goto loc_8219F59C;
loc_8219F558:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8219f310
	ctx.lr = 0x8219F564;
	sub_8219F310(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f5b8
	if (ctx.cr0.eq) goto loc_8219F5B8;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// stw r29,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r29.u32);
	// stw r27,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r27.u32);
	// stw r28,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r28.u32);
	// b 0x8219f5bc
	goto loc_8219F5BC;
loc_8219F580:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8219d838
	ctx.lr = 0x8219F58C;
	sub_8219D838(ctx, base);
	// b 0x8219f51c
	goto loc_8219F51C;
loc_8219F590:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x8219d2d0
	ctx.lr = 0x8219F59C;
	sub_8219D2D0(ctx, base);
loc_8219F59C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f5b8
	if (ctx.cr0.eq) goto loc_8219F5B8;
	// stw r28,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r28.u32);
	// stw r27,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r27.u32);
	// stw r29,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r29.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8219f5bc
	goto loc_8219F5BC;
loc_8219F5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219F5BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f6bc
	if (ctx.cr6.eq) goto loc_8219F6BC;
	// stw r29,204(r24)
	REX_STORE_U32(r24.u32 + 204, r29.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r24,40(r29)
	REX_STORE_U32(r29.u32 + 40, r24.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// stfs f31,188(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r24.u32 + 188, temp.u32);
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x8219F5E4;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r24,68
	ctx.r3.s64 = r24.s64 + 68;
	// stw r10,48(r24)
	REX_STORE_U32(r24.u32 + 48, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,52(r24)
	REX_STORE_U32(r24.u32 + 52, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,56(r24)
	REX_STORE_U32(r24.u32 + 56, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,60(r24)
	REX_STORE_U32(r24.u32 + 60, ctx.r11.u32);
	// lfs f0,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 64, temp.u32);
	// lfs f4,40(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a1828
	ctx.lr = 0x8219F628;
	sub_821A1828(ctx, base);
	// lfs f0,44(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 104, temp.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lfs f0,48(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 108, temp.u32);
	// beq cr6,0x8219f65c
	if (ctx.cr6.eq) goto loc_8219F65C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r24,124
	ctx.r3.s64 = r24.s64 + 124;
	// bl 0x8219bd90
	ctx.lr = 0x8219F650;
	sub_8219BD90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// b 0x8219f664
	goto loc_8219F664;
loc_8219F65C:
	// bl 0x8218e8e0
	ctx.lr = 0x8219F660;
	sub_8218E8E0(ctx, base);
	// stw r3,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r3.u32);
loc_8219F664:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8219f684
	if (ctx.cr6.eq) goto loc_8219F684;
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 164, temp.u32);
	// lfs f0,4(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 168, temp.u32);
	// lfs f0,8(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8219f694
	goto loc_8219F694;
loc_8219F684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 168, temp.u32);
	// stfs f0,164(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 164, temp.u32);
loc_8219F694:
	// stfs f0,172(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 172, temp.u32);
	// stw r20,112(r24)
	REX_STORE_U32(r24.u32 + 112, r20.u32);
	// stw r22,196(r24)
	REX_STORE_U32(r24.u32 + 196, r22.u32);
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,52(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 52);
	// stw r10,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r10.u32);
	// lwz r10,56(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 56);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// stw r10,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// b 0x8219f6d4
	goto loc_8219F6D4;
loc_8219F6BC:
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 208);
	// bl 0x8218cb20
	ctx.lr = 0x8219F6C4;
	sub_8218CB20(ctx, base);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// b 0x8219f6d0
	goto loc_8219F6D0;
loc_8219F6CC:
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 208);
loc_8219F6D0:
	// bl 0x8218cb20
	ctx.lr = 0x8219F6D4;
	sub_8218CB20(ctx, base);
loc_8219F6D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_821AA9F8) {
	REX_FUNC_PROLOGUE();
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
}

DEFINE_REX_FUNC(sub_821AAD08) {
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
	ctx.lr = 0x821AAD10;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x821AAD18;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lfs f2,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lfs f27,8064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8064);
	f27.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,179
	ctx.r8.s64 = 179;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// lfs f5,8060(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f5.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f3,16676(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16676);
	ctx.f3.f64 = double(temp.f32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x821e8688
	ctx.lr = 0x821AAD64;
	sub_821E8688(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,28856
	r31.s64 = ctx.r11.s64 + 28856;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821AAD74:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// beq cr6,0x821aad9c
	if (ctx.cr6.eq) goto loc_821AAD9C;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// addi r10,r31,850
	ctx.r10.s64 = r31.s64 + 850;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821aad74
	if (ctx.cr6.lt) goto loc_821AAD74;
	// b 0x821aadb8
	goto loc_821AADB8;
loc_821AAD9C:
	// mulli r10,r30,34
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(34));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,31624
	ctx.r4.s64 = ctx.r9.s64 + 31624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x821AADB8;
	sub_822D55F8(ctx, base);
loc_821AADB8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x821AADC8;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,26620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26620);
	f28.f64 = double(temp.f32);
	// lfs f30,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	f30.f64 = double(temp.f32);
	// lfs f26,28312(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28312);
	f26.f64 = double(temp.f32);
	// blt cr6,0x821aae00
	if (ctx.cr6.lt) goto loc_821AAE00;
	// bne cr6,0x821aae20
	if (!ctx.cr6.eq) goto loc_821AAE20;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f13,f26
	f31.f64 = double(float(ctx.f13.f64 + f26.f64));
	// b 0x821aae24
	goto loc_821AAE24;
loc_821AAE00:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fnmsubs f31,f12,f0,f13
	f31.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// b 0x821aae24
	goto loc_821AAE24;
loc_821AAE20:
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
loc_821AAE24:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x821aae40
	if (!ctx.cr6.eq) goto loc_821AAE40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x821aae58
	goto loc_821AAE58;
loc_821AAE40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8056(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmadds f29,f13,f0,f11
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
loc_821AAE58:
	// mulli r10,r30,34
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(34));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,8036
	ctx.r4.s64 = ctx.r9.s64 + 8036;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x821AAE74;
	sub_822D55F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r7,8
	ctx.r7.s64 = 8;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfd f3,4000(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f3,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821AAEB8;
	sub_821EACB0(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x821aaf90
	if (!ctx.cr6.eq) goto loc_821AAF90;
	// cmpwi cr6,r27,24
	ctx.cr6.compare<int32_t>(r27.s32, 24, ctx.xer);
	// beq cr6,0x821aaf90
	if (ctx.cr6.eq) goto loc_821AAF90;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821356e0
	ctx.lr = 0x821AAEDC;
	sub_821356E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,8028
	ctx.r4.s64 = ctx.r11.s64 + 8028;
	// bl 0x822d55f8
	ctx.lr = 0x821AAEF0;
	sub_822D55F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821AAEF8;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-7380
	ctx.r3.s64 = ctx.r11.s64 + -7380;
	// bl 0x821eacb0
	ctx.lr = 0x821AAF04;
	sub_821EACB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x821AAF14;
	sub_821EB1A0(ctx, base);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// blt cr6,0x821aaf2c
	if (ctx.cr6.lt) goto loc_821AAF2C;
	// bne cr6,0x821aaf48
	if (!ctx.cr6.eq) goto loc_821AAF48;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f26
	f31.f64 = double(float(ctx.f0.f64 + f26.f64));
	// b 0x821aaf48
	goto loc_821AAF48;
loc_821AAF2C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_821AAF48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,8016
	ctx.r4.s64 = ctx.r10.s64 + 8016;
	// lfs f0,-25000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25000);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x822d55f8
	ctx.lr = 0x821AAF6C;
	sub_822D55F8(ctx, base);
	// stfd f30,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821AAF90;
	sub_821EACB0(ctx, base);
loc_821AAF90:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x821AAF9C;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821BEB80) {
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
	ctx.lr = 0x821BEB88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	f31.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f31,56(r5)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821bebf0
	if (!ctx.cr6.gt) goto loc_821BEBF0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,64(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,64(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// lfs f12,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,80(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821bec10
	if (ctx.cr6.gt) goto loc_821BEC10;
	// lfs f0,68(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821bec0c
	goto loc_821BEC0C;
loc_821BEBF0:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821bec10
	if (!ctx.cr6.gt) goto loc_821BEC10;
	// lfs f0,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
loc_821BEC0C:
	// stfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
loc_821BEC10:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x821be8d0
	ctx.lr = 0x821BEC24;
	sub_821BE8D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x821bdf28
	ctx.lr = 0x821BEC30;
	sub_821BDF28(ctx, base);
	// fmuls f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lfs f12,5512(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 5512);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,7220(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 7220);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f13,f13,f9,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f31.f64)));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821bec88
	if (ctx.cr6.lt) goto loc_821BEC88;
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r10,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r10.u16);
	// beq 0x821bec84
	if (ctx.cr0.eq) goto loc_821BEC84;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_821BEC84:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_821BEC88:
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

DEFINE_REX_FUNC(sub_821C2710) {
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
	// addi r11,r11,12152
	ctx.r11.s64 = ctx.r11.s64 + 12152;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821C273C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c274c
	if (ctx.cr0.eq) goto loc_821C274C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821C274C;
	sub_822C80A8(ctx, base);
loc_821C274C:
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

DEFINE_REX_FUNC(sub_821C31C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1556(r3)
	REX_STORE_U32(ctx.r3.u32 + 1556, ctx.r11.u32);
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// blt cr6,0x821c31e4
	if (ctx.cr6.lt) goto loc_821C31E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1556(r3)
	REX_STORE_U32(ctx.r3.u32 + 1556, ctx.r11.u32);
loc_821C31E4:
	// lwz r11,1556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1556);
	// lwz r10,1560(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1560);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1560(r3)
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r10.u32);
	// addi r10,r11,1564
	ctx.r10.s64 = ctx.r11.s64 + 1564;
	// sth r9,1564(r11)
	REX_STORE_U16(ctx.r11.u32 + 1564, ctx.r9.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// sth r10,1566(r11)
	REX_STORE_U16(ctx.r11.u32 + 1566, ctx.r10.u16);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// sth r10,1568(r11)
	REX_STORE_U16(ctx.r11.u32 + 1568, ctx.r10.u16);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// sth r10,1570(r11)
	REX_STORE_U16(ctx.r11.u32 + 1570, ctx.r10.u16);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// sth r10,1572(r11)
	REX_STORE_U16(ctx.r11.u32 + 1572, ctx.r10.u16);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// sth r10,1574(r11)
	REX_STORE_U16(ctx.r11.u32 + 1574, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C4F58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,9044
	ctx.r11.s64 = ctx.r3.s64 + 9044;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821C4F6C:
	// stfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfsu f0,164(r11)
	ea = 164 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c4f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C4F6C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5168) {
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
	ctx.lr = 0x821C5170;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r29,r3,876
	r29.s64 = ctx.r3.s64 + 876;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c51c0
	if (ctx.cr6.eq) goto loc_821C51C0;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821c51b4
	if (ctx.cr6.eq) goto loc_821C51B4;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x821c51c0
	if (ctx.cr6.eq) goto loc_821C51C0;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// b 0x821c51bc
	goto loc_821C51BC;
loc_821C51B4:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
loc_821C51BC:
	// bne cr6,0x821c51c8
	if (!ctx.cr6.eq) goto loc_821C51C8;
loc_821C51C0:
	// li r28,1
	r28.s64 = 1;
	// li r31,1
	r31.s64 = 1;
loc_821C51C8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bgt cr6,0x821c51d4
	if (ctx.cr6.gt) goto loc_821C51D4;
	// li r31,1
	r31.s64 = 1;
loc_821C51D4:
	// bl 0x821d0a98
	ctx.lr = 0x821C51D8;
	sub_821D0A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c5224
	if (ctx.cr0.eq) goto loc_821C5224;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lha r4,100(r30)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r30.u32 + 100));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82135978
	ctx.lr = 0x821C51F4;
	sub_82135978(ctx, base);
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821c5224
	if (!ctx.cr6.eq) goto loc_821C5224;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,0,25,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
loc_821C5224:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821C75F0) {
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
	// lhz r11,608(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 608);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c7650
	if (ctx.cr6.eq) goto loc_821C7650;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821c7680
	if (ctx.cr6.eq) goto loc_821C7680;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821c7690
	if (ctx.cr6.eq) goto loc_821C7690;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821c7688
	if (ctx.cr6.eq) goto loc_821C7688;
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c766c
	if (!ctx.cr0.eq) goto loc_821C766C;
	// lbz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c766c
	if (!ctx.cr0.eq) goto loc_821C766C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x821be318
	ctx.lr = 0x821C7650;
	sub_821BE318(ctx, base);
loc_821C7650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C7654:
	// stw r11,6808(r31)
	REX_STORE_U32(r31.u32 + 6808, ctx.r11.u32);
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
loc_821C766C:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821C7680;
	sub_821BE318(ctx, base);
loc_821C7680:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821c7654
	goto loc_821C7654;
loc_821C7688:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821c7654
	goto loc_821C7654;
loc_821C7690:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821c7654
	goto loc_821C7654;
}

DEFINE_REX_FUNC(sub_821C8DF0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c8f60
	if (ctx.cr0.eq) goto loc_821C8F60;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c8f60
	if (!ctx.cr0.eq) goto loc_821C8F60;
	// lwz r11,19672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c8f60
	if (!ctx.cr6.eq) goto loc_821C8F60;
	// lbz r11,187(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c8f20
	if (!ctx.cr0.eq) goto loc_821C8F20;
	// lbz r11,221(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 221);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c8f10
	if (ctx.cr0.eq) goto loc_821C8F10;
	// ld r11,6432(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 6432);
	// lfs f13,688(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// andi. r11,r11,65533
	ctx.r11.u64 = ctx.r11.u64 & 65533;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821c8e88
	if (ctx.cr6.eq) goto loc_821C8E88;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,688(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// lfs f13,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c8ea4
	if (ctx.cr6.lt) goto loc_821C8EA4;
	// b 0x821c8ea0
	goto loc_821C8EA0;
loc_821C8E88:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// lfs f13,29448(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29448);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821c8ea4
	if (ctx.cr6.gt) goto loc_821C8EA4;
loc_821C8EA0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_821C8EA4:
	// stfs f0,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,684(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,688(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821c8ecc
	if (ctx.cr6.gt) goto loc_821C8ECC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C8ECC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c8ee4
	if (ctx.cr6.lt) goto loc_821C8EE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C8EE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stfs f0,9300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 9300, temp.u32);
	// sth r11,9308(r31)
	REX_STORE_U16(r31.u32 + 9308, ctx.r11.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r10,9298(r31)
	REX_STORE_U16(r31.u32 + 9298, ctx.r10.u16);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// bl 0x8215bc48
	ctx.lr = 0x821C8F0C;
	sub_8215BC48(ctx, base);
	// b 0x821c8f60
	goto loc_821C8F60;
loc_821C8F10:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// bl 0x8215bc48
	ctx.lr = 0x821C8F20;
	sub_8215BC48(ctx, base);
loc_821C8F20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821be3a0
	ctx.lr = 0x821C8F48;
	sub_821BE3A0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r4,10
	ctx.r4.s64 = 10;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be3a0
	ctx.lr = 0x821C8F60;
	sub_821BE3A0(ctx, base);
loc_821C8F60:
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

DEFINE_REX_FUNC(sub_821D1720) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8912(r10)
	REX_STORE_U32(ctx.r10.u32 + -8912, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1760) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8944
	ctx.r11.s64 = ctx.r11.s64 + -8944;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1918) {
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
	ctx.lr = 0x821D1920;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r30,r10,13128
	r30.s64 = ctx.r10.s64 + 13128;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,0,17,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// stw r9,19420(r3)
	REX_STORE_U32(ctx.r3.u32 + 19420, ctx.r9.u32);
	// bl 0x821c78c0
	ctx.lr = 0x821D1974;
	sub_821C78C0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,5440(r31)
	REX_STORE_U32(r31.u32 + 5440, r28.u32);
	// stw r28,5428(r31)
	REX_STORE_U32(r31.u32 + 5428, r28.u32);
	// stw r28,5424(r31)
	REX_STORE_U32(r31.u32 + 5424, r28.u32);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// sth r29,140(r31)
	REX_STORE_U16(r31.u32 + 140, r29.u16);
	// bl 0x821c7140
	ctx.lr = 0x821D199C;
	sub_821C7140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7108
	ctx.lr = 0x821D19A4;
	sub_821C7108(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r27,r10,432
	r27.s64 = ctx.r10.s64 + 432;
	// addi r6,r9,-7072
	ctx.r6.s64 = ctx.r9.s64 + -7072;
	// ori r8,r8,3840
	ctx.r8.u64 = ctx.r8.u64 | 3840;
	// ori r7,r7,3842
	ctx.r7.u64 = ctx.r7.u64 | 3842;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,600(r27)
	REX_STORE_U32(r27.u32 + 600, r28.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r28,5432(r31)
	REX_STORE_U32(r31.u32 + 5432, r28.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// sth r10,8(r27)
	REX_STORE_U16(r27.u32 + 8, ctx.r10.u16);
	// sth r28,28(r27)
	REX_STORE_U16(r27.u32 + 28, r28.u16);
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r9,144(r6)
	REX_STORE_U16(ctx.r6.u32 + 144, ctx.r9.u16);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// sthx r11,r6,r8
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u16);
	// sthx r29,r6,r7
	REX_STORE_U16(ctx.r6.u32 + ctx.r7.u32, r29.u16);
	// sth r28,146(r6)
	REX_STORE_U16(ctx.r6.u32 + 146, r28.u16);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821c78c0
	ctx.lr = 0x821D1A04;
	sub_821C78C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r29,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r29,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r29.u32);
	// stw r31,224(r27)
	REX_STORE_U32(r27.u32 + 224, r31.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r11,24(r27)
	REX_STORE_U8(r27.u32 + 24, ctx.r11.u8);
	// bl 0x821b7a98
	ctx.lr = 0x821D1A28;
	sub_821B7A98(ctx, base);
	// bl 0x821bb560
	ctx.lr = 0x821D1A2C;
	sub_821BB560(ctx, base);
	// lwz r10,1856(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,-8968(r9)
	REX_STORE_U32(ctx.r9.u32 + -8968, ctx.r10.u32);
	// bne cr6,0x821d1a48
	if (!ctx.cr6.eq) goto loc_821D1A48;
	// bl 0x821b2a70
	ctx.lr = 0x821D1A48;
	sub_821B2A70(ctx, base);
loc_821D1A48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821D6F70) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// stw r3,496(r10)
	REX_STORE_U32(ctx.r10.u32 + 496, ctx.r3.u32);
	// sth r3,34(r10)
	REX_STORE_U16(ctx.r10.u32 + 34, ctx.r3.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D7468) {
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
	ctx.lr = 0x821D7470;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lhz r11,30(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 30);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x821d74ac
	if (!ctx.cr6.eq) goto loc_821D74AC;
	// lha r11,32(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 32));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821d74ac
	if (ctx.cr6.lt) goto loc_821D74AC;
	// li r26,1
	r26.s64 = 1;
loc_821D74AC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r29,r11,4384
	r29.s64 = ctx.r11.s64 + 4384;
	// addi r11,r29,-72
	ctx.r11.s64 = r29.s64 + -72;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D74C0:
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821d74d4
	if (!ctx.cr0.gt) goto loc_821D74D4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_821D74D4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x821d74c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D74C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,-1
	r27.s64 = -1;
	// lfs f30,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	f30.f64 = double(temp.f32);
	// lfs f31,28292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28292);
	f31.f64 = double(temp.f32);
loc_821D74F0:
	// bl 0x821fedc8
	ctx.lr = 0x821D74F4;
	sub_821FEDC8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821D7514;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d752c
	if (!ctx.cr0.eq) goto loc_821D752C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8008
	ctx.lr = 0x821D7524;
	sub_821C8008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d7604
	if (ctx.cr0.eq) goto loc_821D7604;
loc_821D752C:
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(r31.s32, 19, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// bne cr6,0x821d7544
	if (!ctx.cr6.eq) goto loc_821D7544;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
loc_821D7544:
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821fedc8
	ctx.lr = 0x821D754C;
	sub_821FEDC8(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// addi r11,r29,-72
	ctx.r11.s64 = r29.s64 + -72;
	// lhax r11,r30,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + ctx.r11.u32));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821d7604
	if (ctx.cr6.gt) goto loc_821D7604;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d73e0
	ctx.lr = 0x821D7578;
	sub_821D73E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d7604
	if (ctx.cr0.eq) goto loc_821D7604;
	// lha r11,30(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 30));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d75c0
	if (ctx.cr6.eq) goto loc_821D75C0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d759c
	if (ctx.cr6.eq) goto loc_821D759C;
	// cmpwi cr6,r31,29
	ctx.cr6.compare<int32_t>(r31.s32, 29, ctx.xer);
	// b 0x821d75f4
	goto loc_821D75F4;
loc_821D759C:
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d75d8
	if (ctx.cr6.eq) goto loc_821D75D8;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(r31.s32, 25, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(r31.s32, 27, ctx.xer);
	// ble cr6,0x821d7600
	if (!ctx.cr6.gt) goto loc_821D7600;
	// cmpwi cr6,r31,29
	ctx.cr6.compare<int32_t>(r31.s32, 29, ctx.xer);
	// b 0x821d75fc
	goto loc_821D75FC;
loc_821D75C0:
	// lhax r11,r30,r29
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + r29.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821d7604
	if (ctx.cr0.gt) goto loc_821D7604;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d7600
	if (!ctx.cr6.eq) goto loc_821D7600;
loc_821D75D8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(r31.s32, 6, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(r31.s32, 25, ctx.xer);
	// beq cr6,0x821d7604
	if (ctx.cr6.eq) goto loc_821D7604;
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(r31.s32, 27, ctx.xer);
loc_821D75F4:
	// ble cr6,0x821d7600
	if (!ctx.cr6.gt) goto loc_821D7600;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
loc_821D75FC:
	// ble cr6,0x821d7604
	if (!ctx.cr6.gt) goto loc_821D7604;
loc_821D7600:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_821D7604:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x821d74f0
	if (ctx.cr6.eq) goto loc_821D74F0;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r11,r29
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r29.u32));
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// bge cr6,0x821d7624
	if (!ctx.cr6.lt) goto loc_821D7624;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + r29.u32, ctx.r10.u16);
loc_821D7624:
	// addi r10,r29,-72
	ctx.r10.s64 = r29.s64 + -72;
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
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

DEFINE_REX_FUNC(sub_821DFE08) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5472(r10)
	REX_STORE_U32(ctx.r10.u32 + 5472, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0280) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821e02a8
	if (!ctx.cr6.eq) goto loc_821E02A8;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
loc_821E02A8:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x821e01a8
	ctx.lr = 0x821E02B0;
	sub_821E01A8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
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

DEFINE_REX_FUNC(sub_821E1078) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e10fc
	if (ctx.cr6.lt) goto loc_821E10FC;
	// beq cr6,0x821e10e4
	if (ctx.cr6.eq) goto loc_821E10E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821e112c
	if (!ctx.cr6.lt) goto loc_821E112C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16780(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821e112c
	if (ctx.cr6.gt) goto loc_821E112C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// b 0x821e112c
	goto loc_821E112C;
loc_821E10E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bgt 0x821e112c
	if (ctx.cr0.gt) goto loc_821E112C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821e1128
	goto loc_821E1128;
loc_821E10FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16780(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821e112c
	if (ctx.cr6.lt) goto loc_821E112C;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E1128:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821E112C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821E1134;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// bl 0x821eacb0
	ctx.lr = 0x821E1144;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f2,-24952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24952);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e0fd8
	ctx.lr = 0x821E115C;
	sub_821E0FD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821E3FC8) {
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
	ctx.lr = 0x821E3FD0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r28,1
	r28.s64 = 1;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r10,r10,16096
	ctx.r10.s64 = ctx.r10.s64 + 16096;
	// stw r4,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// std r28,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r28.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r28,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r28.u16);
	// addic. r11,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r11.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	r29.s64 = 0;
	// stb r9,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r9.u8);
	// beq 0x821e4020
	if (ctx.cr0.eq) goto loc_821E4020;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x821e4024
	goto loc_821E4024;
loc_821E4020:
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
loc_821E4024:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// beq cr6,0x821e4040
	if (ctx.cr6.eq) goto loc_821E4040;
	// li r11,115
	ctx.r11.s64 = 115;
	// stw r7,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r7.u32);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
loc_821E4040:
	// stb r29,105(r31)
	REX_STORE_U8(r31.u32 + 105, r29.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r29,106(r31)
	REX_STORE_U8(r31.u32 + 106, r29.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r29,107(r31)
	REX_STORE_U8(r31.u32 + 107, r29.u8);
	// stb r29,109(r31)
	REX_STORE_U8(r31.u32 + 109, r29.u8);
	// lbz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821e3550
	ctx.lr = 0x821E4064;
	sub_821E3550(ctx, base);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f4,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f7,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r10,-4224
	ctx.r11.s64 = ctx.r10.s64 + -4224;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,16640(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16640);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,16088(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16088);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f7,16(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f7,24(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f7,40(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f7,48(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f7,52(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f7,56(r30)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x821065b0
	ctx.lr = 0x821E40EC;
	sub_821065B0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821E9BB8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821E9BC0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x821E9BC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9bf0
	if (ctx.cr6.eq) goto loc_821E9BF0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e97d8
	ctx.lr = 0x821E9BF0;
	sub_821E97D8(ctx, base);
loc_821E9BF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f28,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f28.f64 = double(temp.f32);
	// lbz r27,4(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lfs f29,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f29.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// bne cr6,0x821e9c1c
	if (!ctx.cr6.eq) goto loc_821E9C1C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E9C1C:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e9cd0
	if (ctx.cr0.eq) goto loc_821E9CD0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f30.f64 = double(temp.f32);
loc_821E9C34:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821e9c7c
	if (!ctx.cr6.eq) goto loc_821E9C7C;
	// lfs f13,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821e9c4c
	if (!ctx.cr6.lt) goto loc_821E9C4C;
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
loc_821E9C4C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x821e97d8
	ctx.lr = 0x821E9C70;
	sub_821E97D8(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e9cc0
	goto loc_821E9CC0;
loc_821E9C7C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x821e9c8c
	if (!ctx.cr6.eq) goto loc_821E9C8C;
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// b 0x821e9cb0
	goto loc_821E9CB0;
loc_821E9C8C:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
loc_821E9CB0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e9cc4
	if (ctx.cr0.eq) goto loc_821E9CC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f0,f31,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f31.f64, f30.f64, ctx.f0.f64)));
loc_821E9CC0:
	// stb r11,64(r30)
	REX_STORE_U8(r30.u32 + 64, ctx.r11.u8);
loc_821E9CC4:
	// lbzu r11,1(r28)
	ea = 1 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e9c34
	if (!ctx.cr0.eq) goto loc_821E9C34;
loc_821E9CD0:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x821E9CE0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F0388) {
	REX_FUNC_PROLOGUE();
	// lbz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 372);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,356
	ctx.r3.s64 = ctx.r11.s64 + 356;
	// b 0x822a3cc0
	sub_822A3CC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F08C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,7844(r9)
	REX_STORE_U32(ctx.r9.u32 + 7844, ctx.r3.u32);
	// stw r3,7840(r8)
	REX_STORE_U32(ctx.r8.u32 + 7840, ctx.r3.u32);
	// b 0x821f0708
	sub_821F0708(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F0EA8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x821F0EB0;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// li r26,0
	r26.s64 = 0;
	// addi r14,r11,13128
	r14.s64 = ctx.r11.s64 + 13128;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821f0f04
	if (!ctx.cr6.lt) goto loc_821F0F04;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821f0f04
	if (!ctx.cr6.lt) goto loc_821F0F04;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821f13c8
	goto loc_821F13C8;
loc_821F0F04:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31792);
	// bl 0x822cc490
	ctx.lr = 0x821F0F10;
	sub_822CC490(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r18,r11,212
	r18.s64 = ctx.r11.s64 + 212;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r31,r14,20
	r31.s64 = r14.s64 + 20;
	// lfs f30,16628(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16628);
	f30.f64 = double(temp.f32);
	// li r15,8
	r15.s64 = 8;
	// li r24,1
	r24.s64 = 1;
	// li r20,6
	r20.s64 = 6;
	// li r21,5
	r21.s64 = 5;
	// li r22,7
	r22.s64 = 7;
	// li r25,4
	r25.s64 = 4;
	// li r23,2
	r23.s64 = 2;
	// addi r17,r11,124
	r17.s64 = ctx.r11.s64 + 124;
	// addi r16,r10,156
	r16.s64 = ctx.r10.s64 + 156;
loc_821F0F50:
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f1190
	if (ctx.cr0.eq) goto loc_821F1190;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r3,31792(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31792);
	// bl 0x822cbbc8
	ctx.lr = 0x821F0F6C;
	sub_822CBBC8(ctx, base);
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// lbz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f113c
	if (ctx.cr0.eq) goto loc_821F113C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r24,101(r31)
	REX_STORE_U8(r31.u32 + 101, r24.u8);
	// stb r26,100(r31)
	REX_STORE_U8(r31.u32 + 100, r26.u8);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F0FA4:
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f0fb4
	if (ctx.cr0.eq) goto loc_821F0FB4;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_821F0FB4:
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x821f0fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F0FA4;
	// stw r10,-20(r31)
	REX_STORE_U32(r31.u32 + -20, ctx.r10.u32);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lfs f0,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f0,44(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r30,r31,-20
	r30.s64 = r31.s64 + -20;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x821f0c48
	ctx.lr = 0x821F1008;
	sub_821F0C48(ctx, base);
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -20);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r11,16,2,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3C000000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm. r10,r11,0,18,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,-20(r31)
	REX_STORE_U32(r31.u32 + -20, ctx.r11.u32);
	// bne 0x821f1034
	if (!ctx.cr0.eq) goto loc_821F1034;
	// rlwinm r10,r11,24,18,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3C00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821F1034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f0e08
	ctx.lr = 0x821F103C;
	sub_821F0E08(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r20,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r20.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// stb r10,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// li r7,64
	ctx.r7.s64 = 64;
	// stb r9,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// stb r8,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r8,256
	ctx.r8.s64 = 256;
	// stb r21,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, r21.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r22,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, r22.u8);
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r25,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, r25.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// stw r25,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r25.u32);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stb r23,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r23.u8);
	// stb r7,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// stb r26,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, r26.u8);
	// stb r24,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, r24.u8);
	// stb r22,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, r22.u8);
	// stb r20,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, r20.u8);
	// stb r25,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, r25.u8);
	// stb r21,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, r21.u8);
loc_821F10D0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbzx r14,r28,r11
	r14.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x822cbbb8
	ctx.lr = 0x821F10E4;
	sub_822CBBB8(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// bl 0x822cbb98
	ctx.lr = 0x821F1104;
	sub_822CBB98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f111c
	if (ctx.cr0.eq) goto loc_821F111C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821F111C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// blt cr6,0x821f10d0
	if (ctx.cr6.lt) goto loc_821F10D0;
	// lwz r28,356(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r27,364(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821f11d4
	goto loc_821F11D4;
loc_821F113C:
	// lbz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 100);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r30,r31,-20
	r30.s64 = r31.s64 + -20;
	// stb r26,105(r31)
	REX_STORE_U8(r31.u32 + 105, r26.u8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r26,102(r31)
	REX_STORE_U8(r31.u32 + 102, r26.u8);
	// stb r26,101(r31)
	REX_STORE_U8(r31.u32 + 101, r26.u8);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r26,-20(r31)
	REX_STORE_U32(r31.u32 + -20, r26.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stb r8,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r8.u8);
loc_821F116C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f116c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F116C;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F1184:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f1184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1184;
	// b 0x821f11d4
	goto loc_821F11D4;
loc_821F1190:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r26,105(r31)
	REX_STORE_U8(r31.u32 + 105, r26.u8);
	// addi r30,r31,-20
	r30.s64 = r31.s64 + -20;
	// stb r26,101(r31)
	REX_STORE_U8(r31.u32 + 101, r26.u8);
	// stb r26,102(r31)
	REX_STORE_U8(r31.u32 + 102, r26.u8);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r26,-20(r31)
	REX_STORE_U32(r31.u32 + -20, r26.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F11B4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f11b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F11B4;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F11CC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f11cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F11CC;
loc_821F11D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f0d28
	ctx.lr = 0x821F11E4;
	sub_821F0D28(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x821ff638
	ctx.lr = 0x821F11F4;
	sub_821FF638(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r11,103(r31)
	REX_STORE_U8(r31.u32 + 103, ctx.r11.u8);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stb r10,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r10.u8);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// bne 0x821f0f50
	if (!ctx.cr0.eq) goto loc_821F0F50;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// beq cr6,0x821f13c4
	if (ctx.cr6.eq) goto loc_821F13C4;
	// mulli r11,r27,136
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(136));
	// add r31,r11,r14
	r31.u64 = ctx.r11.u64 + r14.u64;
	// not r29,r19
	r29.u64 = ~r19.u64;
	// mulli r11,r28,136
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(136));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// and. r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r30,r11,r14
	r30.u64 = ctx.r11.u64 + r14.u64;
	// beq 0x821f1284
	if (ctx.cr0.eq) goto loc_821F1284;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x821f128c
	if (ctx.cr6.eq) goto loc_821F128C;
loc_821F1284:
	// li r19,-1
	r19.s64 = -1;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821F128C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & r19.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & r19.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & r19.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// and r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & r19.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821F12CC;
	sub_822D4FA0(ctx, base);
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
	// addi r27,r30,48
	r27.s64 = r30.s64 + 48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x822d4fa0
	ctx.lr = 0x821F12E4;
	sub_822D4FA0(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// lbz r11,122(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 122);
	// stb r11,122(r30)
	REX_STORE_U8(r30.u32 + 122, ctx.r11.u8);
	// lbz r11,123(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 123);
	// stb r11,123(r30)
	REX_STORE_U8(r30.u32 + 123, ctx.r11.u8);
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// stb r11,124(r30)
	REX_STORE_U8(r30.u32 + 124, ctx.r11.u8);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821F133C;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// and r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 & r29.u64;
	// and r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 & r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stb r26,123(r31)
	REX_STORE_U8(r31.u32 + 123, r26.u8);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stb r26,124(r31)
	REX_STORE_U8(r31.u32 + 124, r26.u8);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// b 0x821f13c8
	goto loc_821F13C8;
loc_821F13C4:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821F13C8:
	// addi r6,r14,1210
	ctx.r6.s64 = r14.s64 + 1210;
	// addi r31,r14,1768
	r31.s64 = r14.s64 + 1768;
loc_821F13D0:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r8,r6,-106
	ctx.r8.s64 = ctx.r6.s64 + -106;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F13E4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f13e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F13E4;
	// stb r26,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, r26.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821F1428:
	// clrlwi. r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821f14a0
	if (ctx.cr0.eq) goto loc_821F14A0;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x821f1458
	if (!ctx.cr6.gt) goto loc_821F1458;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_821F1458:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x821f1470
	if (!ctx.cr6.gt) goto loc_821F1470;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
loc_821F1470:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x821f1488
	if (!ctx.cr6.gt) goto loc_821F1488;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_821F1488:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821f14a0
	if (!ctx.cr6.gt) goto loc_821F14A0;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_821F14A0:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// bdnz 0x821f1428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1428;
	// lbz r7,122(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 122);
	// stfs f5,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f6,-102(r6)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + -102, temp.u32);
	// rlwinm. r11,r9,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f7,-98(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + -98, temp.u32);
	// stw r4,6(r6)
	REX_STORE_U32(ctx.r6.u32 + 6, ctx.r4.u32);
	// stfs f8,-94(r6)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + -94, temp.u32);
	// rlwinm r10,r4,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC00;
	// stb r7,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// beq 0x821f14e8
	if (ctx.cr0.eq) goto loc_821F14E8;
	// cmplwi cr6,r11,3072
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3072, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x821f14e4
	if (ctx.cr6.eq) goto loc_821F14E4;
	// rlwinm r11,r9,24,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xC;
loc_821F14E4:
	// stb r11,10(r6)
	REX_STORE_U8(ctx.r6.u32 + 10, ctx.r11.u8);
loc_821F14E8:
	// cmplwi cr6,r10,3072
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3072, ctx.xer);
	// bne cr6,0x821f1500
	if (!ctx.cr6.eq) goto loc_821F1500;
	// lbz r11,10(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 10);
	// li r10,-3073
	ctx.r10.s64 = -3073;
	// rlwimi r10,r11,8,20,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF3FF);
	// and r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ctx.r4.u64;
loc_821F1500:
	// rlwinm. r11,r9,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r4,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3000;
	// beq 0x821f1520
	if (ctx.cr0.eq) goto loc_821F1520;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x821f151c
	if (ctx.cr6.eq) goto loc_821F151C;
	// rlwinm r11,r9,24,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x30;
loc_821F151C:
	// stb r11,11(r6)
	REX_STORE_U8(ctx.r6.u32 + 11, ctx.r11.u8);
loc_821F1520:
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x821f1538
	if (!ctx.cr6.eq) goto loc_821F1538;
	// lbz r11,11(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 11);
	// li r10,-12289
	ctx.r10.s64 = -12289;
	// rlwimi r10,r11,8,18,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFCFFF);
	// and r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ctx.r4.u64;
loc_821F1538:
	// lbz r11,11(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 11);
	// li r10,-15361
	ctx.r10.s64 = -15361;
	// lbz r8,10(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 10);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r10,r11,8,18,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC3FF);
	// and r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x821f1560
	if (ctx.cr6.eq) goto loc_821F1560;
	// lwz r10,-14(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + -14);
	// stw r10,-18(r6)
	REX_STORE_U32(ctx.r6.u32 + -18, ctx.r10.u32);
loc_821F1560:
	// lwz r10,-18(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + -18);
	// addi r3,r6,-122
	ctx.r3.s64 = ctx.r6.s64 + -122;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,-18(r6)
	REX_STORE_U32(ctx.r6.u32 + -18, ctx.r11.u32);
	// bl 0x821f0e08
	ctx.lr = 0x821F1574;
	sub_821F0E08(ctx, base);
	// lfs f13,-70(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -70);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-74(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -74);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-62(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -62);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-26(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + -26, temp.u32);
	// lfs f13,-66(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -66);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,-22(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -22, temp.u32);
	// bl 0x821f0d28
	ctx.lr = 0x821F1598;
	sub_821F0D28(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r14,1788
	ctx.r11.s64 = r14.s64 + 1788;
	// addi r6,r6,136
	ctx.r6.s64 = ctx.r6.s64 + 136;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f13d0
	if (ctx.cr6.lt) goto loc_821F13D0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82211100) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822113A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211770) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211980) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	REX_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822121B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
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

DEFINE_REX_FUNC(sub_82212A80) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82212b08
	if (!ctx.cr6.eq) goto loc_82212B08;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82212ab4
	if (!ctx.cr6.gt) goto loc_82212AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82212AB4;
	sub_82215008(ctx, base);
loc_82212AB4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,13084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13084);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r7,r7,25344
	ctx.r7.u64 = ctx.r7.u64 | 25344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13088);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82212B08:
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
	ctx.lr = 0x82212B38;
	sub_8220FED8(ctx, base);
	// lwz r11,11044(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11044);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// bl 0x82217c00
	ctx.lr = 0x82212B48;
	sub_82217C00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82217808) {
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
	// li r4,1413
	ctx.r4.s64 = 1413;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82215248
	ctx.lr = 0x8221782C;
	sub_82215248(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,6433
	ctx.r11.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,514
	ctx.r11.s64 = r31.s64 + 514;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_8221786C:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// ori r8,r8,39204
	ctx.r8.u64 = ctx.r8.u64 | 39204;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// beq cr6,0x822178b0
	if (ctx.cr6.eq) goto loc_822178B0;
	// lhz r7,-512(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -512);
	// lhz r8,-514(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -514);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,510(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 510);
	// lhz r7,512(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 512);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822178c0
	goto loc_822178C0;
loc_822178B0:
	// li r8,512
	ctx.r8.s64 = 512;
	// li r7,64
	ctx.r7.s64 = 64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
loc_822178C0:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lis r8,-16379
	ctx.r8.s64 = -1073414144;
	// li r7,7
	ctx.r7.s64 = 7;
	// ori r8,r8,17664
	ctx.r8.u64 = ctx.r8.u64 | 17664;
	// li r6,6436
	ctx.r6.s64 = 6436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,6434
	ctx.r3.s64 = 6434;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// stwu r8,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r4.u32 = ea;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x8221786c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221786C;
	// stw r8,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8221D2C8) {
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
	ctx.lr = 0x8221D2D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824d419c
	ctx.lr = 0x8221D2E0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221d2f4
	if (!ctx.cr6.eq) goto loc_8221D2F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x8221d2fc
	goto loc_8221D2FC;
loc_8221D2F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_8221D2FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d62c
	if (ctx.cr0.eq) goto loc_8221D62C;
	// lis r26,-30720
	r26.s64 = -2013265920;
	// lis r24,-31744
	r24.s64 = -2080374784;
	// lis r25,-29440
	r25.s64 = -1929379840;
loc_8221D318:
	// rlwinm r11,r10,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x8221d4ac
	if (ctx.cr6.gt) goto loc_8221D4AC;
	// beq cr6,0x8221d48c
	if (ctx.cr6.eq) goto loc_8221D48C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8221d3f8
	if (ctx.cr6.gt) goto loc_8221D3F8;
	// beq cr6,0x8221d3d8
	if (ctx.cr6.eq) goto loc_8221D3D8;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d3a4
	if (ctx.cr6.eq) goto loc_8221D3A4;
	// lis r9,-32512
	ctx.r9.s64 = -2130706432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d5c4
	if (ctx.cr6.eq) goto loc_8221D5C4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d620
	if (ctx.cr6.eq) goto loc_8221D620;
	// lis r9,-32000
	ctx.r9.s64 = -2097152000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221d59c
	if (!ctx.cr6.eq) goto loc_8221D59C;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r31,372(r30)
	REX_STORE_U32(r30.u32 + 372, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// ble cr6,0x8221d398
	if (!ctx.cr6.gt) goto loc_8221D398;
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 116);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221d398
	if (ctx.cr0.eq) goto loc_8221D398;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_8221D394:
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
loc_8221D398:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221c710
	ctx.lr = 0x8221D3A0;
	sub_8221C710(ctx, base);
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D3A4:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// li r5,248
	ctx.r5.s64 = 248;
	// bl 0x822d4fa0
	ctx.lr = 0x8221D3B4;
	sub_822D4FA0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
	// stw r11,364(r30)
	REX_STORE_U32(r30.u32 + 364, ctx.r11.u32);
	// stw r9,368(r30)
	REX_STORE_U32(r30.u32 + 368, ctx.r9.u32);
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D3D8:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// beq 0x8221d398
	if (ctx.cr0.eq) goto loc_8221D398;
	// lwz r31,376(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 376);
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D3F8:
	// lis r9,-31488
	ctx.r9.s64 = -2063597568;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d460
	if (ctx.cr6.eq) goto loc_8221D460;
	// lis r9,-31232
	ctx.r9.s64 = -2046820352;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d44c
	if (ctx.cr6.eq) goto loc_8221D44C;
	// lis r9,-30976
	ctx.r9.s64 = -2030043136;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221d59c
	if (!ctx.cr6.eq) goto loc_8221D59C;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r9,120(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r11.u32);
	// stw r10,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bge cr6,0x8221d398
	if (!ctx.cr6.lt) goto loc_8221D398;
	// lwz r31,380(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 380);
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D44C:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r31,380(r30)
	REX_STORE_U32(r30.u32 + 380, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x8221d394
	goto loc_8221D394;
loc_8221D460:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r31,376(r30)
	REX_STORE_U32(r30.u32 + 376, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r11,r10,26,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// beq 0x8221d398
	if (ctx.cr0.eq) goto loc_8221D398;
	// lwz r31,372(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 372);
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D48C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,364(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 364);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d620
	if (ctx.cr0.eq) goto loc_8221D620;
	// stw r31,80(r30)
	REX_STORE_U32(r30.u32 + 80, r31.u32);
	// addi r31,r30,92
	r31.s64 = r30.s64 + 92;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D4AC:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x8221d578
	if (ctx.cr6.gt) goto loc_8221D578;
	// beq cr6,0x8221d62c
	if (ctx.cr6.eq) goto loc_8221D62C;
	// lis r9,-30464
	ctx.r9.s64 = -1996488704;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d554
	if (ctx.cr6.eq) goto loc_8221D554;
	// lis r9,-30208
	ctx.r9.s64 = -1979711488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d4f4
	if (ctx.cr6.eq) goto loc_8221D4F4;
	// lis r9,-29952
	ctx.r9.s64 = -1962934272;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d4ec
	if (ctx.cr6.eq) goto loc_8221D4EC;
	// lis r9,-29696
	ctx.r9.s64 = -1946157056;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d62c
	if (ctx.cr6.eq) goto loc_8221D62C;
	// b 0x8221d59c
	goto loc_8221D59C;
loc_8221D4EC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D4F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r23,4(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8221cd50
	ctx.lr = 0x8221D510;
	sub_8221CD50(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8221cef8
	ctx.lr = 0x8221D518;
	sub_8221CEF8(ctx, base);
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d534
	if (ctx.cr0.eq) goto loc_8221D534;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x8221cfd8
	ctx.lr = 0x8221D530;
	sub_8221CFD8(ctx, base);
	// b 0x8221d54c
	goto loc_8221D54C;
loc_8221D534:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8221d54c
	if (!ctx.cr6.eq) goto loc_8221D54C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x8221d118
	ctx.lr = 0x8221D54C;
	sub_8221D118(ctx, base);
loc_8221D54C:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D554:
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d570
	if (ctx.cr0.eq) goto loc_8221D570;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8221d210
	ctx.lr = 0x8221D570;
	sub_8221D210(ctx, base);
loc_8221D570:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D578:
	// lis r9,-29184
	ctx.r9.s64 = -1912602624;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d5e8
	if (ctx.cr6.eq) goto loc_8221D5E8;
	// lis r9,-28928
	ctx.r9.s64 = -1895825408;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d5c4
	if (ctx.cr6.eq) goto loc_8221D5C4;
	// lis r9,-28672
	ctx.r9.s64 = -1879048192;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221d5b0
	if (ctx.cr6.eq) goto loc_8221D5B0;
loc_8221D59C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221d62c
	if (ctx.cr6.eq) goto loc_8221D62C;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D5B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8222e788
	ctx.lr = 0x8221D5BC;
	sub_8222E788(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D5C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82214098
	ctx.lr = 0x8221D5E0;
	sub_82214098(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x8221d620
	goto loc_8221D620;
loc_8221D5E8:
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d614
	if (ctx.cr0.eq) goto loc_8221D614;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82214098
	ctx.lr = 0x8221D614;
	sub_82214098(ctx, base);
loc_8221D614:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r11,368(r30)
	REX_STORE_U32(r30.u32 + 368, ctx.r11.u32);
loc_8221D620:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221d318
	if (!ctx.cr0.eq) goto loc_8221D318;
loc_8221D62C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8222CAB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
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
	// bl 0x822d4e7c
	ctx.lr = 0x8222CAB8;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f24
	ctx.lr = 0x8222CAC0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lfs f25,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f25.f64 = double(temp.f32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// mullw r31,r4,r5
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8222cb00
	if (ctx.cr6.eq) goto loc_8222CB00;
	// fmr f30,f25
	f30.f64 = f25.f64;
	// b 0x8222cb04
	goto loc_8222CB04;
loc_8222CB00:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f0.f64;
loc_8222CB04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f26,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f26.f64 = double(temp.f32);
	// beq cr6,0x8222ce10
	if (ctx.cr6.eq) goto loc_8222CE10;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8222cd94
	if (ctx.cr6.eq) goto loc_8222CD94;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8222cd18
	if (ctx.cr6.eq) goto loc_8222CD18;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8222ccb8
	if (ctx.cr6.eq) goto loc_8222CCB8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8222cc40
	if (ctx.cr6.eq) goto loc_8222CC40;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8222cba0
	if (ctx.cr6.eq) goto loc_8222CBA0;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8222cba0
	if (!ctx.cr6.eq) goto loc_8222CBA0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222cb68
	if (ctx.cr6.eq) goto loc_8222CB68;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8222cb68
	if (ctx.cr0.eq) goto loc_8222CB68;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8222CB60:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8222cb60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CB60;
loc_8222CB68:
	// subf r11,r27,r31
	ctx.r11.u64 = r31.u64 - r27.u64;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8222ce6c
	if (!ctx.cr6.lt) goto loc_8222CE6C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8222CB8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f26,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222cb8c
	if (ctx.cr6.lt) goto loc_8222CB8C;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CBA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8222CBB8:
	// subf r9,r27,r10
	ctx.r9.u64 = ctx.r10.u64 - r27.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222cbf0
	if (ctx.cr6.lt) goto loc_8222CBF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222cbf0
	if (!ctx.cr6.lt) goto loc_8222CBF0;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// b 0x8222cc24
	goto loc_8222CC24;
loc_8222CBF0:
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8222cc2c
	if (!ctx.cr6.lt) goto loc_8222CC2C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8222cc2c
	if (ctx.cr6.lt) goto loc_8222CC2C;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
loc_8222CC24:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x8222cc30
	goto loc_8222CC30;
loc_8222CC2C:
	// stfs f25,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8222CC30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8222cbb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CBB8;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CC40:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f26,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f26.f64 / f29.f64));
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8222CC6C:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f28,f0,f27
	f28.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f1,f31,f28
	ctx.f1.f64 = double(float(f31.f64 * f28.f64));
	// bl 0x8222c848
	ctx.lr = 0x8222CC94;
	sub_8222C848(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8222c848
	ctx.lr = 0x8222CCA0;
	sub_8222C848(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 * ctx.f1.f64));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8222cc6c
	if (ctx.cr6.lt) goto loc_8222CC6C;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CCB8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8222CCE0:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x8222c8a0
	ctx.lr = 0x8222CD04;
	sub_8222C8A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8222cce0
	if (ctx.cr6.lt) goto loc_8222CCE0;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CD18:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f26,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f26.f64 / f29.f64));
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f28.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8222CD4C:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8222bfa0
	ctx.lr = 0x8222CD80;
	sub_8222BFA0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8222cd4c
	if (ctx.cr6.lt) goto loc_8222CD4C;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CD94:
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// li r30,0
	r30.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f28,f31,f30
	f28.f64 = double(float(f31.f64 - f30.f64));
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
loc_8222CDC0:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f24,f31
	ctx.f0.f64 = double(float(f24.f64 - f31.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x8222c848
	ctx.lr = 0x8222CDE4;
	sub_8222C848(ctx, base);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x8222c788
	ctx.lr = 0x8222CDF8;
	sub_8222C788(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f23.f64 * ctx.f1.f64));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8222cdc0
	if (ctx.cr6.lt) goto loc_8222CDC0;
	// b 0x8222ce6c
	goto loc_8222CE6C;
loc_8222CE10:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222ce6c
	if (ctx.cr6.eq) goto loc_8222CE6C;
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8222CE38:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x8222c9a8
	ctx.lr = 0x8222CE5C;
	sub_8222C9A8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8222ce38
	if (ctx.cr6.lt) goto loc_8222CE38;
loc_8222CE6C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8222ce78
	if (ctx.cr6.eq) goto loc_8222CE78;
	// stfs f25,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_8222CE78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8222ced8
	if (ctx.cr6.eq) goto loc_8222CED8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_8222CE88:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f25.f64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8222cecc
	if (ctx.cr6.eq) goto loc_8222CECC;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_8222CEA0:
	// lfsux f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x8222cea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CEA0;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8222CEB8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x8222ceb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CEB8;
loc_8222CECC:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8222ce88
	if (!ctx.cr0.eq) goto loc_8222CE88;
loc_8222CED8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f70
	ctx.lr = 0x8222CEE4;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8223F950) {
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
	ctx.lr = 0x8223F958;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r29,1212(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1212);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8223f97c
	if (!ctx.cr6.eq) goto loc_8223F97C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223f9f0
	goto loc_8223F9F0;
loc_8223F97C:
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82236d68
	ctx.lr = 0x8223F98C;
	sub_82236D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223f9a0
	if (ctx.cr0.lt) goto loc_8223F9A0;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8223F9A0:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f9bc
	if (ctx.cr0.eq) goto loc_8223F9BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x823cd980
	ctx.lr = 0x8223F9BC;
	sub_823CD980(ctx, base);
loc_8223F9BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,12(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82239978
	ctx.lr = 0x8223F9D0;
	sub_82239978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x8223F9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223F9F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82245448) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82245474
	if (ctx.cr6.eq) goto loc_82245474;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82245494
	goto loc_82245494;
loc_82245474:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8225c508
	ctx.lr = 0x8224547C;
	sub_8225C508(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245490
	if (ctx.cr0.eq) goto loc_82245490;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// bl 0x82267e08
	ctx.lr = 0x82245490;
	sub_82267E08(ctx, base);
loc_82245490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245494:
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

DEFINE_REX_FUNC(sub_82245BB8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245bf0
	if (ctx.cr6.eq) goto loc_82245BF0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245bf0
	if (!ctx.cr6.eq) goto loc_82245BF0;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,132(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_82245BF0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246418) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246484
	if (ctx.cr6.eq) goto loc_82246484;
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
	// bge cr6,0x82246484
	if (!ctx.cr6.lt) goto loc_82246484;
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
	// bne cr6,0x82246484
	if (!ctx.cr6.eq) goto loc_82246484;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82246484
	if (!ctx.cr6.eq) goto loc_82246484;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224648c
	if (!ctx.cr6.eq) goto loc_8224648C;
loc_82246484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8224648C:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247210) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82247234
	if (ctx.cr6.eq) goto loc_82247234;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82247244
	goto loc_82247244;
loc_82247234:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x822469c0
	ctx.lr = 0x82247240;
	sub_822469C0(ctx, base);
	// bl 0x82257160
	ctx.lr = 0x82247244;
	sub_82257160(ctx, base);
loc_82247244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247B40) {
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
	ctx.lr = 0x82247B58;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247b90
	if (ctx.cr0.lt) goto loc_82247B90;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247b88
	if (ctx.cr6.eq) goto loc_82247B88;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82247b88
	if (!ctx.cr6.eq) goto loc_82247B88;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82245530
	ctx.lr = 0x82247B84;
	sub_82245530(ctx, base);
	// b 0x82247b90
	goto loc_82247B90;
loc_82247B88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247B90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822489E0) {
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
	ctx.lr = 0x822489F8;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248a38
	if (ctx.cr0.lt) goto loc_82248A38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248a30
	if (ctx.cr6.eq) goto loc_82248A30;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82248a30
	if (!ctx.cr6.eq) goto loc_82248A30;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r9,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82248a38
	goto loc_82248A38;
loc_82248A30:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248A38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A0A0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a11c
	if (ctx.cr6.eq) goto loc_8224A11C;
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
	// bge cr6,0x8224a11c
	if (!ctx.cr6.lt) goto loc_8224A11C;
	// rlwinm r6,r11,25,7,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r6,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8224a11c
	if (!ctx.cr6.eq) goto loc_8224A11C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8224a11c
	if (!ctx.cr6.eq) goto loc_8224A11C;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8224A11C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8224a130
	if (!ctx.cr6.eq) goto loc_8224A130;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8224a194
	goto loc_8224A194;
loc_8224A130:
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
loc_8224A134:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224a154
	if (ctx.cr6.lt) goto loc_8224A154;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224a16c
	if (ctx.cr6.lt) goto loc_8224A16C;
loc_8224A154:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224a18c
	if (ctx.cr6.eq) goto loc_8224A18C;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8224a134
	goto loc_8224A134;
loc_8224A16C:
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mulli r11,r9,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(48));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82249d18
	ctx.lr = 0x8224A188;
	sub_82249D18(ctx, base);
	// b 0x8224a194
	goto loc_8224A194;
loc_8224A18C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_8224A194:
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

DEFINE_REX_FUNC(sub_8224E298) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E2BC;
	sub_82255B48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e2d4
	if (!ctx.cr6.eq) goto loc_8224E2D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e2e0
	goto loc_8224E2E0;
loc_8224E2D4:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224E2E0:
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

DEFINE_REX_FUNC(sub_8224FE88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224FE90;
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
	// addi r31,r11,27764
	r31.s64 = ctx.r11.s64 + 27764;
	// lwz r11,27812(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27812);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224ff08
	if (!ctx.cr0.eq) goto loc_8224FF08;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3004
	ctx.r9.s64 = ctx.r10.s64 + -3004;
	// li r30,0
	r30.s64 = 0;
	// stw r11,27812(r8)
	REX_STORE_U32(ctx.r8.u32 + 27812, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r11,244
	ctx.r11.s64 = 244;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224dca0
	ctx.lr = 0x8224FEEC;
	sub_8224DCA0(ctx, base);
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
loc_8224FF08:
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

DEFINE_REX_FUNC(sub_822523E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252628) {
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
	// addi r10,r10,-5264
	ctx.r10.s64 = ctx.r10.s64 + -5264;
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
	ctx.lr = 0x82252670;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-20960
	ctx.r11.s64 = ctx.r11.s64 + -20960;
	// addi r10,r10,-20720
	ctx.r10.s64 = ctx.r10.s64 + -20720;
	// addi r9,r9,27688
	ctx.r9.s64 = ctx.r9.s64 + 27688;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82250078
	ctx.lr = 0x822526A0;
	sub_82250078(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29836
	ctx.r4.s64 = ctx.r11.s64 + 29836;
	// bl 0x822512d8
	ctx.lr = 0x822526B8;
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

DEFINE_REX_FUNC(sub_82254C40) {
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
	// beq cr6,0x82254c68
	if (ctx.cr6.eq) goto loc_82254C68;
	// bl 0x82253f60
	ctx.lr = 0x82254C60;
	sub_82253F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82254C68;
	sub_82255B70(ctx, base);
loc_82254C68:
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

DEFINE_REX_FUNC(sub_82255E18) {
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
	// bl 0x822469c0
	ctx.lr = 0x82255E28;
	sub_822469C0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,29596(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 29596);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82255e40
	if (!ctx.cr6.eq) goto loc_82255E40;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,29596(r11)
	REX_STORE_U32(ctx.r11.u32 + 29596, ctx.r10.u32);
loc_82255E40:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,29600
	ctx.r10.s64 = ctx.r11.s64 + 29600;
loc_82255E4C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82255e64
	if (!ctx.cr6.eq) goto loc_82255E64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82255E64:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82255e4c
	if (ctx.cr6.lt) goto loc_82255E4C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256CB0) {
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
	ctx.lr = 0x82256CD0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256ce4
	if (!ctx.cr0.eq) goto loc_82256CE4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256cec
	goto loc_82256CEC;
loc_82256CE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82260230
	ctx.lr = 0x82256CEC;
	sub_82260230(ctx, base);
loc_82256CEC:
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

DEFINE_REX_FUNC(sub_822578F0) {
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
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x82257910;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225791C;
	sub_8227C2B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

DEFINE_REX_FUNC(sub_82258F78) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82258f90
	if (!ctx.cr6.eq) goto loc_82258F90;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82258F90:
	// b 0x822466d0
	sub_822466D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225A1D8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x8225A1E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r22,-1
	r22.s64 = -1;
	// li r21,-5
	r21.s64 = -5;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8225a224
	if (ctx.cr6.eq) goto loc_8225A224;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225a224
	if (ctx.cr6.eq) goto loc_8225A224;
	// stw r11,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// b 0x8225a3a8
	goto loc_8225A3A8;
loc_8225A224:
	// lwz r31,16(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8225a3bc
	if (!ctx.cr6.gt) goto loc_8225A3BC;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8225a248
	if (!ctx.cr6.gt) goto loc_8225A248;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8225A248:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8225a258
	if (!ctx.cr6.gt) goto loc_8225A258;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8225A258:
	// bl 0x82255b48
	ctx.lr = 0x8225A25C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225a28c
	if (ctx.cr0.eq) goto loc_8225A28C;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8225a280
	goto loc_8225A280;
loc_8225A274:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82189128
	ctx.lr = 0x8225A27C;
	sub_82189128(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_8225A280:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8225a274
	if (!ctx.cr0.lt) goto loc_8225A274;
	// b 0x8225a290
	goto loc_8225A290;
loc_8225A28C:
	// li r29,0
	r29.s64 = 0;
loc_8225A290:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r29,36(r23)
	REX_STORE_U32(r23.u32 + 36, r29.u32);
	// bne cr6,0x8225a2a8
	if (!ctx.cr6.eq) goto loc_8225A2A8;
loc_8225A29C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8225a4a0
	goto loc_8225A4A0;
loc_8225A2A8:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225a398
	if (!ctx.cr6.gt) goto loc_8225A398;
	// li r31,0
	r31.s64 = 0;
loc_8225A2BC:
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// add r29,r31,r11
	r29.u64 = r31.u64 + ctx.r11.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x822d6a10
	ctx.lr = 0x8225A2D0;
	sub_822D6A10(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x8225A2E0;
	sub_82255B48(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225a29c
	if (ctx.cr0.eq) goto loc_8225A29C;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x822d6c18
	ctx.lr = 0x8225A2FC;
	sub_822D6C18(ctx, base);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8225a378
	if (ctx.cr6.eq) goto loc_8225A378;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8225a378
	if (ctx.cr6.eq) goto loc_8225A378;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r28,16(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 16);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r26,12(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x8225a370
	if (!ctx.cr6.gt) goto loc_8225A370;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8225A34C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x8225A358;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225a374
	if (ctx.cr0.eq) goto loc_8225A374;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x8225a34c
	if (ctx.cr6.lt) goto loc_8225A34C;
loc_8225A370:
	// li r30,-1
	r30.s64 = -1;
loc_8225A374:
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
loc_8225A378:
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r23)
	REX_STORE_U32(r23.u32 + 40, ctx.r11.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225a2bc
	if (ctx.cr6.lt) goto loc_8225A2BC;
loc_8225A398:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8225a3bc
	if (ctx.cr6.eq) goto loc_8225A3BC;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// stw r11,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r11.u32);
loc_8225A3A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,48(r23)
	REX_STORE_U32(r23.u32 + 48, r20.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r10,44(r23)
	REX_STORE_U32(r23.u32 + 44, ctx.r10.u32);
	// bl 0x8227b688
	ctx.lr = 0x8225A3BC;
	sub_8227B688(ctx, base);
loc_8225A3BC:
	// lwz r26,28(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 28);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// blt cr6,0x8225a49c
	if (ctx.cr6.lt) goto loc_8225A49C;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// ori r11,r11,50115
	ctx.r11.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r26,68
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(68));
	// ble cr6,0x8225a3e0
	if (!ctx.cr6.gt) goto loc_8225A3E0;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8225A3E0:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8225a3f0
	if (!ctx.cr6.gt) goto loc_8225A3F0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8225A3F0:
	// bl 0x82255b48
	ctx.lr = 0x8225A3F4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225a434
	if (ctx.cr0.eq) goto loc_8225A434;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// addic. r31,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r31.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// blt 0x8225a42c
	if (ctx.cr0.lt) goto loc_8225A42C;
loc_8225A410:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227cd20
	ctx.lr = 0x8225A418;
	sub_8227CD20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82278048
	ctx.lr = 0x8225A420;
	sub_82278048(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// bge 0x8225a410
	if (!ctx.cr0.lt) goto loc_8225A410;
loc_8225A42C:
	// mr r27,r29
	r27.u64 = r29.u64;
	// b 0x8225a438
	goto loc_8225A438;
loc_8225A434:
	// li r27,0
	r27.s64 = 0;
loc_8225A438:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8225a29c
	if (ctx.cr6.eq) goto loc_8225A29C;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8225a48c
	if (!ctx.cr6.gt) goto loc_8225A48C;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8225A454:
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8225a150
	ctx.lr = 0x8225A470;
	sub_8225A150(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8225a4a8
	if (ctx.cr0.lt) goto loc_8225A4A8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// blt cr6,0x8225a454
	if (ctx.cr6.lt) goto loc_8225A454;
loc_8225A48C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82278518
	ctx.lr = 0x8225A49C;
	sub_82278518(ctx, base);
loc_8225A49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225A4A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
loc_8225A4A8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822582f0
	ctx.lr = 0x8225A4B4;
	sub_822582F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8225a4a0
	goto loc_8225A4A0;
}

DEFINE_REX_FUNC(sub_82267590) {
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
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82267598;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r3,820(r1)
	REX_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// vspltisw128 v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x3)));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,-2144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r3,r11,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 + 112;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r10,r1,207
	ctx.r10.s64 = ctx.r1.s64 + 207;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// vcsxwfp128 v12,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r5,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r5.u32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
	// addi r27,r4,12
	r27.s64 = ctx.r4.s64 + 12;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vnmsubfp v12,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v63,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x82288f58
	ctx.lr = 0x822676D0;
	sub_82288F58(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822676f0
	if (ctx.cr6.eq) goto loc_822676F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82288f80
	ctx.lr = 0x822676F0;
	sub_82288F80(ctx, base);
loc_822676F0:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// rlwinm. r4,r11,24,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82267708
	if (ctx.cr0.eq) goto loc_82267708;
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288fa8
	ctx.lr = 0x82267708;
	sub_82288FA8(ctx, base);
loc_82267708:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82267720
	if (!ctx.cr6.eq) goto loc_82267720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225feb0
	ctx.lr = 0x82267720;
	sub_8225FEB0(ctx, base);
loc_82267720:
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82267c08
	if (!ctx.cr6.eq) goto loc_82267C08;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// vupkd3d128 v127,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v127 = vTemp;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vpermwi128 v63,v127,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x15));
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// vpermwi128 v62,v127,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x45));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvsr v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r9,4
	ctx.r9.s64 = 4;
	// vpermwi128 v61,v127,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x51));
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,20
	ctx.r9.s64 = 20;
	// vpermwi128 v60,v127,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x54));
	// addi r31,r1,208
	r31.s64 = ctx.r1.s64 + 208;
	// li r28,24
	r28.s64 = 24;
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
	// stvewx128 v63,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvewx128 v63,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r26,28
	r26.s64 = 28;
	// li r5,32
	ctx.r5.s64 = 32;
	// stvewx128 v63,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stvewx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,36
	ctx.r7.s64 = 36;
	// stvewx128 v62,r27,r28
	ea = (r27.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stvewx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stvewx128 v61,r8,r5
	ea = (ctx.r8.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvewx128 v61,r6,r7
	ea = (ctx.r6.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stvewx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stvewx128 v61,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,56
	ctx.r9.s64 = 56;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvewx128 v60,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stvewx128 v60,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stvewx128 v60,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82289380
	ctx.lr = 0x82267868;
	sub_82289380(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r10,392(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// lfs f0,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lfs f13,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v63,v127,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x15));
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vpermwi128 v62,v127,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x45));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vpermwi128 v61,v127,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x51));
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f11.f64 = double(temp.f32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lfs f12,2372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f12.f64 = double(temp.f32);
	// li r4,56
	ctx.r4.s64 = 56;
	// li r6,4
	ctx.r6.s64 = 4;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vpermwi128 v60,v127,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v127.u32), 0x54));
	// li r9,12
	ctx.r9.s64 = 12;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// li r3,16
	ctx.r3.s64 = 16;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// addi r31,r1,272
	r31.s64 = ctx.r1.s64 + 272;
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,20
	r29.s64 = 20;
	// addi r21,r1,272
	r21.s64 = ctx.r1.s64 + 272;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r20,r1,272
	r20.s64 = ctx.r1.s64 + 272;
	// li r27,28
	r27.s64 = 28;
	// addi r19,r1,272
	r19.s64 = ctx.r1.s64 + 272;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r26,32
	r26.s64 = 32;
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stvewx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stvewx128 v63,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r25,36
	r25.s64 = 36;
	// stvewx128 v63,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r24,40
	r24.s64 = 40;
	// stvewx128 v63,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r23,44
	r23.s64 = 44;
	// stvewx128 v62,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r22,48
	r22.s64 = 48;
	// stvewx128 v62,r21,r29
	ea = (r21.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r18,r1,272
	r18.s64 = ctx.r1.s64 + 272;
	// stvewx128 v62,r20,r28
	ea = (r20.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r17,r1,272
	r17.s64 = ctx.r1.s64 + 272;
	// addi r16,r1,272
	r16.s64 = ctx.r1.s64 + 272;
	// stvewx128 v62,r19,r27
	ea = (r19.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r15,r1,272
	r15.s64 = ctx.r1.s64 + 272;
	// addi r14,r1,272
	r14.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// li r11,60
	ctx.r11.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvewx128 v61,r18,r26
	ea = (r18.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stvewx128 v61,r17,r25
	ea = (r17.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stvewx128 v61,r16,r24
	ea = (r16.u32 + r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r15,r23
	ea = (r15.u32 + r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r14,r22
	ea = (r14.u32 + r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stvewx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stvewx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,332(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f13,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,316(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x82288d90
	ctx.lr = 0x82267A1C;
	sub_82288D90(ctx, base);
	// lwz r31,820(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 820);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82291210
	ctx.lr = 0x82267A30;
	sub_82291210(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82291210
	ctx.lr = 0x82267A40;
	sub_82291210(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82291210
	ctx.lr = 0x82267A50;
	sub_82291210(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82255b48
	ctx.lr = 0x82267A58;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82267a70
	if (ctx.cr0.eq) goto loc_82267A70;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82267a74
	goto loc_82267A74;
loc_82267A70:
	// li r29,0
	r29.s64 = 0;
loc_82267A74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82267c08
	if (ctx.cr6.eq) goto loc_82267C08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82291450
	ctx.lr = 0x82267AD4;
	sub_82291450(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82291450
	ctx.lr = 0x82267AE4;
	sub_82291450(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82291450
	ctx.lr = 0x82267AF4;
	sub_82291450(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82291450
	ctx.lr = 0x82267B04;
	sub_82291450(ctx, base);
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,360(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// bl 0x82291698
	ctx.lr = 0x82267B3C;
	sub_82291698(ctx, base);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,376(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,368(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// bl 0x82291698
	ctx.lr = 0x82267B74;
	sub_82291698(ctx, base);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,344(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// bl 0x82291698
	ctx.lr = 0x82267BAC;
	sub_82291698(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lfs f13,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82291698
	ctx.lr = 0x82267BE4;
	sub_82291698(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82289480
	ctx.lr = 0x82267BF4;
	sub_82289480(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82289458
	ctx.lr = 0x82267C00;
	sub_82289458(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82267C08:
	// lwz r3,608(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x822d7b58
	ctx.lr = 0x82267C10;
	sub_822D7B58(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82289FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8228A000;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,464
	ctx.r3.s64 = 464;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228A014;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228a028
	if (ctx.cr0.eq) goto loc_8228A028;
	// bl 0x82286868
	ctx.lr = 0x8228A020;
	sub_82286868(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8228a02c
	goto loc_8228A02C;
loc_8228A028:
	// li r31,0
	r31.s64 = 0;
loc_8228A02C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228a040
	if (!ctx.cr6.eq) goto loc_8228A040;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8228a078
	goto loc_8228A078;
loc_8228A040:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822870a8
	ctx.lr = 0x8228A04C;
	sub_822870A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228a05c
	if (ctx.cr0.lt) goto loc_8228A05C;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r31,0
	r31.s64 = 0;
loc_8228A05C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228a078
	if (ctx.cr6.eq) goto loc_8228A078;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228A078:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228BDD8) {
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
	ctx.lr = 0x8228BDE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228be6c
	if (ctx.cr6.eq) goto loc_8228BE6C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8228be6c
	if (ctx.cr6.eq) goto loc_8228BE6C;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// ble cr6,0x8228be3c
	if (!ctx.cr6.gt) goto loc_8228BE3C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8228BE1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfsu f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// bdnz 0x8228be1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228BE1C;
loc_8228BE3C:
	// addi r30,r28,100
	r30.s64 = r28.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228BE48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228b620
	ctx.lr = 0x8228BE5C;
	sub_8228B620(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8228be78
	if (!ctx.cr0.eq) goto loc_8228BE78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228BE6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228BE6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228BE70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8228BE78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228BEBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228be70
	goto loc_8228BE70;
}

DEFINE_REX_FUNC(sub_82290F68) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d8a94
	ctx.lr = 0x82290F78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v124,v1,v1
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// vor128 v127,v2,v2
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// vor128 v0,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vupkd3d128 v59,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v59 = vTemp;
	// vmsum4fp128 v63,v124,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v124.f32), simde_mm_load_ps(v127.f32), 0xFF));
	// vslw128 v61,v61,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcsxwfp128 v57,v60,16
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// vsldoi128 v58,v3,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// vcsxwfp128 v11,v60,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v12,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vor128 v13,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vsldoi128 v61,v61,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// vpermwi128 v60,v59,234
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x15));
	// vspltw128 v9,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vxor128 v61,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vaddfp128 v123,v60,v61
	simde_mm_store_ps(v123.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v10,v62,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v62,v12,v57
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vsel v10,v0,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v122,v10,v10
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v2,v63,v122
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v122.u8)));
	// vnmsubfp v12,v2,v2,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpgtfp128 v126,v62,v2
	simde_mm_store_ps(v126.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v62,v0,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsel v13,v0,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vrefp v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v13.f32)));
	// vor v10,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v11,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v1,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vnmsubfp v8,v10,v0,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128 v125,v0,v0
	simde_mm_store_ps(v125.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel128 v125,v13,v0,v125
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// bl 0x82290bf8
	ctx.lr = 0x82291044;
	sub_82290BF8(ctx, base);
	// vmulfp128 v1,v123,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(v123.f32), simde_mm_load_ps(ctx.v1.f32)));
	// bl 0x82290980
	ctx.lr = 0x8229104C;
	sub_82290980(ctx, base);
	// vmulfp128 v0,v1,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v125.f32)));
	// vor128 v13,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v123.u8));
	// vor128 v12,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// vsel128 v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vspltw128 v63,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v124,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v124.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vxor128 v1,v62,v122
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)v122.u8)));
	// vmaddcfp128 v1,v127,v1,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d8d2c
	ctx.lr = 0x8229107C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E0A0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,22768
	ctx.r11.s64 = ctx.r11.s64 + 22768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8229e0dc
	if (ctx.cr6.eq) goto loc_8229E0DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822abf40
	ctx.lr = 0x8229E0DC;
	sub_822ABF40(ctx, base);
loc_8229E0DC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e0ec
	if (ctx.cr0.eq) goto loc_8229E0EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8229E0EC;
	sub_822C80A8(ctx, base);
loc_8229E0EC:
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

DEFINE_REX_FUNC(sub_8229E988) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229e99c
	if (!ctx.cr0.eq) goto loc_8229E99C;
loc_8229E994:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229E99C:
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e994
	if (ctx.cr6.eq) goto loc_8229E994;
	// b 0x8229deb8
	sub_8229DEB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229F0A0) {
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
	ctx.lr = 0x8229F0A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// li r3,88
	ctx.r3.s64 = 88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r24,31456(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 31456);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x822c80d0
	ctx.lr = 0x8229F0E0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229f0f4
	if (ctx.cr0.eq) goto loc_8229F0F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229e150
	ctx.lr = 0x8229F0F0;
	sub_8229E150(ctx, base);
	// b 0x8229f0f8
	goto loc_8229F0F8;
loc_8229F0F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8229F0F8:
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// clrlwi r6,r27,16
	ctx.r6.u64 = r27.u32 & 0xFFFF;
	// clrlwi r5,r28,16
	ctx.r5.u64 = r28.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8229e510
	ctx.lr = 0x8229F114;
	sub_8229E510(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8229ef30
	ctx.lr = 0x8229F120;
	sub_8229EF30(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// stb r10,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822A09D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a0ae8
	if (ctx.cr0.eq) goto loc_822A0AE8;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// addi r6,r10,-3160
	ctx.r6.s64 = ctx.r10.s64 + -3160;
	// bl 0x822a08b8
	ctx.lr = 0x822A0A10;
	sub_822A08B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq 0x822a0a68
	if (ctx.cr0.eq) goto loc_822A0A68;
loc_822A0A38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad9c0
	ctx.lr = 0x822A0A44;
	sub_822AD9C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822a0a38
	if (ctx.cr6.lt) goto loc_822A0A38;
loc_822A0A68:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r10,22792
	ctx.r10.s64 = ctx.r10.s64 + 22792;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a0aac
	if (ctx.cr0.eq) goto loc_822A0AAC;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8229fa58
	ctx.lr = 0x822A0AA4;
	sub_8229FA58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_822A0AAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f8c8
	ctx.lr = 0x822A0AB4;
	sub_8229F8C8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x8229fcd8
	ctx.lr = 0x822A0AD4;
	sub_8229FCD8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a0af0
	if (ctx.cr6.eq) goto loc_822A0AF0;
	// bl 0x822c80a8
	ctx.lr = 0x822A0AE4;
	sub_822C80A8(ctx, base);
	// b 0x822a0af0
	goto loc_822A0AF0;
loc_822A0AE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_822A0AF0:
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

DEFINE_REX_FUNC(sub_822A6F18) {
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
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f13,23016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23016);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822a6f78
	if (!ctx.cr6.gt) goto loc_822A6F78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x822a6f80
	goto loc_822A6F80;
loc_822A6F78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_822A6F80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822d4c88
	ctx.lr = 0x822A6F94;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x822d4d68
	ctx.lr = 0x822A6FD0;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

DEFINE_REX_FUNC(sub_822AA660) {
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
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aa690
	if (ctx.cr0.eq) goto loc_822AA690;
	// bl 0x822aa3a0
	ctx.lr = 0x822AA684;
	sub_822AA3A0(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AA690:
	// addi r3,r31,1296
	ctx.r3.s64 = r31.s64 + 1296;
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

DEFINE_REX_FUNC(sub_822AB51C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB580) {
	REX_FUNC_PROLOGUE();
	// lbz r10,255(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 255);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ab5a8
	if (!ctx.cr6.eq) goto loc_822AB5A8;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822AB5A8:
	// stb r4,255(r3)
	REX_STORE_U8(ctx.r3.u32 + 255, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC4D8) {
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
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x822c80d0
	ctx.lr = 0x822AC4F8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ac510
	if (ctx.cr0.eq) goto loc_822AC510;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822b2050
	ctx.lr = 0x822AC508;
	sub_822B2050(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822ac514
	goto loc_822AC514;
loc_822AC510:
	// li r31,0
	r31.s64 = 0;
loc_822AC514:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822ac2c0
	ctx.lr = 0x822AC520;
	sub_822AC2C0(ctx, base);
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

DEFINE_REX_FUNC(sub_822AD3A0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,23192
	ctx.r10.s64 = ctx.r10.s64 + 23192;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,480
	ctx.r10.s64 = ctx.r3.s64 + 480;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stfs f0,460(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stb r8,464(r3)
	REX_STORE_U8(ctx.r3.u32 + 464, ctx.r8.u8);
	// stb r8,468(r3)
	REX_STORE_U8(ctx.r3.u32 + 468, ctx.r8.u8);
	// stb r8,469(r3)
	REX_STORE_U8(ctx.r3.u32 + 469, ctx.r8.u8);
	// stw r11,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// stw r11,476(r3)
	REX_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stw r11,480(r3)
	REX_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// stw r11,484(r3)
	REX_STORE_U32(ctx.r3.u32 + 484, ctx.r11.u32);
loc_822AD484:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822ad484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AD484;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r31,528
	ctx.r10.s64 = r31.s64 + 528;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822AD4A0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822ad4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AD4A0;
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// stb r11,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r11.u8);
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
loc_822AD4D0:
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,465(r9)
	REX_STORE_U8(ctx.r9.u32 + 465, ctx.r8.u8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822ad4d0
	if (ctx.cr6.lt) goto loc_822AD4D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ac4d8
	ctx.lr = 0x822AD4F0;
	sub_822AC4D8(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822b11e8
	ctx.lr = 0x822AD4FC;
	sub_822B11E8(ctx, base);
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

DEFINE_REX_FUNC(sub_822B5AD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822b5af0
	if (!ctx.cr0.eq) goto loc_822B5AF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// blr 
	return;
loc_822B5AF0:
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ble cr6,0x822b5b2c
	if (!ctx.cr6.gt) goto loc_822B5B2C;
loc_822B5B04:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,528(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 528);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822b5b20
	if (!ctx.cr6.eq) goto loc_822B5B20;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B5B20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822b5b04
	if (ctx.cr6.lt) goto loc_822B5B04;
loc_822B5B2C:
	// stw r9,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8600) {
	REX_FUNC_PROLOGUE();
	// lwz r8,20(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x822c50b8
	sub_822C50B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B8AB0) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x822b8b00
	if (!ctx.cr6.eq) goto loc_822B8B00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b5c
	if (ctx.cr6.eq) goto loc_822B8B5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822268e0
	ctx.lr = 0x822B8AFC;
	sub_822268E0(ctx, base);
	// b 0x822b8b10
	goto loc_822B8B10;
loc_822B8B00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b5c
	if (ctx.cr6.eq) goto loc_822B8B5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822266d8
	ctx.lr = 0x822B8B10;
	sub_822266D8(ctx, base);
loc_822B8B10:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82216cc8
	ctx.lr = 0x822B8B18;
	sub_82216CC8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b5c
	if (ctx.cr6.eq) goto loc_822B8B5C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b8b54
	if (ctx.cr6.eq) goto loc_822B8B54;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822b8b58
	goto loc_822B8B58;
loc_822B8B54:
	// bl 0x822c80a8
	ctx.lr = 0x822B8B58;
	sub_822C80A8(ctx, base);
loc_822B8B58:
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_822B8B5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8b7c
	if (ctx.cr6.eq) goto loc_822B8B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_822B8B7C:
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

DEFINE_REX_FUNC(sub_822BA3B0) {
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
	ctx.lr = 0x822BA3B8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x822d6450
	ctx.lr = 0x822BA3D8;
	sub_822D6450(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x822ac180
	ctx.lr = 0x822BA3E4;
	sub_822AC180(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822b3b80
	ctx.lr = 0x822BA3F0;
	sub_822B3B80(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba47c
	if (!ctx.cr6.gt) goto loc_822BA47C;
loc_822BA410:
	// lwz r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lfs f31,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ba430
	if (ctx.cr6.lt) goto loc_822BA430;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822ac180
	ctx.lr = 0x822BA428;
	sub_822AC180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ba434
	goto loc_822BA434;
loc_822BA430:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822BA434:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822ba2d8
	ctx.lr = 0x822BA440;
	sub_822BA2D8(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d6450
	ctx.lr = 0x822BA44C;
	sub_822D6450(ctx, base);
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822ba410
	if (ctx.cr6.lt) goto loc_822BA410;
loc_822BA47C:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r3,112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x822c53f0
	ctx.lr = 0x822BA488;
	sub_822C53F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822C1C70) {
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
	ctx.lr = 0x822C1C78;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c1cc0
	if (ctx.cr6.eq) goto loc_822C1CC0;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c1cc4
	if (ctx.cr0.eq) goto loc_822C1CC4;
loc_822C1CC0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822C1CC4:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c1cd4
	if (!ctx.cr0.eq) goto loc_822C1CD4;
loc_822C1CCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c1ec8
	goto loc_822C1EC8;
loc_822C1CD4:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r11,r10,-3168
	ctx.r11.s64 = ctx.r10.s64 + -3168;
	// beq cr6,0x822c1cec
	if (ctx.cr6.eq) goto loc_822C1CEC;
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// b 0x822c1d00
	goto loc_822C1D00;
loc_822C1CEC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r9,384
	ctx.r10.s64 = ctx.r9.s64 + 384;
	// bne cr6,0x822c1cfc
	if (!ctx.cr6.eq) goto loc_822C1CFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822C1CFC:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_822C1D00:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x822c1d38
	if (ctx.cr6.eq) goto loc_822C1D38;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x822c1d44
	goto loc_822C1D44;
loc_822C1D38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c1d44
	if (ctx.cr6.eq) goto loc_822C1D44;
	// addi r11,r9,384
	ctx.r11.s64 = ctx.r9.s64 + 384;
loc_822C1D44:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f31,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	f31.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822bbfd0
	ctx.lr = 0x822C1DC4;
	sub_822BBFD0(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822c1ccc
	if (ctx.cr6.gt) goto loc_822C1CCC;
	// lfs f31,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f30.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - f29.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f4c50
	ctx.lr = 0x822C1E0C;
	sub_821F4C50(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f8,f31,f12
	ctx.f8.f64 = double(float(f31.f64 - ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f6,f13,f13,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f0,f8,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f0.f64)));
	// fnmsubs f13,f7,f7,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f7.f64, -ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822c1e68
	if (!ctx.cr6.gt) goto loc_822C1E68;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822c1ccc
	if (ctx.cr6.gt) goto loc_822C1CCC;
loc_822C1E68:
	// fmsubs f13,f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x822c1ccc
	if (ctx.cr6.lt) goto loc_822C1CCC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822c1e98
	if (!ctx.cr6.lt) goto loc_822C1E98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_822C1E98:
	// fmuls f13,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fadds f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 + ctx.f11.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
loc_822C1EC8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_822CB850) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// addi r11,r11,25952
	ctx.r11.s64 = ctx.r11.s64 + 25952;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,31788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31788);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,31788(r31)
	REX_STORE_U32(r31.u32 + 31788, ctx.r11.u32);
	// bgt 0x822cb88c
	if (ctx.cr0.gt) goto loc_822CB88C;
	// bl 0x822356a0
	ctx.lr = 0x822CB884;
	sub_822356A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31788(r31)
	REX_STORE_U32(r31.u32 + 31788, ctx.r11.u32);
loc_822CB88C:
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

DEFINE_REX_FUNC(sub_822CCAE0) {
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
	ctx.lr = 0x822CCAE8;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ccb18
	if (!ctx.cr6.eq) goto loc_822CCB18;
loc_822CCB04:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x822ccb9c
	goto loc_822CCB9C;
loc_822CCB18:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822d2198
	ctx.lr = 0x822CCB24;
	sub_822D2198(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ccb04
	if (ctx.cr6.eq) goto loc_822CCB04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d4340
	ctx.lr = 0x822CCB70;
	sub_822D4340(ctx, base);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq 0x822ccb80
	if (ctx.cr0.eq) goto loc_822CCB80;
	// li r11,5
	ctx.r11.s64 = 5;
loc_822CCB80:
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x822cdf98
	ctx.lr = 0x822CCB90;
	sub_822CDF98(ctx, base);
	// oris r10,r29,32768
	ctx.r10.u64 = r29.u64 | 2147483648;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_822CCB9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822CF734) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CFB40) {
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
	// addi r11,r11,26260
	ctx.r11.s64 = ctx.r11.s64 + 26260;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822ce5c0
	ctx.lr = 0x822CFB6C;
	sub_822CE5C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfb7c
	if (ctx.cr0.eq) goto loc_822CFB7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822CFB7C;
	sub_822C80A8(ctx, base);
loc_822CFB7C:
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

DEFINE_REX_FUNC(sub_822D0D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D0D98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r30,r3,220
	r30.s64 = ctx.r3.s64 + 220;
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
	ctx.lr = 0x822D0DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1B40) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1B84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
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

DEFINE_REX_FUNC(sub_822D2BD0) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2cc8
	if (ctx.cr0.eq) goto loc_822D2CC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f10,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x822d2c2c
	if (!ctx.cr6.eq) goto loc_822D2C2C;
	// lfs f9,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// b 0x822d2c34
	goto loc_822D2C34;
loc_822D2C2C:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_822D2C34:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822d2c40
	if (!ctx.cr6.lt) goto loc_822D2C40;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_822D2C40:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822d2c4c
	if (!ctx.cr6.gt) goto loc_822D2C4C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822D2C4C:
	// fmuls f31,f0,f11
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// ble cr6,0x822d2c60
	if (!ctx.cr6.gt) goto loc_822D2C60;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_822D2C60:
	// fcmpu cr6,f31,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f10.f64);
	// bgt cr6,0x822d2ca0
	if (ctx.cr6.gt) goto loc_822D2CA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1ba0
	ctx.lr = 0x822D2C70;
	sub_822D1BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2c90
	if (ctx.cr0.eq) goto loc_822D2C90;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r11,96(r31)
	REX_STORE_U8(r31.u32 + 96, ctx.r11.u8);
	// bl 0x822d0d90
	ctx.lr = 0x822D2C8C;
	sub_822D0D90(ctx, base);
	// b 0x822d2cc8
	goto loc_822D2CC8;
loc_822D2C90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D2C98;
	sub_822D1718(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d2ccc
	goto loc_822D2CCC;
loc_822D2CA0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2CBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d1e28
	ctx.lr = 0x822D2CC8;
	sub_822D1E28(ctx, base);
loc_822D2CC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D2CCC:
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

DEFINE_REX_FUNC(sub_822D6188) {
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
	// bl 0x822dbeb0
	ctx.lr = 0x822D619C;
	sub_822DBEB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d6900
	ctx.lr = 0x822D61A4;
	sub_822D6900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822db8d0
	ctx.lr = 0x822D61AC;
	sub_822DB8D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822dbe98
	ctx.lr = 0x822D61B4;
	sub_822DBE98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6F00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29928
	ctx.r11.s64 = ctx.r11.s64 + 29928;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7C00) {
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
	// bne cr6,0x822d7c30
	if (!ctx.cr6.eq) goto loc_822D7C30;
	// bl 0x822db6c0
	ctx.lr = 0x822D7C1C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D7C28;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822d7d38
	goto loc_822D7D38;
loc_822D7C30:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d7c50
	if (!ctx.cr6.eq) goto loc_822D7C50;
loc_822D7C38:
	// bl 0x822db6c0
	ctx.lr = 0x822D7C3C;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D7C40:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D7C48;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d7d38
	goto loc_822D7D38;
loc_822D7C50:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r31,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822d7c7c
	if (ctx.cr6.gt) goto loc_822D7C7C;
loc_822D7C70:
	// bl 0x822db6c0
	ctx.lr = 0x822D7C74;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d7c40
	goto loc_822D7C40;
loc_822D7C7C:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x822d7c38
	if (ctx.cr6.lt) goto loc_822D7C38;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bgt cr6,0x822d7c38
	if (ctx.cr6.gt) goto loc_822D7C38;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822d7cb0
	if (ctx.cr6.eq) goto loc_822D7CB0;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// sth r10,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_822D7CB0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822D7CB4:
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
	// ble cr6,0x822d7cdc
	if (!ctx.cr6.gt) goto loc_822D7CDC;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x822d7ce0
	goto loc_822D7CE0;
loc_822D7CDC:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_822D7CE0:
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7cfc
	if (ctx.cr6.eq) goto loc_822D7CFC;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822d7cb4
	if (ctx.cr6.lt) goto loc_822D7CB4;
loc_822D7CFC:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822d7d0c
	if (ctx.cr6.lt) goto loc_822D7D0C;
	// sth r31,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// b 0x822d7c70
	goto loc_822D7C70;
loc_822D7D0C:
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_822D7D14:
	// lhz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d7d14
	if (ctx.cr6.lt) goto loc_822D7D14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D7D38:
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

DEFINE_REX_FUNC(__savevmx_112) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_14) {
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
	// lvx v14,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_103) {
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

DEFINE_REX_FUNC(sub_822DA780) {
	REX_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822da7a8
	if (!ctx.cr6.eq) goto loc_822DA7A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822da7c4
	if (!ctx.cr6.eq) goto loc_822DA7C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DA7A8:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822da7c4
	if (!ctx.cr6.eq) goto loc_822DA7C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822da7c4
	if (!ctx.cr6.eq) goto loc_822DA7C4;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_822DA7C4:
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x822da7dc
	if (!ctx.cr6.eq) goto loc_822DA7DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_822DA7DC:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x822da7fc
	if (!ctx.cr6.eq) goto loc_822DA7FC;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822da7f4
	if (!ctx.cr0.eq) goto loc_822DA7F4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822da7fc
	if (ctx.cr6.eq) goto loc_822DA7FC;
loc_822DA7F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_822DA7FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCA64) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCC80) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1136
	ctx.r11.s64 = ctx.r11.s64 + -1136;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dccd0
	if (ctx.cr6.lt) goto loc_822DCCD0;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822dccd0
	if (ctx.cr6.gt) goto loc_822DCCD0;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822dbd80
	ctx.lr = 0x822DCCC0;
	sub_822DBD80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x822dccd8
	goto loc_822DCCD8;
loc_822DCCD0:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x824d438c
	ctx.lr = 0x822DCCD8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_822DCCD8:
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

DEFINE_REX_FUNC(sub_822E0E78) {
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
	ctx.lr = 0x822E0E80;
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
	// li r24,-1
	r24.s64 = -1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	REX_STORE_U64(r31.u32 + 80, r24.u64);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e0ecc
	if (!ctx.cr6.eq) goto loc_822E0ECC;
	// bl 0x822db6f8
	ctx.lr = 0x822E0EAC;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E0EB8;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e0f98
	goto loc_822E0F98;
loc_822E0ECC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822e0ee4
	if (ctx.cr6.lt) goto loc_822E0EE4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e0f08
	if (ctx.cr6.lt) goto loc_822E0F08;
loc_822E0EE4:
	// bl 0x822db6f8
	ctx.lr = 0x822E0EE8;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E0EF4;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E0F00;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e0f98
	goto loc_822E0F98;
loc_822E0F08:
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
	// beq 0x822e0ee4
	if (ctx.cr0.eq) goto loc_822E0EE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e5be0
	ctx.lr = 0x822E0F3C;
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
	// beq 0x822e0f6c
	if (ctx.cr0.eq) goto loc_822E0F6C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e0da8
	ctx.lr = 0x822E0F64;
	sub_822E0DA8(ctx, base);
	// std r3,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// b 0x822e0f88
	goto loc_822E0F88;
loc_822E0F6C:
	// bl 0x822db6c0
	ctx.lr = 0x822E0F70;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E0F7C;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	REX_STORE_U64(r31.u32 + 80, r24.u64);
loc_822E0F88:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x822e0fc0
	ctx.lr = 0x822E0F94;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E0FC0(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// ld r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 80);
loc_822E0F98:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822E8E40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-29832
	ctx.r10.s64 = ctx.r11.s64 + -29832;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822eeef8
	sub_822EEEF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E9110) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e9148
	if (ctx.cr6.eq) goto loc_822E9148;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E9148:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E915C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,44(r30)
	REX_STORE_U32(r30.u32 + 44, r31.u32);
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

DEFINE_REX_FUNC(sub_822EA938) {
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
	// beq cr6,0x822ea970
	if (ctx.cr6.eq) goto loc_822EA970;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
loc_822EA970:
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

DEFINE_REX_FUNC(sub_822EC548) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822ECA78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822ECA80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// beq cr6,0x822ecab8
	if (ctx.cr6.eq) goto loc_822ECAB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ecb48
	if (ctx.cr6.lt) goto loc_822ECB48;
loc_822ECAB8:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ecad8
	if (ctx.cr6.eq) goto loc_822ECAD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECAD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822ECAD8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822ecb48
	if (ctx.cr6.lt) goto loc_822ECB48;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ecb00
	if (ctx.cr6.eq) goto loc_822ECB00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECAFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822ECB00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822ecb48
	if (ctx.cr6.lt) goto loc_822ECB48;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822f48a8
	ctx.lr = 0x822ECB10;
	sub_822F48A8(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x822f48a8
	ctx.lr = 0x822ECB18;
	sub_822F48A8(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822f48a8
	ctx.lr = 0x822ECB20;
	sub_822F48A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r29,288(r31)
	REX_STORE_U64(r31.u32 + 288, r29.u64);
	// std r29,304(r31)
	REX_STORE_U64(r31.u32 + 304, r29.u64);
	// std r29,296(r31)
	REX_STORE_U64(r31.u32 + 296, r29.u64);
	// stw r29,316(r31)
	REX_STORE_U32(r31.u32 + 316, r29.u32);
	// stw r29,320(r31)
	REX_STORE_U32(r31.u32 + 320, r29.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,324(r31)
	REX_STORE_U32(r31.u32 + 324, r29.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stw r29,328(r31)
	REX_STORE_U32(r31.u32 + 328, r29.u32);
loc_822ECB48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822EF0A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r8,52(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EF0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r3,r5,10
	ctx.r3.u64 = ctx.r5.u64 | 10;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2140) {
	REX_FUNC_PROLOGUE();
	// stw r4,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2160) {
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
	// bl 0x822fb760
	ctx.lr = 0x822F2178;
	sub_822FB760(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// addi r10,r11,-26232
	ctx.r10.s64 = ctx.r11.s64 + -26232;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822d5870
	ctx.lr = 0x822F2194;
	sub_822D5870(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F21A4;
	sub_822D5870(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// bl 0x822fb6d0
	ctx.lr = 0x822F21B4;
	sub_822FB6D0(ctx, base);
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

DEFINE_REX_FUNC(sub_822F43C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4678) {
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
	// lwz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4B78) {
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
	// addi r10,r11,-26048
	ctx.r10.s64 = ctx.r11.s64 + -26048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822f44d8
	ctx.lr = 0x822F4BA4;
	sub_822F44D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822F4BAC;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f4bcc
	if (ctx.cr6.eq) goto loc_822F4BCC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x823cd250
	ctx.lr = 0x822F4BC8;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F4BCC:
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

DEFINE_REX_FUNC(sub_822F6090) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x824d459c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F6138) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x824d445c
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F61C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7108) {
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
	// stw r4,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f72d0
	if (ctx.cr6.lt) goto loc_822F72D0;
loc_822F7140:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8221a910
	ctx.lr = 0x822F7148;
	sub_8221A910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F715C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,264(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F7174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,268(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F718C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// bl 0x823cde90
	ctx.lr = 0x822F7194;
	sub_823CDE90(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x823cde90
	ctx.lr = 0x822F719C;
	sub_823CDE90(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// bl 0x823cde90
	ctx.lr = 0x822F71A4;
	sub_823CDE90(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822F71B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F71CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F71E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,188(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F71F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822F7208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8221a8d0
	ctx.lr = 0x822F7210;
	sub_8221A8D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,252(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 252);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F7238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822f72bc
	if (ctx.cr6.eq) goto loc_822F72BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f72bc
	if (!ctx.cr6.eq) goto loc_822F72BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f72bc
	if (!ctx.cr6.eq) goto loc_822F72BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,160(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 160);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F72AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f7140
	if (!ctx.cr6.lt) goto loc_822F7140;
	// b 0x822f72d0
	goto loc_822F72D0;
loc_822F72BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F72D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F72D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82302988) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x82302990;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r17,56(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r18,r11,-25248
	r18.s64 = ctx.r11.s64 + -25248;
	// dcbt r0,r18
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r18
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823029dc
	if (!ctx.cr6.gt) goto loc_823029DC;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823029f4
	if (ctx.cr6.gt) goto loc_823029F4;
loc_823029DC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_823029F4:
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// li r24,0
	r24.s64 = 0;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r23,r8,r11
	r23.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82302a2c
	if (!ctx.cr6.gt) goto loc_82302A2C;
loc_82302A1C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r23,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (r23.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82302a1c
	if (ctx.cr6.gt) goto loc_82302A1C;
loc_82302A2C:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82302a64
	if (!ctx.cr6.gt) goto loc_82302A64;
loc_82302A54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82302a54
	if (ctx.cr6.gt) goto loc_82302A54;
loc_82302A64:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// add r27,r11,r9
	r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82302a8c
	if (!ctx.cr6.gt) goto loc_82302A8C;
loc_82302A7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82302a7c
	if (ctx.cr6.gt) goto loc_82302A7C;
loc_82302A8C:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mullw r4,r6,r23
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r23.s32);
	// lwzx r21,r7,r8
	r21.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srawi r11,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 12;
	// li r30,0
	r30.s64 = 0;
	// extsh r19,r3
	r19.s64 = ctx.r3.s16;
	// li r29,-1
	r29.s64 = -1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82302aec
	if (ctx.cr6.lt) goto loc_82302AEC;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
loc_82302ADC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82302adc
	if (!ctx.cr6.lt) goto loc_82302ADC;
loc_82302AEC:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82302B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302e60
	if (ctx.cr6.lt) goto loc_82302E60;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r22,r19
	r22.s64 = r19.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x82302d0c
	if (!ctx.cr6.lt) goto loc_82302D0C;
	// li r26,1
	r26.s64 = 1;
loc_82302B40:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x82302d0c
	if (!ctx.cr6.lt) goto loc_82302D0C;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// mullw r8,r11,r23
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82302b88
	if (ctx.cr6.lt) goto loc_82302B88;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r23
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r23.s32);
	// srawi r8,r7,12
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 12;
loc_82302B78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82302b78
	if (!ctx.cr6.lt) goto loc_82302B78;
loc_82302B88:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x82302d0c
	if (!ctx.cr6.lt) goto loc_82302D0C;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bne cr6,0x82302bd4
	if (!ctx.cr6.eq) goto loc_82302BD4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	f31.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x823204b8
	ctx.lr = 0x82302BCC;
	sub_823204B8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x82302bfc
	goto loc_82302BFC;
loc_82302BD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823204b8
	ctx.lr = 0x82302BDC;
	sub_823204B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f1
	f31.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
loc_82302BFC:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(r24.s32, 12, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82302c2c
	if (!ctx.cr6.gt) goto loc_82302C2C;
	// addi r10,r24,-13
	ctx.r10.s64 = r24.s64 + -13;
	// addi r8,r24,-12
	ctx.r8.s64 = r24.s64 + -12;
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sraw r6,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r6.s64 = ctx.r7.s32 >> temp.u32;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// b 0x82302c3c
	goto loc_82302C3C;
loc_82302C2C:
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// subfic r10,r24,12
	ctx.xer.ca = r24.u32 <= 12;
	ctx.r10.u64 = static_cast<uint64_t>(12) - r24.u64;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
loc_82302C3C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(r29.s32, r22.s32, ctx.xer);
	// ble cr6,0x82302c54
	if (!ctx.cr6.gt) goto loc_82302C54;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82302C54:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82302c64
	if (ctx.cr6.eq) goto loc_82302C64;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_82302C64:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + r17.u32, temp.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82302C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302e60
	if (ctx.cr6.lt) goto loc_82302E60;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82302cf8
	if (!ctx.cr6.lt) goto loc_82302CF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x82302cdc
	if (!ctx.cr6.lt) goto loc_82302CDC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x82302c54
	goto loc_82302C54;
loc_82302CDC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	f31.f64 = double(float(ctx.f12.f64 * f30.f64));
	// b 0x82302c54
	goto loc_82302C54;
loc_82302CF8:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r22.s32, ctx.xer);
	// blt cr6,0x82302b40
	if (ctx.cr6.lt) goto loc_82302B40;
loc_82302D0C:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// bne cr6,0x82302db8
	if (!ctx.cr6.eq) goto loc_82302DB8;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82302d7c
	if (ctx.cr6.lt) goto loc_82302D7C;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x82302d60
	if (!ctx.cr6.lt) goto loc_82302D60;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_82302D38:
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r6,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 12;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82302d60
	if (ctx.cr6.lt) goto loc_82302D60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// blt cr6,0x82302d38
	if (ctx.cr6.lt) goto loc_82302D38;
loc_82302D60:
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// bgt cr6,0x82302d7c
	if (ctx.cr6.gt) goto loc_82302D7C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823204b8
	ctx.lr = 0x82302D78;
	sub_823204B8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82302D7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * f30.f64));
	// beq cr6,0x82302da8
	if (ctx.cr6.eq) goto loc_82302DA8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82302DA8:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r17.u32, temp.u32);
loc_82302DB8:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lhz r10,118(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823029dc
	if (ctx.cr6.gt) goto loc_823029DC;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82302dec
	if (!ctx.cr6.gt) goto loc_82302DEC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d5870
	ctx.lr = 0x82302DEC;
	sub_822D5870(ctx, base);
loc_82302DEC:
	// lhz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82302E10;
	sub_822D5870(ctx, base);
	// lhz r7,202(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 202);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r22.s32, ctx.xer);
	// bne cr6,0x82302e40
	if (!ctx.cr6.eq) goto loc_82302E40;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,490(r25)
	REX_STORE_U16(r25.u32 + 490, ctx.r11.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_82302E40:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r25)
	REX_STORE_U16(r25.u32 + 490, ctx.r9.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_82302E60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82315C08) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82316EE0) {
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
	ctx.lr = 0x82316EE8;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,244(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r30,0
	r30.s64 = 0;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fdivs f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// ble cr6,0x82316fd0
	if (!ctx.cr6.gt) goto loc_82316FD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// lfs f30,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f31,-18416(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18416);
	f31.f64 = double(temp.f32);
loc_82316F48:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// divw r31,r11,r10
	r31.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f30.f64)));
	// bl 0x822d60f0
	ctx.lr = 0x82316F88;
	sub_822D60F0(ctx, base);
	// fctiwz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82316fa0
	if (!ctx.cr6.lt) goto loc_82316FA0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82316FA0:
	// srawi r10,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r10.s64 = r31.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82316fb4
	if (ctx.cr6.lt) goto loc_82316FB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82316FB4:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 352);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,244(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 244);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82316f48
	if (ctx.cr6.lt) goto loc_82316F48;
loc_82316FD0:
	// lwz r11,352(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_82320E10) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x82320E18;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r17,r20
	r17.u64 = r20.u64;
	// bl 0x82320878
	ctx.lr = 0x82320E3C;
	sub_82320878(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8232108c
	if (ctx.cr6.eq) goto loc_8232108C;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82320e68
	if (!ctx.cr6.eq) goto loc_82320E68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232108c
	if (ctx.cr6.eq) goto loc_8232108C;
	// lwz r16,28(r25)
	r16.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r24,40(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lwz r10,32(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 32);
	// b 0x82320e7c
	goto loc_82320E7C;
loc_82320E68:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232108c
	if (ctx.cr6.eq) goto loc_8232108C;
	// lwz r16,4(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r24,18(r30)
	r24.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
loc_82320E7C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x8232108c
	if (!ctx.cr6.gt) goto loc_8232108C;
	// subfic r11,r24,24
	ctx.xer.ca = r24.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - r24.u64;
	// li r18,1
	r18.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82320eb8
	if (ctx.cr6.lt) goto loc_82320EB8;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x82320ee4
	goto loc_82320EE4;
loc_82320EB8:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r8,r18,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_82320EE4:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bne cr6,0x82320f04
	if (!ctx.cr6.eq) goto loc_82320F04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320670
	ctx.lr = 0x82320F00;
	sub_82320670(ctx, base);
	// b 0x8232113c
	goto loc_8232113C;
loc_82320F04:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// lwz r11,92(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82320F50;
	sub_822D4FA0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82320f6c
	if (!ctx.cr6.eq) goto loc_82320F6C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823210cc
	if (ctx.cr6.eq) goto loc_823210CC;
loc_82320F6C:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232108c
	if (ctx.cr6.eq) goto loc_8232108C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8232108c
	if (ctx.cr6.lt) goto loc_8232108C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f0,-15736(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -15736);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8232108c
	if (!ctx.cr6.eq) goto loc_8232108C;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f31,31912(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + 31912);
	// lfd f0,-16(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -16);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8232108c
	if (!ctx.cr6.eq) goto loc_8232108C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823143c0
	ctx.lr = 0x82320FC4;
	sub_823143C0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82320fe8
	if (!ctx.cr6.eq) goto loc_82320FE8;
loc_82320FD0:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,14
	r17.u64 = r17.u64 | 14;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
loc_82320FE8:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823210cc
	if (!ctx.cr6.gt) goto loc_823210CC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_82321004:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stfdx f0,r8,r9
	REX_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.f0.u64);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f13,8(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// stfd f13,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.f13.u64);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823210a4
	if (ctx.cr6.eq) goto loc_823210A4;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfdx f0,r11,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r8,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfd f12,8(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f10,8(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fsub f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 - ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// stfd f8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.f8.u64);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lfdx f7,r8,r10
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f6,r11,r10
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x823210b0
	if (!ctx.cr6.lt) goto loc_823210B0;
loc_8232108C:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,87
	r17.u64 = r17.u64 | 87;
loc_82321094:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
loc_823210A4:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfd f31,16(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 16, f31.u64);
loc_823210B0:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82321004
	if (ctx.cr6.lt) goto loc_82321004;
loc_823210CC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823210ec
	if (ctx.cr6.eq) goto loc_823210EC;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r18,56(r31)
	REX_STORE_U32(r31.u32 + 56, r18.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_823210EC:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321114
	if (!ctx.cr6.eq) goto loc_82321114;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321114
	if (!ctx.cr6.eq) goto loc_82321114;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq cr6,0x82321118
	if (ctx.cr6.eq) goto loc_82321118;
loc_82321114:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82321118:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232112c
	if (ctx.cr6.eq) goto loc_8232112C;
	// stw r18,96(r31)
	REX_STORE_U32(r31.u32 + 96, r18.u32);
loc_8232112C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232113c
	if (!ctx.cr6.eq) goto loc_8232113C;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
loc_8232113C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321164
	if (ctx.cr6.eq) goto loc_82321164;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82321164
	if (ctx.cr6.eq) goto loc_82321164;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82321164
	if (ctx.cr6.eq) goto loc_82321164;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8232108c
	if (!ctx.cr6.eq) goto loc_8232108C;
loc_82321164:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232117c
	if (ctx.cr6.eq) goto loc_8232117C;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232108c
	if (!ctx.cr6.eq) goto loc_8232108C;
loc_8232117C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82321188;
	sub_823143C0(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823211A0;
	sub_823143C0(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r19,1000
	r19.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,-15788
	r29.s64 = ctx.r10.s64 + -15788;
	// beq cr6,0x823211e4
	if (ctx.cr6.eq) goto loc_823211E4;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82320518
	ctx.lr = 0x823211D4;
	sub_82320518(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// b 0x823211ec
	goto loc_823211EC;
loc_823211E4:
	// lis r30,16384
	r30.s64 = 1073741824;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_823211EC:
	// lwz r27,176(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r10,r27,r30
	ctx.r10.u64 = r30.u64 - r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// beq cr6,0x82321220
	if (ctx.cr6.eq) goto loc_82321220;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82320518
	ctx.lr = 0x82321214;
	sub_82320518(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// b 0x82321224
	goto loc_82321224;
loc_82321220:
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_82321224:
	// lwz r28,180(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r28,r30
	ctx.r10.u64 = r30.u64 - r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// beq cr6,0x82321258
	if (ctx.cr6.eq) goto loc_82321258;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82320518
	ctx.lr = 0x8232124C;
	sub_82320518(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// b 0x8232125c
	goto loc_8232125C;
loc_82321258:
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_8232125C:
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x82321290
	if (ctx.cr6.eq) goto loc_82321290;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x82320518
	ctx.lr = 0x82321284;
	sub_82320518(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// b 0x82321294
	goto loc_82321294;
loc_82321290:
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_82321294:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// divw r10,r30,r27
	ctx.r10.u64 = uint32_t((r27.s32 && !(r30.s32 == INT32_MIN && r27.s32 == -1)) ? r30.s32 / r27.s32 : 0);
	// divw r9,r30,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(r30.s32 == INT32_MIN && r28.s32 == -1)) ? r30.s32 / r28.s32 : 0);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x823212d4
	if (!ctx.cr6.eq) goto loc_823212D4;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823212d4
	if (ctx.cr6.gt) goto loc_823212D4;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_823212D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823212f4
	if (!ctx.cr6.eq) goto loc_823212F4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823212f4
	if (ctx.cr6.gt) goto loc_823212F4;
	// stw r18,0(r25)
	REX_STORE_U32(r25.u32 + 0, r18.u32);
	// stw r20,8(r25)
	REX_STORE_U32(r25.u32 + 8, r20.u32);
loc_823212F4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82321320
	if (!ctx.cr6.eq) goto loc_82321320;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r11,r26,16
	ctx.r11.s64 = r26.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82321320
	if (ctx.cr6.gt) goto loc_82321320;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// ld r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 16);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_82321320:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232134c
	if (!ctx.cr6.eq) goto loc_8232134C;
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r11,r26,24
	ctx.r11.s64 = r26.s64 + 24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8232134c
	if (ctx.cr6.gt) goto loc_8232134C;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// ld r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_8232134C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321400
	if (ctx.cr6.eq) goto loc_82321400;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 16);
	// bl 0x823205a8
	ctx.lr = 0x8232136C;
	sub_823205A8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 8);
	// bl 0x823205a8
	ctx.lr = 0x8232138C;
	sub_823205A8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 16);
	// bl 0x823205a8
	ctx.lr = 0x823213AC;
	sub_823205A8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,24(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 24);
	// bl 0x823205a8
	ctx.lr = 0x823213CC;
	sub_823205A8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x823213f8
	if (ctx.cr6.lt) goto loc_823213F8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82321410
	if (!ctx.cr6.lt) goto loc_82321410;
loc_823213F8:
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x82321410
	goto loc_82321410;
loc_82321400:
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82321410:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321434
	if (ctx.cr6.eq) goto loc_82321434;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321438
	if (ctx.cr6.eq) goto loc_82321438;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321438
	if (ctx.cr6.eq) goto loc_82321438;
loc_82321434:
	// stw r18,256(r31)
	REX_STORE_U32(r31.u32 + 256, r18.u32);
loc_82321438:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321540
	if (ctx.cr6.eq) goto loc_82321540;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321540
	if (ctx.cr6.eq) goto loc_82321540;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82321478
	if (!ctx.cr6.eq) goto loc_82321478;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82321478
	if (!ctx.cr6.eq) goto loc_82321478;
	// addis r10,r25,192
	ctx.r10.s64 = r25.s64 + 12582912;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r8,r10,r20
	ctx.r8.u64 = r20.u64 - ctx.r10.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_82321478:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r7,r25,r8
	ctx.r7.u64 = ctx.r8.u64 - r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 + r26.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addme r3,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// and r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xoris r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r5,r9,r3
	ctx.xer.ca = ctx.r9.u32 + ctx.r3.u32 < ctx.r9.u32;
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r5,r10,r20
	ctx.r5.u64 = r20.u64 - ctx.r10.u64;
	// subf r9,r25,r4
	ctx.r9.u64 = ctx.r4.u64 - r25.u64;
	// subfe r4,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r3,r5,r6
	ctx.xer.ca = ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32;
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfic r3,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addme r3,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r6,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r4,r10,r20
	ctx.r4.u64 = r20.u64 - ctx.r10.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r4,r7
	ctx.xer.ca = ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32;
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// and r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_82321540:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823215e8
	if (!ctx.cr6.gt) goto loc_823215E8;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82321554;
	sub_823143C0(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82321570;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x8232157C;
	sub_823143C0(ctx, base);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82321598;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823215A4;
	sub_823143C0(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823215C0;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823215CC;
	sub_823143C0(ctx, base);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823215E8;
	sub_822D5870(ctx, base);
loc_823215E8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823216b8
	if (ctx.cr6.eq) goto loc_823216B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321618
	if (ctx.cr6.eq) goto loc_82321618;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823216b8
	if (ctx.cr6.eq) goto loc_823216B8;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823216b8
	if (ctx.cr6.eq) goto loc_823216B8;
loc_82321618:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82321624;
	sub_823143C0(ctx, base);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82321640;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x8232164C;
	sub_823143C0(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82321668;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82321674;
	sub_823143C0(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82321690;
	sub_822D5870(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x8232169C;
	sub_823143C0(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320fd0
	if (ctx.cr6.eq) goto loc_82320FD0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823216B8;
	sub_822D5870(ctx, base);
loc_823216B8:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x823216e4
	if (!ctx.cr6.gt) goto loc_823216E4;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823216e4
	if (!ctx.cr6.eq) goto loc_823216E4;
	// lis r17,-32764
	r17.s64 = -2147221504;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
loc_823216E4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// lis r23,-1024
	r23.s64 = -67108864;
	// ori r21,r9,65535
	r21.u64 = ctx.r9.u64 | 65535;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r22,r11,-16084
	r22.s64 = ctx.r11.s64 + -16084;
	// ble cr6,0x82321850
	if (!ctx.cr6.gt) goto loc_82321850;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8232170C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r20,200(r31)
	REX_STORE_U32(r31.u32 + 200, r20.u32);
	// stw r20,208(r31)
	REX_STORE_U32(r31.u32 + 208, r20.u32);
	// stw r20,204(r31)
	REX_STORE_U32(r31.u32 + 204, r20.u32);
	// stwx r20,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r20.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321808
	if (ctx.cr6.eq) goto loc_82321808;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r29,r6,r8
	r29.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - r25.u64;
	// stwx r5,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r29,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// subf r28,r26,r29
	r28.u64 = r29.u64 - r26.u64;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x82321774
	if (!ctx.cr6.lt) goto loc_82321774;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x82321780
	goto loc_82321780;
loc_82321774:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r21.s32, ctx.xer);
	// ble cr6,0x82321780
	if (!ctx.cr6.gt) goto loc_82321780;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_82321780:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82320518
	ctx.lr = 0x82321788;
	sub_82320518(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r10,-10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -10485, ctx.xer);
	// ble cr6,0x823217ac
	if (!ctx.cr6.gt) goto loc_823217AC;
	// cmpwi cr6,r10,10485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10485, ctx.xer);
	// bge cr6,0x823217ac
	if (!ctx.cr6.lt) goto loc_823217AC;
	// cmpwi cr6,r28,-10485
	ctx.cr6.compare<int32_t>(r28.s32, -10485, ctx.xer);
	// bgt cr6,0x823217b0
	if (ctx.cr6.gt) goto loc_823217B0;
loc_823217AC:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_823217B0:
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + r26.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x82321808
	if (ctx.cr6.lt) goto loc_82321808;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi. r10,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// bne 0x823217dc
	if (!ctx.cr0.eq) goto loc_823217DC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x823217f8
	goto loc_823217F8;
loc_823217DC:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_823217F8:
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82321808:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321824
	if (ctx.cr6.eq) goto loc_82321824;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232183c
	if (ctx.cr6.eq) goto loc_8232183C;
loc_82321824:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320b68
	ctx.lr = 0x82321830;
	sub_82320B68(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
loc_8232183C:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8232170c
	if (ctx.cr6.lt) goto loc_8232170C;
loc_82321850:
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// mr r28,r20
	r28.u64 = r20.u64;
	// ori r29,r11,65534
	r29.u64 = ctx.r11.u64 | 65534;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,276(r31)
	REX_STORE_U32(r31.u32 + 276, r29.u32);
	// ble cr6,0x823218dc
	if (!ctx.cr6.gt) goto loc_823218DC;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82321874:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823218c8
	if (ctx.cr6.eq) goto loc_823218C8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r23.s32, ctx.xer);
	// bge cr6,0x823218a0
	if (!ctx.cr6.lt) goto loc_823218A0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x823218ac
	goto loc_823218AC;
loc_823218A0:
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r21.s32, ctx.xer);
	// ble cr6,0x823218ac
	if (!ctx.cr6.gt) goto loc_823218AC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_823218AC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82320518
	ctx.lr = 0x823218B4;
	sub_82320518(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulld r9,r11,r29
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * r29.u64);
	// sradi r8,r9,20
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 20;
	// stwx r8,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r8.u32);
loc_823218C8:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321874
	if (ctx.cr6.lt) goto loc_82321874;
loc_823218DC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r30,16
	r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321948
	if (ctx.cr6.eq) goto loc_82321948;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232190c
	if (ctx.cr6.eq) goto loc_8232190C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320db0
	ctx.lr = 0x82321900;
	sub_82320DB0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82321094
	if (ctx.cr6.lt) goto loc_82321094;
loc_8232190C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321948
	if (!ctx.cr6.eq) goto loc_82321948;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321948
	if (!ctx.cr6.gt) goto loc_82321948;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8232192C:
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232192c
	if (ctx.cr6.lt) goto loc_8232192C;
loc_82321948:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232196c
	if (ctx.cr6.eq) goto loc_8232196C;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321964
	if (ctx.cr6.eq) goto loc_82321964;
	// bl 0x823143d0
	ctx.lr = 0x82321964;
	sub_823143D0(ctx, base);
loc_82321964:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
loc_8232196C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r20,144(r31)
	REX_STORE_U32(r31.u32 + 144, r20.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,216(r31)
	REX_STORE_U32(r31.u32 + 216, r20.u32);
	// beq cr6,0x82321998
	if (ctx.cr6.eq) goto loc_82321998;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// divw r9,r10,r19
	ctx.r9.u64 = uint32_t((r19.s32 && !(ctx.r10.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r10.s32 / r19.s32 : 0);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// b 0x8232199c
	goto loc_8232199C;
loc_82321998:
	// stw r20,212(r31)
	REX_STORE_U32(r31.u32 + 212, r20.u32);
loc_8232199C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321094
	if (ctx.cr6.eq) goto loc_82321094;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x823219d0
	if (ctx.cr6.eq) goto loc_823219D0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
loc_823219D0:
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,220(r31)
	REX_STORE_U32(r31.u32 + 220, r20.u32);
	// stw r20,236(r31)
	REX_STORE_U32(r31.u32 + 236, r20.u32);
	// stw r20,232(r31)
	REX_STORE_U32(r31.u32 + 232, r20.u32);
	// beq cr6,0x82321094
	if (ctx.cr6.eq) goto loc_82321094;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r20,248(r31)
	REX_STORE_U32(r31.u32 + 248, r20.u32);
	// stw r20,252(r31)
	REX_STORE_U32(r31.u32 + 252, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82365050) {
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
	ctx.lr = 0x82365058;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82365074:
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r5,r4,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r3,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// subf r29,r7,r9
	r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mulli r3,r3,1892
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r4,r4,784
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(784));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r3,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// srawi r7,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 7;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r6,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r5,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82365074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365074;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r26,r11,r9
	r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r25,r11,r7
	r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r24,r11,r5
	r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r23,r11,r7
	r23.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r22,r11,r8
	r22.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82365154:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r6,r22,r11
	ctx.r6.u64 = REX_LOAD_U16(r22.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r5,r24,r11
	ctx.r5.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r4,r25,r11
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r3,r23,r11
	ctx.r3.u64 = REX_LOAD_U16(r23.u32 + ctx.r11.u32);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r31,r26,r11
	r31.u64 = REX_LOAD_U16(r26.u32 + ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r30,r10,r11
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// lhzx r29,r9,r11
	r29.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r6,3406
	r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,2276
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(2276));
	// mulli r6,r28,2408
	ctx.r6.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	r28.u64 = ctx.r8.u64 - r27.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mulli r6,r5,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r5,r4,4017
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(4017));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// srawi r6,r28,3
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7) != 0);
	ctx.r6.s64 = r28.s32 >> 3;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(1108));
	// extsh r30,r30
	r30.s64 = r30.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r21,r3,3784
	r21.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r3,r31,1568
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1568));
	// subf r27,r4,r6
	r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r28,r5,r7
	r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// subf r21,r21,r8
	r21.u64 = ctx.r8.u64 - r21.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r20,r27,r28
	r20.u64 = r27.u64 + r28.u64;
	// rlwinm r30,r31,8,0,23
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r21,3
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7) != 0);
	ctx.r3.s64 = r21.s32 >> 3;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r31.s64 = ctx.r8.s32 >> 3;
	// subf r28,r27,r28
	r28.u64 = r28.u64 - r27.u64;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// mulli r21,r20,181
	r21.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(181));
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// subf r30,r31,r8
	r30.u64 = ctx.r8.u64 - r31.u64;
	// mulli r28,r28,181
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(181));
	// addi r27,r21,128
	r27.s64 = r21.s64 + 128;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + r29.u64;
	// add r27,r7,r8
	r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r3,r29
	r31.u64 = r29.u64 - ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = r28.s32 >> 8;
	// srawi r28,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r28.s64 = r27.s32 >> 14;
	// add r29,r5,r4
	r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// sthx r28,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r28.u16);
	// srawi r29,r29,14
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFF) != 0);
	r29.s64 = r29.s32 >> 14;
	// add r28,r30,r6
	r28.u64 = r30.u64 + ctx.r6.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// srawi r27,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r27.s64 = r27.s32 >> 14;
	// srawi r31,r28,14
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFF) != 0);
	r31.s64 = r28.s32 >> 14;
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r29.u16);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r4,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 14;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r5,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 14;
	// sthx r27,r26,r11
	REX_STORE_U16(r26.u32 + ctx.r11.u32, r27.u16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sthx r31,r25,r11
	REX_STORE_U16(r25.u32 + ctx.r11.u32, r31.u16);
	// srawi r4,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 14;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sthx r6,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sthx r3,r24,r11
	REX_STORE_U16(r24.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r8,r23,r11
	REX_STORE_U16(r23.u32 + ctx.r11.u32, ctx.r8.u16);
	// sthx r7,r22,r11
	REX_STORE_U16(r22.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82365154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365154;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82371A60) {
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
	ctx.lr = 0x82371A68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82371aec
	if (!ctx.cr6.lt) goto loc_82371AEC;
loc_82371A94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371aec
	if (ctx.cr6.eq) goto loc_82371AEC;
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
	// bge 0x82371adc
	if (!ctx.cr0.lt) goto loc_82371ADC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371ADC;
	sub_823380C8(ctx, base);
loc_82371ADC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371a94
	if (ctx.cr6.gt) goto loc_82371A94;
loc_82371AEC:
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
	// bge 0x82371b24
	if (!ctx.cr0.lt) goto loc_82371B24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371B24;
	sub_823380C8(ctx, base);
loc_82371B24:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-23648
	ctx.r11.s64 = ctx.r11.s64 + -23648;
	// beq cr6,0x82371b58
	if (ctx.cr6.eq) goto loc_82371B58;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,21776(r28)
	REX_STORE_U32(r28.u32 + 21776, ctx.r8.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,21780(r28)
	REX_STORE_U32(r28.u32 + 21780, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82371B58:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwz r9,21776(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 21776);
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82371b70
	if (ctx.cr6.eq) goto loc_82371B70;
	// li r26,1
	r26.s64 = 1;
loc_82371B70:
	// lwz r9,21780(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 21780);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82371b88
	if (!ctx.cr6.eq) goto loc_82371B88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82371B88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82377298) {
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
	ctx.lr = 0x823772A0;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82377974
	if (ctx.cr6.eq) goto loc_82377974;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82377974
	if (ctx.cr6.eq) goto loc_82377974;
	// lwz r11,4020(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82377974
	if (ctx.cr6.eq) goto loc_82377974;
	// lwz r10,4032(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4032);
	// lwz r11,3788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// lwz r5,3792(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// lwz r29,3796(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,212(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// ble cr6,0x823772e8
	if (!ctx.cr6.gt) goto loc_823772E8;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// stw r10,4032(r3)
	REX_STORE_U32(ctx.r3.u32 + 4032, ctx.r10.u32);
loc_823772E8:
	// lwz r10,4028(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4028);
	// lwz r9,4032(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4032);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82377308
	if (!ctx.cr6.eq) goto loc_82377308;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,-64
	ctx.r10.s64 = -64;
	// subfic r9,r6,16320
	ctx.xer.ca = ctx.r6.u32 <= 16320;
	ctx.r9.u64 = static_cast<uint64_t>(16320) - ctx.r6.u64;
	// b 0x82377310
	goto loc_82377310;
loc_82377308:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_82377310:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// vspltish v11,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x6)));
	// std r10,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r30,r10,-22896
	r30.s64 = ctx.r10.s64 + -22896;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
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
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
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
	// dcbt r0,r11
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r11
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbt r10,r11
	// li r9,384
	ctx.r9.s64 = 384;
	// dcbt r9,r11
	// li r6,512
	ctx.r6.s64 = 512;
	// dcbt r6,r11
	// li r4,640
	ctx.r4.s64 = 640;
	// dcbt r4,r11
	// li r10,768
	ctx.r10.s64 = 768;
	// dcbt r10,r11
	// li r9,896
	ctx.r9.s64 = 896;
	// dcbt r9,r11
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// srawi. r10,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// beq 0x82377724
	if (ctx.cr0.eq) goto loc_82377724;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r31,48
	r31.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
loc_823773E8:
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v6,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v3,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v27,v0,v8
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v1,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v30,v0,v6
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v23,v31,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghh v22,v0,v4
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v25,v27,0
	simde_mm_store_ps(v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vmrglh v26,v0,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v29,v30,0
	simde_mm_store_ps(v29.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrglh v21,v0,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v24,v28,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v27,v22,0
	simde_mm_store_ps(v27.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v26,v26,0
	simde_mm_store_ps(v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghh v20,v0,v2
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v28,v21,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v21.u32)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v19,v0,v10
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v18,v0,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v22,v13,v23,v12
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v25,v13,v25,v12
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v23,v13,v29,v12
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v24,v13,v24,v12
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v15,v0,v9
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v27,v13,v27,v12
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v14,v0,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v26,v13,v26,v12
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v31,v0,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v28,v13,v28,v12
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghb v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfsx v2,v10,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghb v29,v0,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcfpsxws128 v61,v22,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v22.f32)));
	// vmrghh v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v58,v25,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v25.f32)));
	// vmrglh v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v60,v23,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v23.f32)));
	// vmrghh v21,v0,v7
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfpsxws128 v59,v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v24.f32)));
	// vmrghh v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v22,v20,0
	simde_mm_store_ps(v22.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vcfsx v23,v19,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v19.u32)));
	// vcfpsxws128 v57,v26,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// vcfpsxws128 v56,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// vcfsx v25,v17,0
	simde_mm_store_ps(v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v17.u32)));
	// vcfsx v26,v16,0
	simde_mm_store_ps(v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vcfsx v24,v18,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vcfpsxws128 v55,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// vcfsx v27,v15,0
	simde_mm_store_ps(v27.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v15.u32)));
	// vpkswss128 v19,v58,v61
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vcfsx v28,v14,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v14.u32)));
	// vpkswss128 v20,v59,v60
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// vsrah v16,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v20,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v18,v56,v57
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vpkshus128 v54,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsrah v15,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v6,v9,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghh v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v9,v10,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglh v16,v0,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v7,v8,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglh v14,v0,v5
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v8,v21,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v21.u32)));
	// vmrglh v3,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcfsx v10,v4,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// addi r27,r1,-64
	r27.s64 = ctx.r1.s64 + -64;
	// vmaddfp v22,v13,v22,v12
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v22.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v21,v0,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v4,v13,v2,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v17,v0,v31
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v28,v13,v28,v12
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v23,v13,v23,v12
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v19,v0,v30
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v24,v13,v24,v12
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v18,v0,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v25,v13,v25,v12
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v3,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v26,v13,v26,v12
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrglh v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghh v29,v0,v29
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// li r28,1024
	r28.s64 = 1024;
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v27,v13,v27,v12
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v51,v22,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v22.f32)));
	// vcfpsxws128 v53,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// vcfpsxws128 v52,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v50,v23,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v23.f32)));
	// vcfpsxws128 v49,v24,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v24.f32)));
	// vcfpsxws128 v48,v25,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v25.f32)));
	// vcfpsxws128 v47,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v44,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v46,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v45,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v43,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfsx v10,v14,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v14.u32)));
	// vcfpsxws128 v42,v26,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// lvx128 v39,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v41,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// vpkswss128 v27,v51,v55
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// vcfsx v2,v21,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v21.u32)));
	// vcfsx v31,v17,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v17.u32)));
	// vcfsx v3,v16,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vpkswss128 v26,v49,v50
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// vcfsx v28,v5,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vsrah v24,v27,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfsx v5,v19,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v19.u32)));
	// vpkswss128 v25,v47,v52
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vcfsx v6,v18,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vcfsx v4,v20,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vsrah v22,v26,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v23,v45,v46
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vcfsx v7,v30,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vpkswss128 v21,v43,v44
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vsrah v20,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkshus128 v40,v24,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vpkswss128 v19,v42,v48
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vcfsx v8,v1,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vsrah v17,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v18,v53,v41
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// vsrah v16,v21,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcsxwfp128 v9,v39,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
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
	// vmaddfp v30,v13,v28,v12
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkshus128 v38,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v40,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v37,v15,v22
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vpkshus128 v36,v20,v14
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vcfpsxws128 v35,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v38,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v10,v29,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v29.u32)));
	// stvx128 v37,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v1,v13,v31,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v36,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v2,v13,v2,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v3,v13,v3,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v4,v13,v4,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v34,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v30.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcfpsxws128 v33,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v32,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v63,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v62,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v61,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v60,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v59,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v58,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v57,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v56,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v10,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v34.s32)));
	// vpkswss128 v9,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// vpkswss128 v7,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsrah v8,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v6,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vsrah v5,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v4,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vsrah v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkswss128 v2,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vsrah v31,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v30,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v55,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v53,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v54,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r28,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823773e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823773E8;
loc_82377724:
	// dcbt r0,r5
	// dcbt r0,r29
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r5
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r29
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r5
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r8,r29
	// li r7,384
	ctx.r7.s64 = 384;
	// dcbt r7,r5
	// li r4,384
	ctx.r4.s64 = 384;
	// dcbt r4,r29
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi. r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82377974
	if (ctx.cr0.eq) goto loc_82377974;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lvx128 v63,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82377788:
	// lvx128 v10,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,512
	ctx.r10.s64 = 512;
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglh v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v2,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v1,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v31,v0,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v52,v4,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghh v30,v0,v5
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v51,v3,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrglh v29,v0,v6
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v50,v2,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghh v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcsxwfp128 v49,v1,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vcsxwfp128 v48,v31,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v47,v30,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v46,v29,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcsxwfp128 v45,v28,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglh v27,v0,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v26,v0,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v25,v0,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v24,v0,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v30,v52,v63
	simde_mm_store_ps(v30.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrglh v23,v0,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v2,v51,v63
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrghh v22,v0,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v31,v50,v63
	simde_mm_store_ps(v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrglh v21,v0,v3
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v1,v49,v63
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmrghh v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vsubfp128 v4,v48,v63
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v5,v47,v63
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v6,v46,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v7,v45,v63
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v44,v27,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vcsxwfp128 v43,v26,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vcsxwfp128 v42,v25,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v25.u32)));
	// vcsxwfp128 v41,v24,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmaddfp v30,v13,v30,v12
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v2,v13,v2,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v31,v13,v31,v12
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v13,v1,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v4,v13,v4,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v8,v44,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v40,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v30.f32)));
	// vcfpsxws128 v39,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v38,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v31.f32)));
	// vcfpsxws128 v37,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v36,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v35,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v34,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v33,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkswss128 v19,v39,v40
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// vpkswss128 v18,v37,v38
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// vpkswss128 v17,v35,v36
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// vsrah v16,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v15,v33,v34
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v32,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vsrah v10,v17,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubfp128 v8,v43,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsrah v9,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vpkshus128 v61,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v60,v23,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v23.u32)));
	// vcsxwfp128 v59,v22,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vcsxwfp128 v58,v21,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v21.u32)));
	// vcsxwfp128 v57,v20,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vmaddfp v4,v13,v8,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v5,v42,v63
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v6,v41,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v7,v60,v63
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v8,v59,v63
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v58,v63
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v10,v57,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcfpsxws128 v56,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v5,v13,v5,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v13,v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v7,v13,v7,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v13,v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v13,v9,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v13,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpkswss128 v4,v56,v32
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vcfpsxws128 v55,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v54,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vsrah v3,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcfpsxws128 v53,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v52,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v51,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v50,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v2,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vsrah v1,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v31,v52,v53
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vpkshus128 v49,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vpkswss128 v30,v50,v51
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vsrah v29,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v49,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v48,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvx128 v48,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r10,r5
	// li r9,512
	ctx.r9.s64 = 512;
	// dcbt r9,r11
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82377788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377788;
loc_82377974:
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823B3B68) {
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
	ctx.lr = 0x823B3B70;
	// lwz r27,104(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,108(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r9,92(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// srawi r22,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r22.s64 = ctx.r10.s32 >> 1;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r27,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r27.u32);
	// stw r26,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r26.u32);
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// ble cr6,0x823b56d0
	if (!ctx.cr6.gt) goto loc_823B56D0;
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f9,26904(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 26904);
	// li r24,16
	r24.s64 = 16;
	// lfd f11,-28728(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + -28728);
	// li r25,128
	r25.s64 = 128;
	// lfd f6,31912(r9)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r9.u32 + 31912);
	// lfd f10,4000(r7)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 4000);
	// lfd f7,26664(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 26664);
loc_823B3BF8:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r7,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x823b3c30
	if (ctx.cr6.eq) goto loc_823B3C30;
	// fsub f13,f3,f7
	ctx.f13.f64 = ctx.f3.f64 - ctx.f7.f64;
	// fmul f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f10.f64;
	// b 0x823b3c34
	goto loc_823B3C34;
loc_823B3C30:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_823B3C34:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fmul f12,f13,f10
	ctx.f12.f64 = ctx.f13.f64 * ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f5.u64);
	// lwz r11,-220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// fctiwz f2,f12
	ctx.f2.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f2,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.f2.u64);
	// lwz r6,-236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stw r10,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f12,-200(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fmsub f2,f13,f9,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f5.f64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f2.u64);
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r31,r9,r9
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f13,f13,f11,f5
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.f12.u64);
	// lwz r6,-228(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r5,r6,r6
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mullw r6,r5,r6
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r5,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r5.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r6.s64 = r31.s32 >> 8;
	// stw r5,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// stw r6,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stw r6,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r6.u32);
	// ble cr6,0x823b4d4c
	if (!ctx.cr6.gt) goto loc_823B4D4C;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4d4c
	if (!ctx.cr6.lt) goto loc_823B4D4C;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b4f3c
	if (!ctx.cr6.gt) goto loc_823B4F3C;
loc_823B3D0C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r11,-356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r6,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// lfd f12,-216(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fmsub f2,f0,f11,f5
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f5.f64);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f13.u64);
	// lwz r28,-356(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// ble cr6,0x823b4c28
	if (!ctx.cr6.gt) goto loc_823B4C28;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4c28
	if (!ctx.cr6.lt) goto loc_823B4C28;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r4,r28,r28
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(r28.s32);
	// lbzx r7,r6,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r27,r6,r10
	r27.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	r25.s64 = ctx.r4.s32 >> 8;
	// add r24,r6,r10
	r24.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,1(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r20,r11,1
	r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r6,-1(r27)
	ctx.r6.u64 = REX_LOAD_U8(r27.u32 + -1);
	// add r15,r7,r8
	r15.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 0);
	// subf r16,r31,r7
	r16.u64 = ctx.r7.u64 - r31.u64;
	// lbz r29,1(r27)
	r29.u64 = REX_LOAD_U8(r27.u32 + 1);
	// add r4,r31,r6
	ctx.r4.u64 = r31.u64 + ctx.r6.u64;
	// lbz r30,-1(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// add r19,r9,r10
	r19.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r17,r4,1,0,30
	r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-1(r24)
	r26.u64 = REX_LOAD_U8(r24.u32 + -1);
	// subf r18,r29,r10
	r18.u64 = ctx.r10.u64 - r29.u64;
	// lbz r23,1(r24)
	r23.u64 = REX_LOAD_U8(r24.u32 + 1);
	// lbz r21,2(r24)
	r21.u64 = REX_LOAD_U8(r24.u32 + 2);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 0);
	// add r24,r20,r30
	r24.u64 = r20.u64 + r30.u64;
	// rlwinm r20,r18,1,0,30
	r20.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,2(r27)
	r27.u64 = REX_LOAD_U8(r27.u32 + 2);
	// subf r18,r26,r17
	r18.u64 = r17.u64 - r26.u64;
	// lbz r3,2(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// add r17,r24,r29
	r17.u64 = r24.u64 + r29.u64;
	// subf r24,r19,r4
	r24.u64 = ctx.r4.u64 - r19.u64;
	// subf r20,r4,r20
	r20.u64 = r20.u64 - ctx.r4.u64;
	// subf r19,r27,r18
	r19.u64 = r18.u64 - r27.u64;
	// rlwinm r18,r17,1,0,30
	r18.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r6,r20
	r20.u64 = r20.u64 - ctx.r6.u64;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r18
	r17.u64 = r18.u64 - r23.u64;
	// add r18,r20,r23
	r18.u64 = r20.u64 + r23.u64;
	// add r24,r24,r5
	r24.u64 = r24.u64 + ctx.r5.u64;
	// add r20,r19,r21
	r20.u64 = r19.u64 + r21.u64;
	// rlwinm r14,r24,3,0,28
	r14.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r20.u32);
	// subf r20,r3,r17
	r20.u64 = r17.u64 - ctx.r3.u64;
	// subf r19,r24,r14
	r19.u64 = r14.u64 - r24.u64;
	// lwz r17,-364(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r24,r17,1,0,30
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r18,r27
	r14.u64 = r18.u64 + r27.u64;
	// rlwinm r17,r20,2,0,29
	r17.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r5,r16
	r18.u64 = r16.u64 - ctx.r5.u64;
	// add r16,r19,r24
	r16.u64 = r19.u64 + r24.u64;
	// add r19,r20,r17
	r19.u64 = r20.u64 + r17.u64;
	// rlwinm r20,r14,1,0,30
	r20.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r18,r9
	r24.u64 = r18.u64 + ctx.r9.u64;
	// subf r18,r21,r20
	r18.u64 = r20.u64 - r21.u64;
	// add r19,r16,r19
	r19.u64 = r16.u64 + r19.u64;
	// mulli r17,r15,13
	r17.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(13));
	// rlwinm r16,r24,3,0,28
	r16.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r15,r25,r28
	r15.s64 = int64_t(r25.s32) * int64_t(r28.s32);
	// add r18,r18,r26
	r18.u64 = r18.u64 + r26.u64;
	// subf r14,r17,r19
	r14.u64 = r19.u64 - r17.u64;
	// subf r19,r24,r16
	r19.u64 = r16.u64 - r24.u64;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r15,8
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFF) != 0);
	r24.s64 = r15.s32 >> 8;
	// rotlwi r16,r11,2
	r16.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r20,r30,r3
	r20.u64 = ctx.r3.u64 - r30.u64;
	// srawi r15,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r15.s64 = r14.s32 >> 1;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// add r19,r18,r19
	r19.u64 = r18.u64 + r19.u64;
	// rlwinm r17,r20,2,0,29
	r17.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r16,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r16.u32);
	// mullw r18,r15,r25
	r18.s64 = int64_t(r15.s32) * int64_t(r25.s32);
	// stw r18,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r18.u32);
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// subf r14,r11,r8
	r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r16,r7,r31
	r16.u64 = r31.u64 - ctx.r7.u64;
	// add r20,r19,r20
	r20.u64 = r19.u64 + r20.u64;
	// subf r19,r30,r9
	r19.u64 = ctx.r9.u64 - r30.u64;
	// stw r20,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r20.u32);
	// subf r20,r23,r4
	r20.u64 = ctx.r4.u64 - r23.u64;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r3,r20
	r17.u64 = r20.u64 - ctx.r3.u64;
	// subf r20,r5,r19
	r20.u64 = r19.u64 - ctx.r5.u64;
	// subf r19,r11,r10
	r19.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r20,r6,r20
	r20.u64 = r20.u64 - ctx.r6.u64;
	// subf r19,r6,r19
	r19.u64 = r19.u64 - ctx.r6.u64;
	// add r18,r20,r26
	r18.u64 = r20.u64 + r26.u64;
	// rlwinm r20,r19,1,0,30
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r18,r3
	r15.u64 = r18.u64 + ctx.r3.u64;
	// subf r3,r8,r16
	ctx.r3.u64 = r16.u64 - ctx.r8.u64;
	// subf r19,r4,r20
	r19.u64 = r20.u64 - ctx.r4.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r19,r19,r26
	r19.u64 = r19.u64 + r26.u64;
	// rlwinm r20,r3,1,0,30
	r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r9,r17
	r18.u64 = r17.u64 - ctx.r9.u64;
	// stw r20,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r20.u32);
	// add r19,r19,r7
	r19.u64 = r19.u64 + ctx.r7.u64;
	// subf r20,r4,r8
	r20.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r17,r10,r18
	r17.u64 = r18.u64 - ctx.r10.u64;
	// stw r19,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r19.u32);
	// subf r19,r31,r20
	r19.u64 = r20.u64 - r31.u64;
	// add r18,r17,r30
	r18.u64 = r17.u64 + r30.u64;
	// lwz r17,-364(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r19,r19,r10
	r19.u64 = r19.u64 + ctx.r10.u64;
	// rlwinm r20,r15,1,0,30
	r20.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r5
	r18.u64 = r18.u64 + ctx.r5.u64;
	// stw r19,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r19.u32);
	// subf r15,r21,r20
	r15.u64 = r20.u64 - r21.u64;
	// add r20,r18,r29
	r20.u64 = r18.u64 + r29.u64;
	// mulli r18,r14,11
	r18.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(11));
	// stw r18,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r18.u32);
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r15,r27
	r19.u64 = r15.u64 + r27.u64;
	// lwz r18,-304(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r16,r7,1
	r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r20,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, r20.u32);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + r18.u64;
	// lwz r14,-284(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r8,r31
	r20.u64 = r31.u64 - ctx.r8.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// rlwinm r19,r14,1,0,30
	r19.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r17.u32);
	// rlwinm r17,r20,1,0,30
	r17.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r10
	r18.u64 = r16.u64 + ctx.r10.u64;
	// lwz r3,-364(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// rotlwi r17,r30,2
	r17.u64 = __builtin_rotateleft32(r30.u32, 2);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// rlwinm r14,r3,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r23
	ctx.r3.u64 = r23.u64 - r29.u64;
	// lwz r23,-308(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r20,r19,r20
	r20.u64 = r19.u64 + r20.u64;
	// add r19,r30,r17
	r19.u64 = r30.u64 + r17.u64;
	// lwz r17,-288(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r15,r9,3
	r15.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
	// subf r19,r16,r14
	r19.u64 = r14.u64 - r16.u64;
	// lwz r14,-304(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// stw r23,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r23.u32);
	// subf r23,r9,r15
	r23.u64 = r15.u64 - ctx.r9.u64;
	// subf r16,r11,r7
	r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r15,-308(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r23,r20,r23
	r23.u64 = r20.u64 + r23.u64;
	// lwz r20,-296(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r15,r14,r15
	r15.u64 = r14.u64 + r15.u64;
	// stw r23,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r23.u32);
	// mulli r23,r16,11
	r23.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(11));
	// lwz r14,-256(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r16,-368(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r19
	r20.u64 = r20.u64 + r19.u64;
	// subf r18,r17,r18
	r18.u64 = r18.u64 - r17.u64;
	// add r16,r14,r16
	r16.u64 = r14.u64 + r16.u64;
	// srawi r15,r15,1
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	r15.s64 = r15.s32 >> 1;
	// rlwinm r19,r3,2,0,29
	r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r4,r18
	r14.u64 = r18.u64 - ctx.r4.u64;
	// lwz r18,-296(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r16,r26,r16
	r16.u64 = r16.u64 - r26.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + r19.u64;
	// add r23,r20,r23
	r23.u64 = r20.u64 + r23.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// subf r20,r27,r16
	r20.u64 = r16.u64 - r27.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r16.s64 = r14.s32 >> 1;
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r18.u32);
	// add r14,r23,r3
	r14.u64 = r23.u64 + ctx.r3.u64;
	// lwz r3,-368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mullw r19,r3,r28
	r19.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// mullw r18,r15,r24
	r18.s64 = int64_t(r15.s32) * int64_t(r24.s32);
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// add r18,r15,r18
	r18.u64 = r15.u64 + r18.u64;
	// add r3,r20,r21
	ctx.r3.u64 = r20.u64 + r21.u64;
	// subf r20,r11,r9
	r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r21,r18,r19
	r21.u64 = r18.u64 + r19.u64;
	// rlwinm r23,r16,8,0,23
	r23.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r19,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r19.s64 = r14.s32 >> 1;
	// subf r20,r6,r20
	r20.u64 = r20.u64 - ctx.r6.u64;
	// add r23,r21,r23
	r23.u64 = r21.u64 + r23.u64;
	// mullw r3,r3,r24
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r24.s32);
	// mullw r21,r19,r25
	r21.s64 = int64_t(r19.s32) * int64_t(r25.s32);
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r21,r3
	r18.u64 = r21.u64 + ctx.r3.u64;
	// subf r3,r5,r20
	ctx.r3.u64 = r20.u64 - ctx.r5.u64;
	// subf r21,r9,r30
	r21.u64 = r30.u64 - ctx.r9.u64;
	// subf r20,r10,r29
	r20.u64 = r29.u64 - ctx.r10.u64;
	// subf r30,r7,r31
	r30.u64 = r31.u64 - ctx.r7.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r19,r21,1,0,30
	r19.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r30,1,0,30
	r21.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r3,r27
	r16.u64 = ctx.r3.u64 + r27.u64;
	// subf r15,r31,r20
	r15.u64 = r20.u64 - r31.u64;
	// subf r14,r26,r19
	r14.u64 = r19.u64 - r26.u64;
	// add r26,r30,r21
	r26.u64 = r30.u64 + r21.u64;
	// rotlwi r20,r8,1
	r20.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r21,r29,2
	r21.u64 = __builtin_rotateleft32(r29.u32, 2);
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r16,1,0,30
	r19.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r31,r14
	r16.u64 = r14.u64 - r31.u64;
	// add r20,r20,r9
	r20.u64 = r20.u64 + ctx.r9.u64;
	// subf r15,r8,r15
	r15.u64 = r15.u64 - ctx.r8.u64;
	// rlwinm r31,r3,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r21
	r29.u64 = r29.u64 + r21.u64;
	// add r26,r19,r26
	r26.u64 = r19.u64 + r26.u64;
	// subf r30,r7,r11
	r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r19,r10,3
	r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r15,r9,r15
	r15.u64 = r15.u64 - ctx.r9.u64;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r7,r16
	r16.u64 = r16.u64 - ctx.r7.u64;
	// add r14,r3,r31
	r14.u64 = ctx.r3.u64 + r31.u64;
	// subf r26,r29,r26
	r26.u64 = r26.u64 - r29.u64;
	// rlwinm r21,r30,1,0,30
	r21.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r10,r19
	r29.u64 = r19.u64 - ctx.r10.u64;
	// subf r31,r27,r15
	r31.u64 = r15.u64 - r27.u64;
	// subf r20,r17,r20
	r20.u64 = r20.u64 - r17.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = r16.u64 - ctx.r10.u64;
	// subf r27,r9,r14
	r27.u64 = r14.u64 - ctx.r9.u64;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// add r30,r30,r21
	r30.u64 = r30.u64 + r21.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r26,r5,r20
	r26.u64 = r20.u64 - ctx.r5.u64;
	// add r27,r27,r5
	r27.u64 = r27.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r31,r31,r7
	r31.u64 = r31.u64 + ctx.r7.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r26.s64 = r26.s32 >> 1;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r31,r26,r25
	r31.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r3,r27,r24
	ctx.r3.s64 = int64_t(r27.s32) * int64_t(r24.s32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r16,-344(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r9,r31,r3
	ctx.r9.u64 = r31.u64 + ctx.r3.u64;
	// lwz r31,-336(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// srawi r3,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r3.s64 = r30.s32 >> 1;
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r26.s64 = ctx.r8.s32 >> 1;
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// subf r5,r10,r27
	ctx.r5.u64 = r27.u64 - ctx.r10.u64;
	// subf r27,r10,r7
	r27.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r9,r26,r28
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// mullw r7,r4,r28
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r4,r30,r24
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(r24.s32);
	// mullw r3,r29,r25
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(r25.s32);
	// srawi r30,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r30.s64 = r27.s32 >> 1;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// add r7,r18,r7
	ctx.r7.u64 = r18.u64 + ctx.r7.u64;
	// mullw r8,r30,r10
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r23,r23,r16
	r23.s64 = int64_t(r23.s32) * int64_t(r16.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r23,r7
	ctx.r8.u64 = r23.u64 + ctx.r7.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b41c8
	if (!ctx.cr6.gt) goto loc_823B41C8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b41d4
	goto loc_823B41D4;
loc_823B41C8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B41D4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-312(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// beq cr6,0x823b4be0
	if (ctx.cr6.eq) goto loc_823B4BE0;
	// fmul f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lwz r11,-236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r9,r22,1
	ctx.r9.s64 = r22.s64 + 1;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, ctx.f12.u64);
	// lwz r11,-356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// rlwinm r23,r22,1,0,30
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r11.u32);
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// subf r24,r22,r10
	r24.u64 = ctx.r10.u64 - r22.u64;
	// addi r3,r23,-1
	ctx.r3.s64 = r23.s64 + -1;
	// addi r30,r23,1
	r30.s64 = r23.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r29,r22,2
	r29.s64 = r22.s64 + 2;
	// lbzx r26,r9,r10
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r19,r23,2
	r19.s64 = r23.s64 + 2;
	// lbz r5,-1(r24)
	ctx.r5.u64 = REX_LOAD_U8(r24.u32 + -1);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U8(r24.u32 + 0);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r31,r26,r5
	r31.u64 = r26.u64 + ctx.r5.u64;
	// lbzx r27,r4,r10
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r21,r9,r8
	r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r25,r3,r10
	r25.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbz r28,1(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 1);
	// add r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r31,r23,r10
	r31.u64 = REX_LOAD_U8(r23.u32 + ctx.r10.u32);
	// rlwinm r6,r21,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r30,r10
	r20.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// add r18,r7,r28
	r18.u64 = ctx.r7.u64 + r28.u64;
	// lbz r24,2(r24)
	r24.u64 = REX_LOAD_U8(r24.u32 + 2);
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - r25.u64;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r7,r6,r31
	ctx.r7.u64 = r31.u64 - ctx.r6.u64;
	// stw r4,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r4.u32);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r21,r29,r10
	r21.u64 = REX_LOAD_U8(r29.u32 + ctx.r10.u32);
	// lfd f5,-184(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + r30.u64;
	// subf r7,r20,r18
	ctx.r7.u64 = r18.u64 - r20.u64;
	// lbzx r19,r19,r10
	r19.u64 = REX_LOAD_U8(r19.u32 + ctx.r10.u32);
	// rlwinm r29,r3,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + r22.u32);
	// rlwinm r18,r4,3,0,28
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r3,r21,r7
	ctx.r3.u64 = ctx.r7.u64 - r21.u64;
	// add r17,r29,r19
	r17.u64 = r29.u64 + r19.u64;
	// subf r29,r4,r18
	r29.u64 = r18.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r17,1,0,30
	r18.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// fmsub f13,f0,f9,f2
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f2.f64);
	// subf r7,r28,r8
	ctx.r7.u64 = ctx.r8.u64 - r28.u64;
	// add r29,r29,r18
	r29.u64 = r29.u64 + r18.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// mulli r4,r4,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(13));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-344(r1)
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.f12.u64);
	// subf r18,r31,r7
	r18.u64 = ctx.r7.u64 - r31.u64;
	// lwz r7,-340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mullw r4,r7,r7
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r7
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// srawi r14,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r14.s64 = ctx.r3.s32 >> 1;
	// subf r3,r27,r21
	ctx.r3.u64 = r21.u64 - r27.u64;
	// stw r3,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// subf r3,r5,r18
	ctx.r3.u64 = r18.u64 - ctx.r5.u64;
	// subf r16,r31,r10
	r16.u64 = ctx.r10.u64 - r31.u64;
	// lwz r17,-288(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + r20.u64;
	// std r23,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, r23.u64);
	// subf r18,r26,r16
	r18.u64 = r16.u64 - r26.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + r24.u64;
	// stw r18,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r18.u32);
	// subf r15,r26,r6
	r15.u64 = ctx.r6.u64 - r26.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r17.u32);
	// subf r16,r11,r8
	r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r18,r27,r9
	r18.u64 = ctx.r9.u64 - r27.u64;
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// subf r3,r30,r15
	ctx.r3.u64 = r15.u64 - r30.u64;
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r16,r5,r16
	r16.u64 = r16.u64 - ctx.r5.u64;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r19,r15
	r15.u64 = r15.u64 - r19.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r30,r18
	r18.u64 = r18.u64 - r30.u64;
	// add r15,r15,r25
	r15.u64 = r15.u64 + r25.u64;
	// subf r16,r31,r16
	r16.u64 = r16.u64 - r31.u64;
	// subf r17,r5,r18
	r17.u64 = r18.u64 - ctx.r5.u64;
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r15.u32);
	// add r15,r16,r25
	r15.u64 = r16.u64 + r25.u64;
	// lwz r23,-344(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r16,r17,r25
	r16.u64 = r17.u64 + r25.u64;
	// lwz r17,-364(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// rlwinm r18,r3,3,0,28
	r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r21
	r16.u64 = r16.u64 + r21.u64;
	// subf r3,r3,r18
	ctx.r3.u64 = r18.u64 - ctx.r3.u64;
	// mr r18,r17
	r18.u64 = r17.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// rlwinm r17,r23,1,0,30
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r17,r3
	ctx.r3.u64 = r17.u64 + ctx.r3.u64;
	// lwz r17,-344(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r18,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r18.u32);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r10,r26
	r18.u64 = r26.u64 - ctx.r10.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// lwz r23,-368(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r18,1,0,30
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// add r3,r15,r6
	ctx.r3.u64 = r15.u64 + ctx.r6.u64;
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r18,r18,r17
	r18.u64 = r18.u64 + r17.u64;
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r15.u32);
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-368(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, r18.u32);
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r3,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r3.u32);
	// add r3,r23,r8
	ctx.r3.u64 = r23.u64 + ctx.r8.u64;
	// mulli r18,r15,11
	r18.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(11));
	// stw r18,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r18.u32);
	// stw r3,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r3.u32);
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r18,r19,r17
	r18.u64 = r17.u64 - r19.u64;
	// rotlwi r3,r9,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r18,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r18.u32);
	// rotlwi r18,r6,1
	r18.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r17,r27,2
	r17.u64 = __builtin_rotateleft32(r27.u32, 2);
	// add r23,r18,r8
	r23.u64 = r18.u64 + ctx.r8.u64;
	// subf r18,r9,r3
	r18.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r3,-296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// std r22,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, r22.u64);
	// add r17,r27,r17
	r17.u64 = r27.u64 + r17.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + r15.u64;
	// mullw r15,r14,r4
	r15.s64 = int64_t(r14.s32) * int64_t(ctx.r4.s32);
	// lwz r14,-256(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r22,-308(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r15.u32);
	// lwz r15,-284(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r3,r16,r3
	ctx.r3.u64 = r16.u64 + ctx.r3.u64;
	// add r16,r22,r14
	r16.u64 = r22.u64 + r14.u64;
	// lwz r14,-364(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// add r15,r3,r15
	r15.u64 = ctx.r3.u64 + r15.u64;
	// subf r3,r17,r16
	ctx.r3.u64 = r16.u64 - r17.u64;
	// lwz r17,-304(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rlwinm r16,r23,1,0,30
	r16.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,-312(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + r18.u64;
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// add r17,r17,r24
	r17.u64 = r17.u64 + r24.u64;
	// mr r23,r14
	r23.u64 = r14.u64;
	// rlwinm r14,r14,3,0,28
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r23,r14
	r18.u64 = r14.u64 - r23.u64;
	// lwz r14,-344(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r17,r11,r6
	r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r23,-280(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r18,r3,r18
	r18.u64 = ctx.r3.u64 + r18.u64;
	// mulli r17,r17,11
	r17.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// subf r3,r28,r20
	ctx.r3.u64 = r20.u64 - r28.u64;
	// subf r16,r22,r16
	r16.u64 = r16.u64 - r22.u64;
	// rlwinm r17,r3,2,0,29
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r15,r15,1
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	r15.s64 = r15.s32 >> 1;
	// lwz r22,-368(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r16,r31,r16
	r16.u64 = r16.u64 - r31.u64;
	// stw r17,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r17.u32);
	// mullw r17,r15,r29
	r17.s64 = int64_t(r15.s32) * int64_t(r29.s32);
	// srawi r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	// add r17,r14,r17
	r17.u64 = r14.u64 + r17.u64;
	// subf r15,r20,r31
	r15.u64 = r31.u64 - r20.u64;
	// lwz r20,-344(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// srawi r14,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r14.s64 = r16.s32 >> 1;
	// mullw r16,r22,r7
	r16.s64 = int64_t(r22.s32) * int64_t(ctx.r7.s32);
	// lwz r22,-368(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r20,r18,r20
	r20.u64 = r18.u64 + r20.u64;
	// subf r15,r21,r15
	r15.u64 = r15.u64 - r21.u64;
	// add r18,r3,r22
	r18.u64 = ctx.r3.u64 + r22.u64;
	// add r3,r17,r16
	ctx.r3.u64 = r17.u64 + r16.u64;
	// rlwinm r21,r14,8,0,23
	r21.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 8) & 0xFFFFFF00;
	// subf r17,r9,r15
	r17.u64 = r15.u64 - ctx.r9.u64;
	// add r21,r3,r21
	r21.u64 = ctx.r3.u64 + r21.u64;
	// subf r3,r8,r17
	ctx.r3.u64 = r17.u64 - ctx.r8.u64;
	// add r18,r20,r18
	r18.u64 = r20.u64 + r18.u64;
	// add r20,r3,r27
	r20.u64 = ctx.r3.u64 + r27.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = r26.u64 - ctx.r6.u64;
	// subf r16,r11,r9
	r16.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r17,r10,r3
	r17.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r15,r9,r27
	r15.u64 = r27.u64 - ctx.r9.u64;
	// subf r16,r5,r16
	r16.u64 = r16.u64 - ctx.r5.u64;
	// add r27,r17,r11
	r27.u64 = r17.u64 + ctx.r11.u64;
	// add r20,r20,r30
	r20.u64 = r20.u64 + r30.u64;
	// subf r14,r8,r28
	r14.u64 = r28.u64 - ctx.r8.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r27,1,0,30
	r17.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r28
	r20.u64 = r20.u64 + r28.u64;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r14,1,0,30
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r30,r16
	r16.u64 = r16.u64 - r30.u64;
	// add r17,r27,r17
	r17.u64 = r27.u64 + r17.u64;
	// subf r14,r26,r14
	r14.u64 = r14.u64 - r26.u64;
	// subf r15,r25,r15
	r15.u64 = r15.u64 - r25.u64;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r16,r10
	r27.u64 = r16.u64 + ctx.r10.u64;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// subf r15,r26,r15
	r15.u64 = r15.u64 - r26.u64;
	// subf r16,r10,r14
	r16.u64 = r14.u64 - ctx.r10.u64;
	// add r27,r27,r24
	r27.u64 = r27.u64 + r24.u64;
	// rlwinm r26,r3,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r20
	r14.u64 = r20.u64 - r25.u64;
	// subf r15,r6,r15
	r15.u64 = r15.u64 - ctx.r6.u64;
	// subf r16,r9,r16
	r16.u64 = r16.u64 - ctx.r9.u64;
	// add r17,r3,r26
	r17.u64 = ctx.r3.u64 + r26.u64;
	// rlwinm r20,r27,1,0,30
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r24,r16
	ctx.r3.u64 = r16.u64 - r24.u64;
	// subf r26,r24,r14
	r26.u64 = r14.u64 - r24.u64;
	// rotlwi r25,r28,2
	r25.u64 = __builtin_rotateleft32(r28.u32, 2);
	// subf r27,r8,r15
	r27.u64 = r15.u64 - ctx.r8.u64;
	// add r24,r20,r17
	r24.u64 = r20.u64 + r17.u64;
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// rotlwi r17,r8,3
	r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r20,r26,r19
	r20.u64 = r26.u64 + r19.u64;
	// subf r26,r28,r24
	r26.u64 = r24.u64 - r28.u64;
	// lwz r16,-288(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r25,r27,r10
	r25.u64 = r27.u64 + ctx.r10.u64;
	// ld r22,-296(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// subf r24,r8,r17
	r24.u64 = r17.u64 - ctx.r8.u64;
	// add r27,r3,r30
	r27.u64 = ctx.r3.u64 + r30.u64;
	// add r20,r20,r5
	r20.u64 = r20.u64 + ctx.r5.u64;
	// add r24,r26,r24
	r24.u64 = r26.u64 + r24.u64;
	// rotlwi r28,r10,1
	r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	ctx.r3.s64 = r18.s32 >> 1;
	// add r26,r27,r11
	r26.u64 = r27.u64 + ctx.r11.u64;
	// subf r19,r9,r11
	r19.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r25,r25,r11
	r25.u64 = r25.u64 + ctx.r11.u64;
	// add r17,r28,r9
	r17.u64 = r28.u64 + ctx.r9.u64;
	// mullw r18,r3,r4
	r18.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r20,r29
	r27.s64 = int64_t(r20.s32) * int64_t(r29.s32);
	// add r28,r26,r5
	r28.u64 = r26.u64 + ctx.r5.u64;
	// srawi r24,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r24.s64 = r24.s32 >> 1;
	// add r15,r25,r5
	r15.u64 = r25.u64 + ctx.r5.u64;
	// subf r20,r8,r19
	r20.u64 = r19.u64 - ctx.r8.u64;
	// add r25,r18,r27
	r25.u64 = r18.u64 + r27.u64;
	// mullw r26,r28,r29
	r26.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// mullw r27,r24,r4
	r27.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// add r5,r20,r5
	ctx.r5.u64 = r20.u64 + ctx.r5.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// rlwinm r28,r3,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r5,r7
	r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r24,r15,r7
	r24.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// rlwinm r28,r17,1,0,30
	r28.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r25,r24
	r24.u64 = r25.u64 + r24.u64;
	// lwz r25,-272(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r20,r16,r28
	r20.u64 = r28.u64 - r16.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// add r26,r3,r31
	r26.u64 = ctx.r3.u64 + r31.u64;
	// lwz r3,-220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r28,r24,r25
	r28.s64 = int64_t(r24.s32) * int64_t(r25.s32);
	// mullw r21,r21,r23
	r21.s64 = int64_t(r21.s32) * int64_t(r23.s32);
	// ld r23,-328(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// subf r24,r30,r20
	r24.u64 = r20.u64 - r30.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r31,r21,r28
	r31.u64 = r21.u64 + r28.u64;
	// mullw r28,r27,r3
	r28.s64 = int64_t(r27.s32) * int64_t(ctx.r3.s32);
	// srawi r24,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r24.s64 = r24.s32 >> 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r27.s64 = r26.s32 >> 1;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// mullw r28,r24,r4
	r28.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// subf r30,r9,r10
	r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r9,r5,r29
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// srawi r5,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r5.s64 = r30.s32 >> 1;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b46ec
	if (!ctx.cr6.gt) goto loc_823B46EC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b46f8
	goto loc_823B46F8;
loc_823B46EC:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B46F8:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r10,-360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// addi r6,r22,-1
	ctx.r6.s64 = r22.s64 + -1;
	// lwz r5,-268(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// addi r9,r22,1
	ctx.r9.s64 = r22.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// subf r20,r22,r10
	r20.u64 = ctx.r10.u64 - r22.u64;
	// stw r3,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// lbzx r26,r9,r10
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + r22.u32);
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U8(r20.u32 + 0);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbzx r27,r6,r10
	r27.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,1
	ctx.r6.s64 = r23.s64 + 1;
	// lbz r28,1(r20)
	r28.u64 = REX_LOAD_U8(r20.u32 + 1);
	// add r24,r3,r27
	r24.u64 = ctx.r3.u64 + r27.u64;
	// lbz r31,-1(r20)
	r31.u64 = REX_LOAD_U8(r20.u32 + -1);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - r26.u64;
	// add r18,r24,r28
	r18.u64 = r24.u64 + r28.u64;
	// lbz r24,2(r20)
	r24.u64 = REX_LOAD_U8(r20.u32 + 2);
	// lbzx r21,r6,r10
	r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,-1
	ctx.r6.s64 = r23.s64 + -1;
	// subf r19,r30,r3
	r19.u64 = ctx.r3.u64 - r30.u64;
	// rlwinm r3,r18,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// add r16,r26,r31
	r16.u64 = r26.u64 + r31.u64;
	// lbzx r25,r6,r10
	r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r23,2
	ctx.r6.s64 = r23.s64 + 2;
	// rlwinm r17,r19,3,0,28
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r21,r3
	r18.u64 = ctx.r3.u64 - r21.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r20,r6,r10
	r20.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// addi r6,r22,2
	ctx.r6.s64 = r22.s64 + 2;
	// lbzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// subf r6,r3,r18
	ctx.r6.u64 = r18.u64 - ctx.r3.u64;
	// stw r6,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// subf r6,r19,r17
	ctx.r6.u64 = r17.u64 - r19.u64;
	// subf r18,r28,r8
	r18.u64 = ctx.r8.u64 - r28.u64;
	// lwz r19,-364(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// add r17,r9,r8
	r17.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mr r14,r19
	r14.u64 = r19.u64;
	// lbzx r10,r23,r10
	ctx.r10.u64 = REX_LOAD_U8(r23.u32 + ctx.r10.u32);
	// subf r23,r10,r18
	r23.u64 = r18.u64 - ctx.r10.u64;
	// subf r18,r31,r23
	r18.u64 = r23.u64 - r31.u64;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r21
	r18.u64 = r18.u64 + r21.u64;
	// subf r23,r17,r10
	r23.u64 = ctx.r10.u64 - r17.u64;
	// add r18,r18,r24
	r18.u64 = r18.u64 + r24.u64;
	// subf r17,r25,r16
	r17.u64 = r16.u64 - r25.u64;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r24,r17
	r17.u64 = r17.u64 - r24.u64;
	// subf r18,r20,r18
	r18.u64 = r18.u64 - r20.u64;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r18,r25
	r18.u64 = r18.u64 + r25.u64;
	// rlwinm r16,r23,3,0,28
	r16.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r18.u32);
	// add r17,r17,r20
	r17.u64 = r17.u64 + r20.u64;
	// subf r18,r23,r16
	r18.u64 = r16.u64 - r23.u64;
	// rlwinm r16,r19,2,0,29
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-360(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r23,r27,r3
	r23.u64 = ctx.r3.u64 - r27.u64;
	// rlwinm r15,r17,1,0,30
	r15.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r23,2,0,29
	r19.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r14,r16
	r16.u64 = r14.u64 + r16.u64;
	// stw r19,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r19.u32);
	// subf r14,r11,r8
	r14.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r19,r5,r6
	r19.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r16,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r16.u32);
	// add r18,r18,r15
	r18.u64 = r18.u64 + r15.u64;
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r19,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r19.u32);
	// subf r16,r11,r6
	r16.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r19,r17,r15
	r19.u64 = r17.u64 + r15.u64;
	// lwz r17,-360(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r22,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r22.u64);
	// add r23,r23,r17
	r23.u64 = r23.u64 + r17.u64;
	// lwz r22,-368(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// mulli r15,r15,13
	r15.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(13));
	// add r23,r19,r23
	r23.u64 = r19.u64 + r23.u64;
	// std r6,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.r6.u64);
	// add r18,r18,r22
	r18.u64 = r18.u64 + r22.u64;
	// mulli r19,r16,11
	r19.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r15,r18
	r18.u64 = r18.u64 - r15.u64;
	// add r23,r23,r19
	r23.u64 = r23.u64 + r19.u64;
	// subf r19,r27,r9
	r19.u64 = ctx.r9.u64 - r27.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// srawi r17,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r17.s64 = r23.s32 >> 1;
	// rlwinm r16,r19,1,0,30
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r23,r18,r4
	r23.s64 = int64_t(r18.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r29
	r19.s64 = int64_t(r17.s32) * int64_t(r29.s32);
	// subf r17,r30,r16
	r17.u64 = r16.u64 - r30.u64;
	// add r19,r23,r19
	r19.u64 = r23.u64 + r19.u64;
	// subf r23,r31,r17
	r23.u64 = r17.u64 - r31.u64;
	// subf r18,r21,r10
	r18.u64 = ctx.r10.u64 - r21.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// add r17,r23,r25
	r17.u64 = r23.u64 + r25.u64;
	// subf r16,r3,r18
	r16.u64 = r18.u64 - ctx.r3.u64;
	// add r3,r17,r3
	ctx.r3.u64 = r17.u64 + ctx.r3.u64;
	// subf r23,r9,r16
	r23.u64 = r16.u64 - ctx.r9.u64;
	// subf r16,r5,r26
	r16.u64 = r26.u64 - ctx.r5.u64;
	// stw r3,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// rotlwi r18,r11,2
	r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r3,r6,r16
	ctx.r3.u64 = r16.u64 - ctx.r6.u64;
	// add r19,r11,r18
	r19.u64 = ctx.r11.u64 + r18.u64;
	// subf r18,r8,r23
	r18.u64 = r23.u64 - ctx.r8.u64;
	// subf r23,r10,r6
	r23.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r19,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r19.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r17,r18,r27
	r17.u64 = r18.u64 + r27.u64;
	// subf r18,r26,r23
	r18.u64 = r23.u64 - r26.u64;
	// rlwinm r19,r3,1,0,30
	r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r18,r8
	r23.u64 = r18.u64 + ctx.r8.u64;
	// stw r19,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r19.u32);
	// add r15,r17,r30
	r15.u64 = r17.u64 + r30.u64;
	// subf r19,r31,r14
	r19.u64 = r14.u64 - r31.u64;
	// stw r23,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r23.u32);
	// add r23,r15,r28
	r23.u64 = r15.u64 + r28.u64;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r10,r19
	r19.u64 = r19.u64 - ctx.r10.u64;
	// stw r23,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r23.u32);
	// subf r23,r6,r26
	r23.u64 = r26.u64 - ctx.r6.u64;
	// add r19,r19,r25
	r19.u64 = r19.u64 + r25.u64;
	// rotlwi r18,r27,2
	r18.u64 = __builtin_rotateleft32(r27.u32, 2);
	// add r17,r19,r5
	r17.u64 = r19.u64 + ctx.r5.u64;
	// lwz r14,-360(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r19,r23,1,0,30
	r19.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r15,r14,1,0,30
	r15.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r23,r19
	r16.u64 = r23.u64 + r19.u64;
	// rotlwi r19,r5,1
	r19.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// subf r23,r20,r15
	r23.u64 = r15.u64 - r20.u64;
	// add r14,r19,r8
	r14.u64 = r19.u64 + ctx.r8.u64;
	// add r15,r27,r18
	r15.u64 = r27.u64 + r18.u64;
	// rotlwi r18,r9,3
	r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r24
	r23.u64 = r23.u64 + r24.u64;
	// lwz r19,-344(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r17,r17,r16
	r17.u64 = r17.u64 + r16.u64;
	// lwz r22,-364(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// subf r27,r9,r27
	r27.u64 = r27.u64 - ctx.r9.u64;
	// lwz r16,-288(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r19,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r19.u32);
	// subf r19,r9,r18
	r19.u64 = r18.u64 - ctx.r9.u64;
	// rotlwi r18,r22,0
	r18.u64 = __builtin_rotateleft32(r22.u32, 0);
	// lwz r6,-360(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r18,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r18.u32);
	// add r18,r3,r6
	r18.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r27,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r27.u32);
	// subf r3,r28,r21
	ctx.r3.u64 = r21.u64 - r28.u64;
	// rlwinm r27,r23,1,0,30
	r27.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-360(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r21,r15,r17
	r21.u64 = r17.u64 - r15.u64;
	// lwz r6,-368(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r17,r14,1,0,30
	r17.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r22
	r23.u64 = r22.u64 - r23.u64;
	// subf r15,r11,r5
	r15.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r19,r21,r19
	r19.u64 = r21.u64 + r19.u64;
	// add r18,r6,r18
	r18.u64 = ctx.r6.u64 + r18.u64;
	// lwz r6,-280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r23,r27,r23
	r23.u64 = r27.u64 + r23.u64;
	// mulli r21,r15,11
	r21.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(11));
	// lwz r15,-296(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// ld r6,-328(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r27,r3,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r25,r18
	r18.u64 = r18.u64 - r25.u64;
	// subf r17,r16,r17
	r17.u64 = r17.u64 - r16.u64;
	// lwz r14,-344(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r14,r14,1,0,30
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r25,r14
	r14.u64 = r14.u64 - r25.u64;
	// add r25,r23,r21
	r25.u64 = r23.u64 + r21.u64;
	// add r23,r3,r27
	r23.u64 = ctx.r3.u64 + r27.u64;
	// subf r27,r10,r17
	r27.u64 = r17.u64 - ctx.r10.u64;
	// srawi r21,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r21.s64 = r19.s32 >> 1;
	// subf r3,r24,r18
	ctx.r3.u64 = r18.u64 - r24.u64;
	// srawi r18,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r18.s64 = r27.s32 >> 1;
	// mullw r27,r21,r7
	r27.s64 = int64_t(r21.s32) * int64_t(ctx.r7.s32);
	// subf r19,r26,r14
	r19.u64 = r14.u64 - r26.u64;
	// add r23,r25,r23
	r23.u64 = r25.u64 + r23.u64;
	// add r3,r3,r20
	ctx.r3.u64 = ctx.r3.u64 + r20.u64;
	// add r27,r15,r27
	r27.u64 = r15.u64 + r27.u64;
	// rlwinm r25,r18,8,0,23
	r25.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 8) & 0xFFFFFF00;
	// subf r21,r11,r9
	r21.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r20,r5,r19
	r20.u64 = r19.u64 - ctx.r5.u64;
	// srawi r23,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r23.s64 = r23.s32 >> 1;
	// add r19,r3,r31
	r19.u64 = ctx.r3.u64 + r31.u64;
	// add r25,r27,r25
	r25.u64 = r27.u64 + r25.u64;
	// subf r21,r31,r21
	r21.u64 = r21.u64 - r31.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = r20.u64 - ctx.r8.u64;
	// mullw r27,r23,r4
	r27.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// mullw r23,r19,r29
	r23.s64 = int64_t(r19.s32) * int64_t(r29.s32);
	// rlwinm r21,r21,1,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r23,r27,r23
	r23.u64 = r27.u64 + r23.u64;
	// subf r27,r30,r21
	r27.u64 = r21.u64 - r30.u64;
	// subf r20,r8,r28
	r20.u64 = r28.u64 - ctx.r8.u64;
	// add r21,r3,r6
	r21.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// rlwinm r19,r20,1,0,30
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r27,r6
	r27.u64 = r27.u64 + ctx.r6.u64;
	// rlwinm r20,r3,1,0,30
	r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r15,r27,r24
	r15.u64 = r27.u64 + r24.u64;
	// add r18,r3,r20
	r18.u64 = ctx.r3.u64 + r20.u64;
	// subf r26,r26,r19
	r26.u64 = r19.u64 - r26.u64;
	// rotlwi r20,r28,2
	r20.u64 = __builtin_rotateleft32(r28.u32, 2);
	// rlwinm r17,r6,1,0,30
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r15,1,0,30
	r19.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r5,r11
	r27.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r28,r28,r20
	r28.u64 = r28.u64 + r20.u64;
	// subf r15,r6,r26
	r15.u64 = r26.u64 - ctx.r6.u64;
	// add r17,r17,r9
	r17.u64 = r17.u64 + ctx.r9.u64;
	// add r20,r19,r18
	r20.u64 = r19.u64 + r18.u64;
	// rlwinm r26,r27,1,0,30
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,1,0,30
	r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r18,r8,3
	r18.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r15
	r15.u64 = r15.u64 - ctx.r9.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// subf r26,r28,r20
	r26.u64 = r20.u64 - r28.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + r19.u64;
	// subf r28,r24,r15
	r28.u64 = r15.u64 - r24.u64;
	// subf r20,r8,r18
	r20.u64 = r18.u64 - ctx.r8.u64;
	// subf r19,r16,r17
	r19.u64 = r17.u64 - r16.u64;
	// subf r27,r8,r27
	r27.u64 = r27.u64 - ctx.r8.u64;
	// add r26,r26,r20
	r26.u64 = r26.u64 + r20.u64;
	// subf r24,r30,r19
	r24.u64 = r19.u64 - r30.u64;
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lwz r15,-360(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// add r20,r27,r10
	r20.u64 = r27.u64 + ctx.r10.u64;
	// lwz r27,-272(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// ld r22,-256(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// srawi r26,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r26.s64 = r26.s32 >> 1;
	// srawi r30,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r30.s64 = r24.s32 >> 1;
	// add r28,r21,r11
	r28.u64 = r21.u64 + ctx.r11.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r24.s64 = r20.s32 >> 1;
	// srawi r21,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r21.s64 = ctx.r3.s32 >> 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r30,r4
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r24,r27
	r30.s64 = int64_t(r24.s32) * int64_t(r27.s32);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r20,r9,r11
	r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mullw r9,r21,r29
	ctx.r9.s64 = int64_t(r21.s32) * int64_t(r29.s32);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r30,r3,r31
	r30.u64 = ctx.r3.u64 + r31.u64;
	// add r28,r28,r31
	r28.u64 = r28.u64 + r31.u64;
	// subf r24,r8,r5
	r24.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r3,r8,r20
	ctx.r3.u64 = r20.u64 - ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mullw r8,r26,r4
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r28,r7
	ctx.r5.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r30,r29
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// srawi r4,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r4.s64 = r24.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r31,r23,r5
	r31.u64 = r23.u64 + ctx.r5.u64;
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r25,r25,r15
	r25.s64 = int64_t(r25.s32) * int64_t(r15.s32);
	// mullw r7,r31,r27
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r11,r25,r7
	ctx.r11.u64 = r25.u64 + ctx.r7.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b4b98
	if (!ctx.cr6.gt) goto loc_823B4B98;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b4ba4
	goto loc_823B4BA4;
loc_823B4B98:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B4BA4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,-316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r27,-264(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// li r25,128
	r25.s64 = 128;
	// lwz r8,-352(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// li r24,16
	r24.s64 = 16;
	// lwz r29,-320(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r30.u32);
	// b 0x823b4c04
	goto loc_823B4C04;
loc_823B4BE0:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r24,16
	r24.s64 = 16;
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	r25.s64 = 128;
	// lwz r26,-268(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r29,-320(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r30,-316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r27,-264(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
loc_823B4C00:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B4C04:
	// lwz r9,-276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// stw r9,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b3d0c
	if (ctx.cr6.lt) goto loc_823B3D0C;
	// lwz r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x823b4f3c
	goto loc_823B4F3C;
loc_823B4C28:
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4d18
	if (!ctx.cr6.lt) goto loc_823B4D18;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b4ca8
	if (!ctx.cr6.lt) goto loc_823B4CA8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,1(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// lbz r31,1(r9)
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r23,0(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// subf r31,r5,r31
	r31.u64 = r31.u64 - ctx.r5.u64;
	// mullw r5,r23,r9
	ctx.r5.s64 = int64_t(r23.s32) * int64_t(ctx.r9.s32);
	// subf r31,r23,r31
	r31.u64 = r31.u64 - r23.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// subfic r28,r28,256
	ctx.xer.ca = r28.u32 <= 256;
	r28.u64 = static_cast<uint64_t>(256) - r28.u64;
	// subf r9,r9,r28
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x823b4cd0
	goto loc_823B4CD0;
loc_823B4CA8:
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lbzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r9,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_823B4CD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x823b4c00
	if (ctx.cr6.eq) goto loc_823B4C00;
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// lbzx r6,r11,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// stb r6,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r6.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r30.u32);
	// b 0x823b4c04
	goto loc_823B4C04;
loc_823B4D18:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// beq cr6,0x823b4c00
	if (ctx.cr6.eq) goto loc_823B4C00;
	// stb r25,1(r29)
	REX_STORE_U8(r29.u32 + 1, r25.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stb r25,1(r30)
	REX_STORE_U8(r30.u32 + 1, r25.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r30.u32);
	// b 0x823b4c04
	goto loc_823B4C04;
loc_823B4D4C:
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4eec
	if (!ctx.cr6.lt) goto loc_823B4EEC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// bge cr6,0x823b4e3c
	if (!ctx.cr6.lt) goto loc_823B4E3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b4f3c
	if (!ctx.cr6.gt) goto loc_823B4F3C;
loc_823B4D74:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823b4dfc
	if (ctx.cr6.lt) goto loc_823B4DFC;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4dfc
	if (!ctx.cr6.lt) goto loc_823B4DFC;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r31,r11,r10
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// subfic r7,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x823b4e24
	if (ctx.cr6.eq) goto loc_823B4E24;
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// stb r5,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823b4e28
	goto loc_823B4E28;
loc_823B4DFC:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x823b4e24
	if (ctx.cr6.eq) goto loc_823B4E24;
	// stb r25,1(r29)
	REX_STORE_U8(r29.u32 + 1, r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(r30.u32 + 1, r25.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x823b4e28
	goto loc_823B4E28;
loc_823B4E24:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B4E28:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4d74
	if (ctx.cr6.lt) goto loc_823B4D74;
	// b 0x823b4f30
	goto loc_823B4F30;
loc_823B4E3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b4f3c
	if (!ctx.cr6.gt) goto loc_823B4F3C;
loc_823B4E44:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r9,-324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823b4eac
	if (ctx.cr6.lt) goto loc_823B4EAC;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823b4eac
	if (!ctx.cr6.lt) goto loc_823B4EAC;
	// lbzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x823b4ed4
	if (ctx.cr6.eq) goto loc_823B4ED4;
	// lwz r11,-236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// stb r9,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r9.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// stb r5,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r5.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823b4ed8
	goto loc_823B4ED8;
loc_823B4EAC:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x823b4ed4
	if (ctx.cr6.eq) goto loc_823B4ED4;
	// stb r25,1(r29)
	REX_STORE_U8(r29.u32 + 1, r25.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,1(r30)
	REX_STORE_U8(r30.u32 + 1, r25.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x823b4ed8
	goto loc_823B4ED8;
loc_823B4ED4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B4ED8:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4e44
	if (ctx.cr6.lt) goto loc_823B4E44;
	// b 0x823b4f30
	goto loc_823B4F30;
loc_823B4EEC:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b4f3c
	if (!ctx.cr6.gt) goto loc_823B4F3C;
loc_823B4EFC:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x823b4f1c
	if (ctx.cr6.eq) goto loc_823B4F1C;
	// stbu r25,1(r29)
	ea = 1 + r29.u32;
	REX_STORE_U8(ea, r25.u8);
	r29.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbu r25,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r25.u8);
	r30.u32 = ea;
	// b 0x823b4f20
	goto loc_823B4F20;
loc_823B4F1C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B4F20:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4efc
	if (ctx.cr6.lt) goto loc_823B4EFC;
loc_823B4F30:
	// stw r30,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r30.u32);
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_823B4F3C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// lwz r5,100(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f5,f12,f3,f4
	ctx.f5.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r31,r9
	r31.s64 = ctx.r9.s32;
	// stw r9,-10300(r7)
	REX_STORE_U32(ctx.r7.u32 + -10300, ctx.r9.u32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r31.u64);
	// add r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r9.u32);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f5,f5,f11,f12
	ctx.f5.f64 = std::fma(ctx.f5.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// lwz r21,-324(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// mullw r7,r21,r21
	ctx.r7.s64 = int64_t(r21.s32) * int64_t(r21.s32);
	// srawi r19,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	r19.s64 = ctx.r7.s32 >> 8;
	// mullw r6,r19,r21
	ctx.r6.s64 = int64_t(r19.s32) * int64_t(r21.s32);
	// srawi r18,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r18.s64 = ctx.r6.s32 >> 8;
	// ble cr6,0x823b55b4
	if (!ctx.cr6.gt) goto loc_823B55B4;
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b55b4
	if (!ctx.cr6.lt) goto loc_823B55B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// ble cr6,0x823b56bc
	if (!ctx.cr6.gt) goto loc_823B56BC;
loc_823B4FE0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r10,-324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x823b5574
	if (!ctx.cr6.gt) goto loc_823B5574;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823b5574
	if (!ctx.cr6.lt) goto loc_823B5574;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r23,80(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// subf r28,r23,r7
	r28.u64 = ctx.r7.u64 - r23.u64;
	// add r25,r23,r7
	r25.u64 = r23.u64 + ctx.r7.u64;
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// lbz r4,2(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// stw r11,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r11.u32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-1(r28)
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + -1);
	// lbz r29,1(r25)
	r29.u64 = REX_LOAD_U8(r25.u32 + 1);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r3,r29,r6
	ctx.r3.u64 = r29.u64 + ctx.r6.u64;
	// lbz r30,-1(r25)
	r30.u64 = REX_LOAD_U8(r25.u32 + -1);
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,-1(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// rlwinm r26,r3,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r31.u64);
	// lfd f13,-160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lbz r27,-1(r8)
	r27.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + r30.u64;
	// lbz r31,1(r28)
	r31.u64 = REX_LOAD_U8(r28.u32 + 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r20,r10,r9
	r20.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r28,2(r28)
	r28.u64 = REX_LOAD_U8(r28.u32 + 2);
	// subf r17,r27,r26
	r17.u64 = r26.u64 - r27.u64;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r15,r3,r31
	r15.u64 = ctx.r3.u64 + r31.u64;
	// lbz r24,2(r8)
	r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// subf r16,r30,r10
	r16.u64 = ctx.r10.u64 - r30.u64;
	// lbz r26,1(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// rlwinm r3,r20,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r28,r17
	r20.u64 = r17.u64 - r28.u64;
	// lbzx r7,r23,r7
	ctx.r7.u64 = REX_LOAD_U8(r23.u32 + ctx.r7.u32);
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r25,2(r25)
	r25.u64 = REX_LOAD_U8(r25.u32 + 2);
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// fmsub f5,f0,f11,f12
	ctx.f5.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// rlwinm r23,r15,1,0,30
	r23.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r4,r17
	r17.u64 = r17.u64 - ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r23,r26,r23
	r23.u64 = r23.u64 - r26.u64;
	// add r15,r20,r24
	r15.u64 = r20.u64 + r24.u64;
	// subf r20,r6,r17
	r20.u64 = r17.u64 - ctx.r6.u64;
	// rlwinm r17,r3,3,0,28
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r23,r25,r23
	r23.u64 = r23.u64 - r25.u64;
	// subf r3,r3,r17
	ctx.r3.u64 = r17.u64 - ctx.r3.u64;
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// rlwinm r16,r23,2,0,29
	r16.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f2,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f2.u64);
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-324(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r20,r20,r27
	r20.u64 = r20.u64 + r27.u64;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + r15.u64;
	// add r23,r23,r16
	r23.u64 = r23.u64 + r16.u64;
	// subf r17,r5,r8
	r17.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r20,r20,r25
	r20.u64 = r20.u64 + r25.u64;
	// add r16,r7,r8
	r16.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r23,r3,r23
	r23.u64 = ctx.r3.u64 + r23.u64;
	// subf r3,r29,r17
	ctx.r3.u64 = r17.u64 - r29.u64;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r16,r16,13
	r16.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(13));
	// mullw r15,r14,r14
	r15.s64 = int64_t(r14.s32) * int64_t(r14.s32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r20,r24,r20
	r20.u64 = r20.u64 - r24.u64;
	// subf r16,r16,r23
	r16.u64 = r23.u64 - r16.u64;
	// stw r3,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// srawi r23,r15,8
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFF) != 0);
	r23.s64 = r15.s32 >> 8;
	// rlwinm r15,r3,3,0,28
	r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r20,r20,r28
	r20.u64 = r20.u64 + r28.u64;
	// srawi r3,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	ctx.r3.s64 = r16.s32 >> 1;
	// rotlwi r17,r11,2
	r17.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r20.u32);
	// stw r3,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r3.u32);
	// subf r20,r7,r29
	r20.u64 = r29.u64 - ctx.r7.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// lwz r16,-360(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// std r3,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r3.u64);
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - r26.u64;
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// std r22,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, r22.u64);
	// subf r16,r31,r9
	r16.u64 = ctx.r9.u64 - r31.u64;
	// lwz r22,-336(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r17.u32);
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r14,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r14.u32);
	// subf r16,r25,r3
	r16.u64 = ctx.r3.u64 - r25.u64;
	// std r4,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// subf r17,r5,r17
	r17.u64 = r17.u64 - ctx.r5.u64;
	// subf r3,r10,r16
	ctx.r3.u64 = r16.u64 - ctx.r10.u64;
	// subf r17,r6,r17
	r17.u64 = r17.u64 - ctx.r6.u64;
	// subf r15,r22,r15
	r15.u64 = r15.u64 - r22.u64;
	// add r16,r17,r26
	r16.u64 = r17.u64 + r26.u64;
	// subf r17,r9,r3
	r17.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r15,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r15.u32);
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,-368(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r17,r17,r30
	r17.u64 = r17.u64 + r30.u64;
	// subf r15,r6,r15
	r15.u64 = r15.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r17.u32);
	// subf r17,r8,r20
	r17.u64 = r20.u64 - ctx.r8.u64;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// subf r17,r4,r15
	r17.u64 = r15.u64 - ctx.r4.u64;
	// stw r26,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r26.u32);
	// subf r26,r29,r7
	r26.u64 = ctx.r7.u64 - r29.u64;
	// stw r17,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r17.u32);
	// add r16,r16,r28
	r16.u64 = r16.u64 + r28.u64;
	// subf r17,r4,r26
	r17.u64 = r26.u64 - ctx.r4.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// lwz r26,-360(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r16,r24,r16
	r16.u64 = r16.u64 - r24.u64;
	// stw r17,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r17.u32);
	// subf r15,r11,r7
	r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r16,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, r16.u32);
	// subf r25,r30,r25
	r25.u64 = r25.u64 - r30.u64;
	// mulli r15,r15,11
	r15.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(11));
	// stw r15,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r15.u32);
	// lwz r17,-336(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r17,r26,r17
	r17.u64 = r26.u64 + r17.u64;
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r17.u32);
	// rlwinm r26,r20,1,0,30
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-300(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r15,-344(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r20,r26
	r26.u64 = r20.u64 + r26.u64;
	// stw r25,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r25.u32);
	// mullw r20,r3,r19
	r20.s64 = int64_t(ctx.r3.s32) * int64_t(r19.s32);
	// lwz r22,-272(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r26,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r26.u32);
	// stw r20,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r20.u32);
	// lwz r25,-280(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r20,-256(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r17,r16,r4
	r17.u64 = r16.u64 + ctx.r4.u64;
	// lwz r4,-308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// stw r25,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r25.u32);
	// rotlwi r3,r17,0
	ctx.r3.u64 = __builtin_rotateleft32(r17.u32, 0);
	// rotlwi r26,r15,0
	r26.u64 = __builtin_rotateleft32(r15.u32, 0);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// rotlwi r14,r22,0
	r14.u64 = __builtin_rotateleft32(r22.u32, 0);
	// lwz r16,-360(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rotlwi r25,r31,2
	r25.u64 = __builtin_rotateleft32(r31.u32, 2);
	// stw r17,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r17.u32);
	// lwz r17,-296(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r15,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r15.u32);
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r20.u32);
	// add r17,r17,r8
	r17.u64 = r17.u64 + ctx.r8.u64;
	// rlwinm r20,r26,1,0,30
	r20.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r17.u32);
	// rlwinm r17,r22,2,0,29
	r17.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r20
	r26.u64 = r26.u64 + r20.u64;
	// lwz r15,-336(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r20,r15,r28
	r20.u64 = r15.u64 + r28.u64;
	// rlwinm r15,r3,1,0,30
	r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, r26.u32);
	// rlwinm r26,r20,1,0,30
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r15,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r15.u32);
	// add r20,r14,r17
	r20.u64 = r14.u64 + r17.u64;
	// lwz r15,-360(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r22,-368(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// add r25,r31,r25
	r25.u64 = r31.u64 + r25.u64;
	// stw r20,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r20.u32);
	// add r17,r15,r27
	r17.u64 = r15.u64 + r27.u64;
	// lwz r20,-344(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r15,r26,0
	r15.u64 = __builtin_rotateleft32(r26.u32, 0);
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// std r23,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, r23.u64);
	// rlwinm r17,r20,2,0,29
	r17.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,-300(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r26,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r26.u32);
	// add r26,r16,r4
	r26.u64 = r16.u64 + ctx.r4.u64;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// lwz r4,-280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r14,r14,3,0,28
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r17,-256(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stw r20,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r20.u32);
	// rotlwi r16,r9,3
	r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r23,-368(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r14,r4,r14
	r14.u64 = r14.u64 - ctx.r4.u64;
	// subf r16,r9,r16
	r16.u64 = r16.u64 - ctx.r9.u64;
	// lwz r4,-296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r14,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r14.u32);
	// add r20,r15,r22
	r20.u64 = r15.u64 + r22.u64;
	// stw r16,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r16.u32);
	// subf r31,r9,r31
	r31.u64 = r31.u64 - ctx.r9.u64;
	// subf r25,r25,r20
	r25.u64 = r20.u64 - r25.u64;
	// stw r3,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r3.u32);
	// add r20,r4,r17
	r20.u64 = ctx.r4.u64 + r17.u64;
	// lwz r14,-284(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r15,-360(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r11,r8
	r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r26,r26,r15
	r26.u64 = r26.u64 + r15.u64;
	// stw r31,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r31.u32);
	// subf r15,r27,r20
	r15.u64 = r20.u64 - r27.u64;
	// srawi r4,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r4.s64 = r26.s32 >> 1;
	// subf r20,r11,r9
	r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rotlwi r26,r3,0
	r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,-300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r22,r6,r20
	r22.u64 = r20.u64 - ctx.r6.u64;
	// lwz r20,-344(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r26,r3
	r26.u64 = r26.u64 + ctx.r3.u64;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// add r20,r26,r23
	r20.u64 = r26.u64 + r23.u64;
	// mulli r17,r16,11
	r17.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(11));
	// subf r25,r28,r15
	r25.u64 = r15.u64 - r28.u64;
	// mullw r26,r4,r18
	r26.s64 = int64_t(ctx.r4.s32) * int64_t(r18.s32);
	// srawi r15,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r15.s64 = ctx.r3.s32 >> 1;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// add r31,r14,r26
	r31.u64 = r14.u64 + r26.u64;
	// mullw r26,r15,r21
	r26.s64 = int64_t(r15.s32) * int64_t(r21.s32);
	// add r25,r25,r6
	r25.u64 = r25.u64 + ctx.r6.u64;
	// srawi r24,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r24.s64 = r20.s32 >> 1;
	// add r15,r31,r26
	r15.u64 = r31.u64 + r26.u64;
	// mullw r26,r25,r18
	r26.s64 = int64_t(r25.s32) * int64_t(r18.s32);
	// mullw r31,r24,r19
	r31.s64 = int64_t(r24.s32) * int64_t(r19.s32);
	// subf r16,r10,r30
	r16.u64 = r30.u64 - ctx.r10.u64;
	// add r24,r31,r26
	r24.u64 = r31.u64 + r26.u64;
	// rlwinm r26,r16,1,0,30
	r26.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,-360(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// rlwinm r25,r22,1,0,30
	r25.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r27,r26
	r20.u64 = r26.u64 - r27.u64;
	// subf r31,r5,r25
	r31.u64 = r25.u64 - ctx.r5.u64;
	// subf r25,r29,r16
	r25.u64 = r16.u64 - r29.u64;
	// add r27,r31,r27
	r27.u64 = r31.u64 + r27.u64;
	// subf r26,r8,r29
	r26.u64 = r29.u64 - ctx.r8.u64;
	// subf r25,r8,r25
	r25.u64 = r25.u64 - ctx.r8.u64;
	// subf r29,r29,r20
	r29.u64 = r20.u64 - r29.u64;
	// add r16,r27,r7
	r16.u64 = r27.u64 + ctx.r7.u64;
	// rlwinm r27,r26,1,0,30
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r10,r25
	r25.u64 = r25.u64 - ctx.r10.u64;
	// subf r14,r7,r29
	r14.u64 = r29.u64 - ctx.r7.u64;
	// subf r31,r8,r11
	r31.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r26,r26,r27
	r26.u64 = r26.u64 + r27.u64;
	// subf r29,r28,r25
	r29.u64 = r25.u64 - r28.u64;
	// rotlwi r27,r30,2
	r27.u64 = __builtin_rotateleft32(r30.u32, 2);
	// ld r4,-224(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// rlwinm r17,r31,1,0,30
	r17.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r23,-328(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// rlwinm r20,r16,1,0,30
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r3,-240(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r28,r9,r14
	r28.u64 = r14.u64 - ctx.r9.u64;
	// lwz r14,-304(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r17,r31,r17
	r17.u64 = r31.u64 + r17.u64;
	// rotlwi r27,r10,3
	r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r26,r20,r26
	r26.u64 = r20.u64 + r26.u64;
	// add r31,r28,r5
	r31.u64 = r28.u64 + ctx.r5.u64;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// subf r30,r30,r26
	r30.u64 = r26.u64 - r30.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// subf r28,r10,r17
	r28.u64 = r17.u64 - ctx.r10.u64;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
	// add r28,r28,r4
	r28.u64 = r28.u64 + ctx.r4.u64;
	// subf r20,r10,r11
	r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r29,r29,r4
	r29.u64 = r29.u64 + ctx.r4.u64;
	// mullw r26,r23,r14
	r26.s64 = int64_t(r23.s32) * int64_t(r14.s32);
	// rotlwi r31,r8,1
	r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r16,r30,r6
	r16.u64 = r30.u64 + ctx.r6.u64;
	// srawi r17,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r17.s64 = r28.s32 >> 1;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// subf r30,r9,r20
	r30.u64 = r20.u64 - ctx.r9.u64;
	// rotlwi r28,r7,1
	r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r26,r26,8
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r26.s64 = r26.s32 >> 8;
	// add r31,r31,r10
	r31.u64 = r31.u64 + ctx.r10.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r25,r15,r23
	r25.s64 = int64_t(r15.s32) * int64_t(r23.s32);
	// add r20,r29,r6
	r20.u64 = r29.u64 + ctx.r6.u64;
	// add r8,r30,r6
	ctx.r8.u64 = r30.u64 + ctx.r6.u64;
	// add r15,r28,r9
	r15.u64 = r28.u64 + ctx.r9.u64;
	// mullw r29,r27,r19
	r29.s64 = int64_t(r27.s32) * int64_t(r19.s32);
	// mullw r28,r16,r18
	r28.s64 = int64_t(r16.s32) * int64_t(r18.s32);
	// mullw r6,r8,r21
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r21.s32);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r8,r29,r28
	ctx.r8.u64 = r29.u64 + r28.u64;
	// subf r29,r4,r31
	r29.u64 = r31.u64 - ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r28,r8,r4
	r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r6,r15,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r31,r20,r21
	r31.s64 = int64_t(r20.s32) * int64_t(r21.s32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// rlwinm r30,r17,8,0,23
	r30.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r8,r3,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r27,r9,r7
	r27.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r6,r31,r30
	ctx.r6.u64 = r31.u64 + r30.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r3,r29
	ctx.r4.u64 = r29.u64 - ctx.r3.u64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r25,r6
	ctx.r3.u64 = r25.u64 + ctx.r6.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r10,r19
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// mullw r4,r9,r23
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mullw r11,r7,r18
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r18.s32);
	// srawi r6,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r6.s64 = r27.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r8,r6,r21
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r21.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r31,r28,r14
	r31.s64 = int64_t(r28.s32) * int64_t(r14.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// ld r22,-232(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b5530
	if (!ctx.cr6.gt) goto loc_823B5530;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b553c
	goto loc_823B553C;
loc_823B5530:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B553C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// li r25,128
	r25.s64 = 128;
	// lwz r27,-264(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r30,-316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// li r24,16
	r24.s64 = 16;
	// lwz r29,-320(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r26,-268(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-276(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// b 0x823b5594
	goto loc_823B5594;
loc_823B5574:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823b558c
	if (!ctx.cr6.lt) goto loc_823B558C;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x823b5590
	goto loc_823B5590;
loc_823B558C:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
loc_823B5590:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823B5594:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// stw r7,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r7.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4fe0
	if (ctx.cr6.lt) goto loc_823B4FE0;
	// lwz r4,-248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// b 0x823b56bc
	goto loc_823B56BC;
loc_823B55B4:
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b5698
	if (!ctx.cr6.lt) goto loc_823B5698;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b5640
	if (!ctx.cr6.lt) goto loc_823B5640;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b56bc
	if (!ctx.cr6.gt) goto loc_823B56BC;
loc_823B55D8:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823b5624
	if (ctx.cr6.lt) goto loc_823B5624;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823b5624
	if (!ctx.cr6.lt) goto loc_823B5624;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// subfic r5,r21,256
	ctx.xer.ca = r21.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - r21.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r21.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// b 0x823b5628
	goto loc_823B5628;
loc_823B5624:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
loc_823B5628:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b55d8
	if (ctx.cr6.lt) goto loc_823B55D8;
	// b 0x823b56b8
	goto loc_823B56B8;
loc_823B5640:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b56bc
	if (!ctx.cr6.gt) goto loc_823B56BC;
loc_823B564C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f13.u64);
	// lwz r11,-324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823b567c
	if (ctx.cr6.lt) goto loc_823B567C;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b567c
	if (!ctx.cr6.lt) goto loc_823B567C;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// b 0x823b5680
	goto loc_823B5680;
loc_823B567C:
	// stb r24,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r24.u8);
loc_823B5680:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b564c
	if (ctx.cr6.lt) goto loc_823B564C;
	// b 0x823b56b8
	goto loc_823B56B8;
loc_823B5698:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b56bc
	if (!ctx.cr6.gt) goto loc_823B56BC;
loc_823B56A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r24,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, r24.u8);
	ctx.r8.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b56a4
	if (ctx.cr6.lt) goto loc_823B56A4;
loc_823B56B8:
	// stw r8,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
loc_823B56BC:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b3bf8
	if (ctx.cr6.lt) goto loc_823B3BF8;
loc_823B56D0:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8241B2F0) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241b3d0
	if (!ctx.cr6.lt) goto loc_8241B3D0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241B354:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
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
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
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
	// bdnz 0x8241b354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B354;
loc_8241B3D0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b3ec
	if (ctx.cr6.eq) goto loc_8241B3EC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B3EC;
	sub_82413D40(ctx, base);
loc_8241B3EC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b408
	if (ctx.cr6.eq) goto loc_8241B408;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B408;
	sub_82414110(ctx, base);
loc_8241B408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241E418) {
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
	ctx.lr = 0x8241E420;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8241e448
	if (ctx.cr6.lt) goto loc_8241E448;
	// li r27,43
	r27.s64 = 43;
	// b 0x8241e450
	goto loc_8241E450;
loc_8241E448:
	// li r27,45
	r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8241E450:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	f30.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-7488
	r29.s64 = ctx.r11.s64 + -7488;
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8241E494:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8241E4D0;
	sub_822D55F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(r31.s32, 9, ctx.xer);
	// blt cr6,0x8241e494
	if (ctx.cr6.lt) goto loc_8241E494;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stb r11,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-18896
	ctx.r4.s64 = ctx.r10.s64 + -18896;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = r27.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8241E500;
	sub_822D55F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82420C88) {
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
	ctx.lr = 0x82420C90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8240e810
	ctx.lr = 0x82420CAC;
	sub_8240E810(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8240e810
	ctx.lr = 0x82420CBC;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x82420d08
	if (!ctx.cr6.eq) goto loc_82420D08;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82420cd4
	if (!ctx.cr6.eq) goto loc_82420CD4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82420d00
	goto loc_82420D00;
loc_82420CD4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82420ce4
	if (!ctx.cr6.eq) goto loc_82420CE4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82420d00
	goto loc_82420D00;
loc_82420CE4:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82420cf4
	if (!ctx.cr6.eq) goto loc_82420CF4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82420d00
	goto loc_82420D00;
loc_82420CF4:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82420d08
	if (!ctx.cr6.eq) goto loc_82420D08;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82420D00:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82420d2c
	goto loc_82420D2C;
loc_82420D08:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-18872
	ctx.r6.s64 = ctx.r11.s64 + -18872;
	// addi r5,r10,21240
	ctx.r5.s64 = ctx.r10.s64 + 21240;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82420D2C;
	sub_8240E308(ctx, base);
loc_82420D2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82420d64
	if (ctx.cr6.eq) goto loc_82420D64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420d64
	if (ctx.cr6.eq) goto loc_82420D64;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r6,61
	ctx.r6.s64 = 61;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,244(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// bctrl 
	ctx.lr = 0x82420D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824237C8) {
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
	ctx.lr = 0x824237D0;
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
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lwz r30,184(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82423820
	if (!ctx.cr6.eq) goto loc_82423820;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x82423824
	goto loc_82423824;
loc_82423820:
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_82423824:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r4,176(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 176);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,1536(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1536);
	// addi r6,r11,12048
	ctx.r6.s64 = ctx.r11.s64 + 12048;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82420d70
	ctx.lr = 0x82423840;
	sub_82420D70(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 2736);
	// lwz r4,236(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 236);
	// bl 0x8242a1c0
	ctx.lr = 0x8242386C;
	sub_8242A1C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,5,21,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x7E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// rlwimi r10,r11,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 2736);
	// bl 0x8242a1c0
	ctx.lr = 0x82423894;
	sub_8242A1C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r9,104(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 104);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r9,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r10,172(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 172);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824238d8
	if (!ctx.cr6.eq) goto loc_824238D8;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x824238f0
	goto loc_824238F0;
loc_824238D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824238e8
	if (!ctx.cr6.eq) goto loc_824238E8;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x824238f0
	goto loc_824238F0;
loc_824238E8:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
loc_824238F0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 132);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r10,133(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 133);
	// rlwimi r11,r10,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r11,134(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 134);
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x824239b4
	if (ctx.cr6.eq) goto loc_824239B4;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x824239b4
	if (ctx.cr6.eq) goto loc_824239B4;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x824239b4
	if (ctx.cr6.eq) goto loc_824239B4;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x824239b4
	if (ctx.cr6.eq) goto loc_824239B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 128);
	// bl 0x82422d68
	ctx.lr = 0x82423954;
	sub_82422D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,129(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 129);
	// bl 0x82422d68
	ctx.lr = 0x82423970;
	sub_82422D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,130(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 130);
	// bl 0x82422d68
	ctx.lr = 0x8242398C;
	sub_82422D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r4,131(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 131);
	// bl 0x82422d68
	ctx.lr = 0x824239A8;
	sub_82422D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x824239bc
	goto loc_824239BC;
loc_824239B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_824239BC:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,15944(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15944);
	f29.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f30,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	f30.f64 = double(temp.f32);
	// addi r27,r10,-17024
	r27.s64 = ctx.r10.s64 + -17024;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r11,12,18,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFCFFF);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 2);
	// addi r28,r11,16880
	r28.s64 = ctx.r11.s64 + 16880;
	// rlwimi r8,r9,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 4);
	// rlwimi r8,r11,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 6);
	// rlwimi r11,r10,18,11,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1C0000) | (ctx.r11.u64 & 0xFFFFFFFFFFE3FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// rlwimi r10,r11,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// rlwimi r11,r10,24,6,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 12);
	// rlwimi r10,r11,26,4,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 14);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwimi r10,r11,29,1,2
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x60000000) | (ctx.r10.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lhz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 20);
	// rlwimi r11,r7,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r10,0,30,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 24);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82423ae4
	if (ctx.cr6.eq) goto loc_82423AE4;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x82423ae4
	if (ctx.cr6.eq) goto loc_82423AE4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82423ae4
	if (ctx.cr6.eq) goto loc_82423AE4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16192
	ctx.r5.s64 = ctx.r11.s64 + -16192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3057
	ctx.r7.s64 = 3057;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423AE4;
	sub_8240E308(ctx, base);
loc_82423AE4:
	// lhz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 26);
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
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82423b30
	if (ctx.cr6.eq) goto loc_82423B30;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x82423b30
	if (ctx.cr6.eq) goto loc_82423B30;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82423b30
	if (ctx.cr6.eq) goto loc_82423B30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16280
	ctx.r5.s64 = ctx.r11.s64 + -16280;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3059
	ctx.r7.s64 = 3059;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423B30;
	sub_8240E308(ctx, base);
loc_82423B30:
	// lhz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 28);
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
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82423b7c
	if (ctx.cr6.eq) goto loc_82423B7C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x82423b7c
	if (ctx.cr6.eq) goto loc_82423B7C;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x82423b7c
	if (ctx.cr6.eq) goto loc_82423B7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-16368
	ctx.r5.s64 = ctx.r11.s64 + -16368;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3061
	ctx.r7.s64 = 3061;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423B7C;
	sub_8240E308(ctx, base);
loc_82423B7C:
	// lhz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,17
	ctx.r11.s64 = 17;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82423bb0
	if (!ctx.cr6.eq) goto loc_82423BB0;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,16,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE0FFFF;
	// b 0x82423bd4
	goto loc_82423BD4;
loc_82423BB0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82423bc4
	if (!ctx.cr6.eq) goto loc_82423BC4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x82423bd4
	goto loc_82423BD4;
loc_82423BC4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x82423bd8
	if (!ctx.cr6.eq) goto loc_82423BD8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
loc_82423BD4:
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82423BD8:
	// lhz r9,26(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 26);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82423c04
	if (!ctx.cr6.eq) goto loc_82423C04;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,11,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC1FFFFF;
	// b 0x82423c28
	goto loc_82423C28;
loc_82423C04:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82423c18
	if (!ctx.cr6.eq) goto loc_82423C18;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x82423c28
	goto loc_82423C28;
loc_82423C18:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x82423c2c
	if (!ctx.cr6.eq) goto loc_82423C2C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
loc_82423C28:
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82423C2C:
	// lhz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 28);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82423c58
	if (!ctx.cr6.eq) goto loc_82423C58;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// b 0x82423c68
	goto loc_82423C68;
loc_82423C58:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82423c70
	if (!ctx.cr6.eq) goto loc_82423C70;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r10,26,1,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C000000) | (ctx.r11.u64 & 0xFFFFFFFF83FFFFFF);
loc_82423C68:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82423c84
	goto loc_82423C84;
loc_82423C70:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x82423c84
	if (!ctx.cr6.eq) goto loc_82423C84;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r11,26,1,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7C000000) | (ctx.r10.u64 & 0xFFFFFFFF83FFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82423C84:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82423ce0
	if (ctx.cr6.eq) goto loc_82423CE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82423cd4
	if (ctx.cr6.eq) goto loc_82423CD4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82423cc0
	if (ctx.cr6.eq) goto loc_82423CC0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,8424
	ctx.r5.s64 = ctx.r11.s64 + 8424;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3099
	ctx.r7.s64 = 3099;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423CBC;
	sub_8240E308(ctx, base);
	// b 0x82423cf8
	goto loc_82423CF8;
loc_82423CC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x82423cf0
	goto loc_82423CF0;
loc_82423CD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x82423ce8
	goto loc_82423CE8;
loc_82423CE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_82423CE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_82423CF0:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82423CF8:
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

DEFINE_REX_FUNC(sub_8243BDF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r9,r4,96
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// lbz r10,10(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 10);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,20,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFF;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243be30
	if (ctx.cr6.eq) goto loc_8243BE30;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// rlwinm r9,r9,0,20,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8243BE30:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// rlwinm r7,r10,20,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8243be50
	if (ctx.cr6.eq) goto loc_8243BE50;
	// rlwimi r10,r9,12,18,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8243BE50:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,9(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 9);
	// rlwinm r7,r10,15,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8243be70
	if (ctx.cr6.eq) goto loc_8243BE70;
	// rlwimi r10,r9,17,12,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xE0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8243BE70:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r7,r10,6
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8243be90
	if (ctx.cr6.eq) goto loc_8243BE90;
	// rlwimi r10,r9,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8243BE90:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r7,r10,6
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8243beb0
	if (ctx.cr6.eq) goto loc_8243BEB0;
	// rlwimi r10,r9,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8243BEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243F5E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8243df28
	sub_8243DF28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243FC48) {
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
	ctx.lr = 0x8243FC50;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lhz r24,14(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mr r25,r24
	r25.u64 = r24.u64;
	// bl 0x8242b7d0
	ctx.lr = 0x8243FC78;
	sub_8242B7D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8243fd54
	if (ctx.cr0.lt) goto loc_8243FD54;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8243fca4
	if (!ctx.cr6.eq) goto loc_8243FCA4;
	// lwz r27,20(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r25,18(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
loc_8243FCA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8243fcb8
	if (!ctx.cr6.eq) goto loc_8243FCB8;
	// lwz r26,20(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8243FCB8:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lhz r23,2(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r22,2(r3)
	r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// bl 0x8243a300
	ctx.lr = 0x8243FCC8;
	sub_8243A300(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// rlwinm r7,r24,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bl 0x8243f638
	ctx.lr = 0x8243FCF0;
	sub_8243F638(ctx, base);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8243fd38
	if (ctx.cr6.lt) goto loc_8243FD38;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243fd38
	if (!ctx.cr0.eq) goto loc_8243FD38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243fd3c
	if (!ctx.cr6.eq) goto loc_8243FD3C;
loc_8243FD38:
	// li r10,16
	ctx.r10.s64 = 16;
loc_8243FD3C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_8243FD54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82442B70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82442b9c
	if (!ctx.cr6.lt) goto loc_82442B9C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82442b94
	if (ctx.cr6.eq) goto loc_82442B94;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82442B8C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x82442b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442B8C;
loc_82442B94:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82442ba0
	goto loc_82442BA0;
loc_82442B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82442BA0:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82443BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82443BF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82442aa0
	ctx.lr = 0x82443C30;
	sub_82442AA0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82446C98) {
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
	ctx.lr = 0x82446CA0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,332(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r11,340(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,360(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r15,328(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82446d4c
	if (!ctx.cr6.lt) goto loc_82446D4C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82446d38
	if (ctx.cr6.eq) goto loc_82446D38;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82446d38
	if (!ctx.cr6.gt) goto loc_82446D38;
	// li r28,0
	r28.s64 = 0;
loc_82446CF8:
	// lhz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U16(r17.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// bctrl 
	ctx.lr = 0x82446D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,344(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 344);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// stwx r3,r8,r28
	REX_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// blt cr6,0x82446cf8
	if (ctx.cr6.lt) goto loc_82446CF8;
loc_82446D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r11.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_82446D4C:
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r26,r8,r15
	r26.u64 = uint32_t((r15.s32 && !(ctx.r8.s32 == INT32_MIN && r15.s32 == -1)) ? ctx.r8.s32 / r15.s32 : 0);
	// divw r7,r6,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0);
	// addi r14,r26,1
	r14.s64 = r26.s64 + 1;
	// divw r6,r7,r30
	ctx.r6.u64 = uint32_t((r30.s32 && !(ctx.r7.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r7.s32 / r30.s32 : 0);
	// cmpw cr6,r6,r14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r14.s32, ctx.xer);
	// bge cr6,0x82446d7c
	if (!ctx.cr6.lt) goto loc_82446D7C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_82446D7C:
	// mullw r10,r26,r15
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r15.s32);
	// add r16,r10,r11
	r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r29,0
	r29.s64 = 0;
	// divw r27,r16,r24
	r27.u64 = uint32_t((r24.s32 && !(r16.s32 == INT32_MIN && r24.s32 == -1)) ? r16.s32 / r24.s32 : 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82446dd8
	if (!ctx.cr6.gt) goto loc_82446DD8;
	// li r28,0
	r28.s64 = 0;
loc_82446D98:
	// lhz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U16(r17.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// bctrl 
	ctx.lr = 0x82446DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,348(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 348);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// stwx r3,r28,r8
	REX_STORE_U32(r28.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// blt cr6,0x82446d98
	if (ctx.cr6.lt) goto loc_82446D98;
loc_82446DD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r25,r10,r20
	r25.u64 = ctx.r10.u64 + r20.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bgt cr6,0x82446df8
	if (ctx.cr6.gt) goto loc_82446DF8;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82446DF8:
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r22,r10,r20
	r22.u64 = ctx.r10.u64 + r20.u64;
	// li r18,0
	r18.s64 = 0;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// ble cr6,0x82446e14
	if (!ctx.cr6.gt) goto loc_82446E14;
	// subf r18,r26,r27
	r18.u64 = r27.u64 - r26.u64;
loc_82446E14:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r19,r11,r20
	r19.u64 = ctx.r11.u64 + r20.u64;
	// mullw r11,r27,r24
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r24.s32);
	// subf r27,r11,r16
	r27.u64 = r16.u64 - ctx.r11.u64;
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(r25.u32, r19.u32, ctx.xer);
	// blt cr6,0x82446f04
	if (ctx.cr6.lt) goto loc_82446F04;
loc_82446E2C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82446ec4
	if (!ctx.cr6.gt) goto loc_82446EC4;
	// subf r23,r27,r24
	r23.u64 = r24.u64 - r27.u64;
	// neg r28,r30
	r28.s64 = static_cast<int64_t>(-r30.u64);
loc_82446E40:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82446e6c
	if (ctx.cr6.eq) goto loc_82446E6C;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x82446e70
	goto loc_82446E70;
loc_82446E6C:
	// li r26,0
	r26.s64 = 0;
loc_82446E70:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mullw r11,r3,r23
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r23.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// divw r3,r9,r24
	ctx.r3.u64 = uint32_t((r24.s32 && !(ctx.r9.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r9.s32 / r24.s32 : 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x82446EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x82446e40
	if (ctx.cr6.lt) goto loc_82446E40;
loc_82446EC4:
	// subf. r27,r15,r27
	r27.u64 = r27.u64 - r15.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt 0x82446ef0
	if (ctx.cr0.gt) goto loc_82446EF0;
	// subf r11,r24,r27
	ctx.r11.u64 = r27.u64 - r24.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r8,r9,r24
	ctx.r8.u64 = uint32_t((r24.s32 && !(ctx.r9.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r9.s32 / r24.s32 : 0);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r8,r24
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// subf r27,r6,r27
	r27.u64 = r27.u64 - ctx.r6.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
loc_82446EF0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(r25.u32, r19.u32, ctx.xer);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// subf r22,r10,r22
	r22.u64 = r22.u64 - ctx.r10.u64;
	// bge cr6,0x82446e2c
	if (!ctx.cr6.lt) goto loc_82446E2C;
loc_82446F04:
	// lwz r11,340(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82446f88
	if (!ctx.cr6.gt) goto loc_82446F88;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bge cr6,0x82446f88
	if (!ctx.cr6.lt) goto loc_82446F88;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82446fb0
	if (!ctx.cr6.gt) goto loc_82446FB0;
	// subf r26,r27,r24
	r26.u64 = r24.u64 - r27.u64;
	// li r28,0
	r28.s64 = 0;
loc_82446F2C:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,344(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 344);
	// mullw r10,r3,r27
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// lwzx r7,r9,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mullw r11,r7,r26
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r26.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// divw r3,r3,r24
	ctx.r3.u64 = uint32_t((r24.s32 && !(ctx.r3.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r3.s32 / r24.s32 : 0);
	// bctrl 
	ctx.lr = 0x82446F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x82446f2c
	if (ctx.cr6.lt) goto loc_82446F2C;
loc_82446F88:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82446fb0
	if (!ctx.cr6.gt) goto loc_82446FB0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82446F98:
	// lwz r10,348(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 348);
	// lwz r9,344(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 344);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82446f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82446F98;
loc_82446FB0:
	// lhz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U16(r17.u32 + 0);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// subf r11,r10,r16
	ctx.r11.u64 = r16.u64 - ctx.r10.u64;
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + r15.u64;
	// stw r9,340(r21)
	REX_STORE_U32(r21.u32 + 340, ctx.r9.u32);
	// beq cr6,0x82446fec
	if (ctx.cr6.eq) goto loc_82446FEC;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mullw r9,r10,r18
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r18.s32);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r8,r14,r10
	ctx.r8.s64 = int64_t(r14.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82446FEC;
	sub_822D4FA0(ctx, base);
loc_82446FEC:
	// sth r14,0(r17)
	REX_STORE_U16(r17.u32 + 0, r14.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8245C428) {
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
	// bge cr6,0x8245c464
	if (!ctx.cr6.lt) goto loc_8245C464;
	// bl 0x824d419c
	ctx.lr = 0x8245C458;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8245c464
	if (ctx.cr6.eq) goto loc_8245C464;
	// li r30,1
	r30.s64 = 1;
loc_8245C464:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c478
	if (ctx.cr6.eq) goto loc_8245C478;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8245c4d8
	if (ctx.cr6.eq) goto loc_8245C4D8;
loc_8245C478:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8245c4d8
	if (ctx.cr6.gt) goto loc_8245C4D8;
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
	ctx.lr = 0x8245C4A8;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245c4d8
	if (ctx.cr0.eq) goto loc_8245C4D8;
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
loc_8245C4D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245c4f0
	if (ctx.cr6.eq) goto loc_8245C4F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8245c4f4
	goto loc_8245C4F4;
loc_8245C4F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245C4F4:
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

DEFINE_REX_FUNC(sub_8245DFA8) {
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
	ctx.lr = 0x8245DFB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,628
	ctx.r11.s64 = ctx.r3.s64 + 628;
loc_8245DFBC:
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
	// bne 0x8245dfbc
	if (!ctx.cr0.eq) goto loc_8245DFBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// bl 0x82451d48
	ctx.lr = 0x8245DFE4;
	sub_82451D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r26,-1
	r26.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245DFFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rldicl r10,r9,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8245E020:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x82473498
	ctx.lr = 0x8245E030;
	sub_82473498(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
	// b 0x8245e054
	goto loc_8245E054;
loc_8245E038:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8245e05c
	if (!ctx.cr6.lt) goto loc_8245E05C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245dde0
	ctx.lr = 0x8245E050;
	sub_8245DDE0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8245E054:
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245e038
	if (!ctx.cr0.lt) goto loc_8245E038;
loc_8245E05C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8245e06c
	if (ctx.cr6.eq) goto loc_8245E06C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8245E06C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8245e088
	if (ctx.cr6.lt) goto loc_8245E088;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245c8b8
	ctx.lr = 0x8245E080;
	sub_8245C8B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8245e020
	if (!ctx.cr0.eq) goto loc_8245E020;
loc_8245E088:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r30,1
	r30.s64 = 1;
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8245e0f8
	if (!ctx.cr6.gt) goto loc_8245E0F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x823ce408
	ctx.lr = 0x8245E0AC;
	sub_823CE408(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8245e0e0
	if (!ctx.cr6.gt) goto loc_8245E0E0;
	// li r29,4
	r29.s64 = 4;
loc_8245E0BC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x8220aa00
	ctx.lr = 0x8245E0CC;
	sub_8220AA00(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245e0bc
	if (ctx.cr6.lt) goto loc_8245E0BC;
loc_8245E0E0:
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// bl 0x82208848
	ctx.lr = 0x8245E0E8;
	sub_82208848(ctx, base);
	// stw r25,608(r31)
	REX_STORE_U32(r31.u32 + 608, r25.u32);
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x82208848
	ctx.lr = 0x8245E0F4;
	sub_82208848(ctx, base);
	// stw r25,612(r31)
	REX_STORE_U32(r31.u32 + 612, r25.u32);
loc_8245E0F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge cr6,0x8245e11c
	if (!ctx.cr6.lt) goto loc_8245E11C;
	// stw r25,164(r31)
	REX_STORE_U32(r31.u32 + 164, r25.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245E11C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82461FE0) {
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
	ctx.lr = 0x82461FE8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r22,32767
	r22.s64 = 32767;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82462010
	if (!ctx.cr6.eq) goto loc_82462010;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82466db8
	ctx.lr = 0x82462010;
	sub_82466DB8(ctx, base);
loc_82462010:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824621f0
	if (ctx.cr6.eq) goto loc_824621F0;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_82462028:
	// lwz r10,356(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 356);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// lwzx r9,r25,r10
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	// clrlwi r31,r9,16
	r31.u64 = ctx.r9.u32 & 0xFFFF;
	// beq cr6,0x8246213c
	if (ctx.cr6.eq) goto loc_8246213C;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8246204C:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 424);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lhz r19,0(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,-2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bl 0x8231aa18
	ctx.lr = 0x82462078;
	sub_8231AA18(ctx, base);
	// lwz r10,424(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 424);
	// extsh r28,r19
	r28.s64 = r19.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// bl 0x82466908
	ctx.lr = 0x824620A8;
	sub_82466908(ctx, base);
	// lwz r5,60(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgt cr6,0x824620d4
	if (ctx.cr6.gt) goto loc_824620D4;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x824620fc
	goto loc_824620FC;
loc_824620D4:
	// lwz r11,424(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 424);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lhz r8,-2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
loc_824620FC:
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 256);
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8246204c
	if (ctx.cr6.lt) goto loc_8246204C;
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824621c4
	if (!ctx.cr6.gt) goto loc_824621C4;
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82462130
	if (!ctx.cr6.lt) goto loc_82462130;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82462130:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x824621c4
	goto loc_824621C4;
loc_8246213C:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82462178
	if (!ctx.cr6.eq) goto loc_82462178;
	// lhz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 112);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x82462178
	if (ctx.cr6.eq) goto loc_82462178;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82462244
	if (ctx.cr6.gt) goto loc_82462244;
	// lhz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 132);
	// lhz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 128);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
loc_82462178:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824621b8
	if (!ctx.cr6.gt) goto loc_824621B8;
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x8246219c
	if (ctx.cr6.lt) goto loc_8246219C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8246219C:
	// lwz r11,360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 360);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r7,r25,r11
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r6,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r6.u32);
loc_824621B8:
	// lwz r11,356(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 356);
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// stwx r10,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r10.u32);
loc_824621C4:
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824621d8
	if (!ctx.cr6.lt) goto loc_824621D8;
	// mr r22,r31
	r22.u64 = r31.u64;
loc_824621D8:
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,1776
	r24.s64 = r24.s64 + 1776;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82462028
	if (ctx.cr6.lt) goto loc_82462028;
loc_824621F0:
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82462278
	if (ctx.cr6.eq) goto loc_82462278;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8246220c
	if (ctx.cr6.eq) goto loc_8246220C;
	// lwz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 256);
	// clrlwi r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
loc_8246220C:
	// lwz r11,384(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 384);
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82462220
	if (!ctx.cr6.lt) goto loc_82462220;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82462220:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x8246226c
	if (!ctx.cr6.eq) goto loc_8246226C;
	// lhz r10,210(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 210);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sth r8,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r8.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82462244:
	// lhz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 124);
	// lhz r9,122(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 122);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r31,r6,16
	r31.u64 = ctx.r6.u32 & 0xFFFF;
	// b 0x82462178
	goto loc_82462178;
loc_8246226C:
	// sth r11,0(r20)
	REX_STORE_U16(r20.u32 + 0, ctx.r11.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82462278:
	// sth r22,0(r20)
	REX_STORE_U16(r20.u32 + 0, r22.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8246E4B8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8246e504
	if (ctx.cr6.gt) goto loc_8246E504;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8246e4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4F4;
	// bdzf 4*cr6+eq,0x8246e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4FC;
	// bdzf 4*cr6+eq,0x8246e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4FC;
	// bdzf 4*cr6+eq,0x8246e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4FC;
	// bdzf 4*cr6+eq,0x8246e4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4F4;
	// bdzf 4*cr6+eq,0x8246e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246E4FC;
	// bne cr6,0x8246e4fc
	if (!ctx.cr6.eq) goto loc_8246E4FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8246E4F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8246E4FC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8246E504:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246FE40) {
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
	ctx.lr = 0x8246FE48;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470538
	if (ctx.cr6.eq) goto loc_82470538;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82470538
	if (ctx.cr6.eq) goto loc_82470538;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247052c
	if (ctx.cr6.eq) goto loc_8247052C;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r11.u32);
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
loc_8246FE98:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r10,-372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8246feb0
	if (ctx.cr6.lt) goto loc_8246FEB0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8246FEB0:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r6,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r6.u32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8246FED4:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8246ff0c
	if (!ctx.cr6.lt) goto loc_8246FF0C;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,-320
	ctx.r4.s64 = ctx.r1.s64 + -320;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stwx r8,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// b 0x8246ff1c
	goto loc_8246FF1C;
loc_8246FF0C:
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// addi r8,r1,-352
	ctx.r8.s64 = ctx.r1.s64 + -352;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
loc_8246FF1C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8246fed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246FED4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
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
	// lwz r27,-348(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r11,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r11.u32);
loc_8246FF58:
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
	// bgt cr6,0x8246ff9c
	if (ctx.cr6.gt) goto loc_8246FF9C;
	// subf r8,r11,r22
	ctx.r8.u64 = r22.u64 - ctx.r11.u64;
loc_8246FF9C:
	// mullw r11,r22,r26
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r26.s32);
	// mullw r10,r20,r25
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(r25.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - r19.u64;
	// bgt cr6,0x8246ffbc
	if (ctx.cr6.gt) goto loc_8246FFBC;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_8246FFBC:
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
	// ble cr6,0x8246ffe0
	if (!ctx.cr6.gt) goto loc_8246FFE0;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - r16.u64;
	// b 0x8246ffe4
	goto loc_8246FFE4;
loc_8246FFE0:
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
loc_8246FFE4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// divw r7,r11,r6
	ctx.r7.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8246fffc
	if (!ctx.cr6.lt) goto loc_8246FFFC;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8246FFFC:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(r25.s32);
	// mullw r10,r27,r26
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - r21.u64;
	// bgt cr6,0x82470020
	if (ctx.cr6.gt) goto loc_82470020;
	// subf r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
loc_82470020:
	// mullw r11,r27,r25
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r25.s32);
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
	// bgt cr6,0x82470040
	if (ctx.cr6.gt) goto loc_82470040;
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
loc_82470040:
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
	// ble cr6,0x82470064
	if (!ctx.cr6.gt) goto loc_82470064;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - r15.u64;
	// b 0x82470068
	goto loc_82470068;
loc_82470064:
	// subf r11,r11,r15
	ctx.r11.u64 = r15.u64 - ctx.r11.u64;
loc_82470068:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r3,r11,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x8247007c
	if (!ctx.cr6.lt) goto loc_8247007C;
	// li r3,16
	ctx.r3.s64 = 16;
loc_8247007C:
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// lwz r10,-400(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// stwx r7,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r7.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// stwx r3,r29,r9
	REX_STORE_U32(r29.u32 + ctx.r9.u32, ctx.r3.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x8247023c
	if (!ctx.cr6.gt) goto loc_8247023C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,-384(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824700BC:
	// mullw r9,r31,r26
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// mullw r10,r30,r25
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(r25.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// andc r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82470108
	if (!ctx.cr6.gt) goto loc_82470108;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82470114
	goto loc_82470114;
loc_82470108:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82470114
	if (!ctx.cr6.lt) goto loc_82470114;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82470114:
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8247012c
	if (!ctx.cr6.gt) goto loc_8247012C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82470138
	goto loc_82470138;
loc_8247012C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82470138
	if (!ctx.cr6.lt) goto loc_82470138;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82470138:
	// lwz r8,-392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x82470158
	if (!ctx.cr6.lt) goto loc_82470158;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82470158:
	// lbzu r11,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// subf r30,r9,r10
	r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// lwzx r8,r29,r24
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r24.u32);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// mullw r30,r30,r30
	r30.s64 = int64_t(r30.s32) * int64_t(r30.s32);
	// stw r11,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r11.u32);
	// mullw r7,r28,r26
	ctx.r7.s64 = int64_t(r28.s32) * int64_t(r26.s32);
	// srawi r11,r30,7
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7F) != 0);
	ctx.r11.s64 = r30.s32 >> 7;
	// lwz r30,-376(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r8,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r8.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r11.s32 / ctx.r3.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824701c8
	if (!ctx.cr6.gt) goto loc_824701C8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824701d4
	goto loc_824701D4;
loc_824701C8:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x824701d4
	if (!ctx.cr6.lt) goto loc_824701D4;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_824701D4:
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x824701ec
	if (!ctx.cr6.gt) goto loc_824701EC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x824701f8
	goto loc_824701F8;
loc_824701EC:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x824701f8
	if (!ctx.cr6.lt) goto loc_824701F8;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_824701F8:
	// lwz r9,-392(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// srawi r3,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x82470218
	if (!ctx.cr6.lt) goto loc_82470218;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82470218:
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwzx r9,r29,r23
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r23.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r11,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r11.u32);
	// bdnz 0x824700bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824700BC;
loc_8247023C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x8246ff58
	if (ctx.cr6.lt) goto loc_8246FF58;
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
	// bge cr6,0x8247026c
	if (!ctx.cr6.lt) goto loc_8247026C;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8247026C:
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470280
	if (!ctx.cr6.lt) goto loc_82470280;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82470280:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82470294
	if (!ctx.cr6.lt) goto loc_82470294;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82470294:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824702a8
	if (!ctx.cr6.lt) goto loc_824702A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824702A8:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824702bc
	if (!ctx.cr6.lt) goto loc_824702BC;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824702BC:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824702d0
	if (!ctx.cr6.lt) goto loc_824702D0;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824702D0:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824702e4
	if (!ctx.cr6.lt) goto loc_824702E4;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824702E4:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824702f8
	if (!ctx.cr6.lt) goto loc_824702F8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824702F8:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8247030c
	if (!ctx.cr6.lt) goto loc_8247030C;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8247030C:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470320
	if (!ctx.cr6.lt) goto loc_82470320;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82470320:
	// lwz r8,-232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82470330
	if (!ctx.cr6.lt) goto loc_82470330;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82470330:
	// lwz r9,-264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470340
	if (!ctx.cr6.lt) goto loc_82470340;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82470340:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-400(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-384(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwzx r26,r9,r11
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// lwzx r24,r31,r11
	r24.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwz r11,-380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// mr r29,r14
	r29.u64 = r14.u64;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// lwzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r23,r31,r11
	r23.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r11,r6,-2
	ctx.xer.ca = ctx.r6.u32 > 1;
	ctx.r11.s64 = ctx.r6.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stbu r4,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// sthu r8,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r5.u32 = ea;
	// sthu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r5.u32 = ea;
	// sthu r20,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r5.u32 = ea;
	// sthu r27,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r27.u16);
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
	// beq 0x82470520
	if (ctx.cr0.eq) goto loc_82470520;
	// lwz r22,-392(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824703C4:
	// mullw r10,r24,r30
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r30.s32);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r23,r31
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(r31.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,-128
	ctx.r10.s64 = ctx.r9.s64 + -128;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r28,r4,r8
	r28.u64 = uint32_t((ctx.r8.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r4.s32 / ctx.r8.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(r28.s32, 7, ctx.xer);
	// andc r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82470410
	if (!ctx.cr6.gt) goto loc_82470410;
	// li r28,7
	r28.s64 = 7;
	// b 0x8247041c
	goto loc_8247041C;
loc_82470410:
	// cmpwi cr6,r28,-8
	ctx.cr6.compare<int32_t>(r28.s32, -8, ctx.xer);
	// bge cr6,0x8247041c
	if (!ctx.cr6.lt) goto loc_8247041C;
	// li r28,-8
	r28.s64 = -8;
loc_8247041C:
	// mullw r10,r28,r8
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// ble cr6,0x82470434
	if (!ctx.cr6.gt) goto loc_82470434;
	// li r4,32767
	ctx.r4.s64 = 32767;
	// b 0x82470440
	goto loc_82470440;
loc_82470434:
	// cmpwi cr6,r4,-32768
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -32768, ctx.xer);
	// bge cr6,0x82470440
	if (!ctx.cr6.lt) goto loc_82470440;
	// li r4,-32768
	ctx.r4.s64 = -32768;
loc_82470440:
	// rlwinm r11,r28,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x8247045c
	if (!ctx.cr6.lt) goto loc_8247045C;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8247045C:
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r30
	r31.u64 = r30.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r11,r3,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r3.s32 / ctx.r7.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x824704b0
	if (!ctx.cr6.gt) goto loc_824704B0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824704bc
	goto loc_824704BC;
loc_824704B0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x824704bc
	if (!ctx.cr6.lt) goto loc_824704BC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_824704BC:
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x824704d4
	if (!ctx.cr6.gt) goto loc_824704D4;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x824704e0
	goto loc_824704E0;
loc_824704D4:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x824704e0
	if (!ctx.cr6.lt) goto loc_824704E0;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_824704E0:
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r9,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82470500
	if (!ctx.cr6.lt) goto loc_82470500;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82470500:
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// or r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r4,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x824703c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824703C4;
loc_82470520:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246fe98
	if (!ctx.cr6.eq) goto loc_8246FE98;
loc_8247052C:
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x822d4ea0
	return;
loc_82470538:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824A7318) {
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
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v13,-1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v8,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x824a739c
	if (!ctx.cr6.eq) goto loc_824A739C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a7438
	if (!ctx.cr6.gt) goto loc_824A7438;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_824A7354:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v6,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v31,v3,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v30,v31,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v29,v30,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x824a7354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7354;
	// b 0x824a7438
	goto loc_824A7438;
loc_824A739C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a7438
	if (!ctx.cr6.gt) goto loc_824A7438;
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
loc_824A73B8:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v10,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi128 v7,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi v6,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v5,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v4,v0,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v31,v13,v0,6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v10,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v0,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v29,v13,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v28,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v30
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v26,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v11,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v24,v10,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v0,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v24,v2
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v23,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v13,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v21,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsrah v19,v13,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v12,v19
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v19,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v12,v61,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// bdnz 0x824a73b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A73B8;
loc_824A7438:
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AC210) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,96
	ctx.r7.s64 = 96;
	// li r8,144
	ctx.r8.s64 = 144;
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// li r9,192
	ctx.r9.s64 = 192;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r11,288
	ctx.r11.s64 = 288;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AE378) {
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
	ctx.lr = 0x824AE380;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v3,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x824ae534
	if (!ctx.cr6.eq) goto loc_824AE534;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824ae708
	if (!ctx.cr6.gt) goto loc_824AE708;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824AE44C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v1,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v30,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v23,v0,v5
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v20,v21
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vslh v15,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v31,v22,v31
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v25,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v2,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubshs v21,v1,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v17,v22,v3
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v1,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsrah v31,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x824ae44c
	if (ctx.cr6.lt) goto loc_824AE44C;
	// b 0x824ae708
	goto loc_824AE708;
loc_824AE534:
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
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v4,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824ae708
	if (!ctx.cr6.gt) goto loc_824AE708;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824AE5B8:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v4,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglb v19,v0,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v2,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vslh v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v16,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vsubshs v23,v30,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v21,v29,v21
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v3
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v29,v20,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v16,v28,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v30,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v29,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v28,v15,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// stvx128 v25,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824ae5b8
	if (ctx.cr6.lt) goto loc_824AE5B8;
loc_824AE708:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x824ae7b8
	if (!ctx.cr6.eq) goto loc_824AE7B8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ae8a0
	if (!ctx.cr6.gt) goto loc_824AE8A0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824AE73C:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v8,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v4,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ae73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE73C;
	// b 0x824ae8a0
	goto loc_824AE8A0;
loc_824AE7B8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ae8a0
	if (!ctx.cr6.gt) goto loc_824AE8A0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824AE7D0:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v39,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v39,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v38,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824ae7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE7D0;
loc_824AE8A0:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
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

