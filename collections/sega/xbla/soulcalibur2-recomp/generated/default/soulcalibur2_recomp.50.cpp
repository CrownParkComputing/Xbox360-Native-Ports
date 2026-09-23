#include "soulcalibur2_funcs.50.h"

DEFINE_REX_FUNC(sub_820E20B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,-4(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8460) {
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
	ctx.lr = 0x820E8474;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200a08
	ctx.lr = 0x820E8480;
	sub_82200A08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E8498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x82200a10
	ctx.lr = 0x820E84A4;
	sub_82200A10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E84BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f30,f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 - ctx.f1.f64));
	// bl 0x82200a18
	ctx.lr = 0x820E84C8;
	sub_82200A18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E84E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f29,f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e0130
	ctx.lr = 0x820E84F0;
	sub_820E0130(ctx, base);
	// fmuls f29,f29,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 * f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f31,f31,f31
	f31.f64 = double(float(f31.f64 * f31.f64));
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fadds f13,f31,f29
	ctx.f13.f64 = double(float(f31.f64 + f29.f64));
	// fneg f28,f0
	f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsqrts f2,f13
	ctx.f2.f64 = double(float(sqrt(ctx.f13.f64)));
	// bl 0x820e0130
	ctx.lr = 0x820E8518;
	sub_820E0130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmadds f0,f30,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f30.f64, f30.f64, f31.f64)));
	// fneg f30,f1
	f30.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82200818
	ctx.lr = 0x820E8530;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x82200710
	ctx.lr = 0x820E854C;
	sub_82200710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200820
	ctx.lr = 0x820E8558;
	sub_82200820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82200828
	ctx.lr = 0x820E8564;
	sub_82200828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200830
	ctx.lr = 0x820E8570;
	sub_82200830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f84
	ctx.lr = 0x820E857C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F0FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820F0FB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f103c
	if (!ctx.cr0.eq) goto loc_820F103C;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f103c
	if (ctx.cr6.eq) goto loc_820F103C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,32336
	r31.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,4892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4892);
	// stw r10,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r30,532(r3)
	REX_STORE_U32(ctx.r3.u32 + 532, r30.u32);
	// stw r4,528(r3)
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r4.u32);
	// bl 0x820f02a8
	ctx.lr = 0x820F1010;
	sub_820F02A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-28256(r10)
	REX_STORE_U32(ctx.r10.u32 + -28256, ctx.r11.u32);
	// beq 0x820f103c
	if (ctx.cr0.eq) goto loc_820F103C;
	// lwz r11,4872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4872);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,516(r11)
	REX_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
loc_820F103C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820F46A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r9,r11,8120
	ctx.xer.ca = ctx.r11.u32 > 4294959175;
	ctx.r9.s64 = ctx.r11.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820f475c
	if (ctx.cr0.eq) goto loc_820F475C;
	// lwz r10,8452(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8452);
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f46d8
	if (ctx.cr6.eq) goto loc_820F46D8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8436(r3)
	REX_STORE_U32(ctx.r3.u32 + 8436, ctx.r10.u32);
loc_820F46D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4718
	if (ctx.cr6.eq) goto loc_820F4718;
	// lha r10,56(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 56));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lha r7,78(r11)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 78));
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f4718
	if (!ctx.cr6.eq) goto loc_820F4718;
	// lwz r11,8436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8436);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820f4718
	if (!ctx.cr6.eq) goto loc_820F4718;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8436(r3)
	REX_STORE_U32(ctx.r3.u32 + 8436, ctx.r11.u32);
loc_820F4718:
	// lwz r11,8436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f475c
	if (!ctx.cr6.eq) goto loc_820F475C;
	// li r10,29
	ctx.r10.s64 = 29;
	// addi r11,r3,9312
	ctx.r11.s64 = ctx.r3.s64 + 9312;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F4730:
	// lwz r6,-12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lwz r5,-8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bdnz 0x820f4730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F4730;
	// lha r11,2(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 2));
	// stw r7,8968(r3)
	REX_STORE_U32(ctx.r3.u32 + 8968, ctx.r7.u32);
	// stw r8,8436(r3)
	REX_STORE_U32(ctx.r3.u32 + 8436, ctx.r8.u32);
	// stw r11,8964(r3)
	REX_STORE_U32(ctx.r3.u32 + 8964, ctx.r11.u32);
loc_820F475C:
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r3,8600
	ctx.r11.s64 = ctx.r3.s64 + 8600;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F4768:
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820f4768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F4768;
	// li r11,30
	ctx.r11.s64 = 30;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r7,r3,8964
	ctx.r7.s64 = ctx.r3.s64 + 8964;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F4788:
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f47f8
	if (ctx.cr6.eq) goto loc_820F47F8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820f47f8
	if (ctx.cr6.eq) goto loc_820F47F8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f47c8
	if (!ctx.cr6.gt) goto loc_820F47C8;
	// addi r11,r3,8604
	ctx.r11.s64 = ctx.r3.s64 + 8604;
loc_820F47AC:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820f47cc
	if (ctx.cr6.eq) goto loc_820F47CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f47ac
	if (ctx.cr6.lt) goto loc_820F47AC;
loc_820F47C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820F47CC:
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,717
	ctx.r9.s64 = ctx.r9.s64 + 717;
	// mulli r5,r9,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwz r9,8612(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8612);
	// stwx r6,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,8608(r11)
	REX_STORE_U32(ctx.r11.u32 + 8608, ctx.r6.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8612(r11)
	REX_STORE_U32(ctx.r11.u32 + 8612, ctx.r9.u32);
loc_820F47F8:
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// bdnz 0x820f4788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F4788;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,8588(r3)
	REX_STORE_U32(ctx.r3.u32 + 8588, ctx.r10.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f4844
	if (!ctx.cr6.gt) goto loc_820F4844;
	// addi r11,r3,8612
	ctx.r11.s64 = ctx.r3.s64 + 8612;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F4820:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820f4838
	if (!ctx.cr6.lt) goto loc_820F4838;
	// lwz r7,-8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_820F4838:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x820f4820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F4820;
loc_820F4844:
	// stw r7,8592(r3)
	REX_STORE_U32(ctx.r3.u32 + 8592, ctx.r7.u32);
	// stw r6,8600(r3)
	REX_STORE_U32(ctx.r3.u32 + 8600, ctx.r6.u32);
	// stw r9,8596(r3)
	REX_STORE_U32(ctx.r3.u32 + 8596, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FDB78) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDBA4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fdbb4
	if (ctx.cr0.eq) goto loc_820FDBB4;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x820fdc74
	goto loc_820FDC74;
loc_820FDBB4:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r10,8120
	ctx.xer.ca = ctx.r10.u32 > 4294959175;
	ctx.r11.s64 = ctx.r10.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,5780(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5780);
	// beq 0x820fdc70
	if (ctx.cr0.eq) goto loc_820FDC70;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdc70
	if (ctx.cr6.eq) goto loc_820FDC70;
	// lha r10,54(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 54));
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820fdc70
	if (ctx.cr6.gt) goto loc_820FDC70;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDC00;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdc40
	if (!ctx.cr0.eq) goto loc_820FDC40;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDC18;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdc40
	if (!ctx.cr0.eq) goto loc_820FDC40;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDC30;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fdc80
	if (ctx.cr0.eq) goto loc_820FDC80;
loc_820FDC38:
	// li r5,2112
	ctx.r5.s64 = 2112;
	// b 0x820fdc74
	goto loc_820FDC74;
loc_820FDC40:
	// li r5,19
	ctx.r5.s64 = 19;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDC50;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fdc68
	if (ctx.cr0.eq) goto loc_820FDC68;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820fed80
	ctx.lr = 0x820FDC60;
	sub_820FED80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdc38
	if (!ctx.cr0.eq) goto loc_820FDC38;
loc_820FDC68:
	// li r5,1088
	ctx.r5.s64 = 1088;
	// b 0x820fdc74
	goto loc_820FDC74;
loc_820FDC70:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820FDC74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8d58
	ctx.lr = 0x820FDC80;
	sub_820F8D58(ctx, base);
loc_820FDC80:
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

DEFINE_REX_FUNC(sub_82102E18) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82102E20;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f00
	ctx.lr = 0x82102E28;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821019c8
	ctx.lr = 0x82102E34;
	sub_821019C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,26636(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82102e60
	if (ctx.cr0.eq) goto loc_82102E60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
loc_82102E60:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f27,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f23,26544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26544);
	f23.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f22,26540(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26540);
	f22.f64 = double(temp.f32);
	// lfs f0,26548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fmadds f13,f13,f23,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// fsubs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821fe068
	ctx.lr = 0x82102EB4;
	sub_821FE068(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f25,2000(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f25.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82102ef0
	if (ctx.cr6.eq) goto loc_82102EF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82102ef0
	if (ctx.cr6.eq) goto loc_82102EF0;
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f30,f12,f13
	f30.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f16,f0,f11
	f16.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x82102f18
	goto loc_82102F18;
loc_82102EF0:
	// lfs f12,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f25,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f25.f64, -ctx.f11.f64)));
	// fnmsubs f13,f13,f25,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f25.f64, -ctx.f12.f64)));
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f16,f13,f11
	f16.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
loc_82102F18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// fmr f31,f16
	ctx.fpscr.disableFlushMode();
	f31.f64 = f16.f64;
	// li r15,0
	r15.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f17,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f17.f64 = double(temp.f32);
	// stfs f17,112(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ble cr6,0x821042d8
	if (!ctx.cr6.gt) goto loc_821042D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f29,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, f29.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,27100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,16264(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16264);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,27096(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 27096);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f13,27088(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 27088);
	// lfs f15,20484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20484);
	f15.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f20,15968(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15968);
	f20.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f26,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	f26.f64 = double(temp.f32);
	// addi r11,r11,27072
	ctx.r11.s64 = ctx.r11.s64 + 27072;
	// lfs f19,2352(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2352);
	f19.f64 = double(temp.f32);
	// addi r10,r10,26656
	ctx.r10.s64 = ctx.r10.s64 + 26656;
	// lfd f10,26664(r6)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r6.u32 + 26664);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f18,26672(r4)
	f18.u64 = REX_LOAD_U64(ctx.r4.u32 + 26672);
	// addi r11,r7,27064
	ctx.r11.s64 = ctx.r7.s64 + 27064;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r8,26604
	ctx.r8.s64 = ctx.r8.s64 + 26604;
	// stfs f28,188(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r10,r5,27052
	ctx.r10.s64 = ctx.r5.s64 + 27052;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfd f13,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.f13.u64);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r11,r3,27040
	ctx.r11.s64 = ctx.r3.s64 + 27040;
	// stfd f10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f10.u64);
	// addi r10,r30,27036
	ctx.r10.s64 = r30.s64 + 27036;
	// lfs f21,16228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16228);
	f21.f64 = double(temp.f32);
	// addi r8,r4,27032
	ctx.r8.s64 = ctx.r4.s64 + 27032;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfs f24,16172(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16172);
	f24.f64 = double(temp.f32);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r11,r28,27024
	ctx.r11.s64 = r28.s64 + 27024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32166
	ctx.r6.s64 = -2108030976;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// addi r8,r29,27012
	ctx.r8.s64 = r29.s64 + 27012;
	// addi r10,r27,21852
	ctx.r10.s64 = r27.s64 + 21852;
	// lis r26,-32256
	r26.s64 = -2113929216;
	// stw r8,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// lis r21,-32256
	r21.s64 = -2113929216;
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r25,-32256
	r25.s64 = -2113929216;
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r23,-32256
	r23.s64 = -2113929216;
	// lis r22,-32174
	r22.s64 = -2108555264;
	// lis r20,-32170
	r20.s64 = -2108293120;
	// lis r19,-32256
	r19.s64 = -2113929216;
	// lis r18,-32256
	r18.s64 = -2113929216;
	// addi r16,r9,27000
	r16.s64 = ctx.r9.s64 + 27000;
	// addi r17,r6,432
	r17.s64 = ctx.r6.s64 + 432;
	// addi r30,r21,26988
	r30.s64 = r21.s64 + 26988;
	// addi r11,r26,21804
	ctx.r11.s64 = r26.s64 + 21804;
	// addi r21,r20,22576
	r21.s64 = r20.s64 + 22576;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r14,r25,26980
	r14.s64 = r25.s64 + 26980;
	// addi r24,r24,26912
	r24.s64 = r24.s64 + 26912;
	// addi r23,r23,26976
	r23.s64 = r23.s64 + 26976;
	// addi r22,r22,-8072
	r22.s64 = r22.s64 + -8072;
	// addi r19,r19,26964
	r19.s64 = r19.s64 + 26964;
	// addi r18,r18,26952
	r18.s64 = r18.s64 + 26952;
	// li r20,-1
	r20.s64 = -1;
	// b 0x821030ac
	goto loc_821030AC;
loc_821030A8:
	// lwz r30,212(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
loc_821030AC:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lfd f29,176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fmr f14,f31
	f14.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821030f4
	if (ctx.cr0.eq) goto loc_821030F4;
	// lfd f1,160(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stfd f29,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821030F0;
	sub_821EACB0(ctx, base);
	// b 0x82103150
	goto loc_82103150;
loc_821030F4:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103128
	if (ctx.cr0.eq) goto loc_82103128;
	// lfd f1,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103124;
	sub_821EACB0(ctx, base);
	// b 0x82103150
	goto loc_82103150;
loc_82103128:
	// stfd f18,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f18.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stfd f18,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f18.u64);
	// fmr f2,f18
	ctx.f2.f64 = f18.f64;
	// fmr f1,f18
	ctx.f1.f64 = f18.f64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103150;
	sub_821EACB0(ctx, base);
loc_82103150:
	// lwz r11,168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 168);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x821031a8
	if (!ctx.cr6.eq) goto loc_821031A8;
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f18,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f18.u64);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stfd f18,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f18.u64);
	// fmr f1,f18
	ctx.f1.f64 = f18.f64;
	// fmr f2,f18
	ctx.f2.f64 = f18.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8210319C;
	sub_821EACB0(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x821031f8
	goto loc_821031F8;
loc_821031A8:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821031bc
	if (ctx.cr6.eq) goto loc_821031BC;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x821031f8
	if (!ctx.cr6.eq) goto loc_821031F8;
loc_821031BC:
	// lfd f2,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fsubs f31,f31,f24
	f31.f64 = double(float(f31.f64 - f24.f64));
	// stfd f2,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x821031F8;
	sub_821EACB0(ctx, base);
loc_821031F8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r29,r15,5,0,26
	r29.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820fffc0
	ctx.lr = 0x82103218;
	sub_820FFFC0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8210323c
	if (!ctx.cr0.eq) goto loc_8210323C;
	// li r30,0
	r30.s64 = 0;
	// b 0x82103248
	goto loc_82103248;
loc_8210323C:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82103244;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82103248:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r28,r20
	r28.u64 = r20.u64;
	// ori r10,r11,255
	ctx.r10.u64 = ctx.r11.u64 | 255;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210327c
	if (!ctx.cr6.eq) goto loc_8210327C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821032c0
	if (ctx.cr0.eq) goto loc_821032C0;
	// lis r10,20720
	ctx.r10.s64 = 1357905920;
	// ori r10,r10,41215
	ctx.r10.u64 = ctx.r10.u64 | 41215;
loc_8210327C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82103280:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82103300
	if (ctx.cr6.eq) goto loc_82103300;
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(r27.u32, 10, ctx.xer);
	// beq cr6,0x82103308
	if (ctx.cr6.eq) goto loc_82103308;
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(r27.u32, 13, ctx.xer);
	// beq cr6,0x82103310
	if (ctx.cr6.eq) goto loc_82103310;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(r27.u32, 14, ctx.xer);
	// beq cr6,0x82103308
	if (ctx.cr6.eq) goto loc_82103308;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821032d4
	if (ctx.cr6.eq) goto loc_821032D4;
	// lis r28,-1800
	r28.s64 = -117964800;
	// lis r25,248
	r25.s64 = 16252928;
	// ori r28,r28,63743
	r28.u64 = r28.u64 | 63743;
	// ori r25,r25,255
	r25.u64 = r25.u64 | 255;
	// b 0x82103324
	goto loc_82103324;
loc_821032C0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,-16160
	ctx.r10.s64 = -1059061760;
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
	// ori r10,r10,33023
	ctx.r10.u64 = ctx.r10.u64 | 33023;
	// b 0x82103280
	goto loc_82103280;
loc_821032D4:
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103324
	if (ctx.cr6.eq) goto loc_82103324;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82102d78
	ctx.lr = 0x821032FC;
	sub_82102D78(ctx, base);
	// b 0x82103324
	goto loc_82103324;
loc_82103300:
	// lis r28,-3743
	r28.s64 = -245301248;
	// ori r28,r28,12799
	r28.u64 = r28.u64 | 12799;
loc_82103308:
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(r27.u32, 13, ctx.xer);
	// bne cr6,0x82103318
	if (!ctx.cr6.eq) goto loc_82103318;
loc_82103310:
	// lis r28,-3743
	r28.s64 = -245301248;
	// ori r28,r28,12799
	r28.u64 = r28.u64 | 12799;
loc_82103318:
	// cmplwi cr6,r27,10
	ctx.cr6.compare<uint32_t>(r27.u32, 10, ctx.xer);
	// bne cr6,0x82103324
	if (!ctx.cr6.eq) goto loc_82103324;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_82103324:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820fffc0
	ctx.lr = 0x8210333C;
	sub_820FFFC0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82103368
	if (ctx.cr6.eq) goto loc_82103368;
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(r27.u32, 13, ctx.xer);
	// beq cr6,0x82103368
	if (ctx.cr6.eq) goto loc_82103368;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82103368
	if (!ctx.cr6.eq) goto loc_82103368;
	// lis r11,-28785
	ctx.r11.s64 = -1886453760;
	// lis r25,-32608
	r25.s64 = -2136997888;
	// ori r26,r11,36863
	r26.u64 = ctx.r11.u64 | 36863;
	// ori r25,r25,33023
	r25.u64 = r25.u64 | 33023;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82103368:
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(r27.u32, 14, ctx.xer);
	// bgt cr6,0x82104234
	if (ctx.cr6.gt) goto loc_82104234;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r27,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,26440
	ctx.r12.s64 = ctx.r12.s64 + 26440;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,13208
	ctx.r12.s64 = ctx.r12.s64 + 13208;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r27.u32) {
	case 0:
		goto loc_82103398;
	case 1:
		goto loc_82103724;
	case 2:
		goto loc_821037F4;
	case 3:
		goto loc_821038F8;
	case 4:
		goto loc_82104234;
	case 5:
		goto loc_82103A80;
	case 6:
		goto loc_82103C20;
	case 7:
		goto loc_82103B8C;
	case 8:
		goto loc_82103C5C;
	case 9:
		goto loc_82103E58;
	case 10:
		goto loc_82103D20;
	case 11:
		goto loc_82103E00;
	case 12:
		goto loc_82103F44;
	case 13:
		goto loc_821034E0;
	case 14:
		goto loc_8210421C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82103398:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821033bc
	if (!ctx.cr6.eq) goto loc_821033BC;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821033bc
	if (ctx.cr0.eq) goto loc_821033BC;
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821033B8;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_821033BC:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82103438
	if (!ctx.cr0.eq) goto loc_82103438;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82103438
	if (ctx.cr6.eq) goto loc_82103438;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x821033E4;
	sub_82100038(ctx, base);
	// fsubs f2,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 - f27.f64));
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8210340C;
	sub_821EACB0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fnmsubs f0,f0,f26,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -ctx.f13.f64)));
	// fadds f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 + ctx.f12.f64));
	// std r11,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r11.u64);
	// lfd f12,336(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// b 0x821034ac
	goto loc_821034AC;
loc_82103438:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103444;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103450;
	sub_82100038(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// fmadds f12,f12,f25,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f31.f64)));
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fsubs f2,f12,f27
	ctx.f2.f64 = double(float(ctx.f12.f64 - f27.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82103484;
	sub_821EAF80(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fnmsubs f0,f0,f26,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -ctx.f13.f64)));
	// fadds f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 + ctx.f12.f64));
	// std r11,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r11.u64);
	// lfd f12,264(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
loc_821034AC:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f4,f0,f27
	ctx.f4.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fmr f5,f17
	ctx.f5.f64 = f17.f64;
	// fsubs f2,f13,f24
	ctx.f2.f64 = double(float(ctx.f13.f64 - f24.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fmadds f3,f0,f23,f22
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, f22.f64)));
	// bl 0x82101c90
	ctx.lr = 0x821034D4;
	sub_82101C90(ctx, base);
loc_821034D4:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// b 0x82104234
	goto loc_82104234;
loc_821034E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,328(r1)
	REX_STORE_U64(ctx.r1.u32 + 328, ctx.r11.u64);
	// lfd f13,328(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fmadds f13,f13,f23,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bne cr6,0x82103538
	if (!ctx.cr6.eq) goto loc_82103538;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8210352c
	if (!ctx.cr0.eq) goto loc_8210352C;
	// li r30,0
	r30.s64 = 0;
	// b 0x82103538
	goto loc_82103538;
loc_8210352C:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82103534;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82103538:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82103558
	if (ctx.cr6.eq) goto loc_82103558;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82103558
	if (ctx.cr6.eq) goto loc_82103558;
	// lfs f29,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f29.f64 = double(temp.f32);
	// b 0x82103564
	goto loc_82103564;
loc_82103558:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f29,f0,f25,f13
	f29.f64 = double(float(-std::fma(ctx.f0.f64, f25.f64, -ctx.f13.f64)));
loc_82103564:
	// lwz r11,136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq 0x8210364c
	if (ctx.cr0.eq) goto loc_8210364C;
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103588;
	sub_821EACB0(ctx, base);
	// lfs f12,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f25,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f31.f64)));
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// fnmsubs f2,f11,f19,f12
	ctx.f2.f64 = double(float(-std::fma(ctx.f11.f64, f19.f64, -ctx.f12.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x821035C4;
	sub_821EAF80(ctx, base);
	// extsw r11,r15
	ctx.r11.s64 = r15.s32;
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// fadds f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 + ctx.f13.f64));
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,140(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// std r11,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f11,312(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f13,f11,f27
	ctx.f13.f64 = double(float(ctx.f11.f64 + f27.f64));
	// fmadds f11,f0,f12,f16
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, f16.f64)));
	// fmadds f0,f0,f12,f16
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, f16.f64)));
	// fmadds f12,f13,f23,f22
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f13,f13,f23,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f13,f11,f24
	ctx.f13.f64 = double(float(ctx.f11.f64 - f24.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - f24.f64));
	// b 0x82103704
	goto loc_82103704;
loc_8210364C:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103658;
	sub_821EACB0(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// fnmsubs f2,f0,f19,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f19.f64, -f31.f64)));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103680;
	sub_821EACB0(ctx, base);
	// extsw r11,r15
	ctx.r11.s64 = r15.s32;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,140(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfd f11,296(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// std r11,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f10,256(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f12,f11,f27
	ctx.f12.f64 = double(float(ctx.f11.f64 + f27.f64));
	// fadds f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 + f27.f64));
	// fmadds f0,f12,f13,f16
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, f16.f64)));
	// fmadds f13,f12,f13,f16
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, f16.f64)));
	// fmadds f12,f11,f23,f22
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f23.f64, f22.f64)));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f12,f11,f23,f22
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f23.f64, f22.f64)));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - f24.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f13,f24
	ctx.f0.f64 = double(float(ctx.f13.f64 - f24.f64));
loc_82103704:
	// stfs f27,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821e8678
	ctx.lr = 0x8210371C;
	sub_821E8678(ctx, base);
	// lfs f28,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	f28.f64 = double(temp.f32);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103724:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r10,136(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x8210378c
	if (ctx.cr0.eq) goto loc_8210378C;
	// bl 0x82100038
	ctx.lr = 0x8210374C;
	sub_82100038(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmadds f2,f12,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82103788;
	sub_821EAF80(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_8210378C:
	// bl 0x82100038
	ctx.lr = 0x82103790;
	sub_82100038(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821037B8;
	sub_821EACB0(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x821037c8
	if (!ctx.cr6.lt) goto loc_821037C8;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_821037C8:
	// fadds f1,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821037F0;
	sub_821EACB0(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_821037F4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82100038
	ctx.lr = 0x82103810;
	sub_82100038(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103838;
	sub_821EACB0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x82103850
	if (!ctx.cr6.lt) goto loc_82103850;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f30,f0
	f29.f64 = double(float(f30.f64 + ctx.f0.f64));
	// b 0x82103854
	goto loc_82103854;
loc_82103850:
	// fadds f29,f0,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_82103854:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82103898
	if (ctx.cr6.eq) goto loc_82103898;
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x821eb1a0
	ctx.lr = 0x82103870;
	sub_821EB1A0(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// lwz r3,204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103894;
	sub_821EACB0(ctx, base);
	// b 0x821038c4
	goto loc_821038C4;
loc_82103898:
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x821eb1a0
	ctx.lr = 0x821038A0;
	sub_821EB1A0(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821038C4;
	sub_821EACB0(ctx, base);
loc_821038C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821034d4
	if (!ctx.cr6.eq) goto loc_821034D4;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
loc_821038D8:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821038E0:
	// fsubs f2,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 - f21.f64));
	// fsubs f3,f0,f26
	ctx.f3.f64 = double(float(ctx.f0.f64 - f26.f64));
	// fsubs f1,f29,f20
	ctx.f1.f64 = double(float(f29.f64 - f20.f64));
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// bl 0x82100270
	ctx.lr = 0x821038F4;
	sub_82100270(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_821038F8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82103930
	if (!ctx.cr6.eq) goto loc_82103930;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82103924
	if (!ctx.cr0.eq) goto loc_82103924;
	// li r30,0
	r30.s64 = 0;
	// b 0x82103930
	goto loc_82103930;
loc_82103924:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8210392C;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82103930:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82103944
	if (ctx.cr6.eq) goto loc_82103944;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_82103944:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103950;
	sub_82100038(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103978;
	sub_821EACB0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82103994
	if (!ctx.cr0.eq) goto loc_82103994;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821039a0
	goto loc_821039A0;
loc_82103994:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8210399C;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821039A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x821039A8;
	sub_82100038(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eb1a0
	ctx.lr = 0x821039C0;
	sub_821EB1A0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82103a04
	if (ctx.cr0.eq) goto loc_82103A04;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f30,f0
	f29.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103A00;
	sub_821EACB0(ctx, base);
	// b 0x82103a68
	goto loc_82103A68;
loc_82103A04:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103a3c
	if (ctx.cr0.eq) goto loc_82103A3C;
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fsubs f29,f0,f15
	f29.f64 = double(float(ctx.f0.f64 - f15.f64));
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103A38;
	sub_821EACB0(ctx, base);
	// b 0x82103a68
	goto loc_82103A68;
loc_82103A3C:
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// fadds f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103A68;
	sub_821EACB0(ctx, base);
loc_82103A68:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821034d4
	if (!ctx.cr6.eq) goto loc_821034D4;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// b 0x821038d8
	goto loc_821038D8;
loc_82103A80:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82103aac
	if (!ctx.cr6.eq) goto loc_82103AAC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82103ab8
	if (!ctx.cr6.eq) goto loc_82103AB8;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// b 0x82103ab8
	goto loc_82103AB8;
loc_82103AAC:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82103AB4;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82103AB8:
	// bl 0x821f8c58
	ctx.lr = 0x82103ABC;
	sub_821F8C58(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fmadds f13,f13,f23,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821f8c30
	ctx.lr = 0x82103AF0;
	sub_821F8C30(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103b4c
	if (ctx.cr0.eq) goto loc_82103B4C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103B0C;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103B18;
	sub_82100038(ctx, base);
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f2,f13,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82103B48;
	sub_821EAF80(ctx, base);
	// b 0x82103b80
	goto loc_82103B80;
loc_82103B4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103B58;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103B80;
	sub_821EACB0(ctx, base);
loc_82103B80:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x821f8c30
	ctx.lr = 0x82103B88;
	sub_821F8C30(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103B8C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103be8
	if (ctx.cr0.eq) goto loc_82103BE8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103BA8;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103BB4;
	sub_82100038(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f2,f13,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82103BE4;
	sub_821EAF80(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103BE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103BF4;
	sub_82100038(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103C1C;
	sub_821EACB0(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103C20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103C2C;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103C54;
	sub_821EACB0(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
loc_82103C5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82103c8c
	if (!ctx.cr6.eq) goto loc_82103C8C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103c8c
	if (ctx.cr0.eq) goto loc_82103C8C;
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82103C88;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82103C8C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103ce8
	if (ctx.cr0.eq) goto loc_82103CE8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103CA8;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103CB4;
	sub_82100038(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f2,f13,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82103CE4;
	sub_821EAF80(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103CE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103CF4;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103D1C;
	sub_821EACB0(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103D20:
	// bl 0x821f8c58
	ctx.lr = 0x82103D24;
	sub_821F8C58(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// lfd f13,288(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fmadds f13,f13,f23,f22
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f22.f64)));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821f8c30
	ctx.lr = 0x82103D58;
	sub_821F8C30(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x822d55f8
	ctx.lr = 0x82103D78;
	sub_822D55F8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103dd0
	if (ctx.cr0.eq) goto loc_82103DD0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821f96b8
	ctx.lr = 0x82103D94;
	sub_821F96B8(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f31.f64)));
	// fmadds f13,f13,f25,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f30.f64)));
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fnmsubs f2,f12,f19,f0
	ctx.f2.f64 = double(float(-std::fma(ctx.f12.f64, f19.f64, -ctx.f0.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821f9730
	ctx.lr = 0x82103DCC;
	sub_821F9730(ctx, base);
	// b 0x82103b80
	goto loc_82103B80;
loc_82103DD0:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fnmsubs f2,f0,f19,f31
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, f19.f64, -f31.f64)));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821f96b8
	ctx.lr = 0x82103DFC;
	sub_821F96B8(ctx, base);
	// b 0x82103b80
	goto loc_82103B80;
loc_82103E00:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822d55f8
	ctx.lr = 0x82103E2C;
	sub_822D55F8(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103E54;
	sub_821EACB0(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103E58:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82103f0c
	if (ctx.cr0.eq) goto loc_82103F0C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82103E74;
	sub_821EACB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103E80;
	sub_82100038(ctx, base);
	// lwz r11,168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 168);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// bne cr6,0x82103ee8
	if (!ctx.cr6.eq) goto loc_82103EE8;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fsubs f31,f31,f13
	f31.f64 = double(float(f31.f64 - ctx.f13.f64));
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f18,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f18.u64);
	// stfd f18,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f18.u64);
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f3,f18
	ctx.f3.f64 = f18.f64;
	// fmr f4,f18
	ctx.f4.f64 = f18.f64;
	// fmadds f2,f12,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82103EE4;
	sub_821EAF80(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103EE8:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f2,f12,f25,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, f31.f64)));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
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
	ctx.lr = 0x82103F08;
	sub_821EAF80(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103F0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103F18;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82103F40;
	sub_821EACB0(ctx, base);
	// b 0x821034d4
	goto loc_821034D4;
loc_82103F44:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f17,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f17,200(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82103f7c
	if (!ctx.cr6.eq) goto loc_82103F7C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82103f88
	if (!ctx.cr6.eq) goto loc_82103F88;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// b 0x82103f88
	goto loc_82103F88;
loc_82103F7C:
	// lwz r4,344(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82103F84;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82103F88:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82103f9c
	if (ctx.cr6.eq) goto loc_82103F9C;
	// mr r25,r20
	r25.u64 = r20.u64;
loc_82103F9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103FA4;
	sub_82100038(ctx, base);
	// stfd f30,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82103FCC;
	sub_821EACB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82199c70
	ctx.lr = 0x82103FD4;
	sub_82199C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82103FE0;
	sub_82100038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82103FF4;
	sub_821EB1A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82199e58
	ctx.lr = 0x82104000;
	sub_82199E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82199e58
	ctx.lr = 0x82104018;
	sub_82199E58(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r28,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// rlwinm. r9,r11,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82104078
	if (ctx.cr0.eq) goto loc_82104078;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f29,f30,f0
	f29.f64 = double(float(f30.f64 + ctx.f0.f64));
	// bl 0x82199c70
	ctx.lr = 0x82104040;
	sub_82199C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x8210404C;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82104074;
	sub_821EACB0(ctx, base);
	// b 0x821041fc
	goto loc_821041FC;
loc_82104078:
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821040d4
	if (ctx.cr0.eq) goto loc_821040D4;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fsubs f29,f0,f15
	f29.f64 = double(float(ctx.f0.f64 - f15.f64));
	// bl 0x82199c70
	ctx.lr = 0x8210409C;
	sub_82199C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x821040A8;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821040D0;
	sub_821EACB0(ctx, base);
	// b 0x821041fc
	goto loc_821041FC;
loc_821040D4:
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104150
	if (ctx.cr0.eq) goto loc_82104150;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f25
	ctx.f13.f64 = double(float(ctx.f12.f64 * f25.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// fsubs f11,f10,f15
	ctx.f11.f64 = double(float(ctx.f10.f64 - f15.f64));
	// ble cr6,0x8210410c
	if (!ctx.cr6.gt) goto loc_8210410C;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f29,f0,f15
	f29.f64 = double(float(ctx.f0.f64 - f15.f64));
	// b 0x82104110
	goto loc_82104110;
loc_8210410C:
	// fsubs f29,f11,f13
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
loc_82104110:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82199c70
	ctx.lr = 0x82104118;
	sub_82199C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82104124;
	sub_82100038(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8210414C;
	sub_821EACB0(ctx, base);
	// b 0x821041fc
	goto loc_821041FC;
loc_82104150:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f30.f64)));
	// fadds f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82199c70
	ctx.lr = 0x82104170;
	sub_82199C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x8210417C;
	sub_82100038(ctx, base);
	// lwz r11,168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 168);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x821041d4
	if (!ctx.cr6.eq) goto loc_821041D4;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfd f18,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f18.u64);
	// stfd f18,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f18.u64);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// lwz r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// fmr f4,f18
	ctx.f4.f64 = f18.f64;
	// fmr f3,f18
	ctx.f3.f64 = f18.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821041D4;
	sub_821EACB0(ctx, base);
loc_821041D4:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821041FC;
	sub_821EACB0(ctx, base);
loc_821041FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821034d4
	if (!ctx.cr6.eq) goto loc_821034D4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x821038e0
	goto loc_821038E0;
loc_8210421C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f0,f26,f31
	f31.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, f31.f64)));
loc_82104234:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82104274
	if (!ctx.cr6.eq) goto loc_82104274;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lfs f12,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f26,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -ctx.f13.f64)));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fadds f13,f14,f12
	ctx.f13.f64 = double(float(f14.f64 + ctx.f12.f64));
	// std r11,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r11.u64);
	// fadds f4,f0,f27
	ctx.f4.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fsubs f2,f13,f24
	ctx.f2.f64 = double(float(ctx.f13.f64 - f24.f64));
	// lfd f0,304(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// b 0x821042a4
	goto loc_821042A4;
loc_82104274:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821042c4
	if (!ctx.cr6.eq) goto loc_821042C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f14,f24
	ctx.f2.f64 = double(float(f14.f64 - f24.f64));
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// fnmsubs f0,f0,f26,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -ctx.f13.f64)));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
	// fadds f4,f0,f27
	ctx.f4.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfd f0,320(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
loc_821042A4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f5,f17
	ctx.f5.f64 = f17.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fmadds f3,f0,f23,f22
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, f22.f64)));
	// bl 0x82101c90
	ctx.lr = 0x821042C4;
	sub_82101C90(ctx, base);
loc_821042C4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821030a8
	if (ctx.cr6.lt) goto loc_821030A8;
loc_821042D8:
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f17.f64;
	// bl 0x821fe068
	ctx.lr = 0x821042E0;
	sub_821FE068(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f4c
	ctx.lr = 0x821042EC;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8216D068) {
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
	ctx.lr = 0x8216D070;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x8216D078;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,12(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x820e4bb0
	ctx.lr = 0x8216D08C;
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
	// lfs f13,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
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
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821675c0
	ctx.lr = 0x8216D100;
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
	ctx.lr = 0x8216D144;
	sub_821675C0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,-8944
	r27.s64 = ctx.r10.s64 + -8944;
	// beq cr6,0x8216d164
	if (ctx.cr6.eq) goto loc_8216D164;
	// addi r10,r27,-128
	ctx.r10.s64 = r27.s64 + -128;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8216D164:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d178
	if (ctx.cr6.eq) goto loc_8216D178;
	// addi r10,r27,-128
	ctx.r10.s64 = r27.s64 + -128;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8216D178:
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
	// addi r28,r11,-12836
	r28.s64 = ctx.r11.s64 + -12836;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8216D1C4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
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
	ctx.lr = 0x8216D1E8;
	sub_821675C0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d210
	if (ctx.cr0.eq) goto loc_8216D210;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
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
loc_8216D210:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8216d1c4
	if (!ctx.cr0.eq) goto loc_8216D1C4;
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
	// addi r29,r25,140
	r29.s64 = r25.s64 + 140;
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
	// lfs f0,-23956(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -23956);
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
	ctx.lr = 0x8216D280;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// beq 0x8216d29c
	if (ctx.cr0.eq) goto loc_8216D29C;
	// addi r11,r27,-64
	ctx.r11.s64 = r27.s64 + -64;
	// stw r30,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r30.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_8216D29C:
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
	ctx.lr = 0x8216D2D4;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// beq 0x8216d2f8
	if (ctx.cr0.eq) goto loc_8216D2F8;
	// stb r30,189(r3)
	REX_STORE_U8(ctx.r3.u32 + 189, r30.u8);
	// addi r11,r27,-64
	ctx.r11.s64 = r27.s64 + -64;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, r30.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_8216D2F8:
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
	// addi r26,r31,96
	r26.s64 = r31.s64 + 96;
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
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
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
	ctx.lr = 0x8216D35C;
	sub_821675C0(ctx, base);
	// li r28,191
	r28.s64 = 191;
	// li r29,6
	r29.s64 = 6;
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d38c
	if (ctx.cr0.eq) goto loc_8216D38C;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stb r28,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r28.u8);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r29,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r29.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
loc_8216D38C:
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
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
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
	ctx.lr = 0x8216D3C4;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// beq 0x8216d3ec
	if (ctx.cr0.eq) goto loc_8216D3EC;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stb r28,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r28.u8);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r29,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r29.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
loc_8216D3EC:
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
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
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
	ctx.lr = 0x8216D42C;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// beq 0x8216d454
	if (ctx.cr0.eq) goto loc_8216D454;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stb r28,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r28.u8);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r29,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r29.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
loc_8216D454:
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
	ctx.lr = 0x8216D47C;
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
	// beq 0x8216d498
	if (ctx.cr0.eq) goto loc_8216D498;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8216d49c
	goto loc_8216D49C;
loc_8216D498:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8216D49C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d4d0
	if (ctx.cr6.eq) goto loc_8216D4D0;
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
loc_8216D4D0:
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
	ctx.lr = 0x8216D4F4;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216d504
	if (ctx.cr0.eq) goto loc_8216D504;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8216d508
	goto loc_8216D508;
loc_8216D504:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8216D508:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d540
	if (ctx.cr6.eq) goto loc_8216D540;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, r30.u8);
	// stb r30,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r30.u8);
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
loc_8216D540:
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x8216D550;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8217DDE8) {
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
	ctx.lr = 0x8217DE00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r31,r10,27624
	r31.s64 = ctx.r10.s64 + 27624;
	// addi r30,r11,7808
	r30.s64 = ctx.r11.s64 + 7808;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f29,28548(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28548);
	f29.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f28,16192(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16192);
	f28.f64 = double(temp.f32);
	// stfs f31,7808(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 7808, temp.u32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f29,27624(r10)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + 27624, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f28,8(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8217DE60;
	sub_820E2290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x8217DE70;
	sub_820E1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f29,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	f29.f64 = double(temp.f32);
	// stfs f29,24(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8217DE94;
	sub_820E2290(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820e1c50
	ctx.lr = 0x8217DEA8;
	sub_820E1C50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f28,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stfs f30,44(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f28,-4712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4712);
	f28.f64 = double(temp.f32);
	// stfs f28,32(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8217DECC;
	sub_820E2290(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x820e1c50
	ctx.lr = 0x8217DEE0;
	sub_820E1C50(ctx, base);
	// stfs f28,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// stfs f29,56(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8217DEFC;
	sub_820E2290(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x820e1c50
	ctx.lr = 0x8217DF10;
	sub_820E1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f30,76(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f30,92(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f30,108(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x8217DF54;
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

DEFINE_REX_FUNC(sub_82182208) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-4336
	ctx.r11.s64 = ctx.r11.s64 + -4336;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822cbc50
	sub_822CBC50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821827B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821827C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addis r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 262144;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r3,r3,6424
	ctx.r3.s64 = ctx.r3.s64 + 6424;
	// bl 0x822d4fa0
	ctx.lr = 0x82182800;
	sub_822D4FA0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,40
	ctx.r11.s64 = 40;
	// divw r9,r10,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// mulli r9,r9,40
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(40));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,1526
	ctx.r10.s64 = ctx.r10.s64 + 1526;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// divw r11,r10,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,1566
	ctx.r11.s64 = ctx.r11.s64 + 1566;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821845D8) {
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
	ctx.lr = 0x821845E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ld r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184630
	if (ctx.cr6.eq) goto loc_82184630;
loc_82184614:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x821846a8
	if (ctx.cr6.eq) goto loc_821846A8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82184614
	if (!ctx.cr6.eq) goto loc_82184614;
loc_82184630:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82184634:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821846d8
	if (!ctx.cr6.eq) goto loc_821846D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184668
	if (ctx.cr6.eq) goto loc_82184668;
loc_8218464C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x8218466c
	if (ctx.cr6.eq) goto loc_8218466C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218464c
	if (!ctx.cr6.eq) goto loc_8218464C;
loc_82184668:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218466C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821846cc
	if (!ctx.cr6.eq) goto loc_821846CC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822c80d0
	ctx.lr = 0x82184680;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821846b0
	if (ctx.cr0.eq) goto loc_821846B0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82184168
	ctx.lr = 0x821846A0;
	sub_82184168(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821846b8
	goto loc_821846B8;
loc_821846A8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82184634
	goto loc_82184634;
loc_821846B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821846B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x821846C4;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821846d8
	goto loc_821846D8;
loc_821846CC:
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_821846D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82188070) {
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
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// b 0x821880a4
	goto loc_821880A4;
loc_82188094:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821880cc
	if (ctx.cr6.eq) goto loc_821880CC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821880A4:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82188094
	if (!ctx.cr6.eq) goto loc_82188094;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x821880B8;
	sub_822AD9C0(ctx, base);
loc_821880B8:
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
loc_821880CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x821880E4;
	sub_822D6840(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x821880b8
	goto loc_821880B8;
}

DEFINE_REX_FUNC(sub_821897C0) {
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
	ctx.lr = 0x821897C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82188300
	ctx.lr = 0x821897F8;
	sub_82188300(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82208cc8
	ctx.lr = 0x82189800;
	sub_82208CC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82428fe8
	ctx.lr = 0x82189808;
	sub_82428FE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82189870
	if (ctx.cr0.eq) goto loc_82189870;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218984c
	if (ctx.cr0.eq) goto loc_8218984C;
	// li r11,100
	ctx.r11.s64 = 100;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x821894f0
	ctx.lr = 0x82189848;
	sub_821894F0(ctx, base);
	// b 0x821898a0
	goto loc_821898A0;
loc_8218984C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r24.u8);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821894f0
	ctx.lr = 0x8218986C;
	sub_821894F0(ctx, base);
	// b 0x821898a0
	goto loc_821898A0;
loc_82189870:
	// li r11,100
	ctx.r11.s64 = 100;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x821894f0
	ctx.lr = 0x82189894;
	sub_821894F0(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x821898A0;
	sub_82187D00(ctx, base);
loc_821898A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8218DBA0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x8218DBA8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8218dbec
	if (!ctx.cr6.lt) goto loc_8218DBEC;
	// bl 0x821bf238
	ctx.lr = 0x8218DBD8;
	sub_821BF238(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x821bf228
	ctx.lr = 0x8218DBE4;
	sub_821BF228(ctx, base);
	// fsubs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// b 0x8218dc00
	goto loc_8218DC00;
loc_8218DBEC:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_8218DC00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8218dc18
	if (ctx.cr6.gt) goto loc_8218DC18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
loc_8218DC18:
	// cmpwi cr6,r30,193
	ctx.cr6.compare<int32_t>(r30.s32, 193, ctx.xer);
	// bne cr6,0x8218dc30
	if (!ctx.cr6.eq) goto loc_8218DC30;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16824
	ctx.r11.s64 = ctx.r11.s64 + -16824;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8218DC30:
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-16952
	ctx.r10.s64 = ctx.r10.s64 + -16952;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// lwax r9,r11,r9
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32));
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x8218dc70
	if (!ctx.cr6.lt) goto loc_8218DC70;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8218DC70:
	// cmpwi cr6,r31,14
	ctx.cr6.compare<int32_t>(r31.s32, 14, ctx.xer);
	// bne cr6,0x8218dc90
	if (!ctx.cr6.eq) goto loc_8218DC90;
	// lhz r9,100(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 100);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8218dc90
	if (!ctx.cr0.eq) goto loc_8218DC90;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,2000(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8218dc9c
	goto loc_8218DC9C;
loc_8218DC90:
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,-16760
	ctx.r9.s64 = ctx.r9.s64 + -16760;
	// lfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
loc_8218DC9C:
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8219f6e0
	ctx.lr = 0x8218DCC8;
	sub_8219F6E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82192EC8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,30856(r10)
	REX_STORE_U16(ctx.r10.u32 + 30856, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821939B8) {
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
	// bl 0x82192ed8
	ctx.lr = 0x821939D0;
	sub_82192ED8(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r10,r10,32480
	ctx.r10.s64 = ctx.r10.s64 + 32480;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82102738
	ctx.lr = 0x821939E8;
	sub_82102738(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82106460
	ctx.lr = 0x82193A00;
	sub_82106460(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// addi r10,r10,31868
	ctx.r10.s64 = ctx.r10.s64 + 31868;
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82195868) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfd f29,4040(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 4040);
	// addi r5,r8,4028
	ctx.r5.s64 = ctx.r8.s64 + 4028;
	// lfd f31,4000(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lfd f30,3992(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 3992);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x821958DC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821958F4;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// lfs f0,-19084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,28312(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f12,16188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16188);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f30,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r6,-29
	ctx.r6.s64 = -1900544;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// addi r5,r11,3972
	ctx.r5.s64 = ctx.r11.s64 + 3972;
	// ori r6,r6,36095
	ctx.r6.u64 = ctx.r6.u64 | 36095;
	// fsubs f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fnmsubs f0,f11,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, f31.f64, -ctx.f0.f64)));
	// fadds f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x8219597C;
	sub_821EAF80(ctx, base);
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82195a80
	if (!ctx.cr0.eq) goto loc_82195A80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,212
	r30.s64 = r31.s64 + 212;
	// addi r5,r11,30080
	ctx.r5.s64 = ctx.r11.s64 + 30080;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821959A4;
	sub_821EB1A0(ctx, base);
	// lbz r11,133(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 133);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821959d8
	if (ctx.cr0.eq) goto loc_821959D8;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// lfs f0,26816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82195a08
	goto loc_82195A08;
loc_821959D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4008);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,26816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26816);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82195A08:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// fnmsubs f13,f12,f31,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f0.f64)));
	// lfs f0,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f4,26664(r10)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r5,r7,4012
	ctx.r5.s64 = ctx.r7.s64 + 4012;
	// lwz r6,276(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 276);
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eaf80
	ctx.lr = 0x82195A80;
	sub_821EAF80(ctx, base);
loc_82195A80:
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

DEFINE_REX_FUNC(sub_8219FE28) {
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
	ctx.lr = 0x8219FE48;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219fe58
	if (!ctx.cr0.eq) goto loc_8219FE58;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8219fba8
	ctx.lr = 0x8219FE58;
	sub_8219FBA8(ctx, base);
loc_8219FE58:
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

DEFINE_REX_FUNC(sub_821A0E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A0E70;
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
	// addi r6,r8,6564
	ctx.r6.s64 = ctx.r8.s64 + 6564;
	// addi r9,r11,2928
	ctx.r9.s64 = ctx.r11.s64 + 2928;
	// addi r8,r10,3616
	ctx.r8.s64 = ctx.r10.s64 + 3616;
	// addi r7,r7,3560
	ctx.r7.s64 = ctx.r7.s64 + 3560;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,137
	ctx.r4.s64 = 137;
	// bl 0x821f7d50
	ctx.lr = 0x821A0EA4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a0ec0
	if (ctx.cr0.eq) goto loc_821A0EC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a0ec4
	goto loc_821A0EC4;
loc_821A0EC0:
	// li r30,0
	r30.s64 = 0;
loc_821A0EC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a0ed4
	if (!ctx.cr6.eq) goto loc_821A0ED4;
loc_821A0ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a0f28
	goto loc_821A0F28;
loc_821A0ED4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r29,3072
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3072));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// bl 0x82190558
	ctx.lr = 0x821A0EF0;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a0f04
	if (!ctx.cr0.eq) goto loc_821A0F04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x821A0F00;
	sub_8218CB20(ctx, base);
	// b 0x821a0ecc
	goto loc_821A0ECC;
loc_821A0F04:
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
	ctx.lr = 0x821A0F1C;
	sub_820E01B0(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_821A0F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A2FD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3060) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x821a20a0
	ctx.lr = 0x821A3084;
	sub_821A20A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821A3B48) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r10,7008
	ctx.r6.s64 = ctx.r10.s64 + 7008;
	// addi r9,r11,14936
	ctx.r9.s64 = ctx.r11.s64 + 14936;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,898
	ctx.r4.s64 = 898;
	// bl 0x821f7d50
	ctx.lr = 0x821A3B80;
	sub_821F7D50(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821a3b9c
	if (ctx.cr0.eq) goto loc_821A3B9C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x821a3ba0
	goto loc_821A3BA0;
loc_821A3B9C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A3BA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a3bb0
	if (!ctx.cr6.eq) goto loc_821A3BB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a3c28
	goto loc_821A3C28;
loc_821A3BB0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,196(r10)
	REX_STORE_U32(ctx.r10.u32 + 196, r31.u32);
	// addi r3,r10,80
	ctx.r3.s64 = ctx.r10.s64 + 80;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// stfs f13,132(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// sth r11,104(r3)
	REX_STORE_U16(ctx.r3.u32 + 104, ctx.r11.u16);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r7,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r7.u8);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,107(r3)
	REX_STORE_U8(ctx.r3.u32 + 107, ctx.r11.u8);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stb r11,108(r3)
	REX_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stb r11,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// stb r11,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, ctx.r11.u8);
	// beq cr6,0x821a3c28
	if (ctx.cr6.eq) goto loc_821A3C28;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_821A3C28:
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

DEFINE_REX_FUNC(sub_821A8088) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stb r11,88(r3)
	REX_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-8480
	ctx.r6.s64 = ctx.r11.s64 + -8480;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821A80D4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a80e8
	if (ctx.cr0.eq) goto loc_821A80E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821aaab8
	ctx.lr = 0x821A80E8;
	sub_821AAAB8(ctx, base);
loc_821A80E8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821A9628) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a9680
	if (ctx.cr6.eq) goto loc_821A9680;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A9658;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a9694
	if (!ctx.cr0.eq) goto loc_821A9694;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9680
	if (!ctx.cr6.eq) goto loc_821A9680;
loc_821A966C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821A9678:
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_821A9680:
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
loc_821A9694:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a966c
	if (ctx.cr6.eq) goto loc_821A966C;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821a966c
	if (ctx.cr6.eq) goto loc_821A966C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x821a9678
	goto loc_821A9678;
}

DEFINE_REX_FUNC(sub_821AA8B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821AAAB8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r5,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// addi r9,r9,7936
	ctx.r9.s64 = ctx.r9.s64 + 7936;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r7,-22952
	ctx.r9.s64 = ctx.r7.s64 + -22952;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r8,r8,-21976
	ctx.r8.s64 = ctx.r8.s64 + -21976;
	// stb r11,88(r3)
	REX_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// addi r7,r6,-22024
	ctx.r7.s64 = ctx.r6.s64 + -22024;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r5,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stb r11,156(r3)
	REX_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stb r11,157(r3)
	REX_STORE_U8(ctx.r3.u32 + 157, ctx.r11.u8);
	// stb r11,158(r3)
	REX_STORE_U8(ctx.r3.u32 + 158, ctx.r11.u8);
	// stb r11,159(r3)
	REX_STORE_U8(ctx.r3.u32 + 159, ctx.r11.u8);
	// stw r8,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// stw r7,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF9A0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B06B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821B06C0;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// bl 0x822091c8
	ctx.lr = 0x821B06E8;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9160
	ctx.lr = 0x821B06F0;
	sub_822C9160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bge cr6,0x821b0704
	if (!ctx.cr6.lt) goto loc_821B0704;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_821B0704:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821B0720;
	sub_822091C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c9160
	ctx.lr = 0x821B0728;
	sub_822C9160(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B2088) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5436(r3)
	REX_STORE_U32(ctx.r3.u32 + 5436, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B2300) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r3,-29244(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -29244);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B2568) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821b25bc
	if (ctx.cr6.eq) goto loc_821B25BC;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x821b25b4
	if (ctx.cr6.eq) goto loc_821B25B4;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x821b25ac
	if (ctx.cr6.eq) goto loc_821B25AC;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x821b25a4
	if (ctx.cr6.eq) goto loc_821B25A4;
	// ble cr6,0x821b259c
	if (!ctx.cr6.gt) goto loc_821B259C;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bgt cr6,0x821b259c
	if (ctx.cr6.gt) goto loc_821B259C;
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_821B259C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_821B25A4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821B25AC:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_821B25B4:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_821B25BC:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821B3D60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c80d0
	ctx.lr = 0x821B3D6C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3d94
	if (ctx.cr0.eq) goto loc_821B3D94;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r4,22(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// bl 0x82188ef0
	ctx.lr = 0x821B3D84;
	sub_82188EF0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r28,r11,-9804
	r28.s64 = ctx.r11.s64 + -9804;
	// stw r3,-9804(r11)
	REX_STORE_U32(ctx.r11.u32 + -9804, ctx.r3.u32);
	// b 0x821b3da4
	goto loc_821B3DA4;
loc_821B3D94:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r10,-9804
	r28.s64 = ctx.r10.s64 + -9804;
	// stw r11,-9804(r10)
	REX_STORE_U32(ctx.r10.u32 + -9804, ctx.r11.u32);
loc_821B3DA4:
	// li r3,2184
	ctx.r3.s64 = 2184;
	// bl 0x822c80d0
	ctx.lr = 0x821B3DAC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b3de4
	if (ctx.cr0.eq) goto loc_821B3DE4;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r31,3
	r31.s64 = 3;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821B3DC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821821a8
	ctx.lr = 0x821B3DD0;
	sub_821821A8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,544
	r30.s64 = r30.s64 + 544;
	// bge 0x821b3dc8
	if (!ctx.cr0.lt) goto loc_821B3DC8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821b3de8
	goto loc_821B3DE8;
loc_821B3DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B3DE8:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r10,-9800
	r30.s64 = ctx.r10.s64 + -9800;
	// stw r11,-9800(r10)
	REX_STORE_U32(ctx.r10.u32 + -9800, ctx.r11.u32);
	// b 0x821b3e00
	goto loc_821B3E00;
loc_821B3DFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821B3E00:
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82182218
	ctx.lr = 0x821B3E0C;
	sub_82182218(ctx, base);
	// addi r31,r31,544
	r31.s64 = r31.s64 + 544;
	// cmpwi cr6,r31,2176
	ctx.cr6.compare<int32_t>(r31.s32, 2176, ctx.xer);
	// blt cr6,0x821b3dfc
	if (ctx.cr6.lt) goto loc_821B3DFC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821BE010) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r10.u16);
	// sth r9,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE0D8) {
	REX_FUNC_PROLOGUE();
	// lha r11,0(r5)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,3654
	ctx.r11.s64 = ctx.r11.s64 + 3654;
	// lhz r9,2(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE2D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r10,444(r11)
	REX_STORE_U8(ctx.r11.u32 + 444, ctx.r10.u8);
	// stb r5,515(r11)
	REX_STORE_U8(ctx.r11.u32 + 515, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE4F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r11,38(r3)
	REX_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// sth r10,132(r3)
	REX_STORE_U16(ctx.r3.u32 + 132, ctx.r10.u16);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// sth r10,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r10.u16);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// sth r10,100(r3)
	REX_STORE_U16(ctx.r3.u32 + 100, ctx.r10.u16);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// sth r10,82(r3)
	REX_STORE_U16(ctx.r3.u32 + 82, ctx.r10.u16);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// sth r10,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// sth r11,120(r3)
	REX_STORE_U16(ctx.r3.u32 + 120, ctx.r11.u16);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// sth r11,104(r3)
	REX_STORE_U16(ctx.r3.u32 + 104, ctx.r11.u16);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// sth r11,24(r3)
	REX_STORE_U16(ctx.r3.u32 + 24, ctx.r11.u16);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// sth r11,26(r3)
	REX_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// sth r11,28(r3)
	REX_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// sth r11,30(r3)
	REX_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// sth r11,78(r3)
	REX_STORE_U16(ctx.r3.u32 + 78, ctx.r11.u16);
	// sth r11,80(r3)
	REX_STORE_U16(ctx.r3.u32 + 80, ctx.r11.u16);
	// sth r11,102(r3)
	REX_STORE_U16(ctx.r3.u32 + 102, ctx.r11.u16);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// sth r11,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// sth r11,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,76(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,76(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,72(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,72(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// sth r11,84(r10)
	REX_STORE_U16(ctx.r10.u32 + 84, ctx.r11.u16);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// sth r11,84(r10)
	REX_STORE_U16(ctx.r10.u32 + 84, ctx.r11.u16);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// sth r11,86(r10)
	REX_STORE_U16(ctx.r10.u32 + 86, ctx.r11.u16);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// sth r11,86(r10)
	REX_STORE_U16(ctx.r10.u32 + 86, ctx.r11.u16);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f13,100(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f13,100(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f0,92(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,104(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// stfs f0,108(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,104(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// stfs f0,108(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,124(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// stfs f0,128(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// stfs f13,132(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// stfs f0,120(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,120(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// stfs f0,124(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// stfs f0,128(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// stfs f13,132(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// sth r11,138(r10)
	REX_STORE_U16(ctx.r10.u32 + 138, ctx.r11.u16);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// sth r11,138(r10)
	REX_STORE_U16(ctx.r10.u32 + 138, ctx.r11.u16);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,140(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,140(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,144(r10)
	REX_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r11,144(r10)
	REX_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C7AF8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821C7B00;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5464(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5464);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c7b44
	if (ctx.cr6.eq) goto loc_821C7B44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5652(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5652);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5660(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5660);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,5652(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,5660(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// b 0x821c7c84
	goto loc_821C7C84;
loc_821C7B44:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mulli r10,r27,144
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(144));
	// lfs f12,5668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5668);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 420);
	// lfs f0,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r28,r11,104
	r28.s64 = ctx.r11.s64 + 104;
	// add r29,r9,r28
	r29.u64 = ctx.r9.u64 + r28.u64;
	// lfsx f11,r9,r28
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// beq 0x821c7b98
	if (ctx.cr0.eq) goto loc_821C7B98;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
loc_821C7B98:
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c7ba8
	if (ctx.cr0.eq) goto loc_821C7BA8;
	// fadds f1,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
loc_821C7BA8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x820e00c0
	ctx.lr = 0x821C7BB4;
	sub_820E00C0(ctx, base);
	// lfs f0,5652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5660(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5660);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r31,5652
	r26.s64 = r31.s64 + 5652;
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f0.f64)));
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f13.f64)));
	// stfs f0,5652(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5652, temp.u32);
	// stfs f13,5660(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e2308
	ctx.lr = 0x821C7BE0;
	sub_820E2308(ctx, base);
	// lfs f13,5676(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5676);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x821c7c10
	if (!ctx.cr6.eq) goto loc_821C7C10;
	// lwz r10,5548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5548);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 420);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x821c7c18
	goto loc_821C7C18;
loc_821C7C10:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821C7C18:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821c7c3c
	if (!ctx.cr6.gt) goto loc_821C7C3C;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5660(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5660);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,5660(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5660, temp.u32);
loc_821C7C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821c7c54
	if (!ctx.cr6.eq) goto loc_821C7C54;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c7c84
	goto loc_821C7C84;
loc_821C7C54:
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,5668(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5668);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f12,5672(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5672);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,5668(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5668, temp.u32);
	// lfs f0,16(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,5672(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5672, temp.u32);
	// lfs f0,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,5676(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5676, temp.u32);
loc_821C7C84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821D14F0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1508) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821afce8
	ctx.lr = 0x821D1528;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d15a4
	if (!ctx.cr0.eq) goto loc_821D15A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// bne cr6,0x821d156c
	if (!ctx.cr6.eq) goto loc_821D156C;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,1824(r10)
	REX_STORE_U8(ctx.r10.u32 + 1824, ctx.r11.u8);
	// bl 0x821afa50
	ctx.lr = 0x821D156C;
	sub_821AFA50(ctx, base);
loc_821D156C:
	// bl 0x8210ee68
	ctx.lr = 0x821D1570;
	sub_8210EE68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1598
	if (ctx.cr0.eq) goto loc_821D1598;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f1,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821D1590;
	sub_8212F220(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd7a0
	ctx.lr = 0x821D1598;
	sub_821DD7A0(ctx, base);
loc_821D1598:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_821D15A4:
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

DEFINE_REX_FUNC(sub_821D3974) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4340) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821D4348;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r30,r10,13128
	r30.s64 = ctx.r10.s64 + 13128;
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d4374
	if (ctx.cr0.eq) goto loc_821D4374;
	// lhz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d43c8
	if (ctx.cr0.eq) goto loc_821D43C8;
loc_821D4374:
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r7,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4388
	if (ctx.cr0.eq) goto loc_821D4388;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// stw r7,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r7.u32);
loc_821D4388:
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// rlwinm. r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d439c
	if (ctx.cr0.eq) goto loc_821D439C;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r5,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r5.u32);
loc_821D439C:
	// lwz r6,276(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 276);
	// rlwinm. r11,r6,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d43b0
	if (ctx.cr0.eq) goto loc_821D43B0;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// stw r6,276(r30)
	REX_STORE_U32(r30.u32 + 276, ctx.r6.u32);
loc_821D43B0:
	// lwz r11,412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 412);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d43d8
	if (ctx.cr0.eq) goto loc_821D43D8;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,412(r30)
	REX_STORE_U32(r30.u32 + 412, ctx.r11.u32);
	// b 0x821d43d8
	goto loc_821D43D8;
loc_821D43C8:
	// lwz r11,412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 412);
	// lwz r6,276(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 276);
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_821D43D8:
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r31,r9,-8908
	r31.s64 = ctx.r9.s64 + -8908;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821d4494
	if (!ctx.cr0.eq) goto loc_821D4494;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lwz r10,-11120(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -11120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d4448
	if (!ctx.cr6.eq) goto loc_821D4448;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r4,r11,0,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// addi r3,r10,-8908
	ctx.r3.s64 = ctx.r10.s64 + -8908;
	// rlwinm r9,r7,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000;
	// rlwinm r7,r5,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	// rlwinm r6,r6,0,16,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	// lwz r11,-56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -56);
	// lwz r10,-52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -52);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lwz r9,-48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r8,-44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + -44);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r11,-56(r3)
	REX_STORE_U32(ctx.r3.u32 + -56, ctx.r11.u32);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r10,-52(r3)
	REX_STORE_U32(ctx.r3.u32 + -52, ctx.r10.u32);
	// stw r9,-48(r3)
	REX_STORE_U32(ctx.r3.u32 + -48, ctx.r9.u32);
	// stw r11,-44(r3)
	REX_STORE_U32(ctx.r3.u32 + -44, ctx.r11.u32);
	// b 0x821d4510
	goto loc_821D4510;
loc_821D4448:
	// lwz r10,-56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -56);
	// lwz r9,-52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + -52);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lwz r7,-44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + -44);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// lwz r8,-48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + -48);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,412(r30)
	REX_STORE_U32(r30.u32 + 412, ctx.r11.u32);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-56(r31)
	REX_STORE_U32(r31.u32 + -56, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,276(r30)
	REX_STORE_U32(r30.u32 + 276, ctx.r8.u32);
	// stw r9,-52(r31)
	REX_STORE_U32(r31.u32 + -52, ctx.r9.u32);
	// stw r11,-48(r31)
	REX_STORE_U32(r31.u32 + -48, ctx.r11.u32);
	// stw r10,-44(r31)
	REX_STORE_U32(r31.u32 + -44, ctx.r10.u32);
loc_821D4494:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r28,r11,-7072
	r28.s64 = ctx.r11.s64 + -7072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3978
	ctx.lr = 0x821D44A4;
	sub_821D3978(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821d3978
	ctx.lr = 0x821D44B0;
	sub_821D3978(ctx, base);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d44c8
	if (ctx.cr0.eq) goto loc_821D44C8;
	// lhz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d4510
	if (ctx.cr0.eq) goto loc_821D4510;
loc_821D44C8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d4510
	if (ctx.cr6.eq) goto loc_821D4510;
	// lwz r11,-40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d4510
	if (ctx.cr6.eq) goto loc_821D4510;
	// lwz r11,2980(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2980);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4510
	if (ctx.cr0.eq) goto loc_821D4510;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821d45b0
	ctx.lr = 0x821D4510;
	sub_821D45B0(ctx, base);
loc_821D4510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821DCDF8) {
	REX_FUNC_PROLOGUE();
	// li r11,288
	ctx.r11.s64 = 288;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DCE0C:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821dce20
	if (ctx.cr6.lt) goto loc_821DCE20;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821DCE20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821dce0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DCE0C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD068) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x821dd108
	if (ctx.cr6.lt) goto loc_821DD108;
	// bne cr6,0x821dd108
	if (!ctx.cr6.eq) goto loc_821DD108;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x821dd108
	if (ctx.cr6.gt) goto loc_821DD108;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,15072
	ctx.r12.s64 = ctx.r12.s64 + 15072;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// nop 
	// addi r12,r12,-12120
	ctx.r12.s64 = ctx.r12.s64 + -12120;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821DD0C0;
	case 1:
		goto loc_821DD100;
	case 2:
		goto loc_821DD0C8;
	case 3:
		goto loc_821DD108;
	case 4:
		goto loc_821DD0D0;
	case 5:
		goto loc_821DD0F8;
	case 6:
		goto loc_821DD108;
	case 7:
		goto loc_821DD108;
	case 8:
		goto loc_821DD108;
	case 9:
		goto loc_821DD108;
	case 10:
		goto loc_821DD0F0;
	case 11:
		goto loc_821DD108;
	case 12:
		goto loc_821DD0E0;
	case 13:
		goto loc_821DD108;
	case 14:
		goto loc_821DD108;
	case 15:
		goto loc_821DD108;
	case 16:
		goto loc_821DD0D8;
	case 17:
		goto loc_821DD0E8;
	case 18:
		goto loc_821DD108;
	case 19:
		goto loc_821DD108;
	case 20:
		goto loc_821DD0A8;
	case 21:
		goto loc_821DD0B0;
	case 22:
		goto loc_821DD0B8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821DD0A8:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_821DD0B0:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_821DD0B8:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_821DD0C0:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_821DD0C8:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_821DD0D0:
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
loc_821DD0D8:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_821DD0E0:
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
loc_821DD0E8:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_821DD0F0:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_821DD0F8:
	// li r3,52
	ctx.r3.s64 = 52;
	// blr 
	return;
loc_821DD100:
	// li r3,55
	ctx.r3.s64 = 55;
	// blr 
	return;
loc_821DD108:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0150) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821e015c
	if (!ctx.cr6.eq) goto loc_821E015C;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
loc_821E015C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821e0188
	if (ctx.cr0.lt) goto loc_821E0188;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x821e0188
	if (!ctx.cr6.lt) goto loc_821E0188;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5612
	ctx.r10.s64 = ctx.r10.s64 + -5612;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821e018c
	if (ctx.cr6.gt) goto loc_821E018C;
loc_821E0188:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E018C:
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// eqv r11,r11,r4
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
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

DEFINE_REX_FUNC(sub_821E19B0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,60
	ctx.r5.s64 = 60;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r8,r10,r3
	ctx.r8.u64 = uint32_t((ctx.r3.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r10.s32 / ctx.r3.s32 : 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// divw r7,r10,r3
	ctx.r7.u64 = uint32_t((ctx.r3.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r10.s32 / ctx.r3.s32 : 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// andc r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// divw r10,r8,r5
	ctx.r10.u64 = uint32_t((ctx.r5.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r8.s32 / ctx.r5.s32 : 0);
	// divw r7,r8,r5
	ctx.r7.u64 = uint32_t((ctx.r5.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r8.s32 / ctx.r5.s32 : 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r7,r7,60
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(60));
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// ble cr6,0x821e1a60
	if (!ctx.cr6.gt) goto loc_821E1A60;
	// li r10,99
	ctx.r10.s64 = 99;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
loc_821E1A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2E48) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2E64;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,8120
	ctx.r11.s64 = ctx.r11.s64 + 8120;
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

DEFINE_REX_FUNC(sub_821E3E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lfs f13,2356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821e3eb0
	if (!ctx.cr6.gt) goto loc_821E3EB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// b 0x821e3ef4
	goto loc_821E3EF4;
loc_821E3EB0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821e3edc
	if (!ctx.cr6.gt) goto loc_821E3EDC;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f11,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f12.f64)));
	// b 0x821e3ef0
	goto loc_821E3EF0;
loc_821E3EDC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,16172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
loc_821E3EF0:
	// stfs f13,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
loc_821E3EF4:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lfs f13,1836(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1836);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E7930) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32032
	ctx.r11.s64 = ctx.r11.s64 + -32032;
	// ori r10,r10,33292
	ctx.r10.u64 = ctx.r10.u64 | 33292;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E7C08) {
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
	ctx.lr = 0x821E7C10;
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e7d84
	if (!ctx.cr0.eq) goto loc_821E7D84;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x821e7d84
	if (ctx.cr6.lt) goto loc_821E7D84;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r26,r11,-32032
	r26.s64 = ctx.r11.s64 + -32032;
	// addi r3,r26,332
	ctx.r3.s64 = r26.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821E7C64;
	sub_821F1818(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bne cr6,0x821e7cf8
	if (!ctx.cr6.eq) goto loc_821E7CF8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821e7d5c
	if (!ctx.cr6.gt) goto loc_821E7D5C;
	// subf r11,r3,r31
	ctx.r11.u64 = r31.u64 - ctx.r3.u64;
	// subf r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r11,-16
	r30.s64 = ctx.r11.s64 + -16;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f30.f64 = double(temp.f32);
loc_821E7CB0:
	// add r3,r28,r30
	ctx.r3.u64 = r28.u64 + r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bl 0x82202620
	ctx.lr = 0x821E7CC0;
	sub_82202620(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
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
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bgt cr6,0x821e7cb0
	if (ctx.cr6.gt) goto loc_821E7CB0;
	// b 0x821e7d5c
	goto loc_821E7D5C;
loc_821E7CF8:
	// fdivs f30,f0,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f0.f64 / f30.f64));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821e7d5c
	if (!ctx.cr6.gt) goto loc_821E7D5C;
	// subf r11,r3,r31
	ctx.r11.u64 = r31.u64 - ctx.r3.u64;
	// subf r28,r31,r28
	r28.u64 = r28.u64 - r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r11,-24
	r30.s64 = ctx.r11.s64 + -24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f29.f64 = double(temp.f32);
loc_821E7D1C:
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bl 0x82202620
	ctx.lr = 0x821E7D2C;
	sub_82202620(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfsu f0,16(r30)
	ea = 16 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r30.u32 = ea;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bgt cr6,0x821e7d1c
	if (ctx.cr6.gt) goto loc_821E7D1C;
loc_821E7D5C:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r3,r26,332
	ctx.r3.s64 = r26.s64 + 332;
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x821f1840
	ctx.lr = 0x821E7D84;
	sub_821F1840(ctx, base);
loc_821E7D84:
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

DEFINE_REX_FUNC(sub_821EDF00) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x821EDF08;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f28
	ctx.lr = 0x821EDF10;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r27,92(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ee980
	if (!ctx.cr0.eq) goto loc_821EE980;
	// lhz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821ee980
	if (ctx.cr6.lt) goto loc_821EE980;
	// lbz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 110);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ee980
	if (ctx.cr0.eq) goto loc_821EE980;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x821ee980
	if (ctx.cr6.eq) goto loc_821EE980;
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// lis r29,-32166
	r29.s64 = -2108030976;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lfs f25,5016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5016);
	f25.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// beq cr6,0x821ee56c
	if (ctx.cr6.eq) goto loc_821EE56C;
	// addi r17,r11,-32032
	r17.s64 = ctx.r11.s64 + -32032;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r17,332
	ctx.r3.s64 = r17.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821EDF80;
	sub_821F1818(ctx, base);
	// ld r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U64(r23.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r19,0
	r19.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,1
	r25.s64 = 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r20,r19
	r20.u64 = r19.u64;
	// lwz r11,100(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 100);
	// lfs f24,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f24.f64 = double(temp.f32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r26,r19
	r26.u64 = r19.u64;
	// lbz r11,104(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 104);
	// mr r18,r19
	r18.u64 = r19.u64;
	// sth r11,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// mr r21,r19
	r21.u64 = r19.u64;
	// lbz r11,108(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 108);
	// fmr f26,f24
	f26.f64 = f24.f64;
	// sth r11,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// lbz r11,91(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 91);
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// lfs f0,120(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lbz r11,111(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 111);
	// lfs f30,112(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 112);
	f30.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f29,116(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 116);
	f29.f64 = double(temp.f32);
	// bne 0x821edff4
	if (!ctx.cr0.eq) goto loc_821EDFF4;
	// stb r19,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r19.u8);
	// b 0x821edff8
	goto loc_821EDFF8;
loc_821EDFF4:
	// stb r25,28(r28)
	REX_STORE_U8(r28.u32 + 28, r25.u8);
loc_821EDFF8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,109(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 109);
	// addi r31,r28,176
	r31.s64 = r28.s64 + 176;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f28,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// beq cr6,0x821ee2fc
	if (ctx.cr6.eq) goto loc_821EE2FC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// beq cr6,0x821ee1a0
	if (ctx.cr6.eq) goto loc_821EE1A0;
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r25,1644(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// stw r25,0(r28)
	REX_STORE_U32(r28.u32 + 0, r25.u32);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r11,1652(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1652);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stb r19,29(r28)
	REX_STORE_U8(r28.u32 + 29, r19.u8);
	// lhz r29,88(r23)
	r29.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x821ee4b0
	if (!ctx.cr0.gt) goto loc_821EE4B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	f27.f64 = double(temp.f32);
loc_821EE050:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// bgt cr6,0x821ee0cc
	if (ctx.cr6.gt) goto loc_821EE0CC;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee0cc
	if (ctx.cr6.eq) goto loc_821EE0CC;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x821ee0cc
	if (!ctx.cr6.gt) goto loc_821EE0CC;
	// stw r30,24(r24)
	REX_STORE_U32(r24.u32 + 24, r30.u32);
	// addi r11,r27,64
	ctx.r11.s64 = r27.s64 + 64;
	// lwz r8,76(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 76);
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// b 0x821ee0a0
	goto loc_821EE0A0;
loc_821EE088:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x821ee0a8
	if (!ctx.cr6.gt) goto loc_821EE0A8;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_821EE0A0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee088
	if (!ctx.cr6.eq) goto loc_821EE088;
loc_821EE0A8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee4a4
	if (!ctx.cr6.eq) goto loc_821EE4A4;
	// li r21,2
	r21.s64 = 2;
	// addi r27,r11,-128
	r27.s64 = ctx.r11.s64 + -128;
	// addi r26,r9,-2
	r26.s64 = ctx.r9.s64 + -2;
	// addi r29,r10,2
	r29.s64 = ctx.r10.s64 + 2;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_821EE0CC:
	// lfs f10,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,24(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f12,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f8,20(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f8,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// lwz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x821ee168
	if (!ctx.cr6.lt) goto loc_821EE168;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_821EE168:
	// bl 0x82202740
	ctx.lr = 0x821EE16C;
	sub_82202740(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// stw r19,24(r31)
	REX_STORE_U32(r31.u32 + 24, r19.u32);
	// ble cr6,0x821ee184
	if (!ctx.cr6.gt) goto loc_821EE184;
	// fadds f26,f31,f26
	f26.f64 = double(float(f31.f64 + f26.f64));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
loc_821EE184:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bgt 0x821ee050
	if (ctx.cr0.gt) goto loc_821EE050;
	// b 0x821ee4a4
	goto loc_821EE4A4;
loc_821EE1A0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,7728
	ctx.r11.s64 = ctx.r11.s64 + 7728;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r11,1652(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1652);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stb r25,29(r28)
	REX_STORE_U8(r28.u32 + 29, r25.u8);
	// lhz r29,88(r23)
	r29.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x821ee4b0
	if (!ctx.cr0.gt) goto loc_821EE4B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,16908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	f27.f64 = double(temp.f32);
loc_821EE1D0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// bgt cr6,0x821ee24c
	if (ctx.cr6.gt) goto loc_821EE24C;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee24c
	if (ctx.cr6.eq) goto loc_821EE24C;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x821ee24c
	if (!ctx.cr6.gt) goto loc_821EE24C;
	// stw r30,24(r24)
	REX_STORE_U32(r24.u32 + 24, r30.u32);
	// addi r11,r27,64
	ctx.r11.s64 = r27.s64 + 64;
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// lwz r8,76(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 76);
	// b 0x821ee220
	goto loc_821EE220;
loc_821EE208:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x821ee228
	if (!ctx.cr6.gt) goto loc_821EE228;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_821EE220:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee208
	if (!ctx.cr6.eq) goto loc_821EE208;
loc_821EE228:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee4a4
	if (!ctx.cr6.eq) goto loc_821EE4A4;
	// li r21,2
	r21.s64 = 2;
	// addi r27,r11,-128
	r27.s64 = ctx.r11.s64 + -128;
	// addi r26,r9,-2
	r26.s64 = ctx.r9.s64 + -2;
	// addi r29,r10,2
	r29.s64 = ctx.r10.s64 + 2;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_821EE24C:
	// lfs f31,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	f31.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,20(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bge cr6,0x821ee2c4
	if (!ctx.cr6.lt) goto loc_821EE2C4;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_821EE2C4:
	// bl 0x82202740
	ctx.lr = 0x821EE2C8;
	sub_82202740(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// stw r19,24(r31)
	REX_STORE_U32(r31.u32 + 24, r19.u32);
	// ble cr6,0x821ee2e0
	if (!ctx.cr6.gt) goto loc_821EE2E0;
	// fadds f26,f31,f26
	f26.f64 = double(float(f31.f64 + f26.f64));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
loc_821EE2E0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bgt 0x821ee1d0
	if (ctx.cr0.gt) goto loc_821EE1D0;
	// b 0x821ee4a4
	goto loc_821EE4A4;
loc_821EE2FC:
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r22,r28,32
	r22.s64 = r28.s64 + 32;
	// lwz r5,96(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 96);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e0368
	ctx.lr = 0x821EE314;
	sub_820E0368(ctx, base);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r28,96
	ctx.r3.s64 = r28.s64 + 96;
	// lwz r4,1664(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1664);
	// bl 0x820e0368
	ctx.lr = 0x821EE328;
	sub_820E0368(ctx, base);
	// stw r22,0(r28)
	REX_STORE_U32(r28.u32 + 0, r22.u32);
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r11,1652(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1652);
	// stb r25,29(r28)
	REX_STORE_U8(r28.u32 + 29, r25.u8);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lhz r29,88(r23)
	r29.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x821ee4b0
	if (!ctx.cr0.gt) goto loc_821EE4B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,16908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	f27.f64 = double(temp.f32);
loc_821EE358:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// bgt cr6,0x821ee3d4
	if (ctx.cr6.gt) goto loc_821EE3D4;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee3d4
	if (ctx.cr6.eq) goto loc_821EE3D4;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x821ee3d4
	if (!ctx.cr6.gt) goto loc_821EE3D4;
	// stw r30,24(r24)
	REX_STORE_U32(r24.u32 + 24, r30.u32);
	// addi r11,r27,64
	ctx.r11.s64 = r27.s64 + 64;
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// lwz r8,76(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 76);
	// b 0x821ee3a8
	goto loc_821EE3A8;
loc_821EE390:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x821ee3b0
	if (!ctx.cr6.gt) goto loc_821EE3B0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_821EE3A8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee390
	if (!ctx.cr6.eq) goto loc_821EE390;
loc_821EE3B0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee4a4
	if (!ctx.cr6.eq) goto loc_821EE4A4;
	// li r21,2
	r21.s64 = 2;
	// addi r27,r11,-128
	r27.s64 = ctx.r11.s64 + -128;
	// addi r26,r9,-2
	r26.s64 = ctx.r9.s64 + -2;
	// addi r29,r10,2
	r29.s64 = ctx.r10.s64 + 2;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_821EE3D4:
	// lfs f10,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f11,24(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f13,40(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,20(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f0,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bge cr6,0x821ee470
	if (!ctx.cr6.lt) goto loc_821EE470;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_821EE470:
	// bl 0x82202740
	ctx.lr = 0x821EE474;
	sub_82202740(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// stw r19,24(r31)
	REX_STORE_U32(r31.u32 + 24, r19.u32);
	// ble cr6,0x821ee48c
	if (!ctx.cr6.gt) goto loc_821EE48C;
	// fadds f26,f31,f26
	f26.f64 = double(float(f31.f64 + f26.f64));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
loc_821EE48C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bgt 0x821ee358
	if (ctx.cr0.gt) goto loc_821EE358;
loc_821EE4A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821ee4b0
	if (ctx.cr6.eq) goto loc_821EE4B0;
	// stw r30,24(r24)
	REX_STORE_U32(r24.u32 + 24, r30.u32);
loc_821EE4B0:
	// addi r11,r20,1
	ctx.r11.s64 = r20.s64 + 1;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// stw r11,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r11.u32);
	// beq cr6,0x821ee4d8
	if (ctx.cr6.eq) goto loc_821EE4D8;
	// clrldi r11,r18,32
	ctx.r11.u64 = r18.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f26,f26,f0
	f26.f64 = double(float(f26.f64 / ctx.f0.f64));
loc_821EE4D8:
	// lfs f0,120(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f26,124(r23)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r23.u32 + 124, temp.u32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x821ee4f0
	if (!ctx.cr6.gt) goto loc_821EE4F0;
	// fdivs f31,f26,f0
	f31.f64 = double(float(f26.f64 / ctx.f0.f64));
	// b 0x821ee4f4
	goto loc_821EE4F4;
loc_821EE4F0:
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = f24.f64;
loc_821EE4F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r6,90(r23)
	ctx.r6.u64 = REX_LOAD_U8(r23.u32 + 90);
	// addi r3,r17,332
	ctx.r3.s64 = r17.s64 + 332;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821f1a48
	ctx.lr = 0x821EE508;
	sub_821F1A48(ctx, base);
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f24.f64;
	// fcmpu cr6,f31,f24
	ctx.cr6.compare(f31.f64, f24.f64);
	// ble cr6,0x821ee564
	if (!ctx.cr6.gt) goto loc_821EE564;
	// lhz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mulli r11,r11,290
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(290));
	// lfs f0,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f3,15624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15624);
	ctx.f3.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821EE54C;
	sub_82204AE0(ctx, base);
	// fdivs f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 / ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,17444(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18120(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 18120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
loc_821EE564:
	// stfs f0,160(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 160, temp.u32);
	// b 0x821ee980
	goto loc_821EE980;
loc_821EE56C:
	// addi r21,r11,-32032
	r21.s64 = ctx.r11.s64 + -32032;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r21,332
	ctx.r3.s64 = r21.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821EE57C;
	sub_821F1818(ctx, base);
	// ld r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U64(r23.u32 + 80);
	// li r19,0
	r19.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,1
	r25.s64 = 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r22,r19
	r22.u64 = r19.u64;
	// lfs f27,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f27.f64 = double(temp.f32);
	// fmr f28,f27
	f28.f64 = f27.f64;
	// lbz r11,91(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 91);
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// lfs f0,120(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// sth r19,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, r19.u16);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// sth r19,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, r19.u16);
	// stw r19,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r19.u32);
	// lbz r11,111(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 111);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ee5d0
	if (!ctx.cr0.eq) goto loc_821EE5D0;
	// stb r19,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r19.u8);
	// b 0x821ee5d4
	goto loc_821EE5D4;
loc_821EE5D0:
	// stb r25,28(r31)
	REX_STORE_U8(r31.u32 + 28, r25.u8);
loc_821EE5D4:
	// lbz r11,109(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 109);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821ee7f0
	if (ctx.cr6.eq) goto loc_821EE7F0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// beq cr6,0x821ee704
	if (ctx.cr6.eq) goto loc_821EE704;
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r25,1644(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r11,1656(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1656);
	// stb r19,29(r31)
	REX_STORE_U8(r31.u32 + 29, r19.u8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r26,88(r23)
	r26.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x821ee930
	if (!ctx.cr0.gt) goto loc_821EE930;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// lfs f29,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f29.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_821EE630:
	// lwz r11,-4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee654
	if (ctx.cr6.eq) goto loc_821EE654;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x821ee654
	if (!ctx.cr6.gt) goto loc_821EE654;
	// stw r28,24(r24)
	REX_STORE_U32(r24.u32 + 24, r28.u32);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_821EE654:
	// lfs f10,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f12,24(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f0,f9,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f13.f64)));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bge cr6,0x821ee6dc
	if (!ctx.cr6.lt) goto loc_821EE6DC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_821EE6DC:
	// bl 0x82202620
	ctx.lr = 0x821EE6E0;
	sub_82202620(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r19,24(r30)
	REX_STORE_U32(r30.u32 + 24, r19.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// fadds f28,f31,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f31.f64 + f28.f64));
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bgt 0x821ee630
	if (ctx.cr0.gt) goto loc_821EE630;
	// b 0x821ee924
	goto loc_821EE924;
loc_821EE704:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,7728
	ctx.r11.s64 = ctx.r11.s64 + 7728;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// lwz r11,1664(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1664);
	// stb r25,29(r31)
	REX_STORE_U8(r31.u32 + 29, r25.u8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lhz r29,88(r23)
	r29.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x821ee930
	if (!ctx.cr0.gt) goto loc_821EE930;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// lfs f29,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f29.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_821EE740:
	// lwz r11,-4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee764
	if (ctx.cr6.eq) goto loc_821EE764;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x821ee764
	if (!ctx.cr6.gt) goto loc_821EE764;
	// stw r28,24(r24)
	REX_STORE_U32(r24.u32 + 24, r28.u32);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_821EE764:
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bge cr6,0x821ee7c8
	if (!ctx.cr6.lt) goto loc_821EE7C8;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_821EE7C8:
	// bl 0x82202620
	ctx.lr = 0x821EE7CC;
	sub_82202620(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r19,24(r30)
	REX_STORE_U32(r30.u32 + 24, r19.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fadds f28,f31,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f31.f64 + f28.f64));
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bgt 0x821ee740
	if (ctx.cr0.gt) goto loc_821EE740;
	// b 0x821ee924
	goto loc_821EE924;
loc_821EE7F0:
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
	// lwz r5,96(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e0368
	ctx.lr = 0x821EE808;
	sub_820E0368(ctx, base);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1664(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1664);
	// bl 0x820e0368
	ctx.lr = 0x821EE820;
	sub_820E0368(ctx, base);
	// stb r25,29(r31)
	REX_STORE_U8(r31.u32 + 29, r25.u8);
	// mr r24,r30
	r24.u64 = r30.u64;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r25,88(r23)
	r25.u64 = REX_LOAD_U16(r23.u32 + 88);
	// cmpwi r25,0
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble 0x821ee924
	if (!ctx.cr0.gt) goto loc_821EE924;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// lfs f29,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f29.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_821EE854:
	// lwz r11,-4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee878
	if (ctx.cr6.eq) goto loc_821EE878;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x821ee878
	if (!ctx.cr6.gt) goto loc_821EE878;
	// stw r28,24(r24)
	REX_STORE_U32(r24.u32 + 24, r28.u32);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_821EE878:
	// lfs f10,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f12,40(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f31,f0,f10
	f31.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bge cr6,0x821ee900
	if (!ctx.cr6.lt) goto loc_821EE900;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_821EE900:
	// bl 0x82202620
	ctx.lr = 0x821EE904;
	sub_82202620(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r19,24(r30)
	REX_STORE_U32(r30.u32 + 24, r19.u32);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// fadds f28,f31,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f31.f64 + f28.f64));
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bgt 0x821ee854
	if (ctx.cr0.gt) goto loc_821EE854;
loc_821EE924:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821ee930
	if (ctx.cr6.eq) goto loc_821EE930;
	// stw r28,24(r24)
	REX_STORE_U32(r24.u32 + 24, r28.u32);
loc_821EE930:
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lhz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 88);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,120(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// fdivs f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 / ctx.f13.f64));
	// stfs f13,124(r23)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r23.u32 + 124, temp.u32);
	// ble cr6,0x821ee96c
	if (!ctx.cr6.gt) goto loc_821EE96C;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x821ee970
	goto loc_821EE970;
loc_821EE96C:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
loc_821EE970:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r6,90(r23)
	ctx.r6.u64 = REX_LOAD_U8(r23.u32 + 90);
	// addi r3,r21,332
	ctx.r3.s64 = r21.s64 + 332;
	// bl 0x821f1a48
	ctx.lr = 0x821EE980;
	sub_821F1A48(ctx, base);
loc_821EE980:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f74
	ctx.lr = 0x821EE98C;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82220B40) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x82220B48;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r22,0
	r22.s64 = 0;
	// bne cr6,0x82220b8c
	if (!ctx.cr6.eq) goto loc_82220B8C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82220cec
	if (ctx.cr6.eq) goto loc_82220CEC;
	// addi r5,r3,13128
	ctx.r5.s64 = ctx.r3.s64 + 13128;
loc_82220B8C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82220cec
	if (ctx.cr6.eq) goto loc_82220CEC;
	// lwz r11,13124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82220cec
	if (!ctx.cr6.gt) goto loc_82220CEC;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_82220BAC:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,13100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13100);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82220bf8
	if (!ctx.cr6.eq) goto loc_82220BF8;
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82220BF8:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,29,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82220c1c
	if (!ctx.cr6.eq) goto loc_82220C1C;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82220C1C:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// slw r4,r11,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// bl 0x82220368
	ctx.lr = 0x82220C2C;
	sub_82220368(ctx, base);
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r4,r11,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// bl 0x82211918
	ctx.lr = 0x82220C40;
	sub_82211918(ctx, base);
	// lwz r11,13124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82220ca8
	if (!ctx.cr6.lt) goto loc_82220CA8;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220c64
	if (ctx.cr6.eq) goto loc_82220C64;
	// ori r4,r26,256
	ctx.r4.u64 = r26.u64 | 256;
loc_82220C64:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220c74
	if (ctx.cr6.eq) goto loc_82220C74;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
loc_82220C74:
	// lwz r11,13588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13588);
	// addi r10,r31,13568
	ctx.r10.s64 = r31.s64 + 13568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,13584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 13584);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82232580
	ctx.lr = 0x82220CA4;
	sub_82232580(ctx, base);
	// b 0x82220cd4
	goto loc_82220CD4;
loc_82220CA8:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82232580
	ctx.lr = 0x82220CD4;
	sub_82232580(ctx, base);
loc_82220CD4:
	// lwz r11,13124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82220bac
	if (ctx.cr6.lt) goto loc_82220BAC;
loc_82220CEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220368
	ctx.lr = 0x82220CF8;
	sub_82220368(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82211918
	ctx.lr = 0x82220D04;
	sub_82211918(ctx, base);
	// lwz r11,13564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13564);
	// lwz r9,11464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 11464);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r28,r10,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// beq 0x82220d20
	if (ctx.cr0.eq) goto loc_82220D20;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82220D20:
	// lwz r11,13124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82220e58
	if (ctx.cr6.eq) goto loc_82220E58;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82220368
	ctx.lr = 0x82220D38;
	sub_82220368(ctx, base);
	// lwz r11,13760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13760);
	// addi r30,r31,13760
	r30.s64 = r31.s64 + 13760;
	// lis r29,16384
	r29.s64 = 1073741824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220d54
	if (!ctx.cr6.eq) goto loc_82220D54;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// b 0x82220d6c
	goto loc_82220D6C;
loc_82220D54:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r29,r11
	ctx.r6.u64 = ctx.r11.u64 - r29.u64;
loc_82220D6C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r11,-13648
	ctx.r5.s64 = ctx.r11.s64 + -13648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215338
	ctx.lr = 0x82220D80;
	sub_82215338(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220368
	ctx.lr = 0x82220D8C;
	sub_82220368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82220D94;
	sub_82215008(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220db0
	if (!ctx.cr6.gt) goto loc_82220DB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214938
	ctx.lr = 0x82220DB0;
	sub_82214938(ctx, base);
loc_82220DB0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,13772(r31)
	REX_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220de4
	if (!ctx.cr6.gt) goto loc_82220DE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214938
	ctx.lr = 0x82220DE4;
	sub_82214938(ctx, base);
loc_82220DE4:
	// lis r11,-30464
	ctx.r11.s64 = -1996488704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,13616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220e00
	if (!ctx.cr6.eq) goto loc_82220E00;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// b 0x82220e18
	goto loc_82220E18;
loc_82220E00:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
loc_82220E18:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,13736(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220e30
	if (!ctx.cr6.eq) goto loc_82220E30;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// b 0x82220e48
	goto loc_82220E48;
loc_82220E30:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
loc_82220E48:
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,13772(r31)
	REX_STORE_U32(r31.u32 + 13772, ctx.r10.u32);
	// b 0x82220e5c
	goto loc_82220E5C;
loc_82220E58:
	// bl 0x82215008
	ctx.lr = 0x82220E5C;
	sub_82215008(ctx, base);
loc_82220E5C:
	// lwz r11,13772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13772);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// lwz r10,13776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13776);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220e7c
	if (!ctx.cr6.gt) goto loc_82220E7C;
	// bl 0x82214938
	ctx.lr = 0x82220E78;
	sub_82214938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82220E7C:
	// lis r10,-30976
	ctx.r10.s64 = -2030043136;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// andi. r11,r11,207
	ctx.r11.u64 = ctx.r11.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// stw r9,13772(r31)
	REX_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r22,13100(r31)
	REX_STORE_U32(r31.u32 + 13100, r22.u32);
	// stw r22,13092(r31)
	REX_STORE_U32(r31.u32 + 13092, r22.u32);
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// stb r11,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r11.u8);
	// bne 0x82220f80
	if (!ctx.cr0.eq) goto loc_82220F80;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82220f80
	if (!ctx.cr0.eq) goto loc_82220F80;
	// lbz r11,12563(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82220f80
	if (!ctx.cr0.eq) goto loc_82220F80;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220ee0
	if (ctx.cr0.eq) goto loc_82220EE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82220f74
	goto loc_82220F74;
loc_82220EE0:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220f6c
	if (ctx.cr0.eq) goto loc_82220F6C;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220f04
	if (ctx.cr6.eq) goto loc_82220F04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220f6c
	if (!ctx.cr6.eq) goto loc_82220F6C;
loc_82220F04:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220f1c
	if (ctx.cr6.eq) goto loc_82220F1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220f6c
	if (!ctx.cr6.eq) goto loc_82220F6C;
loc_82220F1C:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220f34
	if (ctx.cr6.eq) goto loc_82220F34;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220f6c
	if (!ctx.cr6.eq) goto loc_82220F6C;
loc_82220F34:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220f4c
	if (ctx.cr6.eq) goto loc_82220F4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220f6c
	if (!ctx.cr6.eq) goto loc_82220F6C;
loc_82220F4C:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220f64
	if (ctx.cr6.eq) goto loc_82220F64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220f6c
	if (!ctx.cr6.eq) goto loc_82220F6C;
loc_82220F64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82220f70
	goto loc_82220F70;
loc_82220F6C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82220F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82220F74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82220f84
	if (!ctx.cr0.eq) goto loc_82220F84;
loc_82220F80:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82220F84:
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r22,13088(r31)
	REX_STORE_U32(r31.u32 + 13088, r22.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,13084(r31)
	REX_STORE_U32(r31.u32 + 13084, ctx.r9.u32);
	// stw r22,11060(r31)
	REX_STORE_U32(r31.u32 + 11060, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r22,11064(r31)
	REX_STORE_U32(r31.u32 + 11064, r22.u32);
	// stb r10,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r4,13124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// bl 0x8221da98
	ctx.lr = 0x82220FB4;
	sub_8221DA98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,27388
	ctx.r4.s64 = ctx.r11.s64 + 27388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212de0
	ctx.lr = 0x82220FC8;
	sub_82212DE0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82220fe8
	if (ctx.cr6.eq) goto loc_82220FE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212a80
	ctx.lr = 0x82220FDC;
	sub_82212A80(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82220fec
	goto loc_82220FEC;
loc_82220FE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82220FEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82235690) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822355e0
	sub_822355E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822356F8) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824d482c
	__imp__NetDll_bind(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82235790) {
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
	ctx.lr = 0x82235798;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r7,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822357d4
	if (ctx.cr0.eq) goto loc_822357D4;
	// bl 0x824d419c
	ctx.lr = 0x822357C8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822357d4
	if (!ctx.cr6.eq) goto loc_822357D4;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
loc_822357D4:
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r5,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r24,36(r31)
	REX_STORE_U32(r31.u32 + 36, r24.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x822361d0
	ctx.lr = 0x82235838;
	sub_822361D0(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x82235864
	if (ctx.cr6.eq) goto loc_82235864;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235858
	if (ctx.cr6.eq) goto loc_82235858;
	// bl 0x823cd948
	ctx.lr = 0x82235858;
	sub_823CD948(ctx, base);
loc_82235858:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82235864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82237F30) {
	REX_FUNC_PROLOGUE();
	// stw r4,1216(r3)
	REX_STORE_U32(ctx.r3.u32 + 1216, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237F40) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,21
	ctx.r11.s64 = ctx.r4.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237f68
	if (ctx.cr6.eq) goto loc_82237F68;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237f68
	if (ctx.cr6.eq) goto loc_82237F68;
	// lwz r3,144(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// blr 
	return;
loc_82237F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238C40) {
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
	ctx.lr = 0x82238C48;
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
	ctx.lr = 0x82238C68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82238C74;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82238c88
	if (!ctx.cr0.eq) goto loc_82238C88;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82238c98
	goto loc_82238C98;
loc_82238C88:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223dc78
	ctx.lr = 0x82238C94;
	sub_8223DC78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82238C98:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238CA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223A1B8) {
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
	ctx.lr = 0x8223A1C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r26,r26,87
	r26.u64 = r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223a244
	if (ctx.cr6.eq) goto loc_8223A244;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
loc_8223A1E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822399c0
	ctx.lr = 0x8223A1F4;
	sub_822399C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a244
	if (ctx.cr0.eq) goto loc_8223A244;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A20C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt 0x8223a234
	if (ctx.cr0.lt) goto loc_8223A234;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8223a1e8
	if (ctx.cr6.lt) goto loc_8223A1E8;
	// b 0x8223a244
	goto loc_8223A244;
loc_8223A234:
	// addi r11,r29,9
	ctx.r11.s64 = r29.s64 + 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
loc_8223A244:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8223C518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8223C520;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x823cd118
	ctx.lr = 0x8223C53C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne 0x8223c56c
	if (!ctx.cr0.eq) goto loc_8223C56C;
loc_8223C548:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_8223C550:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223bfe0
	ctx.lr = 0x8223C558;
	sub_8223BFE0(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8223C55C:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8223C56C:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,28
	ctx.r9.s64 = 28;
	// lfd f0,-6624(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -6624);
	// li r6,12
	ctx.r6.s64 = 12;
	// lfd f13,-6632(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + -6632);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,10
	ctx.r7.s64 = 10;
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// stfd f0,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.f0.u64);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stfd f13,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.f13.u64);
	// sth r6,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r6.u16);
	// sth r8,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r8.u16);
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// sth r9,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r7.u32);
	// stw r5,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r5.u32);
loc_8223C5D0:
	// lfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 280);
	// stfdu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8223c5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C5D0;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x8223b8c8
	ctx.lr = 0x8223C5FC;
	sub_8223B8C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8223c550
	if (ctx.cr0.lt) goto loc_8223C550;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823cd118
	ctx.lr = 0x8223C618;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x8223c548
	if (ctx.cr0.eq) goto loc_8223C548;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223c55c
	if (!ctx.cr6.gt) goto loc_8223C55C;
	// addi r7,r31,384
	ctx.r7.s64 = r31.s64 + 384;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8223C63C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c678
	if (ctx.cr6.eq) goto loc_8223C678;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8223c67c
	goto loc_8223C67C;
loc_8223C678:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8223C67C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223c63c
	if (ctx.cr6.lt) goto loc_8223C63C;
	// b 0x8223c55c
	goto loc_8223C55C;
}

DEFINE_REX_FUNC(sub_82245B30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245b6c
	if (ctx.cr6.eq) goto loc_82245B6C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82245b6c
	if (!ctx.cr6.eq) goto loc_82245B6C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82245b6c
	if (ctx.cr6.gt) goto loc_82245B6C;
	// lwz r10,132(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_82245B6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246370) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82245f68
	ctx.lr = 0x82246384;
	sub_82245F68(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246920) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82246930
	if (!ctx.cr6.eq) goto loc_82246930;
loc_82246928:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82246930:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246990
	if (ctx.cr6.eq) goto loc_82246990;
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
	// bge cr6,0x82246990
	if (!ctx.cr6.lt) goto loc_82246990;
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
	// bne cr6,0x82246990
	if (!ctx.cr6.eq) goto loc_82246990;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82246990
	if (!ctx.cr6.eq) goto loc_82246990;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82246990:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82246998:
	// beq cr6,0x82246928
	if (ctx.cr6.eq) goto loc_82246928;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822469b4
	if (ctx.cr6.eq) goto loc_822469B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x82246998
	goto loc_82246998;
loc_822469B4:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247BA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82247BA8;
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
	// beq 0x82247c00
	if (ctx.cr0.eq) goto loc_82247C00;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x82247be8
	if (ctx.cr0.lt) goto loc_82247BE8;
loc_82247BD4:
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227baa8
	ctx.lr = 0x82247BE0;
	sub_8227BAA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82247bd4
	if (!ctx.cr0.lt) goto loc_82247BD4;
loc_82247BE8:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247bf8
	if (ctx.cr0.eq) goto loc_82247BF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82247BF8;
	sub_82255B70(ctx, base);
loc_82247BF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82247c1c
	goto loc_82247C1C;
loc_82247C00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227baa8
	ctx.lr = 0x82247C08;
	sub_8227BAA8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247c18
	if (ctx.cr0.eq) goto loc_82247C18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82247C18;
	sub_82255B70(ctx, base);
loc_82247C18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82247C1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822496D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822496E0;
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
	// addi r31,r11,24904
	r31.s64 = ctx.r11.s64 + 24904;
	// lwz r11,25000(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25000);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822497c0
	if (!ctx.cr0.eq) goto loc_822497C0;
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
	// stw r11,25000(r8)
	REX_STORE_U32(ctx.r8.u32 + 25000, ctx.r11.u32);
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
	ctx.lr = 0x8224973C;
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
	ctx.lr = 0x82249798;
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
loc_822497C0:
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

DEFINE_REX_FUNC(sub_8224CE90) {
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
	// addi r31,r11,26396
	r31.s64 = ctx.r11.s64 + 26396;
	// lwz r11,26416(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224ced4
	if (!ctx.cr0.eq) goto loc_8224CED4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26416(r10)
	REX_STORE_U32(ctx.r10.u32 + 26416, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224CEC8;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15512
	ctx.r3.s64 = ctx.r11.s64 + 15512;
	// bl 0x822d5848
	ctx.lr = 0x8224CED4;
	sub_822D5848(ctx, base);
loc_8224CED4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
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

DEFINE_REX_FUNC(sub_8224EB98) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225c508
	ctx.lr = 0x8224EBBC;
	sub_8225C508(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8224ec18
	if (ctx.cr0.eq) goto loc_8224EC18;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8224ec18
	if (!ctx.cr6.eq) goto loc_8224EC18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8224ebe8
	if (!ctx.cr6.lt) goto loc_8224EBE8;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_8224EBE8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8224e9f8
	ctx.lr = 0x8224EBFC;
	sub_8224E9F8(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82260768
	ctx.lr = 0x8224EC10;
	sub_82260768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224ec20
	goto loc_8224EC20;
loc_8224EC18:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8224EC20:
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

DEFINE_REX_FUNC(sub_822524A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5364
	ctx.r3.s64 = ctx.r11.s64 + -5364;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822526E8) {
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
	// addi r10,r10,-5232
	ctx.r10.s64 = ctx.r10.s64 + -5232;
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
	ctx.lr = 0x82252730;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-20840
	ctx.r11.s64 = ctx.r11.s64 + -20840;
	// addi r10,r10,-20720
	ctx.r10.s64 = ctx.r10.s64 + -20720;
	// addi r9,r9,27696
	ctx.r9.s64 = ctx.r9.s64 + 27696;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x822501d0
	ctx.lr = 0x82252760;
	sub_822501D0(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29832
	ctx.r4.s64 = ctx.r11.s64 + 29832;
	// bl 0x822512d8
	ctx.lr = 0x82252778;
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

DEFINE_REX_FUNC(sub_82254DD0) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x82254DF4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82254e44
	if (ctx.cr0.eq) goto loc_82254E44;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82254e48
	goto loc_82254E48;
loc_82254E44:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82254E48:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82254e5c
	if (!ctx.cr6.eq) goto loc_82254E5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82254e68
	goto loc_82254E68;
loc_82254E5C:
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82254E68:
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

DEFINE_REX_FUNC(sub_82256BC0) {
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
	ctx.lr = 0x82256BE0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256bf4
	if (!ctx.cr0.eq) goto loc_82256BF4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256bfc
	goto loc_82256BFC;
loc_82256BF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82260148
	ctx.lr = 0x82256BFC;
	sub_82260148(ctx, base);
loc_82256BFC:
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

DEFINE_REX_FUNC(sub_822577D0) {
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
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x822577F8;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82257804;
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

DEFINE_REX_FUNC(sub_82259228) {
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
	ctx.lr = 0x82259230;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// stw r3,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r3.u32);
	// lwz r20,8(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// mulli r3,r20,12
	ctx.r3.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x82259268
	if (!ctx.cr6.gt) goto loc_82259268;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82259268:
	// bl 0x82255b48
	ctx.lr = 0x8225926C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r22)
	REX_STORE_U32(r22.u32 + 56, ctx.r3.u32);
	// bne 0x82259284
	if (!ctx.cr0.eq) goto loc_82259284;
loc_82259278:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82259548
	goto loc_82259548;
loc_82259284:
	// stw r20,52(r22)
	REX_STORE_U32(r22.u32 + 52, r20.u32);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x822593e0
	if (!ctx.cr6.gt) goto loc_822593E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r11,44
	r24.s64 = ctx.r11.s64 + 44;
loc_822592A4:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8225938c
	if (!ctx.cr6.gt) goto loc_8225938C;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r26,r1,88
	r26.s64 = ctx.r1.s64 + 88;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82259374
	if (!ctx.cr6.gt) goto loc_82259374;
	// li r29,0
	r29.s64 = 0;
loc_822592DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227acf8
	ctx.lr = 0x822592E4;
	sub_8227ACF8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x82259314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225940c
	if (ctx.cr0.lt) goto loc_8225940C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82259420
	if (!ctx.cr0.eq) goto loc_82259420;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82259350
	if (ctx.cr6.eq) goto loc_82259350;
	// lwz r26,100(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82259350:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227b2c8
	ctx.lr = 0x82259358;
	sub_8227B2C8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822592dc
	if (ctx.cr6.lt) goto loc_822592DC;
loc_82259374:
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// stwx r26,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r26.u32);
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x822593b8
	goto loc_822593B8;
loc_8225938C:
	// bne cr6,0x822593cc
	if (!ctx.cr6.eq) goto loc_822593CC;
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_822593B8:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_822593CC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(r23.s32, r20.s32, ctx.xer);
	// blt cr6,0x822592a4
	if (ctx.cr6.lt) goto loc_822592A4;
loc_822593E0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8225942c
	if (ctx.cr6.eq) goto loc_8225942C;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225942c
	if (ctx.cr6.eq) goto loc_8225942C;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82277a38
	ctx.lr = 0x82259408;
	sub_82277A38(ctx, base);
	// b 0x82259544
	goto loc_82259544;
loc_8225940C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82259410:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227b2c8
	ctx.lr = 0x82259418;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82259548
	goto loc_82259548;
loc_82259420:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82259410
	goto loc_82259410;
loc_8225942C:
	// lwz r25,20(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8227d288
	ctx.lr = 0x82259440;
	sub_8227D288(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82259278
	if (ctx.cr0.eq) goto loc_82259278;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82259520
	if (!ctx.cr6.gt) goto loc_82259520;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r24,4
	r27.s64 = r24.s64 + 4;
loc_8225945C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stw r11,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82259484
	if (ctx.cr0.eq) goto loc_82259484;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82259490
	goto loc_82259490;
loc_82259484:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82259494
	if (ctx.cr0.eq) goto loc_82259494;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82259490:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82259494:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r7,r27,12
	ctx.r7.s64 = r27.s64 + 12;
	// addi r6,r27,4
	ctx.r6.s64 = r27.s64 + 4;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82257fd8
	ctx.lr = 0x822594C0;
	sub_82257FD8(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8225950c
	if (!ctx.cr6.gt) goto loc_8225950C;
	// li r28,0
	r28.s64 = 0;
loc_822594D0:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8227b0e0
	ctx.lr = 0x822594E8;
	sub_8227B0E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82259550
	if (ctx.cr0.lt) goto loc_82259550;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r26,r20
	ctx.cr6.compare<int32_t>(r26.s32, r20.s32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x822594d0
	if (ctx.cr6.lt) goto loc_822594D0;
loc_8225950C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(r23.s32, r25.s32, ctx.xer);
	// blt cr6,0x8225945c
	if (ctx.cr6.lt) goto loc_8225945C;
loc_82259520:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82277a38
	ctx.lr = 0x82259538;
	sub_82277A38(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82259544
	if (ctx.cr6.eq) goto loc_82259544;
	// stw r24,28(r30)
	REX_STORE_U32(r30.u32 + 28, r24.u32);
loc_82259544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259548:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb0
	return;
loc_82259550:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8227d208
	ctx.lr = 0x82259560;
	sub_8227D208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82259548
	goto loc_82259548;
}

DEFINE_REX_FUNC(sub_82268610) {
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
	ctx.lr = 0x82268618;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82268640
	if (!ctx.cr6.lt) goto loc_82268640;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822686f0
	goto loc_822686F0;
loc_82268640:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// ble 0x822686c0
	if (!ctx.cr0.gt) goto loc_822686C0;
	// li r29,0
	r29.s64 = 0;
loc_82268664:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227acf8
	ctx.lr = 0x8226866C;
	sub_8227ACF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bctrl 
	ctx.lr = 0x82268694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt 0x822686f8
	if (ctx.cr0.lt) goto loc_822686F8;
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8227b2c8
	ctx.lr = 0x822686A8;
	sub_8227B2C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82268664
	if (ctx.cr6.lt) goto loc_82268664;
loc_822686C0:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x822686F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822686F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
loc_822686F8:
	// bl 0x8227b2c8
	ctx.lr = 0x822686FC;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822686f0
	goto loc_822686F0;
}

DEFINE_REX_FUNC(sub_8226DA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226DA98;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// addi r29,r10,29840
	r29.s64 = ctx.r10.s64 + 29840;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r7,-2144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -2144);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// ble cr6,0x8226daec
	if (!ctx.cr6.gt) goto loc_8226DAEC;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8226DAD0:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8226db90
	if (ctx.cr6.eq) goto loc_8226DB90;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,168
	r31.s64 = r31.s64 + 168;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8226dad0
	if (ctx.cr6.lt) goto loc_8226DAD0;
loc_8226DAEC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8226db80
	if (ctx.cr6.eq) goto loc_8226DB80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
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
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82289390
	ctx.lr = 0x8226DB40;
	sub_82289390(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82288998
	ctx.lr = 0x8226DB4C;
	sub_82288998(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82288d90
	ctx.lr = 0x8226DB58;
	sub_82288D90(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8226DB68:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8226db68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226DB68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8226c9b8
	ctx.lr = 0x8226DB80;
	sub_8226C9B8(ctx, base);
loc_8226DB80:
	// lwz r3,248(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x822d7b58
	ctx.lr = 0x8226DB88;
	sub_822D7B58(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4edc
	return;
loc_8226DB90:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8226dbec
	if (ctx.cr6.eq) goto loc_8226DBEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82289390
	ctx.lr = 0x8226DBB4;
	sub_82289390(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82288998
	ctx.lr = 0x8226DBC0;
	sub_82288998(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82288d90
	ctx.lr = 0x8226DBCC;
	sub_82288D90(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r31,144
	ctx.r9.s64 = r31.s64 + 144;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8226DBDC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8226dbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226DBDC;
	// b 0x8226db80
	goto loc_8226DB80;
loc_8226DBEC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x8225d878
	ctx.lr = 0x8226DBF8;
	sub_8225D878(ctx, base);
	// b 0x8226db80
	goto loc_8226DB80;
}

DEFINE_REX_FUNC(sub_82276648) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82276650;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822766d4
	if (ctx.cr6.eq) goto loc_822766D4;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822766d4
	if (ctx.cr0.eq) goto loc_822766D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822766d4
	if (ctx.cr6.eq) goto loc_822766D4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,23836(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822766c8
	if (ctx.cr6.eq) goto loc_822766C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822766A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822766dc
	if (!ctx.cr0.lt) goto loc_822766DC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822766dc
	if (!ctx.cr6.eq) goto loc_822766DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822766C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246a38
	ctx.lr = 0x822766D0;
	sub_82246A38(ctx, base);
	// b 0x822766dc
	goto loc_822766DC;
loc_822766D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822766DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82277E30) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82277e6c
	if (!ctx.cr6.eq) goto loc_82277E6C;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8227d208
	ctx.lr = 0x82277E68;
	sub_8227D208(ctx, base);
	// b 0x82277e78
	goto loc_82277E78;
loc_82277E6C:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x8227b7c0
	ctx.lr = 0x82277E74;
	sub_8227B7C0(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_82277E78:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x8227cd20
	ctx.lr = 0x82277E94;
	sub_8227CD20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x82277EA4;
	sub_82255B70(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
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

DEFINE_REX_FUNC(sub_82278E40) {
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
	ctx.lr = 0x82278E48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82278ec8
	if (!ctx.cr6.lt) goto loc_82278EC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r27,r4,12
	r27.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82278ec8
	if (ctx.cr6.lt) goto loc_82278EC8;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// blt cr6,0x82278ec8
	if (ctx.cr6.lt) goto loc_82278EC8;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82278ec8
	if (ctx.cr6.gt) goto loc_82278EC8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82278eb4
	if (ctx.cr6.eq) goto loc_82278EB4;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_82278EA0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a9880
	ctx.lr = 0x82278EA8;
	sub_822A9880(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x82278ea0
	if (!ctx.cr0.eq) goto loc_82278EA0;
loc_82278EB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82278ecc
	goto loc_82278ECC;
loc_82278EC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278ECC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8227B060) {
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
	ctx.lr = 0x8227B080;
	sub_8227AD60(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
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

DEFINE_REX_FUNC(sub_8227BF70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822d7938
	sub_822D7938(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227C308) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227C310;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227c37c
	if (ctx.cr6.eq) goto loc_8227C37C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227c344
	if (!ctx.cr0.eq) goto loc_8227C344;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8227C344;
	sub_82255B70(ctx, base);
loc_8227C344:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8227C364;
	sub_82255B70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227C37C;
	sub_82255B70(ctx, base);
loc_8227C37C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227D930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227D938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8227D94C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227d98c
	if (ctx.cr0.eq) goto loc_8227D98C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1464
	ctx.r10.s64 = ctx.r10.s64 + 1464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8227d990
	goto loc_8227D990;
loc_8227D98C:
	// li r31,0
	r31.s64 = 0;
loc_8227D990:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227d9a4
	if (!ctx.cr6.eq) goto loc_8227D9A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227da00
	goto loc_8227DA00;
loc_8227D9A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8227d9e0
	if (!ctx.cr0.lt) goto loc_8227D9E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D9D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8227da00
	goto loc_8227DA00;
loc_8227D9E0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
loc_8227DA00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227FCF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227FD00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8227FD10;
	sub_82255B70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bne 0x8227fd58
	if (!ctx.cr0.eq) goto loc_8227FD58;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227fd38
	if (ctx.cr6.eq) goto loc_8227FD38;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82247ba0
	ctx.lr = 0x8227FD38;
	sub_82247BA0(ctx, base);
loc_8227FD38:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82255b70
	ctx.lr = 0x8227FD40;
	sub_82255B70(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227fdc0
	if (ctx.cr6.eq) goto loc_8227FDC0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8227fc70
	ctx.lr = 0x8227FD54;
	sub_8227FC70(ctx, base);
	// b 0x8227fdc0
	goto loc_8227FDC0;
loc_8227FD58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227fd8c
	if (!ctx.cr6.gt) goto loc_8227FD8C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8227FD6C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8227baa8
	ctx.lr = 0x8227FD78;
	sub_8227BAA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227fd6c
	if (ctx.cr6.lt) goto loc_8227FD6C;
loc_8227FD8C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227fdc0
	if (!ctx.cr6.gt) goto loc_8227FDC0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8227FDA0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8227fbd8
	ctx.lr = 0x8227FDAC;
	sub_8227FBD8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227fda0
	if (ctx.cr6.lt) goto loc_8227FDA0;
loc_8227FDC0:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8227d208
	ctx.lr = 0x8227FDDC;
	sub_8227D208(ctx, base);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822852C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82293650
	sub_82293650(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82285A80) {
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
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82285ab0
	if (ctx.cr6.eq) goto loc_82285AB0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82285ad0
	goto loc_82285AD0;
loc_82285AB0:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82285ac8
	if (!ctx.cr6.eq) goto loc_82285AC8;
	// bl 0x82281d18
	ctx.lr = 0x82285AC8;
	sub_82281D18(ctx, base);
loc_82285AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
loc_82285AD0:
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

DEFINE_REX_FUNC(sub_82286508) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82286540
	if (ctx.cr6.eq) goto loc_82286540;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82286540
	if (!ctx.cr6.gt) goto loc_82286540;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82286540:
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

DEFINE_REX_FUNC(sub_822873E8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,10
	ctx.r4.s64 = 10;
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

DEFINE_REX_FUNC(sub_82287670) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC;
	// addi r11,r11,7216
	ctx.r11.s64 = ctx.r11.s64 + 7216;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822878A0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82287968) {
	REX_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// b 0x822878a8
	sub_822878A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82287DB0) {
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
	ctx.lr = 0x82287DB8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287DE4;
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
	ctx.lr = 0x82287DFC;
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
	// bne 0x82287e1c
	if (!ctx.cr0.eq) goto loc_82287E1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
loc_82287E1C:
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
	ctx.lr = 0x82287E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82287e84
	if (ctx.cr0.eq) goto loc_82287E84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// stw r10,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// bl 0x822d7b58
	ctx.lr = 0x82287E7C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82287f50
	goto loc_82287F50;
loc_82287E84:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82287f44
	if (ctx.cr0.lt) goto loc_82287F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82287f34
	if (!ctx.cr6.eq) goto loc_82287F34;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F00;
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
	ctx.lr = 0x82287F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	r28.s64 = 0;
loc_82287F34:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// stw r10,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r10.u32);
loc_82287F44:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822d7b58
	ctx.lr = 0x82287F4C;
	sub_822D7B58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82287F50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8228E8F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8228E8F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228E910;
	sub_82255B48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca60
	ctx.lr = 0x8228E920;
	sub_8228CA60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r30,4(r28)
	REX_STORE_U32(r28.u32 + 4, r30.u32);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82290798) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822907A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82255b48
	ctx.lr = 0x822907C0;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822907d4
	if (!ctx.cr0.eq) goto loc_822907D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82290810
	goto loc_82290810;
loc_822907D4:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x822907E4;
	sub_822D5870(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228e178
	ctx.lr = 0x822907F4;
	sub_8228E178(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82290808
	if (!ctx.cr0.lt) goto loc_82290808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228e0d0
	ctx.lr = 0x82290804;
	sub_8228E0D0(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82290808:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82290810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822919B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822919B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822919fc
	if (!ctx.cr6.gt) goto loc_822919FC;
loc_822919D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x822919E4;
	sub_822D5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822919d4
	if (ctx.cr6.lt) goto loc_822919D4;
loc_822919FC:
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82291a1c
	if (ctx.cr0.eq) goto loc_82291A1C;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_82291A1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82291a2c
	if (ctx.cr6.lt) goto loc_82291A2C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82291A2C:
	// lhz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 18);
	// li r4,0
	ctx.r4.s64 = 0;
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82291afc
	if (ctx.cr0.lt) goto loc_82291AFC;
loc_82291A3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82291ae0
	if (!ctx.cr6.gt) goto loc_82291AE0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// subf r6,r30,r11
	ctx.r6.u64 = ctx.r11.u64 - r30.u64;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82291A6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v0,r6,r7
	ea = (ctx.r6.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v13,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddubs v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubs v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v0,r9,r30
	ea = (ctx.r9.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82291a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82291A6C;
loc_82291AE0:
	// lhz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82291a3c
	if (!ctx.cr6.gt) goto loc_82291A3C;
loc_82291AFC:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf. r29,r9,r11
	r29.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x82291b34
	if (!ctx.cr0.gt) goto loc_82291B34;
loc_82291B14:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x82291B24;
	sub_822D5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x82291b14
	if (!ctx.cr0.eq) goto loc_82291B14;
loc_82291B34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8229D5F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,2048
	ctx.r9.s64 = ctx.r9.s64 + 2048;
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f13,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r6,88(r3)
	REX_STORE_U8(ctx.r3.u32 + 88, ctx.r6.u8);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r11,120(r3)
	REX_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E968) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8229a710
	sub_8229A710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229EB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8229EBA0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7240
	ctx.lr = 0x8229EBB8;
	sub_822D7240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8229ebd8
	if (!ctx.cr0.eq) goto loc_8229EBD8;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7240
	ctx.lr = 0x8229EBCC;
	sub_822D7240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// beq 0x8229ebdc
	if (ctx.cr0.eq) goto loc_8229EBDC;
loc_8229EBD8:
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
loc_8229EBDC:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7240
	ctx.lr = 0x8229EBE8;
	sub_822D7240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229ebf8
	if (ctx.cr0.eq) goto loc_8229EBF8;
	// subf r31,r30,r3
	r31.u64 = ctx.r3.u64 - r30.u64;
	// b 0x8229ec18
	goto loc_8229EC18;
loc_8229EBF8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8229EBFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229ebfc
	if (!ctx.cr6.eq) goto loc_8229EBFC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8229EC18:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(r31.u32, 15, ctx.xer);
	// ble cr6,0x8229ec2c
	if (!ctx.cr6.gt) goto loc_8229EC2C;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// li r31,15
	r31.s64 = 15;
	// addi r30,r11,-15
	r30.s64 = ctx.r11.s64 + -15;
loc_8229EC2C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6450
	ctx.lr = 0x8229EC3C;
	sub_822D6450(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// stbx r29,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r29.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x8229ec68
	goto loc_8229EC68;
loc_8229EC54:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x8229EC60;
	sub_822D8D60(ctx, base);
	// stb r3,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r3.u8);
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_8229EC68:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229ec54
	if (!ctx.cr0.eq) goto loc_8229EC54;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r29,8(r28)
	REX_STORE_U64(r28.u32 + 8, r29.u64);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// std r29,0(r28)
	REX_STORE_U64(r28.u32 + 0, r29.u64);
	// b 0x8229eca0
	goto loc_8229ECA0;
loc_8229EC88:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8229eca8
	if (!ctx.cr6.lt) goto loc_8229ECA8;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r8,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8229ECA0:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8229ec88
	if (!ctx.cr0.eq) goto loc_8229EC88;
loc_8229ECA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A29E0) {
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
	// addi r11,r11,22908
	ctx.r11.s64 = ctx.r11.s64 + 22908;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822a2130
	ctx.lr = 0x822A2A0C;
	sub_822A2130(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a2a1c
	if (ctx.cr0.eq) goto loc_822A2A1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822A2A1C;
	sub_822C80A8(ctx, base);
loc_822A2A1C:
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

DEFINE_REX_FUNC(sub_822A3D50) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822ab1c0
	ctx.lr = 0x822A3D70;
	sub_822AB1C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,22968
	ctx.r11.s64 = ctx.r11.s64 + 22968;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// li r3,368
	ctx.r3.s64 = 368;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,292(r31)
	REX_STORE_U32(r31.u32 + 292, r30.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822A3D90;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a3da4
	if (ctx.cr0.eq) goto loc_822A3DA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b23f0
	ctx.lr = 0x822A3DA0;
	sub_822B23F0(ctx, base);
	// b 0x822a3da8
	goto loc_822A3DA8;
loc_822A3DA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822A3DA8:
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822A5E60) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x822A5E90;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f3f40
	ctx.lr = 0x822A5E9C;
	sub_821F3F40(ctx, base);
	// lwz r11,452(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 452);
	// lwz r10,448(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 448);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi. r7,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f11,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// beq 0x822a5f38
	if (ctx.cr0.eq) goto loc_822A5F38;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822A5EC4:
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A5EDC:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfsx f10,r11,r5
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a5edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5EDC;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x822a5f28
	if (!ctx.cr6.lt) goto loc_822A5F28;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_822A5F28:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822a5ec4
	if (ctx.cr6.lt) goto loc_822A5EC4;
loc_822A5F38:
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_822AAC40) {
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
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,23140
	ctx.r11.s64 = ctx.r11.s64 + 23140;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822aac78
	if (ctx.cr6.eq) goto loc_822AAC78;
	// bl 0x822c80a8
	ctx.lr = 0x822AAC70;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
loc_822AAC78:
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

DEFINE_REX_FUNC(sub_822ABDC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822ABDC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822abb70
	ctx.lr = 0x822ABDE8;
	sub_822ABB70(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// lwz r30,31464(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// beq cr6,0x822abe24
	if (ctx.cr6.eq) goto loc_822ABE24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8229ff40
	ctx.lr = 0x822ABE04;
	sub_8229FF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x822a0800
	ctx.lr = 0x822ABE18;
	sub_822A0800(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822abe60
	if (ctx.cr0.eq) goto loc_822ABE60;
loc_822ABE24:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// beq cr6,0x822abe5c
	if (ctx.cr6.eq) goto loc_822ABE5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a0050
	ctx.lr = 0x822ABE38;
	sub_822A0050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x822a0800
	ctx.lr = 0x822ABE4C;
	sub_822A0800(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x822abe60
	if (ctx.cr0.eq) goto loc_822ABE60;
loc_822ABE5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822ABE60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822AE170) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AE178;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// b 0x822ae1ac
	goto loc_822AE1AC;
loc_822AE18C:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ae1a8
	if (ctx.cr6.eq) goto loc_822AE1A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8498
	ctx.lr = 0x822AE1A0;
	sub_822B8498(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822AE1A8;
	sub_822C80A8(ctx, base);
loc_822AE1A8:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE1AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae18c
	if (!ctx.cr6.eq) goto loc_822AE18C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE1CC;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822AEBE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AEBE8;
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
	// ble cr6,0x822aec44
	if (!ctx.cr6.gt) goto loc_822AEC44;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_822AEC08:
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
	// bl 0x822aca98
	ctx.lr = 0x822AEC34;
	sub_822ACA98(ctx, base);
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x822aec08
	if (ctx.cr6.gt) goto loc_822AEC08;
loc_822AEC44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B25A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b25b4
	if (ctx.cr6.eq) goto loc_822B25B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822B25B4:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B2908) {
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
	ctx.lr = 0x822B2910;
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822d6450
	ctx.lr = 0x822B2938;
	sub_822D6450(ctx, base);
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// li r5,259
	ctx.r5.s64 = 259;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d6450
	ctx.lr = 0x822B294C;
	sub_822D6450(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 304);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,304(r31)
	REX_STORE_U8(r31.u32 + 304, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 308);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,305(r31)
	REX_STORE_U8(r31.u32 + 305, ctx.r11.u8);
	// lwz r11,340(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 340);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,328(r31)
	REX_STORE_U8(r31.u32 + 328, ctx.r11.u8);
	// lwz r11,332(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 332);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,344(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 344);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,348(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stw r10,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// lwz r10,352(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 352);
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// bl 0x822b8668
	ctx.lr = 0x822B29C4;
	sub_822B8668(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B29D8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b2a00
	if (ctx.cr0.eq) goto loc_822B2A00;
	// lwz r11,312(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 312);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// lwz r11,316(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 316);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 324);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
loc_822B2A00:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B2A14;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b2a24
	if (ctx.cr0.eq) goto loc_822B2A24;
	// lfs f0,360(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
loc_822B2A24:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B2A38;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b2a48
	if (ctx.cr0.eq) goto loc_822B2A48;
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// stb r11,360(r31)
	REX_STORE_U8(r31.u32 + 360, ctx.r11.u8);
loc_822B2A48:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822b2a78
	if (ctx.cr0.eq) goto loc_822B2A78;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r29,r11,r28
	r29.u64 = r28.u64 - ctx.r11.u64;
loc_822B2A60:
	// bl 0x822d8d60
	ctx.lr = 0x822B2A64;
	sub_822D8D60(ctx, base);
	// stb r3,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r3.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r30.u32);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822b2a60
	if (!ctx.cr0.eq) goto loc_822B2A60;
loc_822B2A78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822b2aa8
	if (ctx.cr6.eq) goto loc_822B2AA8;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822b2aa8
	if (ctx.cr0.eq) goto loc_822B2AA8;
	// subf r29,r30,r27
	r29.u64 = r27.u64 - r30.u64;
loc_822B2A90:
	// bl 0x822d8d60
	ctx.lr = 0x822B2A94;
	sub_822D8D60(ctx, base);
	// stb r3,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r3.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r30.u32);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822b2a90
	if (!ctx.cr0.eq) goto loc_822B2A90;
loc_822B2AA8:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r23,0
	r23.s64 = 0;
	// li r20,2
	r20.s64 = 2;
	// li r24,1
	r24.s64 = 1;
	// stb r23,0(r30)
	REX_STORE_U8(r30.u32 + 0, r23.u8);
	// li r22,1
	r22.s64 = 1;
	// li r21,3
	r21.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b2ad8
	if (ctx.cr6.eq) goto loc_822B2AD8;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r22,r20
	r22.u64 = r20.u64;
	// li r21,6
	r21.s64 = 6;
loc_822B2AD8:
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r9,328(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 328);
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stb r23,544(r1)
	REX_STORE_U8(ctx.r1.u32 + 544, r23.u8);
	// addi r26,r11,180
	r26.s64 = ctx.r11.s64 + 180;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822b3098
	if (ctx.cr0.eq) goto loc_822B3098;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// lwz r30,332(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,39321
	ctx.r11.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,160
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(160));
	// ble cr6,0x822b2b1c
	if (!ctx.cr6.gt) goto loc_822B2B1C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822B2B1C:
	// li r10,-17
	ctx.r10.s64 = -17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822b2b2c
	if (ctx.cr6.gt) goto loc_822B2B2C;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_822B2B2C:
	// bl 0x822c80d0
	ctx.lr = 0x822B2B30;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b2b60
	if (ctx.cr0.eq) goto loc_822B2B60;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x822b2b54
	goto loc_822B2B54;
loc_822B2B48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229d5f8
	ctx.lr = 0x822B2B50;
	sub_8229D5F8(ctx, base);
	// addi r29,r29,160
	r29.s64 = r29.s64 + 160;
loc_822B2B54:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822b2b48
	if (!ctx.cr0.lt) goto loc_822B2B48;
	// b 0x822b2b64
	goto loc_822B2B64;
loc_822B2B60:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822B2B64:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B2B70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2b70
	if (!ctx.cr6.eq) goto loc_822B2B70;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi. r30,r10,0
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822b2bb8
	if (!ctx.cr0.gt) goto loc_822B2BB8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
loc_822B2B9C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// beq cr6,0x822b2bb8
	if (ctx.cr6.eq) goto loc_822B2BB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x822b2b9c
	if (ctx.cr6.lt) goto loc_822B2B9C;
loc_822B2BB8:
	// li r29,1
	r29.s64 = 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x822b2bcc
	if (!ctx.cr6.lt) goto loc_822B2BCC;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
loc_822B2BCC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x822d6450
	ctx.lr = 0x822B2BDC;
	sub_822D6450(ctx, base);
	// addi r11,r1,816
	ctx.r11.s64 = ctx.r1.s64 + 816;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r10,23240
	ctx.r4.s64 = ctx.r10.s64 + 23240;
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stbx r23,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r23.u8);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x822d55f8
	ctx.lr = 0x822B2BFC;
	sub_822D55F8(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822b2e08
	if (ctx.cr6.eq) goto loc_822B2E08;
	// lwz r27,340(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822b3044
	if (ctx.cr6.gt) goto loc_822B3044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r26,r11,23232
	r26.s64 = ctx.r11.s64 + 23232;
loc_822B2C20:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x822B2C30;
	sub_822D55F8(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b2d98
	if (!ctx.cr6.gt) goto loc_822B2D98;
loc_822B2C40:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c8360
	ctx.lr = 0x822B2C4C;
	sub_822C8360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x822b2530
	ctx.lr = 0x822B2C58;
	sub_822B2530(ctx, base);
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d9950
	ctx.lr = 0x822B2C64;
	sub_822D9950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822b2c80
	if (ctx.cr0.eq) goto loc_822B2C80;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b2c40
	if (ctx.cr6.lt) goto loc_822B2C40;
	// b 0x822b2d98
	goto loc_822B2D98;
loc_822B2C80:
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// b 0x822b2ca0
	goto loc_822B2CA0;
loc_822B2C8C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822B2C98;
	sub_822D8D60(ctx, base);
	// stb r3,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r3.u8);
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
loc_822B2CA0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822b2c8c
	if (!ctx.cr0.eq) goto loc_822B2C8C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_822B2CB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2cb0
	if (!ctx.cr6.eq) goto loc_822B2CB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B2CC4:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b2cc4
	if (!ctx.cr6.eq) goto loc_822B2CC4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c83b8
	ctx.lr = 0x822B2CE8;
	sub_822C83B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8229ef90
	ctx.lr = 0x822B2D00;
	sub_8229EF90(ctx, base);
	// lbz r10,305(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 305);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 304);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 & r20.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// and r10,r9,r20
	ctx.r10.u64 = ctx.r9.u64 & r20.u64;
	// stw r23,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r23.u32);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r27,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8229eb38
	ctx.lr = 0x822B2D4C;
	sub_8229EB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// bgt 0x822b2d5c
	if (ctx.cr0.gt) goto loc_822B2D5C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822B2D5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r24,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lbz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 360);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
loc_822B2D98:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b2df0
	if (!ctx.cr6.eq) goto loc_822B2DF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B2DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8229e878
	ctx.lr = 0x822B2DF0;
	sub_8229E878(ctx, base);
loc_822B2DF0:
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,160
	r30.s64 = r30.s64 + 160;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822b2c20
	if (!ctx.cr6.gt) goto loc_822B2C20;
	// b 0x822b3044
	goto loc_822B3044;
loc_822B2E08:
	// lwz r28,340(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822b3044
	if (ctx.cr6.gt) goto loc_822B3044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r27,r11,23232
	r27.s64 = ctx.r11.s64 + 23232;
loc_822B2E20:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x822B2E30;
	sub_822D55F8(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_822B2E38:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2e38
	if (!ctx.cr6.eq) goto loc_822B2E38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B2E4C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b2e4c
	if (!ctx.cr6.eq) goto loc_822B2E4C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stb r23,544(r1)
	REX_STORE_U8(ctx.r1.u32 + 544, r23.u8);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
loc_822B2E70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2e70
	if (!ctx.cr6.eq) goto loc_822B2E70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B2E84:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b2e84
	if (!ctx.cr6.eq) goto loc_822B2E84;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
loc_822B2EA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2ea4
	if (!ctx.cr6.eq) goto loc_822B2EA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B2EB8:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b2eb8
	if (!ctx.cr6.eq) goto loc_822B2EB8;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x822c8970
	ctx.lr = 0x822B2ED8;
	sub_822C8970(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x822c8be8
	ctx.lr = 0x822B2EE8;
	sub_822C8BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b2fdc
	if (ctx.cr0.eq) goto loc_822B2FDC;
	// lwz r3,504(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822B2EFC;
	sub_822C80D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x822c8e28
	ctx.lr = 0x822B2F10;
	sub_822C8E28(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x822c8a00
	ctx.lr = 0x822B2F18;
	sub_822C8A00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822B2F30;
	sub_8229EF90(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822b2f40
	if (ctx.cr6.eq) goto loc_822B2F40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B2F40;
	sub_822C80A8(ctx, base);
loc_822B2F40:
	// lbz r10,305(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 305);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 304);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 & r20.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// and r10,r9,r20
	ctx.r10.u64 = ctx.r9.u64 & r20.u64;
	// stw r23,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r23.u32);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r28,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8229eb38
	ctx.lr = 0x822B2F8C;
	sub_8229EB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// bgt 0x822b2f9c
	if (ctx.cr0.gt) goto loc_822B2F9C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822B2F9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r24,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lbz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 360);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// b 0x822b3028
	goto loc_822B3028;
loc_822B2FDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B3008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8229e878
	ctx.lr = 0x822B3028;
	sub_8229E878(ctx, base);
loc_822B3028:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x822c8be0
	ctx.lr = 0x822B3030;
	sub_822C8BE0(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,160
	r30.s64 = r30.s64 + 160;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822b2e20
	if (!ctx.cr6.gt) goto loc_822B2E20;
loc_822B3044:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b3440
	if (!ctx.cr6.gt) goto loc_822B3440;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 336);
loc_822B3060:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 144);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822b3088
	if (ctx.cr6.eq) goto loc_822B3088;
	// lwz r7,332(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822b3060
	if (ctx.cr6.lt) goto loc_822B3060;
	// b 0x822b3440
	goto loc_822B3440;
loc_822B3088:
	// mulli r11,r9,160
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(160));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822b3440
	goto loc_822B3440;
loc_822B3098:
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x822B30A0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b30b4
	if (ctx.cr0.eq) goto loc_822B30B4;
	// bl 0x8229d5f8
	ctx.lr = 0x822B30AC;
	sub_8229D5F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b30b8
	goto loc_822B30B8;
loc_822B30B4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822B30B8:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229eb98
	ctx.lr = 0x822B30C8;
	sub_8229EB98(ctx, base);
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8229eea0
	ctx.lr = 0x822B30D8;
	sub_8229EEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822b3394
	if (!ctx.cr0.eq) goto loc_822B3394;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822b3238
	if (ctx.cr6.eq) goto loc_822B3238;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
loc_822B30FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822b30fc
	if (!ctx.cr0.eq) goto loc_822B30FC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822b314c
	if (ctx.cr6.eq) goto loc_822B314C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_822B3120:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3120
	if (!ctx.cr6.eq) goto loc_822B3120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B3134:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b3134
	if (!ctx.cr6.eq) goto loc_822B3134;
loc_822B314C:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b31e4
	if (!ctx.cr6.gt) goto loc_822B31E4;
loc_822B315C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c8360
	ctx.lr = 0x822B3168;
	sub_822C8360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x822b2530
	ctx.lr = 0x822B3174;
	sub_822B2530(ctx, base);
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d9950
	ctx.lr = 0x822B3180;
	sub_822D9950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822b319c
	if (ctx.cr0.eq) goto loc_822B319C;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b315c
	if (ctx.cr6.lt) goto loc_822B315C;
	// b 0x822b31e4
	goto loc_822B31E4;
loc_822B319C:
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// b 0x822b31bc
	goto loc_822B31BC;
loc_822B31A8:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822B31B4;
	sub_822D8D60(ctx, base);
	// stb r3,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r3.u8);
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
loc_822B31BC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822b31a8
	if (!ctx.cr0.eq) goto loc_822B31A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c83b8
	ctx.lr = 0x822B31D0;
	sub_822C83B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8229ef90
	ctx.lr = 0x822B31E4;
	sub_8229EF90(ctx, base);
loc_822B31E4:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b3394
	if (!ctx.cr6.eq) goto loc_822B3394;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B3218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229e878
	ctx.lr = 0x822B3234;
	sub_8229E878(ctx, base);
	// b 0x822b3394
	goto loc_822B3394;
loc_822B3238:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,23232
	ctx.r10.s64 = ctx.r10.s64 + 23232;
loc_822B3244:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3244
	if (!ctx.cr6.eq) goto loc_822B3244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B3258:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b3258
	if (!ctx.cr6.eq) goto loc_822B3258;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
loc_822B3278:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3278
	if (!ctx.cr6.eq) goto loc_822B3278;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B328C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b328c
	if (!ctx.cr6.eq) goto loc_822B328C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
loc_822B32AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b32ac
	if (!ctx.cr6.eq) goto loc_822B32AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B32C0:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b32c0
	if (!ctx.cr6.eq) goto loc_822B32C0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822c8970
	ctx.lr = 0x822B32E0;
	sub_822C8970(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822c8be8
	ctx.lr = 0x822B32F0;
	sub_822C8BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3348
	if (ctx.cr0.eq) goto loc_822B3348;
	// lwz r3,424(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822B3304;
	sub_822C80D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822c8e28
	ctx.lr = 0x822B3318;
	sub_822C8E28(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822c8a00
	ctx.lr = 0x822B3320;
	sub_822C8A00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822B3334;
	sub_8229EF90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822b338c
	if (ctx.cr6.eq) goto loc_822B338C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B3344;
	sub_822C80A8(ctx, base);
	// b 0x822b338c
	goto loc_822B338C;
loc_822B3348:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B3370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229e878
	ctx.lr = 0x822B338C;
	sub_8229E878(ctx, base);
loc_822B338C:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822c8be0
	ctx.lr = 0x822B3394;
	sub_822C8BE0(ctx, base);
loc_822B3394:
	// lbz r11,305(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 305);
	// lbz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 304);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & r20.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r23,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, r23.u32);
	// stw r11,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// and r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 & r20.u64;
	// stw r11,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822b33dc
	if (ctx.cr6.lt) goto loc_822B33DC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x822b3410
	goto loc_822B3410;
loc_822B33DC:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lbz r10,31559(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 31559);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822b3410
	if (ctx.cr0.eq) goto loc_822B3410;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B33FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_822B3410:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r20,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, r20.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r10,95(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 360);
	// stb r11,89(r10)
	REX_STORE_U8(ctx.r10.u32 + 89, ctx.r11.u8);
loc_822B3440:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(__savevmx_120) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_127) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_17) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_98) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DB9D0) {
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
	// bne cr6,0x822dba04
	if (!ctx.cr6.eq) goto loc_822DBA04;
	// bl 0x822db6c0
	ctx.lr = 0x822DB9F0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DB9FC;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822dba14
	goto loc_822DBA14;
loc_822DBA04:
	// bl 0x8220fda0
	ctx.lr = 0x822DBA08;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8220d670
	ctx.lr = 0x822DBA14;
	sub_8220D670(ctx, base);
loc_822DBA14:
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

DEFINE_REX_FUNC(sub_822DCB08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r3,r11,-1136
	ctx.r3.s64 = ctx.r11.s64 + -1136;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCD40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-1136
	ctx.r11.s64 = ctx.r11.s64 + -1136;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dcd78
	if (ctx.cr6.lt) goto loc_822DCD78;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822dcd78
	if (ctx.cr6.gt) goto loc_822DCD78;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x822dbb00
	sub_822DBB00(ctx, base);
	return;
loc_822DCD78:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x824d437c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E00B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822E00B8;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e00dc
	if (ctx.cr0.eq) goto loc_822E00DC;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x822e00e4
	goto loc_822E00E4;
loc_822E00DC:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_822E00E4:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dfe20
	ctx.lr = 0x822E00FC;
	sub_822DFE20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822e0164
	if (ctx.cr6.eq) goto loc_822E0164;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822e01b4
	if (!ctx.cr6.eq) goto loc_822E01B4;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// blt cr6,0x822e014c
	if (ctx.cr6.lt) goto loc_822E014C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_822E014C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E0160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e01b4
	goto loc_822E01B4;
loc_822E0164:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x822e01a4
	if (ctx.cr6.lt) goto loc_822E01A4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
loc_822E01A4:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E01B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E01B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822e01c8
	goto loc_822E01C8;
loc_822E01C8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822E83F8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822e8434
	if (ctx.cr6.eq) goto loc_822E8434;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822e8424
	if (ctx.cr6.eq) goto loc_822E8424;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x822e8424
	if (!ctx.cr6.eq) goto loc_822E8424;
	// stw r5,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// stw r6,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E8424:
	// stw r5,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// blr 
	return;
loc_822E8434:
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E93A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// bne cr6,0x822e93c4
	if (!ctx.cr6.eq) goto loc_822E93C4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822E93C4:
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e9458
	if (!ctx.cr6.eq) goto loc_822E9458;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822e9594
	if (ctx.cr6.eq) goto loc_822E9594;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E93E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,100(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822E940C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e9448
	if (ctx.cr6.eq) goto loc_822E9448;
loc_822E9418:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823cd320
	ctx.lr = 0x822E9420;
	sub_823CD320(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E943C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e9418
	if (!ctx.cr6.eq) goto loc_822E9418;
loc_822E9448:
	// stw r29,640(r31)
	REX_STORE_U32(r31.u32 + 640, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822E9458:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x822e9538
	if (ctx.cr6.eq) goto loc_822E9538;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x822e9510
	if (ctx.cr6.eq) goto loc_822E9510;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x822e9538
	if (!ctx.cr6.eq) goto loc_822E9538;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822E949C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,100(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E94C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e958c
	if (ctx.cr6.eq) goto loc_822E958C;
loc_822E94CC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823cd320
	ctx.lr = 0x822E94D4;
	sub_823CD320(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E94F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e94cc
	if (!ctx.cr6.eq) goto loc_822E94CC;
	// stw r29,640(r31)
	REX_STORE_U32(r31.u32 + 640, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,648(r31)
	REX_STORE_U32(r31.u32 + 648, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822E9510:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,648(r31)
	REX_STORE_U32(r31.u32 + 648, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822E9538:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e958c
	if (ctx.cr6.eq) goto loc_822E958C;
loc_822E955C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823cd320
	ctx.lr = 0x822E9564;
	sub_823CD320(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e955c
	if (!ctx.cr6.eq) goto loc_822E955C;
loc_822E958C:
	// stw r29,640(r31)
	REX_STORE_U32(r31.u32 + 640, r29.u32);
	// stw r29,648(r31)
	REX_STORE_U32(r31.u32 + 648, r29.u32);
loc_822E9594:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822F17E0) {
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
	ctx.lr = 0x822F17E8;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x822F1810;
	sub_822D5870(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x822d5870
	ctx.lr = 0x822F1824;
	sub_822D5870(ctx, base);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
	// lwz r11,528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r23,1
	r23.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lhz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822f18d0
	if (!ctx.cr6.gt) goto loc_822F18D0;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_822F187C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f189c
	if (!ctx.cr6.eq) goto loc_822F189C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r23.u32);
	// b 0x822f18b8
	goto loc_822F18B8;
loc_822F189C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x822f18b4
	if (!ctx.cr6.eq) goto loc_822F18B4;
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x822f18b8
	goto loc_822F18B8;
loc_822F18B4:
	// stwx r24,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r24.u32);
loc_822F18B8:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822f187c
	if (ctx.cr6.lt) goto loc_822F187C;
loc_822F18D0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_822F18E0:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822f1920
	if (ctx.cr6.eq) goto loc_822F1920;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f1908
	if (!ctx.cr6.eq) goto loc_822F1908;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
loc_822F1908:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822f1918
	if (!ctx.cr6.eq) goto loc_822F1918;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x822f1b98
	if (ctx.cr6.eq) goto loc_822F1B98;
loc_822F1918:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_822F1920:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822f18e0
	if (ctx.cr6.lt) goto loc_822F18E0;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_822F1948:
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x822f1b40
	if (!ctx.cr6.eq) goto loc_822F1B40;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x822F1968;
	sub_822F9900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1b88
	if (ctx.cr6.lt) goto loc_822F1B88;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// bge cr6,0x822f1a90
	if (!ctx.cr6.lt) goto loc_822F1A90;
loc_822F1984:
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r27.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x822f1a80
	if (!ctx.cr6.eq) goto loc_822F1A80;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x822F19A8;
	sub_822F9900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1b88
	if (ctx.cr6.lt) goto loc_822F1B88;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f1a80
	if (!ctx.cr6.eq) goto loc_822F1A80;
	// addi r11,r26,3
	ctx.r11.s64 = r26.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822f19e8
	if (ctx.cr6.eq) goto loc_822F19E8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822f1a2c
	if (!ctx.cr6.eq) goto loc_822F1A2C;
loc_822F19E8:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822f1a2c
	if (!ctx.cr6.eq) goto loc_822F1A2C;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822f1a2c
	if (!ctx.cr6.eq) goto loc_822F1A2C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f1aac
	if (ctx.cr6.eq) goto loc_822F1AAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f1aac
	if (ctx.cr6.eq) goto loc_822F1AAC;
loc_822F1A2C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f1a80
	if (!ctx.cr6.eq) goto loc_822F1A80;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822f1a50
	if (ctx.cr6.eq) goto loc_822F1A50;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822f1a80
	if (!ctx.cr6.eq) goto loc_822F1A80;
loc_822F1A50:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f1a6c
	if (ctx.cr6.eq) goto loc_822F1A6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822f1a80
	if (!ctx.cr6.eq) goto loc_822F1A80;
loc_822F1A6C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f1ae0
	if (ctx.cr6.eq) goto loc_822F1AE0;
loc_822F1A80:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// blt cr6,0x822f1984
	if (ctx.cr6.lt) goto loc_822F1984;
loc_822F1A90:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f1b14
	if (!ctx.cr6.eq) goto loc_822F1B14;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x822f1b24
	goto loc_822F1B24;
loc_822F1AAC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x822f0fa8
	ctx.lr = 0x822F1ACC;
	sub_822F0FA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1b88
	if (ctx.cr6.lt) goto loc_822F1B88;
	// stbx r24,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, r24.u8);
	// b 0x822f1b40
	goto loc_822F1B40;
loc_822F1AE0:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x822f0fa8
	ctx.lr = 0x822F1B00;
	sub_822F0FA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1b88
	if (ctx.cr6.lt) goto loc_822F1B88;
	// stbx r24,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, r24.u8);
	// b 0x822f1b40
	goto loc_822F1B40;
loc_822F1B14:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822F1B24:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f0ec0
	ctx.lr = 0x822F1B34;
	sub_822F0EC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1b88
	if (ctx.cr6.lt) goto loc_822F1B88;
loc_822F1B40:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// blt cr6,0x822f1948
	if (ctx.cr6.lt) goto loc_822F1948;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F1B64:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r28
	REX_STORE_U32(ctx.r5.u32 + r28.u32, ctx.r7.u32);
	// blt cr6,0x822f1b64
	if (ctx.cr6.lt) goto loc_822F1B64;
loc_822F1B88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f0588
	ctx.lr = 0x822F1B90;
	sub_822F0588(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x822d4ec4
	return;
loc_822F1B98:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82305D90) {
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
	ctx.lr = 0x82305D98;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// beq cr6,0x823066e0
	if (ctx.cr6.eq) goto loc_823066E0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823066e0
	if (ctx.cr6.eq) goto loc_823066E0;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r19,r24
	r19.u64 = r24.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823061b8
	if (ctx.cr6.gt) goto loc_823061B8;
	// li r20,1
	r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82305e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82305E80;
	// bdzf 4*cr6+eq,0x82305e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82305E88;
	// bdzf 4*cr6+eq,0x82305e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82305E90;
	// bdzf 4*cr6+eq,0x823061b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823061B8;
	// bdzf 4*cr6+eq,0x82305e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82305E9C;
	// bdzf 4*cr6+eq,0x82305eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82305EAC;
	// bne cr6,0x82305ebc
	if (!ctx.cr6.eq) goto loc_82305EBC;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82305E10:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ffa90
	ctx.lr = 0x82305E24;
	sub_822FFA90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff7c0
	ctx.lr = 0x82305E38;
	sub_822FF7C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// bl 0x82315cb0
	ctx.lr = 0x82305E48;
	sub_82315CB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,21792
	ctx.r9.s64 = ctx.r11.s64 + 21792;
	// addi r8,r10,-432
	ctx.r8.s64 = ctx.r10.s64 + -432;
	// stw r9,484(r3)
	REX_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r8,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r8.u32);
loc_82305E70:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82305ed0
	if (ctx.cr6.eq) goto loc_82305ED0;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// b 0x82305ed4
	goto loc_82305ED4;
loc_82305E80:
	// li r30,2
	r30.s64 = 2;
	// b 0x82305e10
	goto loc_82305E10;
loc_82305E88:
	// li r30,3
	r30.s64 = 3;
	// b 0x82305e10
	goto loc_82305E10;
loc_82305E90:
	// li r30,3
	r30.s64 = 3;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x82305e10
	goto loc_82305E10;
loc_82305E9C:
	// li r20,1
	r20.s64 = 1;
	// li r30,2
	r30.s64 = 2;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x82305e70
	goto loc_82305E70;
loc_82305EAC:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x82305e70
	goto loc_82305E70;
loc_82305EBC:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x82305e70
	goto loc_82305E70;
loc_82305ED0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82305ED4:
	// stw r11,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,708(r31)
	REX_STORE_U32(r31.u32 + 708, ctx.r11.u32);
	// lhz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82325200
	ctx.lr = 0x82305EF4;
	sub_82325200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823061b8
	if (!ctx.cr6.gt) goto loc_823061B8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r11,r31,476
	ctx.r11.s64 = r31.s64 + 476;
	// beq cr6,0x82305f2c
	if (ctx.cr6.eq) goto loc_82305F2C;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82305F1C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82305f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82305F1C;
	// b 0x82305f44
	goto loc_82305F44;
loc_82305F2C:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82305F3C:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82305f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82305F3C;
loc_82305F44:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,480(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 480);
	// rlwinm r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82305f64
	if (ctx.cr6.eq) goto loc_82305F64;
	// stw r20,412(r31)
	REX_STORE_U32(r31.u32 + 412, r20.u32);
loc_82305F64:
	// lhz r8,500(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 500);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82305f84
	if (ctx.cr6.eq) goto loc_82305F84;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,128
	r22.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_82305F84:
	// lhz r10,14(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 14);
	// lwz r9,16(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82305fa4
	if (ctx.cr6.gt) goto loc_82305FA4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82305FA4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r29,20(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r17,0(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lhz r16,22(r25)
	r16.u64 = REX_LOAD_U16(r25.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r15,20(r25)
	r15.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lhz r26,12(r25)
	r26.u64 = REX_LOAD_U16(r25.u32 + 12);
	// lwz r30,8(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r14,16(r25)
	r14.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lhz r8,2(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 2);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// sth r16,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, r16.u16);
	// sth r15,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r15.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bl 0x823165d8
	ctx.lr = 0x82305FF8;
	sub_823165D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff460
	ctx.lr = 0x8230600C;
	sub_822FF460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x823061b8
	if (ctx.cr6.gt) goto loc_823061B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,110(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x82306034
	if (ctx.cr6.gt) goto loc_82306034;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r10,r11,-31048
	ctx.r10.s64 = ctx.r11.s64 + -31048;
	// b 0x8230603c
	goto loc_8230603C;
loc_82306034:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r10,r11,-29752
	ctx.r10.s64 = ctx.r11.s64 + -29752;
loc_8230603C:
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mulli r3,r11,1776
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x823143c0
	ctx.lr = 0x8230604C;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8230606c
	if (!ctx.cr6.eq) goto loc_8230606C;
loc_82306058:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_8230606C:
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,1776
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x822d5870
	ctx.lr = 0x8230607C;
	sub_822D5870(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82314a48
	ctx.lr = 0x82306088;
	sub_82314A48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822ff8d0
	ctx.lr = 0x823060A0;
	sub_822FF8D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82314ff0
	ctx.lr = 0x823060B8;
	sub_82314FF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,320(r28)
	REX_STORE_U32(r28.u32 + 320, ctx.r11.u32);
	// bl 0x82303c60
	ctx.lr = 0x823060D4;
	sub_82303C60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// lwz r11,588(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82306108
	if (ctx.cr6.eq) goto loc_82306108;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// stw r24,516(r31)
	REX_STORE_U32(r31.u32 + 516, r24.u32);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r9,r11,20952
	ctx.r9.s64 = ctx.r11.s64 + 20952;
	// addi r8,r10,20696
	ctx.r8.s64 = ctx.r10.s64 + 20696;
	// stw r9,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r9.u32);
	// stw r8,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r8.u32);
loc_82306108:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
	// stw r24,352(r31)
	REX_STORE_U32(r31.u32 + 352, r24.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// lwz r7,360(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8230613c
	if (!ctx.cr6.eq) goto loc_8230613C;
	// lwz r10,104(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230614c
	if (ctx.cr6.eq) goto loc_8230614C;
loc_8230613C:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823061b8
	if (!ctx.cr6.gt) goto loc_823061B8;
	// stw r20,352(r31)
	REX_STORE_U32(r31.u32 + 352, r20.u32);
loc_8230614C:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82306270
	if (!ctx.cr6.eq) goto loc_82306270;
	// rlwinm r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306168
	if (ctx.cr6.eq) goto loc_82306168;
	// stw r20,420(r31)
	REX_STORE_U32(r31.u32 + 420, r20.u32);
loc_82306168:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82306188
	if (!ctx.cr6.eq) goto loc_82306188;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82306188
	if (!ctx.cr6.eq) goto loc_82306188;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x8230618c
	if (ctx.cr6.gt) goto loc_8230618C;
loc_82306188:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
loc_8230618C:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823061c8
	if (!ctx.cr6.eq) goto loc_823061C8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x82304eb0
	ctx.lr = 0x823061B0;
	sub_82304EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82306270
	if (ctx.cr6.eq) goto loc_82306270;
loc_823061B8:
	// lis r29,-32764
	r29.s64 = -2147221504;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_823061C8:
	// stw r24,424(r31)
	REX_STORE_U32(r31.u32 + 424, r24.u32);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x823061e4
	if (!ctx.cr6.eq) goto loc_823061E4;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x8230620c
	if (ctx.cr6.eq) goto loc_8230620C;
loc_823061E4:
	// li r8,63
	ctx.r8.s64 = 63;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82304eb0
	ctx.lr = 0x823061FC;
	sub_82304EB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// stw r20,424(r31)
	REX_STORE_U32(r31.u32 + 424, r20.u32);
loc_8230620C:
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x823143c0
	ctx.lr = 0x82306214;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r3.u32);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// bl 0x824638e0
	ctx.lr = 0x82306224;
	sub_824638E0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,452(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 452);
	// lhz r11,110(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 110);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r11,r20,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82316738
	ctx.lr = 0x82306264;
	sub_82316738(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
loc_82306270:
	// stw r24,448(r31)
	REX_STORE_U32(r31.u32 + 448, r24.u32);
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// stw r24,464(r31)
	REX_STORE_U32(r31.u32 + 464, r24.u32);
	// stw r24,460(r31)
	REX_STORE_U32(r31.u32 + 460, r24.u32);
	// stw r24,440(r31)
	REX_STORE_U32(r31.u32 + 440, r24.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823062e4
	if (!ctx.cr6.gt) goto loc_823062E4;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823062A0;
	sub_823143C0(ctx, base);
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823062BC;
	sub_823143C0(ctx, base);
	// stw r3,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823062D8;
	sub_823143C0(ctx, base);
	// stw r3,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
loc_823062E4:
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823062f8
	if (ctx.cr6.gt) goto loc_823062F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823062F8:
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82306310
	if (ctx.cr6.eq) goto loc_82306310;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82306310
	if (ctx.cr6.gt) goto loc_82306310;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82306310:
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143c0
	ctx.lr = 0x8230631C;
	sub_823143C0(ctx, base);
	// stw r3,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// stw r3,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143c0
	ctx.lr = 0x82306334;
	sub_823143C0(ctx, base);
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// stw r3,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445988
	ctx.lr = 0x82306350;
	sub_82445988(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r24,316(r31)
	REX_STORE_U32(r31.u32 + 316, r24.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r24,320(r31)
	REX_STORE_U32(r31.u32 + 320, r24.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82306380
	if (!ctx.cr6.eq) goto loc_82306380;
	// stw r20,316(r31)
	REX_STORE_U32(r31.u32 + 316, r20.u32);
	// b 0x8230639c
	goto loc_8230639C;
loc_82306380:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8230639c
	if (ctx.cr6.eq) goto loc_8230639C;
	// stw r20,324(r31)
	REX_STORE_U32(r31.u32 + 324, r20.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230639c
	if (!ctx.cr6.lt) goto loc_8230639C;
	// stw r20,320(r31)
	REX_STORE_U32(r31.u32 + 320, r20.u32);
loc_8230639C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,452(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 452);
	// bl 0x82300d00
	ctx.lr = 0x823063A8;
	sub_82300D00(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// bge cr6,0x823061b8
	if (!ctx.cr6.lt) goto loc_823061B8;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x823061b8
	if (!ctx.cr6.lt) goto loc_823061B8;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823063dc
	if (!ctx.cr6.eq) goto loc_823063DC;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230643c
	if (ctx.cr6.eq) goto loc_8230643C;
loc_823063DC:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823063E8;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82306424
	if (!ctx.cr6.gt) goto loc_82306424;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82306408:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82306408
	if (ctx.cr6.lt) goto loc_82306408;
loc_82306424:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82306430;
	sub_823143C0(ctx, base);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
loc_8230643C:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// rlwinm r10,r22,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x80;
	// addi r9,r11,22304
	ctx.r9.s64 = ctx.r11.s64 + 22304;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,492(r28)
	REX_STORE_U32(r28.u32 + 492, ctx.r9.u32);
	// stw r24,472(r31)
	REX_STORE_U32(r31.u32 + 472, r24.u32);
	// beq cr6,0x82306474
	if (ctx.cr6.eq) goto loc_82306474;
	// lhz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82305308
	ctx.lr = 0x82306468;
	sub_82305308(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
loc_82306474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445a00
	ctx.lr = 0x8230647C;
	sub_82445A00(ctx, base);
	// lhz r11,2(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82306494
	if (!ctx.cr6.eq) goto loc_82306494;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r10,r11,12184
	ctx.r10.s64 = ctx.r11.s64 + 12184;
	// b 0x8230649c
	goto loc_8230649C;
loc_82306494:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r10,r11,12304
	ctx.r10.s64 = ctx.r11.s64 + 12304;
loc_8230649C:
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82319550
	ctx.lr = 0x823064B0;
	sub_82319550(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x823064c8
	if (ctx.cr6.eq) goto loc_823064C8;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
loc_823064C8:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82306500
	if (!ctx.cr6.eq) goto loc_82306500;
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,-15120
	ctx.r8.s64 = ctx.r10.s64 + -15120;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r9,3360
	ctx.r6.s64 = ctx.r9.s64 + 3360;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r5,r7,4312
	ctx.r5.s64 = ctx.r7.s64 + 4312;
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r6,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// b 0x82306554
	goto loc_82306554;
loc_82306500:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82306524
	if (!ctx.cr6.eq) goto loc_82306524;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r10,-1976
	ctx.r8.s64 = ctx.r10.s64 + -1976;
	// addi r7,r9,16640
	ctx.r7.s64 = ctx.r9.s64 + 16640;
	// addi r5,r6,17968
	ctx.r5.s64 = ctx.r6.s64 + 17968;
	// b 0x82306544
	goto loc_82306544;
loc_82306524:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823066e0
	if (!ctx.cr6.eq) goto loc_823066E0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r10,-13376
	ctx.r8.s64 = ctx.r10.s64 + -13376;
	// addi r7,r9,7008
	ctx.r7.s64 = ctx.r9.s64 + 7008;
	// addi r5,r6,9680
	ctx.r5.s64 = ctx.r6.s64 + 9680;
loc_82306544:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
loc_82306554:
	// lwz r3,320(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r10,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r10.u32);
	// beq cr6,0x8230657c
	if (ctx.cr6.eq) goto loc_8230657C;
	// bl 0x82246ca8
	ctx.lr = 0x82306578;
	sub_82246CA8(ctx, base);
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
loc_8230657C:
	// stw r24,116(r31)
	REX_STORE_U32(r31.u32 + 116, r24.u32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,34(r28)
	ctx.r4.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x82317a38
	ctx.lr = 0x82306590;
	sub_82317A38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823066e8
	if (ctx.cr6.lt) goto loc_823066E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230661c
	if (ctx.cr6.eq) goto loc_8230661C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823065B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r24,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r24.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x823065D0;
	sub_823143C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,148(r8)
	REX_STORE_U32(ctx.r8.u32 + 148, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,148(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82306604;
	sub_822D5870(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// lhz r8,34(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823065b4
	if (ctx.cr6.lt) goto loc_823065B4;
loc_8230661C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r24,572(r28)
	REX_STORE_U32(r28.u32 + 572, r24.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,576(r28)
	REX_STORE_U32(r28.u32 + 576, ctx.r11.u32);
	// blt cr6,0x82306644
	if (ctx.cr6.lt) goto loc_82306644;
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230664c
	if (!ctx.cr6.eq) goto loc_8230664C;
loc_82306644:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82306654
	if (ctx.cr6.eq) goto loc_82306654;
loc_8230664C:
	// stw r20,176(r28)
	REX_STORE_U32(r28.u32 + 176, r20.u32);
	// b 0x82306658
	goto loc_82306658;
loc_82306654:
	// stw r24,176(r28)
	REX_STORE_U32(r28.u32 + 176, r24.u32);
loc_82306658:
	// stw r24,124(r28)
	REX_STORE_U32(r28.u32 + 124, r24.u32);
	// stw r20,732(r28)
	REX_STORE_U32(r28.u32 + 732, r20.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823143c0
	ctx.lr = 0x8230666C;
	sub_823143C0(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306058
	if (ctx.cr6.eq) goto loc_82306058;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x82306688;
	sub_822D5870(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229a710
	ctx.lr = 0x82306698;
	sub_8229A710(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,696(r31)
	REX_STORE_U32(r31.u32 + 696, r20.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r24,300(r31)
	REX_STORE_U32(r31.u32 + 300, r24.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,156(r31)
	REX_STORE_U32(r31.u32 + 156, r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r24,154(r31)
	REX_STORE_U16(r31.u32 + 154, r24.u16);
	// std r11,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,176(r31)
	REX_STORE_U64(r31.u32 + 176, ctx.r11.u64);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_823066E0:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
loc_823066E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82331710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82331718;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22288);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331738
	if (ctx.cr6.eq) goto loc_82331738;
	// bl 0x82367048
	ctx.lr = 0x82331738;
	sub_82367048(ctx, base);
loc_82331738:
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233176c
	if (ctx.cr6.eq) goto loc_8233176C;
	// lwz r11,3760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// stw r10,604(r11)
	REX_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
	// lwz r9,3760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r8,608(r9)
	REX_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lwz r7,3760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r6,21676(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21676);
	// stw r6,612(r7)
	REX_STORE_U32(ctx.r7.u32 + 612, ctx.r6.u32);
	// b 0x8233178c
	goto loc_8233178C;
loc_8233176C:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// stw r10,604(r11)
	REX_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
	// lwz r9,3744(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r8,608(r9)
	REX_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lwz r7,21676(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21676);
	// lwz r6,3744(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// stw r7,612(r6)
	REX_STORE_U32(ctx.r6.u32 + 612, ctx.r7.u32);
loc_8233178C:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823317bc
	if (!ctx.cr6.gt) goto loc_823317BC;
	// lwz r11,3444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823317dc
	if (!ctx.cr6.eq) goto loc_823317DC;
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823317dc
	if (!ctx.cr6.eq) goto loc_823317DC;
	// lwz r11,3492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823317dc
	if (!ctx.cr6.eq) goto loc_823317DC;
loc_823317BC:
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823317d4
	if (ctx.cr6.eq) goto loc_823317D4;
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// b 0x823317d8
	goto loc_823317D8;
loc_823317D4:
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
loc_823317D8:
	// bl 0x82353018
	ctx.lr = 0x823317DC;
	sub_82353018(ctx, base);
loc_823317DC:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82331824
	if (ctx.cr6.eq) goto loc_82331824;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82331824
	if (ctx.cr6.eq) goto loc_82331824;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8233181c
	if (!ctx.cr6.gt) goto loc_8233181C;
	// lwz r11,3440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233181c
	if (!ctx.cr6.eq) goto loc_8233181C;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233181c
	if (!ctx.cr6.eq) goto loc_8233181C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8233181C:
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// stw r11,3440(r31)
	REX_STORE_U32(r31.u32 + 3440, ctx.r11.u32);
loc_82331824:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82331834
	if (ctx.cr6.eq) goto loc_82331834;
	// stw r28,21888(r31)
	REX_STORE_U32(r31.u32 + 21888, r28.u32);
loc_82331834:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// ld r9,3632(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// bne cr6,0x82331884
	if (!ctx.cr6.eq) goto loc_82331884;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233185c
	if (ctx.cr6.eq) goto loc_8233185C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82331884
	if (!ctx.cr6.eq) goto loc_82331884;
loc_8233185C:
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233187c
	if (ctx.cr6.eq) goto loc_8233187C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82342af8
	ctx.lr = 0x82331870;
	sub_82342AF8(ctx, base);
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// stw r30,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r30.u32);
	// b 0x82331988
	goto loc_82331988;
loc_8233187C:
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// b 0x82331988
	goto loc_82331988;
loc_82331884:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// lwz r9,3444(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3444);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823318b0
	if (!ctx.cr6.eq) goto loc_823318B0;
	// lwz r9,3420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823318b0
	if (!ctx.cr6.eq) goto loc_823318B0;
	// lwz r9,3492(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823318f0
	if (ctx.cr6.eq) goto loc_823318F0;
loc_823318B0:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82331984
	if (!ctx.cr6.eq) goto loc_82331984;
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331984
	if (ctx.cr6.eq) goto loc_82331984;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823318e8
	if (ctx.cr6.eq) goto loc_823318E8;
loc_823318E0:
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// b 0x8233198c
	goto loc_8233198C;
loc_823318E8:
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// b 0x8233198c
	goto loc_8233198C;
loc_823318F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82331910
	if (ctx.cr6.eq) goto loc_82331910;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82331910
	if (ctx.cr6.eq) goto loc_82331910;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82331990
	if (!ctx.cr6.eq) goto loc_82331990;
loc_82331910:
	// lwz r11,3448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331948
	if (ctx.cr6.eq) goto loc_82331948;
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// bl 0x82353018
	ctx.lr = 0x82331928;
	sub_82353018(ctx, base);
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// stw r28,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82342af8
	ctx.lr = 0x82331940;
	sub_82342AF8(ctx, base);
	// stw r30,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r30.u32);
	// b 0x82331990
	goto loc_82331990;
loc_82331948:
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233197c
	if (ctx.cr6.eq) goto loc_8233197C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82342af8
	ctx.lr = 0x82331964;
	sub_82342AF8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r30.u32);
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
	// beq cr6,0x823318e0
	if (ctx.cr6.eq) goto loc_823318E0;
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// b 0x8233198c
	goto loc_8233198C;
loc_8233197C:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82331990
	if (ctx.cr6.eq) goto loc_82331990;
loc_82331984:
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3752);
loc_82331988:
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
loc_8233198C:
	// bl 0x82353018
	ctx.lr = 0x82331990;
	sub_82353018(ctx, base);
loc_82331990:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823319c8
	if (!ctx.cr6.gt) goto loc_823319C8;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823319c8
	if (ctx.cr6.eq) goto loc_823319C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823319c8
	if (ctx.cr6.eq) goto loc_823319C8;
	// lwz r11,21684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21684);
	// lwz r10,21676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21676);
	// stw r11,21680(r31)
	REX_STORE_U32(r31.u32 + 21680, ctx.r11.u32);
	// stw r10,21684(r31)
	REX_STORE_U32(r31.u32 + 21684, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823319C8:
	// lwz r11,21676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21676);
	// stw r11,21680(r31)
	REX_STORE_U32(r31.u32 + 21680, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82347CC8) {
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
	// addi r4,r3,3744
	ctx.r4.s64 = ctx.r3.s64 + 3744;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// bl 0x823530d0
	ctx.lr = 0x82347CE8;
	sub_823530D0(ctx, base);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3776(r31)
	REX_STORE_U32(r31.u32 + 3776, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3780(r31)
	REX_STORE_U32(r31.u32 + 3780, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3784(r31)
	REX_STORE_U32(r31.u32 + 3784, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,3832(r31)
	REX_STORE_U32(r31.u32 + 3832, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_8234CAA0) {
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
	ctx.lr = 0x8234CAA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234cad0
	if (!ctx.cr6.eq) goto loc_8234CAD0;
	// bl 0x82340d68
	ctx.lr = 0x8234CAC8;
	sub_82340D68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8234CAD0:
	// li r24,1
	r24.s64 = 1;
	// stw r29,3436(r27)
	REX_STORE_U32(r27.u32 + 3436, r29.u32);
	// li r25,2
	r25.s64 = 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234cc60
	if (!ctx.cr6.eq) goto loc_8234CC60;
	// lwz r11,3484(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234cb1c
	if (ctx.cr6.eq) goto loc_8234CB1C;
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8234cb18
	if (!ctx.cr0.lt) goto loc_8234CB18;
	// bl 0x823380c8
	ctx.lr = 0x8234CB18;
	sub_823380C8(ctx, base);
loc_8234CB18:
	// stw r31,3488(r27)
	REX_STORE_U32(r27.u32 + 3488, r31.u32);
loc_8234CB1C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8234cb74
	if (!ctx.cr6.lt) goto loc_8234CB74;
loc_8234CB34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234cb74
	if (ctx.cr6.eq) goto loc_8234CB74;
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
	// bge 0x8234cb64
	if (!ctx.cr0.lt) goto loc_8234CB64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CB64;
	sub_823380C8(ctx, base);
loc_8234CB64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cb34
	if (ctx.cr6.gt) goto loc_8234CB34;
loc_8234CB74:
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
	// bge 0x8234cb98
	if (!ctx.cr0.lt) goto loc_8234CB98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CB98;
	sub_823380C8(ctx, base);
loc_8234CB98:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234cc60
	if (!ctx.cr6.eq) goto loc_8234CC60;
	// lwz r11,14856(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234cc60
	if (ctx.cr6.eq) goto loc_8234CC60;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234cc24
	if (!ctx.cr6.lt) goto loc_8234CC24;
loc_8234CBCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234cc24
	if (ctx.cr6.eq) goto loc_8234CC24;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234cc14
	if (!ctx.cr0.lt) goto loc_8234CC14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CC14;
	sub_823380C8(ctx, base);
loc_8234CC14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cbcc
	if (ctx.cr6.gt) goto loc_8234CBCC;
loc_8234CC24:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234cc5c
	if (!ctx.cr0.lt) goto loc_8234CC5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CC5C;
	sub_823380C8(ctx, base);
loc_8234CC5C:
	// stw r30,14860(r27)
	REX_STORE_U32(r27.u32 + 14860, r30.u32);
loc_8234CC60:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234d3fc
	if (!ctx.cr6.eq) goto loc_8234D3FC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r11,15260(r27)
	REX_STORE_U32(r27.u32 + 15260, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234cce8
	if (!ctx.cr6.lt) goto loc_8234CCE8;
loc_8234CC90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234cce8
	if (ctx.cr6.eq) goto loc_8234CCE8;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234ccd8
	if (!ctx.cr0.lt) goto loc_8234CCD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CCD8;
	sub_823380C8(ctx, base);
loc_8234CCD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cc90
	if (ctx.cr6.gt) goto loc_8234CC90;
loc_8234CCE8:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234cd20
	if (!ctx.cr0.lt) goto loc_8234CD20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CD20;
	sub_823380C8(ctx, base);
loc_8234CD20:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234cd30
	if (!ctx.cr6.eq) goto loc_8234CD30;
	// stw r24,288(r27)
	REX_STORE_U32(r27.u32 + 288, r24.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234CD30:
	// lwz r11,14836(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,15256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15256);
	// bne cr6,0x8234cedc
	if (!ctx.cr6.eq) goto loc_8234CEDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234cd50
	if (!ctx.cr6.eq) goto loc_8234CD50;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234CD50:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234cdc4
	if (!ctx.cr6.lt) goto loc_8234CDC4;
loc_8234CD6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234cdc4
	if (ctx.cr6.eq) goto loc_8234CDC4;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234cdb4
	if (!ctx.cr0.lt) goto loc_8234CDB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CDB4;
	sub_823380C8(ctx, base);
loc_8234CDB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cd6c
	if (ctx.cr6.gt) goto loc_8234CD6C;
loc_8234CDC4:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234cdfc
	if (!ctx.cr0.lt) goto loc_8234CDFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CDFC;
	sub_823380C8(ctx, base);
loc_8234CDFC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234ce0c
	if (!ctx.cr6.eq) goto loc_8234CE0C;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234CE0C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234ce80
	if (!ctx.cr6.lt) goto loc_8234CE80;
loc_8234CE28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ce80
	if (ctx.cr6.eq) goto loc_8234CE80;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234ce70
	if (!ctx.cr0.lt) goto loc_8234CE70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CE70;
	sub_823380C8(ctx, base);
loc_8234CE70:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234ce28
	if (ctx.cr6.gt) goto loc_8234CE28;
loc_8234CE80:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234ceb8
	if (!ctx.cr0.lt) goto loc_8234CEB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CEB8;
	sub_823380C8(ctx, base);
loc_8234CEB8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234ced0
	if (!ctx.cr6.eq) goto loc_8234CED0;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// lwz r3,15268(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 15268);
	// bl 0x82397b48
	ctx.lr = 0x8234CECC;
	sub_82397B48(ctx, base);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234CED0:
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r24,288(r27)
	REX_STORE_U32(r27.u32 + 288, r24.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234CEDC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8234cfa0
	if (!ctx.cr6.eq) goto loc_8234CFA0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234cf58
	if (!ctx.cr6.lt) goto loc_8234CF58;
loc_8234CF00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234cf58
	if (ctx.cr6.eq) goto loc_8234CF58;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234cf48
	if (!ctx.cr0.lt) goto loc_8234CF48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CF48;
	sub_823380C8(ctx, base);
loc_8234CF48:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cf00
	if (ctx.cr6.gt) goto loc_8234CF00;
loc_8234CF58:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234cf90
	if (!ctx.cr0.lt) goto loc_8234CF90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CF90;
	sub_823380C8(ctx, base);
loc_8234CF90:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234d040
	if (!ctx.cr6.eq) goto loc_8234D040;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// b 0x8234d1d0
	goto loc_8234D1D0;
loc_8234CFA0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234d000
	if (!ctx.cr6.lt) goto loc_8234D000;
loc_8234CFA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d000
	if (ctx.cr6.eq) goto loc_8234D000;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234cff0
	if (!ctx.cr0.lt) goto loc_8234CFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234CFF0;
	sub_823380C8(ctx, base);
loc_8234CFF0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234cfa8
	if (ctx.cr6.gt) goto loc_8234CFA8;
loc_8234D000:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d038
	if (!ctx.cr0.lt) goto loc_8234D038;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D038;
	sub_823380C8(ctx, base);
loc_8234D038:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234d048
	if (!ctx.cr6.eq) goto loc_8234D048;
loc_8234D040:
	// stw r25,288(r27)
	REX_STORE_U32(r27.u32 + 288, r25.u32);
	// b 0x8234d1d0
	goto loc_8234D1D0;
loc_8234D048:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234d0bc
	if (!ctx.cr6.lt) goto loc_8234D0BC;
loc_8234D064:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d0bc
	if (ctx.cr6.eq) goto loc_8234D0BC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d0ac
	if (!ctx.cr0.lt) goto loc_8234D0AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D0AC;
	sub_823380C8(ctx, base);
loc_8234D0AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d064
	if (ctx.cr6.gt) goto loc_8234D064;
loc_8234D0BC:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d0f4
	if (!ctx.cr0.lt) goto loc_8234D0F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D0F4;
	sub_823380C8(ctx, base);
loc_8234D0F4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234d104
	if (!ctx.cr6.eq) goto loc_8234D104;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// b 0x8234d1d0
	goto loc_8234D1D0;
loc_8234D104:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234d178
	if (!ctx.cr6.lt) goto loc_8234D178;
loc_8234D120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d178
	if (ctx.cr6.eq) goto loc_8234D178;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d168
	if (!ctx.cr0.lt) goto loc_8234D168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D168;
	sub_823380C8(ctx, base);
loc_8234D168:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d120
	if (ctx.cr6.gt) goto loc_8234D120;
loc_8234D178:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d1b0
	if (!ctx.cr0.lt) goto loc_8234D1B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D1B0;
	sub_823380C8(ctx, base);
loc_8234D1B0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8234d1c8
	if (!ctx.cr6.eq) goto loc_8234D1C8;
	// stw r29,288(r27)
	REX_STORE_U32(r27.u32 + 288, r29.u32);
	// lwz r3,15268(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 15268);
	// bl 0x82397b48
	ctx.lr = 0x8234D1C4;
	sub_82397B48(ctx, base);
	// b 0x8234d1d0
	goto loc_8234D1D0;
loc_8234D1C8:
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r24,288(r27)
	REX_STORE_U32(r27.u32 + 288, r24.u32);
loc_8234D1D0:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234d4dc
	if (!ctx.cr6.eq) goto loc_8234D4DC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8234d250
	if (!ctx.cr6.lt) goto loc_8234D250;
loc_8234D1F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d250
	if (ctx.cr6.eq) goto loc_8234D250;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d240
	if (!ctx.cr0.lt) goto loc_8234D240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D240;
	sub_823380C8(ctx, base);
loc_8234D240:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d1f8
	if (ctx.cr6.gt) goto loc_8234D1F8;
loc_8234D250:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d288
	if (!ctx.cr0.lt) goto loc_8234D288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D288;
	sub_823380C8(ctx, base);
loc_8234D288:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x8234d3ac
	if (!ctx.cr6.eq) goto loc_8234D3AC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8234d304
	if (!ctx.cr6.lt) goto loc_8234D304;
loc_8234D2AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d304
	if (ctx.cr6.eq) goto loc_8234D304;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d2f4
	if (!ctx.cr0.lt) goto loc_8234D2F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D2F4;
	sub_823380C8(ctx, base);
loc_8234D2F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d2ac
	if (ctx.cr6.gt) goto loc_8234D2AC;
loc_8234D304:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d33c
	if (!ctx.cr0.lt) goto loc_8234D33C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D33C;
	sub_823380C8(ctx, base);
loc_8234D33C:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// beq cr6,0x8234e9b4
	if (ctx.cr6.eq) goto loc_8234E9B4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x8234d354
	if (!ctx.cr6.eq) goto loc_8234D354;
	// stw r24,3436(r27)
	REX_STORE_U32(r27.u32 + 3436, r24.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234D354:
	// addi r11,r30,112
	ctx.r11.s64 = r30.s64 + 112;
	// lwz r10,14836(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14836);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// addi r7,r9,-29416
	ctx.r7.s64 = ctx.r9.s64 + -29416;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r3,r5,-29360
	ctx.r3.s64 = ctx.r5.s64 + -29360;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r4,-28976
	ctx.r11.s64 = ctx.r4.s64 + -28976;
	// stw r9,3428(r27)
	REX_STORE_U32(r27.u32 + 3428, ctx.r9.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3424(r27)
	REX_STORE_U32(r27.u32 + 3424, ctx.r8.u32);
	// lwz r6,-4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stw r6,14840(r27)
	REX_STORE_U32(r27.u32 + 14840, ctx.r6.u32);
	// bne cr6,0x8234d4dc
	if (!ctx.cr6.eq) goto loc_8234D4DC;
	// stw r24,14836(r27)
	REX_STORE_U32(r27.u32 + 14836, r24.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234D3AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,14836(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14836);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-29472
	ctx.r8.s64 = ctx.r11.s64 + -29472;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r5,r7,-29444
	ctx.r5.s64 = ctx.r7.s64 + -29444;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r6,-28976
	ctx.r11.s64 = ctx.r6.s64 + -28976;
	// stw r4,3428(r27)
	REX_STORE_U32(r27.u32 + 3428, ctx.r4.u32);
	// lwzx r3,r9,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,3424(r27)
	REX_STORE_U32(r27.u32 + 3424, ctx.r3.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,14840(r27)
	REX_STORE_U32(r27.u32 + 14840, ctx.r10.u32);
	// bne cr6,0x8234d4dc
	if (!ctx.cr6.eq) goto loc_8234D4DC;
	// stw r24,14836(r27)
	REX_STORE_U32(r27.u32 + 14836, r24.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234D3FC:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8234d42c
	if (!ctx.cr6.gt) goto loc_8234D42C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8234d4d8
	goto loc_8234D4D8;
loc_8234D42C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8234d43c
	if (!ctx.cr6.eq) goto loc_8234D43C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8234d4d8
	goto loc_8234D4D8;
loc_8234D43C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8234d49c
	if (!ctx.cr6.gt) goto loc_8234D49C;
loc_8234D444:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d49c
	if (ctx.cr6.eq) goto loc_8234D49C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8234d48c
	if (!ctx.cr0.lt) goto loc_8234D48C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D48C;
	sub_823380C8(ctx, base);
loc_8234D48C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d444
	if (ctx.cr6.gt) goto loc_8234D444;
loc_8234D49C:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8234d4d4
	if (!ctx.cr0.lt) goto loc_8234D4D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D4D4;
	sub_823380C8(ctx, base);
loc_8234D4D4:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8234D4D8:
	// stw r11,288(r27)
	REX_STORE_U32(r27.u32 + 288, ctx.r11.u32);
loc_8234D4DC:
	// lwz r11,3436(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d4f0
	if (ctx.cr6.eq) goto loc_8234D4F0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,288(r27)
	REX_STORE_U32(r27.u32 + 288, ctx.r11.u32);
loc_8234D4F0:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d514
	if (ctx.cr6.eq) goto loc_8234D514;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8234d514
	if (ctx.cr6.eq) goto loc_8234D514;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234d514
	if (ctx.cr6.eq) goto loc_8234D514;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8234e9b4
	if (!ctx.cr6.eq) goto loc_8234E9B4;
loc_8234D514:
	// lwz r10,15536(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8234d530
	if (!ctx.cr6.eq) goto loc_8234D530;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d530
	if (ctx.cr6.eq) goto loc_8234D530;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234e9b4
	if (!ctx.cr6.eq) goto loc_8234E9B4;
loc_8234D530:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8234d5d4
	if (ctx.cr6.lt) goto loc_8234D5D4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d548
	if (ctx.cr6.eq) goto loc_8234D548;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8234d5d4
	if (!ctx.cr6.eq) goto loc_8234D5D4;
loc_8234D548:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,7
	r30.s64 = 7;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x8234d5a0
	if (!ctx.cr6.lt) goto loc_8234D5A0;
loc_8234D560:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d5a0
	if (ctx.cr6.eq) goto loc_8234D5A0;
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
	// bge 0x8234d590
	if (!ctx.cr0.lt) goto loc_8234D590;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D590;
	sub_823380C8(ctx, base);
loc_8234D590:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d560
	if (ctx.cr6.gt) goto loc_8234D560;
loc_8234D5A0:
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
	// bge 0x8234d5c4
	if (!ctx.cr0.lt) goto loc_8234D5C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D5C4;
	sub_823380C8(ctx, base);
loc_8234D5C4:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234e9b4
	if (!ctx.cr6.eq) goto loc_8234E9B4;
loc_8234D5D4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8234d648
	if (!ctx.cr6.lt) goto loc_8234D648;
loc_8234D5F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d648
	if (ctx.cr6.eq) goto loc_8234D648;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d638
	if (!ctx.cr0.lt) goto loc_8234D638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D638;
	sub_823380C8(ctx, base);
loc_8234D638:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d5f0
	if (ctx.cr6.gt) goto loc_8234D5F0;
loc_8234D648:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d680
	if (!ctx.cr0.lt) goto loc_8234D680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D680;
	sub_823380C8(ctx, base);
loc_8234D680:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234e9b4
	if (!ctx.cr6.eq) goto loc_8234E9B4;
	// lwz r10,15536(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8234d93c
	if (ctx.cr6.lt) goto loc_8234D93C;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r30,4008(r27)
	REX_STORE_U32(r27.u32 + 4008, r30.u32);
	// bgt cr6,0x8234d75c
	if (ctx.cr6.gt) goto loc_8234D75C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234d71c
	if (!ctx.cr6.lt) goto loc_8234D71C;
loc_8234D6C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d71c
	if (ctx.cr6.eq) goto loc_8234D71C;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d70c
	if (!ctx.cr0.lt) goto loc_8234D70C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D70C;
	sub_823380C8(ctx, base);
loc_8234D70C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d6c4
	if (ctx.cr6.gt) goto loc_8234D6C4;
loc_8234D71C:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d754
	if (!ctx.cr0.lt) goto loc_8234D754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D754;
	sub_823380C8(ctx, base);
loc_8234D754:
	// stw r30,252(r27)
	REX_STORE_U32(r27.u32 + 252, r30.u32);
	// b 0x8234d760
	goto loc_8234D760;
loc_8234D75C:
	// stw r29,252(r27)
	REX_STORE_U32(r27.u32 + 252, r29.u32);
loc_8234D760:
	// lwz r11,3480(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d81c
	if (ctx.cr6.eq) goto loc_8234D81C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234d7e0
	if (!ctx.cr6.lt) goto loc_8234D7E0;
loc_8234D788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d7e0
	if (ctx.cr6.eq) goto loc_8234D7E0;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234d7d0
	if (!ctx.cr0.lt) goto loc_8234D7D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D7D0;
	sub_823380C8(ctx, base);
loc_8234D7D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d788
	if (ctx.cr6.gt) goto loc_8234D788;
loc_8234D7E0:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234d818
	if (!ctx.cr0.lt) goto loc_8234D818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234D818;
	sub_823380C8(ctx, base);
loc_8234D818:
	// stw r30,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r30.u32);
loc_8234D81C:
	// lwz r11,3472(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// bne cr6,0x8234d854
	if (!ctx.cr6.eq) goto loc_8234D854;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8234d83c
	if (ctx.cr6.gt) goto loc_8234D83C;
	// stw r24,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r24.u32);
	// b 0x8234d854
	goto loc_8234D854;
loc_8234D83C:
	// stw r29,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r29.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29304
	ctx.r11.s64 = ctx.r9.s64 + -29304;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
loc_8234D854:
	// lwz r10,3008(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3008);
	// stw r11,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r29.u32);
	// beq cr6,0x8234d8b4
	if (ctx.cr6.eq) goto loc_8234D8B4;
	// lwz r10,288(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8234d880
	if (!ctx.cr6.eq) goto loc_8234D880;
	// lwz r9,3436(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3436);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234d8b4
	if (ctx.cr6.eq) goto loc_8234D8B4;
loc_8234D880:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8234d890
	if (ctx.cr6.lt) goto loc_8234D890;
	// stw r24,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r24.u32);
	// b 0x8234d8b4
	goto loc_8234D8B4;
loc_8234D890:
	// lwz r9,20760(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20760);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234d8b4
	if (ctx.cr6.eq) goto loc_8234D8B4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234d8ac
	if (ctx.cr6.eq) goto loc_8234D8AC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8234d8b4
	if (!ctx.cr6.eq) goto loc_8234D8B4;
loc_8234D8AC:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, ctx.r10.u32);
loc_8234D8B4:
	// lwz r10,3004(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3004);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234d8e8
	if (ctx.cr6.eq) goto loc_8234D8E8;
	// lwz r10,1904(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r29,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, r29.u16);
	// lwz r9,1904(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r29,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, r29.u16);
	// lwz r8,1908(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1908);
	// sth r29,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, r29.u16);
	// lwz r7,1908(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1908);
	// sth r29,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r29.u16);
	// b 0x8234d90c
	goto loc_8234D90C;
loc_8234D8E8:
	// lwz r9,1904(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r10,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// lwz r8,1904(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r7,1908(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1908);
	// sth r10,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r10.u16);
	// lwz r6,1908(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1908);
	// sth r10,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
loc_8234D90C:
	// lwz r9,3468(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3468);
	// addi r10,r27,4048
	ctx.r10.s64 = r27.s64 + 4048;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234d920
	if (!ctx.cr6.eq) goto loc_8234D920;
	// addi r10,r27,5328
	ctx.r10.s64 = r27.s64 + 5328;
loc_8234D920:
	// stw r10,6608(r27)
	REX_STORE_U32(r27.u32 + 6608, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r27,6624
	ctx.r10.s64 = r27.s64 + 6624;
	// bne cr6,0x8234d934
	if (!ctx.cr6.eq) goto loc_8234D934;
	// addi r10,r27,10720
	ctx.r10.s64 = r27.s64 + 10720;
loc_8234D934:
	// stw r10,14816(r27)
	REX_STORE_U32(r27.u32 + 14816, ctx.r10.u32);
	// b 0x8234d94c
	goto loc_8234D94C;
loc_8234D93C:
	// addi r10,r27,5328
	ctx.r10.s64 = r27.s64 + 5328;
	// addi r9,r27,10720
	ctx.r9.s64 = r27.s64 + 10720;
	// stw r10,6608(r27)
	REX_STORE_U32(r27.u32 + 6608, ctx.r10.u32);
	// stw r9,14816(r27)
	REX_STORE_U32(r27.u32 + 14816, ctx.r9.u32);
loc_8234D94C:
	// stw r11,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e9b4
	if (!ctx.cr6.gt) goto loc_8234E9B4;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8234e9b4
	if (ctx.cr6.gt) goto loc_8234E9B4;
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8234d988
	if (ctx.cr6.gt) goto loc_8234D988;
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234d988
	if (!ctx.cr6.eq) goto loc_8234D988;
	// addi r11,r27,2872
	ctx.r11.s64 = r27.s64 + 2872;
	// addi r10,r27,2828
	ctx.r10.s64 = r27.s64 + 2828;
	// stw r11,2940(r27)
	REX_STORE_U32(r27.u32 + 2940, ctx.r11.u32);
	// stw r10,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r10.u32);
loc_8234D988:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8234da4c
	if (ctx.cr6.eq) goto loc_8234DA4C;
	// lwz r11,15256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234da4c
	if (ctx.cr6.eq) goto loc_8234DA4C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234da10
	if (!ctx.cr6.lt) goto loc_8234DA10;
loc_8234D9B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234da10
	if (ctx.cr6.eq) goto loc_8234DA10;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234da00
	if (!ctx.cr0.lt) goto loc_8234DA00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DA00;
	sub_823380C8(ctx, base);
loc_8234DA00:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234d9b8
	if (ctx.cr6.gt) goto loc_8234D9B8;
loc_8234DA10:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234da48
	if (!ctx.cr0.lt) goto loc_8234DA48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DA48;
	sub_823380C8(ctx, base);
loc_8234DA48:
	// stw r30,15260(r27)
	REX_STORE_U32(r27.u32 + 15260, r30.u32);
loc_8234DA4C:
	// lwz r11,21568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234dc98
	if (ctx.cr6.eq) goto loc_8234DC98;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234dacc
	if (!ctx.cr6.lt) goto loc_8234DACC;
loc_8234DA74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dacc
	if (ctx.cr6.eq) goto loc_8234DACC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234dabc
	if (!ctx.cr0.lt) goto loc_8234DABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DABC;
	sub_823380C8(ctx, base);
loc_8234DABC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234da74
	if (ctx.cr6.gt) goto loc_8234DA74;
loc_8234DACC:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234db04
	if (!ctx.cr0.lt) goto loc_8234DB04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DB04;
	sub_823380C8(ctx, base);
loc_8234DB04:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,408(r27)
	REX_STORE_U32(r27.u32 + 408, r30.u32);
	// beq cr6,0x8234dbc8
	if (ctx.cr6.eq) goto loc_8234DBC8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234db84
	if (!ctx.cr6.lt) goto loc_8234DB84;
loc_8234DB2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234db84
	if (ctx.cr6.eq) goto loc_8234DB84;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234db74
	if (!ctx.cr0.lt) goto loc_8234DB74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DB74;
	sub_823380C8(ctx, base);
loc_8234DB74:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234db2c
	if (ctx.cr6.gt) goto loc_8234DB2C;
loc_8234DB84:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234dbbc
	if (!ctx.cr0.lt) goto loc_8234DBBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DBBC;
	sub_823380C8(ctx, base);
loc_8234DBBC:
	// lwz r11,408(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,408(r27)
	REX_STORE_U32(r27.u32 + 408, ctx.r11.u32);
loc_8234DBC8:
	// lwz r11,408(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 408);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234dc8c
	if (!ctx.cr6.eq) goto loc_8234DC8C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234dc48
	if (!ctx.cr6.lt) goto loc_8234DC48;
loc_8234DBF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dc48
	if (ctx.cr6.eq) goto loc_8234DC48;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234dc38
	if (!ctx.cr0.lt) goto loc_8234DC38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DC38;
	sub_823380C8(ctx, base);
loc_8234DC38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234dbf0
	if (ctx.cr6.gt) goto loc_8234DBF0;
loc_8234DC48:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234dc80
	if (!ctx.cr0.lt) goto loc_8234DC80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DC80;
	sub_823380C8(ctx, base);
loc_8234DC80:
	// lwz r11,408(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,408(r27)
	REX_STORE_U32(r27.u32 + 408, ctx.r11.u32);
loc_8234DC8C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,408(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 408);
	// bl 0x8233cca0
	ctx.lr = 0x8234DC98;
	sub_8233CCA0(ctx, base);
loc_8234DC98:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234dde8
	if (ctx.cr6.eq) goto loc_8234DDE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8234dde8
	if (ctx.cr6.eq) goto loc_8234DDE8;
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234dde8
	if (!ctx.cr6.eq) goto loc_8234DDE8;
	// lwz r11,14884(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234dde8
	if (ctx.cr6.eq) goto loc_8234DDE8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r11,3980(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8234dd48
	if (ctx.cr6.eq) goto loc_8234DD48;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234ddac
	if (!ctx.cr6.lt) goto loc_8234DDAC;
loc_8234DCEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ddac
	if (ctx.cr6.eq) goto loc_8234DDAC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234dd34
	if (!ctx.cr0.lt) goto loc_8234DD34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DD34;
	sub_823380C8(ctx, base);
loc_8234DD34:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234dcec
	if (ctx.cr6.gt) goto loc_8234DCEC;
	// b 0x8234ddac
	goto loc_8234DDAC;
loc_8234DD48:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8234ddac
	if (!ctx.cr6.lt) goto loc_8234DDAC;
loc_8234DD54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ddac
	if (ctx.cr6.eq) goto loc_8234DDAC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234dd9c
	if (!ctx.cr0.lt) goto loc_8234DD9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DD9C;
	sub_823380C8(ctx, base);
loc_8234DD9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234dd54
	if (ctx.cr6.gt) goto loc_8234DD54;
loc_8234DDAC:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// bge 0x8234dde4
	if (!ctx.cr0.lt) goto loc_8234DDE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DDE4;
	sub_823380C8(ctx, base);
loc_8234DDE4:
	// stw r30,14888(r27)
	REX_STORE_U32(r27.u32 + 14888, r30.u32);
loc_8234DDE8:
	// lwz r4,14888(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 14888);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8234de04
	if (ctx.cr6.eq) goto loc_8234DE04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82392200
	ctx.lr = 0x8234DDFC;
	sub_82392200(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823952d8
	ctx.lr = 0x8234DE04;
	sub_823952D8(ctx, base);
loc_8234DE04:
	// lwz r11,3980(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234df74
	if (ctx.cr6.eq) goto loc_8234DF74;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234de84
	if (!ctx.cr6.lt) goto loc_8234DE84;
loc_8234DE2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234de84
	if (ctx.cr6.eq) goto loc_8234DE84;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234de74
	if (!ctx.cr0.lt) goto loc_8234DE74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DE74;
	sub_823380C8(ctx, base);
loc_8234DE74:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234de2c
	if (ctx.cr6.gt) goto loc_8234DE2C;
loc_8234DE84:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234debc
	if (!ctx.cr0.lt) goto loc_8234DEBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234DEBC;
	sub_823380C8(ctx, base);
loc_8234DEBC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8234df38
	if (ctx.cr6.eq) goto loc_8234DF38;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6d60
	ctx.lr = 0x8234DECC;
	sub_823A6D60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x8234DED8;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e9c4
	if (!ctx.cr6.eq) goto loc_8234E9C4;
	// lwz r11,352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234df74
	if (ctx.cr6.eq) goto loc_8234DF74;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234df74
	if (!ctx.cr6.gt) goto loc_8234DF74;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8234DF00:
	// lwz r11,272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,10,22,22
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x200) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFDFF);
	// rlwinm r6,r7,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r6,r6,0,22,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,144(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8234df00
	if (ctx.cr6.lt) goto loc_8234DF00;
	// b 0x8234df74
	goto loc_8234DF74;
loc_8234DF38:
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234df74
	if (!ctx.cr6.gt) goto loc_8234DF74;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8234DF4C:
	// lwz r9,272(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,24,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8234df4c
	if (ctx.cr6.lt) goto loc_8234DF4C;
loc_8234DF74:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e390
	if (ctx.cr6.eq) goto loc_8234E390;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8234e390
	if (ctx.cr6.eq) goto loc_8234E390;
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8234dfac
	if (!ctx.cr6.eq) goto loc_8234DFAC;
	// bl 0x82349680
	ctx.lr = 0x8234DF9C;
	sub_82349680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234dfb0
	if (ctx.cr6.eq) goto loc_8234DFB0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8234DFAC:
	// bl 0x823474c0
	ctx.lr = 0x8234DFB0;
	sub_823474C0(ctx, base);
loc_8234DFB0:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8234e374
	if (ctx.cr6.lt) goto loc_8234E374;
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e078
	if (ctx.cr6.eq) goto loc_8234E078;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e03c
	if (!ctx.cr6.lt) goto loc_8234E03C;
loc_8234DFE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e03c
	if (ctx.cr6.eq) goto loc_8234E03C;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e02c
	if (!ctx.cr0.lt) goto loc_8234E02C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E02C;
	sub_823380C8(ctx, base);
loc_8234E02C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234dfe4
	if (ctx.cr6.gt) goto loc_8234DFE4;
loc_8234E03C:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e074
	if (!ctx.cr0.lt) goto loc_8234E074;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E074;
	sub_823380C8(ctx, base);
loc_8234E074:
	// stw r30,396(r27)
	REX_STORE_U32(r27.u32 + 396, r30.u32);
loc_8234E078:
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e1f4
	if (!ctx.cr6.eq) goto loc_8234E1F4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e0f8
	if (!ctx.cr6.lt) goto loc_8234E0F8;
loc_8234E0A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e0f8
	if (ctx.cr6.eq) goto loc_8234E0F8;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e0e8
	if (!ctx.cr0.lt) goto loc_8234E0E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E0E8;
	sub_823380C8(ctx, base);
loc_8234E0E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e0a0
	if (ctx.cr6.gt) goto loc_8234E0A0;
loc_8234E0F8:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e130
	if (!ctx.cr0.lt) goto loc_8234E130;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E130;
	sub_823380C8(ctx, base);
loc_8234E130:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x8234e1f4
	if (ctx.cr6.eq) goto loc_8234E1F4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e1b0
	if (!ctx.cr6.lt) goto loc_8234E1B0;
loc_8234E158:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e1b0
	if (ctx.cr6.eq) goto loc_8234E1B0;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e1a0
	if (!ctx.cr0.lt) goto loc_8234E1A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E1A0;
	sub_823380C8(ctx, base);
loc_8234E1A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e158
	if (ctx.cr6.gt) goto loc_8234E158;
loc_8234E1B0:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e1e8
	if (!ctx.cr0.lt) goto loc_8234E1E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E1E8;
	sub_823380C8(ctx, base);
loc_8234E1E8:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_8234E1F4:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2980(r27)
	REX_STORE_U32(r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, ctx.r11.u32);
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2984(r27)
	REX_STORE_U32(r27.u32 + 2984, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e280
	if (!ctx.cr6.lt) goto loc_8234E280;
loc_8234E228:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e280
	if (ctx.cr6.eq) goto loc_8234E280;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e270
	if (!ctx.cr0.lt) goto loc_8234E270;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E270;
	sub_823380C8(ctx, base);
loc_8234E270:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e228
	if (ctx.cr6.gt) goto loc_8234E228;
loc_8234E280:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e2b8
	if (!ctx.cr0.lt) goto loc_8234E2B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E2B8;
	sub_823380C8(ctx, base);
loc_8234E2B8:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// stw r30,2092(r27)
	REX_STORE_U32(r27.u32 + 2092, r30.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8234e374
	if (!ctx.cr6.lt) goto loc_8234E374;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e338
	if (!ctx.cr6.lt) goto loc_8234E338;
loc_8234E2E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e338
	if (ctx.cr6.eq) goto loc_8234E338;
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
	// bge 0x8234e328
	if (!ctx.cr0.lt) goto loc_8234E328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E328;
	sub_823380C8(ctx, base);
loc_8234E328:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e2e0
	if (ctx.cr6.gt) goto loc_8234E2E0;
loc_8234E338:
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
	// bge 0x8234e370
	if (!ctx.cr0.lt) goto loc_8234E370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E370;
	sub_823380C8(ctx, base);
loc_8234E370:
	// stw r30,2040(r27)
	REX_STORE_U32(r27.u32 + 2040, r30.u32);
loc_8234E374:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234e9a4
	if (!ctx.cr6.eq) goto loc_8234E9A4;
	// lwz r11,3960(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3960);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,3960(r27)
	REX_STORE_U32(r27.u32 + 3960, ctx.r10.u32);
	// b 0x8234e9a4
	goto loc_8234E9A4;
loc_8234E390:
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8234e44c
	if (!ctx.cr6.lt) goto loc_8234E44C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8234e410
	if (!ctx.cr6.lt) goto loc_8234E410;
loc_8234E3B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e410
	if (ctx.cr6.eq) goto loc_8234E410;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e400
	if (!ctx.cr0.lt) goto loc_8234E400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E400;
	sub_823380C8(ctx, base);
loc_8234E400:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e3b8
	if (ctx.cr6.gt) goto loc_8234E3B8;
loc_8234E410:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e448
	if (!ctx.cr0.lt) goto loc_8234E448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E448;
	sub_823380C8(ctx, base);
loc_8234E448:
	// stw r30,15528(r27)
	REX_STORE_U32(r27.u32 + 15528, r30.u32);
loc_8234E44C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,15528(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 15528);
	// bl 0x823494b8
	ctx.lr = 0x8234E458;
	sub_823494B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e9c4
	if (!ctx.cr6.eq) goto loc_8234E9C4;
	// lwz r10,15536(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8234e4f0
	if (ctx.cr6.lt) goto loc_8234E4F0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340398
	ctx.lr = 0x8234E474;
	sub_82340398(ctx, base);
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234e9c4
	if (!ctx.cr6.eq) goto loc_8234E9C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e9c4
	if (!ctx.cr6.eq) goto loc_8234E9C4;
	// lwz r10,15536(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8234e4a0
	if (ctx.cr6.lt) goto loc_8234E4A0;
	// stw r29,404(r27)
	REX_STORE_U32(r27.u32 + 404, r29.u32);
	// b 0x8234e4f0
	goto loc_8234E4F0;
loc_8234E4A0:
	// lwz r9,3716(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3716);
	// li r11,50
	ctx.r11.s64 = 50;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r4,400(r27)
	REX_STORE_U32(r27.u32 + 400, ctx.r4.u32);
	// bgt cr6,0x8234e4e8
	if (ctx.cr6.gt) goto loc_8234E4E8;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,156(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 156);
	// ori r7,r9,11264
	ctx.r7.u64 = ctx.r9.u64 | 11264;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// blt cr6,0x8234e4ec
	if (ctx.cr6.lt) goto loc_8234E4EC;
loc_8234E4E8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8234E4EC:
	// stw r11,404(r27)
	REX_STORE_U32(r27.u32 + 404, ctx.r11.u32);
loc_8234E4F0:
	// lwz r11,4004(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e964
	if (!ctx.cr6.eq) goto loc_8234E964;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8234e964
	if (ctx.cr6.lt) goto loc_8234E964;
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e5c0
	if (ctx.cr6.eq) goto loc_8234E5C0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e584
	if (!ctx.cr6.lt) goto loc_8234E584;
loc_8234E52C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e584
	if (ctx.cr6.eq) goto loc_8234E584;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e574
	if (!ctx.cr0.lt) goto loc_8234E574;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E574;
	sub_823380C8(ctx, base);
loc_8234E574:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e52c
	if (ctx.cr6.gt) goto loc_8234E52C;
loc_8234E584:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e5bc
	if (!ctx.cr0.lt) goto loc_8234E5BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E5BC;
	sub_823380C8(ctx, base);
loc_8234E5BC:
	// stw r30,396(r27)
	REX_STORE_U32(r27.u32 + 396, r30.u32);
loc_8234E5C0:
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e8b8
	if (!ctx.cr6.eq) goto loc_8234E8B8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e640
	if (!ctx.cr6.lt) goto loc_8234E640;
loc_8234E5E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e640
	if (ctx.cr6.eq) goto loc_8234E640;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e630
	if (!ctx.cr0.lt) goto loc_8234E630;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E630;
	sub_823380C8(ctx, base);
loc_8234E630:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e5e8
	if (ctx.cr6.gt) goto loc_8234E5E8;
loc_8234E640:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e678
	if (!ctx.cr0.lt) goto loc_8234E678;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E678;
	sub_823380C8(ctx, base);
loc_8234E678:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x8234e73c
	if (ctx.cr6.eq) goto loc_8234E73C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e6f8
	if (!ctx.cr6.lt) goto loc_8234E6F8;
loc_8234E6A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e6f8
	if (ctx.cr6.eq) goto loc_8234E6F8;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e6e8
	if (!ctx.cr0.lt) goto loc_8234E6E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E6E8;
	sub_823380C8(ctx, base);
loc_8234E6E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e6a0
	if (ctx.cr6.gt) goto loc_8234E6A0;
loc_8234E6F8:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e730
	if (!ctx.cr0.lt) goto loc_8234E730;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E730;
	sub_823380C8(ctx, base);
loc_8234E730:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_8234E73C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e7b0
	if (!ctx.cr6.lt) goto loc_8234E7B0;
loc_8234E758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e7b0
	if (ctx.cr6.eq) goto loc_8234E7B0;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e7a0
	if (!ctx.cr0.lt) goto loc_8234E7A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E7A0;
	sub_823380C8(ctx, base);
loc_8234E7A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e758
	if (ctx.cr6.gt) goto loc_8234E758;
loc_8234E7B0:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e7e8
	if (!ctx.cr0.lt) goto loc_8234E7E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E7E8;
	sub_823380C8(ctx, base);
loc_8234E7E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, r30.u32);
	// beq cr6,0x8234e8ac
	if (ctx.cr6.eq) goto loc_8234E8AC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e868
	if (!ctx.cr6.lt) goto loc_8234E868;
loc_8234E810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e868
	if (ctx.cr6.eq) goto loc_8234E868;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8234e858
	if (!ctx.cr0.lt) goto loc_8234E858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E858;
	sub_823380C8(ctx, base);
loc_8234E858:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e810
	if (ctx.cr6.gt) goto loc_8234E810;
loc_8234E868:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8234e8a0
	if (!ctx.cr0.lt) goto loc_8234E8A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E8A0;
	sub_823380C8(ctx, base);
loc_8234E8A0:
	// lwz r11,2976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2976);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, ctx.r11.u32);
loc_8234E8AC:
	// lwz r11,2976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2976);
	// stw r11,2984(r27)
	REX_STORE_U32(r27.u32 + 2984, ctx.r11.u32);
	// stw r11,2980(r27)
	REX_STORE_U32(r27.u32 + 2980, ctx.r11.u32);
loc_8234E8B8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234e928
	if (!ctx.cr6.lt) goto loc_8234E928;
loc_8234E8D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e928
	if (ctx.cr6.eq) goto loc_8234E928;
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
	// bge 0x8234e918
	if (!ctx.cr0.lt) goto loc_8234E918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E918;
	sub_823380C8(ctx, base);
loc_8234E918:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234e8d0
	if (ctx.cr6.gt) goto loc_8234E8D0;
loc_8234E928:
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
	// bge 0x8234e960
	if (!ctx.cr0.lt) goto loc_8234E960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234E960;
	sub_823380C8(ctx, base);
loc_8234E960:
	// stw r30,2092(r27)
	REX_STORE_U32(r27.u32 + 2092, r30.u32);
loc_8234E964:
	// lwz r11,20760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e97c
	if (!ctx.cr6.eq) goto loc_8234E97C;
	// lwz r11,3980(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e998
	if (ctx.cr6.eq) goto loc_8234E998;
loc_8234E97C:
	// lwz r11,4040(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e998
	if (ctx.cr6.eq) goto loc_8234E998;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82342b80
	ctx.lr = 0x8234E994;
	sub_82342B80(ctx, base);
	// b 0x8234e9a0
	goto loc_8234E9A0;
loc_8234E998:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82387658
	ctx.lr = 0x8234E9A0;
	sub_82387658(ctx, base);
loc_8234E9A0:
	// stw r24,3960(r27)
	REX_STORE_U32(r27.u32 + 3960, r24.u32);
loc_8234E9A4:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234e9c0
	if (ctx.cr6.eq) goto loc_8234E9C0;
loc_8234E9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8234E9C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234E9C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823CE080) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823ce6b0
	sub_823CE6B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CE440) {
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
	// bl 0x8220fda0
	ctx.lr = 0x823CE460;
	sub_8220FDA0(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8220e3f8
	ctx.lr = 0x823CE46C;
	sub_8220E3F8(ctx, base);
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

DEFINE_REX_FUNC(sub_823CED70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823CED78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,11020(r3)
	REX_STORE_U32(ctx.r3.u32 + 11020, ctx.r7.u32);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,11012(r3)
	REX_STORE_U32(ctx.r3.u32 + 11012, ctx.r5.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,11016(r31)
	REX_STORE_U32(r31.u32 + 11016, ctx.r11.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x824d412c
	ctx.lr = 0x823CEDA4;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,12260(r31)
	REX_STORE_U8(r31.u32 + 12260, ctx.r11.u8);
	// bl 0x823cf6a8
	ctx.lr = 0x823CEDBC;
	sub_823CF6A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf3d8
	ctx.lr = 0x823CEDC8;
	sub_823CF3D8(ctx, base);
	// lwz r10,11972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11972);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11972(r31)
	REX_STORE_U32(r31.u32 + 11972, ctx.r10.u32);
	// bge 0x823cedec
	if (!ctx.cr0.lt) goto loc_823CEDEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x823cee00
	goto loc_823CEE00;
loc_823CEDEC:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,11024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,11024(r31)
	REX_STORE_U32(r31.u32 + 11024, ctx.r11.u32);
loc_823CEE00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823D2ED8) {
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
	ctx.lr = 0x823D2EE0;
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r6,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r6.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,1588(r1)
	REX_STORE_U32(ctx.r1.u32 + 1588, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r7,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r7.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r8,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r8.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x823d3a88
	ctx.lr = 0x823D2F18;
	sub_823D3A88(ctx, base);
	// li r15,0
	r15.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x823d2f44
	if (!ctx.cr6.eq) goto loc_823D2F44;
loc_823D2F2C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d3db8
	ctx.lr = 0x823D2F34;
	sub_823D3DB8(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823D2F3C:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x822d4ea0
	return;
loc_823D2F44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823d2f2c
	if (ctx.cr6.eq) goto loc_823D2F2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823d2f2c
	if (ctx.cr6.eq) goto loc_823D2F2C;
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2f78
	if (!ctx.cr6.eq) goto loc_823D2F78;
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2156
	r30.u64 = r30.u64 | 2156;
loc_823D2F68:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d3db8
	ctx.lr = 0x823D2F70;
	sub_823D3DB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823d2f3c
	goto loc_823D2F3C;
loc_823D2F78:
	// lwz r29,1644(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r23,1660(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823d2f94
	if (!ctx.cr6.eq) goto loc_823D2F94;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x823d2f94
	if (!ctx.cr6.eq) goto loc_823D2F94;
	// addi r29,r1,304
	r29.s64 = ctx.r1.s64 + 304;
loc_823D2F94:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823d7350
	ctx.lr = 0x823D2FAC;
	sub_823D7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823d2fbc
	if (!ctx.cr0.lt) goto loc_823D2FBC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823d2f68
	goto loc_823D2F68;
loc_823D2FBC:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x823d2fcc
	if (!ctx.cr6.eq) goto loc_823D2FCC;
	// lwz r23,20(r29)
	r23.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r23,1660(r1)
	REX_STORE_U32(ctx.r1.u32 + 1660, r23.u32);
loc_823D2FCC:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2ff4
	if (ctx.cr6.eq) goto loc_823D2FF4;
loc_823D2FE0:
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2fe0
	if (!ctx.cr6.eq) goto loc_823D2FE0;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_823D2FF4:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bne cr6,0x823d3038
	if (!ctx.cr6.eq) goto loc_823D3038;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d302c
	if (ctx.cr6.eq) goto loc_823D302C;
loc_823D3010:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d3010
	if (!ctx.cr6.eq) goto loc_823D3010;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x823d3038
	if (ctx.cr6.eq) goto loc_823D3038;
loc_823D302C:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x823d2f68
	goto loc_823D2F68;
loc_823D3038:
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(r28.s32, -2, ctx.xer);
	// beq cr6,0x823d3080
	if (ctx.cr6.eq) goto loc_823D3080;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d3080
	if (ctx.cr6.lt) goto loc_823D3080;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823d305c
	if (ctx.cr6.eq) goto loc_823D305C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x823d3084
	if (!ctx.cr6.eq) goto loc_823D3084;
loc_823D305C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// ble cr6,0x823d3084
	if (!ctx.cr6.gt) goto loc_823D3084;
loc_823D306C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d306c
	if (ctx.cr6.lt) goto loc_823D306C;
	// stw r11,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// b 0x823d3084
	goto loc_823D3084;
loc_823D3080:
	// stw r10,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r10.u32);
loc_823D3084:
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(r27.s32, -2, ctx.xer);
	// beq cr6,0x823d30cc
	if (ctx.cr6.eq) goto loc_823D30CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d30cc
	if (ctx.cr6.lt) goto loc_823D30CC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823d30a8
	if (ctx.cr6.eq) goto loc_823D30A8;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bne cr6,0x823d30d0
	if (!ctx.cr6.eq) goto loc_823D30D0;
loc_823D30A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// ble cr6,0x823d30d0
	if (!ctx.cr6.gt) goto loc_823D30D0;
loc_823D30B8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d30b8
	if (ctx.cr6.lt) goto loc_823D30B8;
	// stw r11,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// b 0x823d30d0
	goto loc_823D30D0;
loc_823D30CC:
	// stw r10,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
loc_823D30D0:
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r26,-2
	ctx.cr6.compare<int32_t>(r26.s32, -2, ctx.xer);
	// beq cr6,0x823d3118
	if (ctx.cr6.eq) goto loc_823D3118;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d3118
	if (ctx.cr6.lt) goto loc_823D3118;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823d30f4
	if (ctx.cr6.eq) goto loc_823D30F4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// bne cr6,0x823d311c
	if (!ctx.cr6.eq) goto loc_823D311C;
loc_823D30F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// ble cr6,0x823d311c
	if (!ctx.cr6.gt) goto loc_823D311C;
loc_823D3104:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d3104
	if (ctx.cr6.lt) goto loc_823D3104;
	// stw r11,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// b 0x823d311c
	goto loc_823D311C;
loc_823D3118:
	// stw r10,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r10.u32);
loc_823D311C:
	// lwz r18,1620(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(r18.s32, -1, ctx.xer);
	// bne cr6,0x823d3130
	if (!ctx.cr6.eq) goto loc_823D3130;
	// lis r18,8
	r18.s64 = 524288;
	// ori r18,r18,4
	r18.u64 = r18.u64 | 4;
loc_823D3130:
	// lwz r11,1628(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823d3144
	if (!ctx.cr6.eq) goto loc_823D3144;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1628(r1)
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_823D3144:
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// bne cr6,0x823d3158
	if (!ctx.cr6.eq) goto loc_823D3158;
	// oris r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 458752;
	// oris r18,r18,7
	r18.u64 = r18.u64 | 458752;
	// stw r11,1628(r1)
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_823D3158:
	// clrlwi r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823d317c
	if (ctx.cr6.eq) goto loc_823D317C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823d317c
	if (ctx.cr6.eq) goto loc_823D317C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r14,0
	r14.s64 = 0;
	// bne cr6,0x823d3180
	if (!ctx.cr6.eq) goto loc_823D3180;
loc_823D317C:
	// li r14,1
	r14.s64 = 1;
loc_823D3180:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3198
	if (ctx.cr6.eq) goto loc_823D3198;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16385
	r30.u64 = r30.u64 | 16385;
	// b 0x823d2f68
	goto loc_823D2F68;
loc_823D3198:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822d5870
	ctx.lr = 0x823D31A8;
	sub_822D5870(ctx, base);
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r20,1636(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x823d326c
	if (!ctx.cr6.eq) goto loc_823D326C;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x823d3240
	if (ctx.cr6.eq) goto loc_823D3240;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823d14c0
	ctx.lr = 0x823D31D0;
	sub_823D14C0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d31f0
	if (ctx.cr6.eq) goto loc_823D31F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d31f0
	if (ctx.cr6.eq) goto loc_823D31F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d3240
	if (!ctx.cr6.eq) goto loc_823D3240;
loc_823D31F0:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d3240
	if (!ctx.cr6.eq) goto loc_823D3240;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x822d4fa0
	ctx.lr = 0x823D3208;
	sub_822D4FA0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r10,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823d1538
	ctx.lr = 0x823D322C;
	sub_823D1538(ctx, base);
	// rlwinm r11,r3,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x823d3240
	if (!ctx.cr6.eq) goto loc_823D3240;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_823D3240:
	// addis r11,r7,-13873
	ctx.r11.s64 = ctx.r7.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d3260
	if (ctx.cr0.eq) goto loc_823D3260;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x823d3268
	if (!ctx.cr6.eq) goto loc_823D3268;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// b 0x823d3268
	goto loc_823D3268;
loc_823D3260:
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r7,r7,74
	ctx.r7.u64 = ctx.r7.u64 | 74;
loc_823D3268:
	// stw r7,1604(r1)
	REX_STORE_U32(ctx.r1.u32 + 1604, ctx.r7.u32);
loc_823D326C:
	// lwz r22,1652(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823d3288
	if (ctx.cr6.eq) goto loc_823D3288;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823D3288;
	sub_822D4FA0(ctx, base);
loc_823D3288:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// addi r9,r1,1604
	ctx.r9.s64 = ctx.r1.s64 + 1604;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r7,r1,1588
	ctx.r7.s64 = ctx.r1.s64 + 1588;
	// addi r6,r1,1580
	ctx.r6.s64 = ctx.r1.s64 + 1580;
	// addi r5,r1,1572
	ctx.r5.s64 = ctx.r1.s64 + 1572;
	// addi r4,r1,1564
	ctx.r4.s64 = ctx.r1.s64 + 1564;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823d2430
	ctx.lr = 0x823D32AC;
	sub_823D2430(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823d2f68
	if (ctx.cr0.lt) goto loc_823D2F68;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r19,1588(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// ori r29,r11,14
	r29.u64 = ctx.r11.u64 | 14;
	// beq cr6,0x823d32f8
	if (ctx.cr6.eq) goto loc_823D32F8;
	// cmpwi cr6,r23,17
	ctx.cr6.compare<int32_t>(r23.s32, 17, ctx.xer);
	// beq cr6,0x823d32ec
	if (ctx.cr6.eq) goto loc_823D32EC;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// bne cr6,0x823d332c
	if (!ctx.cr6.eq) goto loc_823D332C;
	// lwz r4,1564(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823d3308
	goto loc_823D3308;
loc_823D32EC:
	// lwz r5,1580(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x823d3300
	goto loc_823D3300;
loc_823D32F8:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
loc_823D3300:
	// lwz r3,1564(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r4,1572(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
loc_823D3308:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r9,1612(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r8,1604(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// bl 0x82223018
	ctx.lr = 0x823D331C;
	sub_82223018(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823D332C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d3650
	if (ctx.cr6.lt) goto loc_823D3650;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// addi r21,r1,160
	r21.s64 = ctx.r1.s64 + 160;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r23,0
	r23.s64 = 0;
	// lwz r27,192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r25,r11,21,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lwz r26,196(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,204(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x823d35ec
	if (ctx.cr6.eq) goto loc_823D35EC;
loc_823D335C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d34cc
	if (ctx.cr6.eq) goto loc_823D34CC;
loc_823D3370:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(r28.u32, r19.u32, ctx.xer);
	// bge cr6,0x823d34cc
	if (!ctx.cr6.lt) goto loc_823D34CC;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d33c0
	if (ctx.cr6.eq) goto loc_823D33C0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823d33a8
	if (ctx.cr6.eq) goto loc_823D33A8;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823d33dc
	if (!ctx.cr6.eq) goto loc_823D33DC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222ea0
	ctx.lr = 0x823D33A4;
	sub_82222EA0(ctx, base);
	// b 0x823d33cc
	goto loc_823D33CC;
loc_823D33A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222f60
	ctx.lr = 0x823D33B4;
	sub_82222F60(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x823d33d4
	goto loc_823D33D4;
loc_823D33C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222dc8
	ctx.lr = 0x823D33CC;
	sub_82222DC8(ctx, base);
loc_823D33CC:
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_823D33D4:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823D33DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d3630
	if (ctx.cr6.lt) goto loc_823D3630;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d3400
	if (ctx.cr6.eq) goto loc_823D3400;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823d3484
	if (ctx.cr6.eq) goto loc_823D3484;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823d343c
	if (!ctx.cr6.eq) goto loc_823D343C;
loc_823D3400:
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// bl 0x823d1598
	ctx.lr = 0x823D3438;
	sub_823D1598(ctx, base);
loc_823D3438:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823D343C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d3630
	if (ctx.cr6.lt) goto loc_823D3630;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823d3458
	if (ctx.cr6.eq) goto loc_823D3458;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D3454;
	sub_82216CC8(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_823D3458:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823d346c
	if (ctx.cr6.eq) goto loc_823D346C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D3468;
	sub_82216CC8(ctx, base);
	// li r16,0
	r16.s64 = 0;
loc_823D346C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823d34cc
	if (!ctx.cr6.lt) goto loc_823D34CC;
	// lwz r31,76(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 76);
	// b 0x823d3370
	goto loc_823D3370;
loc_823D3484:
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823d1c70
	ctx.lr = 0x823D34C8;
	sub_823D1C70(ctx, base);
	// b 0x823d3438
	goto loc_823D3438;
loc_823D34CC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x823d35d8
	if (!ctx.cr6.eq) goto loc_823D35D8;
	// b 0x823d35d0
	goto loc_823D35D0;
loc_823D34D8:
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d3520
	if (ctx.cr6.eq) goto loc_823D3520;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823d3508
	if (ctx.cr6.eq) goto loc_823D3508;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823d353c
	if (!ctx.cr6.eq) goto loc_823D353C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222ea0
	ctx.lr = 0x823D3504;
	sub_82222EA0(ctx, base);
	// b 0x823d352c
	goto loc_823D352C;
loc_823D3508:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222f60
	ctx.lr = 0x823D3514;
	sub_82222F60(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x823d3534
	goto loc_823D3534;
loc_823D3520:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82222dc8
	ctx.lr = 0x823D352C;
	sub_82222DC8(ctx, base);
loc_823D352C:
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_823D3534:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823D353C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d3630
	if (ctx.cr6.lt) goto loc_823D3630;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823d3560
	if (ctx.cr6.eq) goto loc_823D3560;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823d3664
	if (ctx.cr6.eq) goto loc_823D3664;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823d359c
	if (!ctx.cr6.eq) goto loc_823D359C;
loc_823D3560:
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// bl 0x823d1598
	ctx.lr = 0x823D3598;
	sub_823D1598(ctx, base);
loc_823D3598:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823D359C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d3630
	if (ctx.cr6.lt) goto loc_823D3630;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823d35b8
	if (ctx.cr6.eq) goto loc_823D35B8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D35B4;
	sub_82216CC8(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_823D35B8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823d35cc
	if (ctx.cr6.eq) goto loc_823D35CC;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D35C8;
	sub_82216CC8(ctx, base);
	// li r16,0
	r16.s64 = 0;
loc_823D35CC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823D35D0:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(r28.u32, r19.u32, ctx.xer);
	// blt cr6,0x823d34d8
	if (ctx.cr6.lt) goto loc_823D34D8;
loc_823D35D8:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r21,80(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 80);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d335c
	if (ctx.cr6.lt) goto loc_823D335C;
loc_823D35EC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x823d3620
	if (ctx.cr6.eq) goto loc_823D3620;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bge cr6,0x823d3620
	if (!ctx.cr6.lt) goto loc_823D3620;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,1628(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x823d2ab0
	ctx.lr = 0x823D3618;
	sub_823D2AB0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823d3630
	if (ctx.cr0.lt) goto loc_823D3630;
loc_823D3620:
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// li r30,0
	r30.s64 = 0;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// li r17,0
	r17.s64 = 0;
loc_823D3630:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823d3640
	if (ctx.cr6.eq) goto loc_823D3640;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D3640;
	sub_82216CC8(ctx, base);
loc_823D3640:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823d3650
	if (ctx.cr6.eq) goto loc_823D3650;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D3650;
	sub_82216CC8(ctx, base);
loc_823D3650:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x823d2f68
	if (ctx.cr6.eq) goto loc_823D2F68;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82216cc8
	ctx.lr = 0x823D3660;
	sub_82216CC8(ctx, base);
	// b 0x823d2f68
	goto loc_823D2F68;
loc_823D3664:
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// bl 0x823d1c70
	ctx.lr = 0x823D36A8;
	sub_823D1C70(ctx, base);
	// b 0x823d3598
	goto loc_823D3598;
}

DEFINE_REX_FUNC(sub_823E48B0) {
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
	ctx.lr = 0x823E48B8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x823e4928
	if (!ctx.cr6.lt) goto loc_823E4928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_823E4900:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e70c8
	ctx.lr = 0x823E4910;
	sub_823E70C8(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x823e4900
	if (ctx.cr6.lt) goto loc_823E4900;
loc_823E4928:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4948
	if (ctx.cr6.eq) goto loc_823E4948;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E4948;
	sub_82413D40(ctx, base);
loc_823E4948:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4968
	if (ctx.cr6.eq) goto loc_823E4968;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E4968;
	sub_823DC3F0(ctx, base);
loc_823E4968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823E7120) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// bne cr6,0x823e7158
	if (!ctx.cr6.eq) goto loc_823E7158;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E7158:
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

DEFINE_REX_FUNC(sub_823E7BC8) {
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e7c00
	if (ctx.cr6.eq) goto loc_823E7C00;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E7BE8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e7be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7BE8;
loc_823E7C00:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82226530
	ctx.lr = 0x823E7C08;
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

DEFINE_REX_FUNC(sub_823E8638) {
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
	ctx.lr = 0x823E8640;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
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
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823e87f0
	if (ctx.cr6.lt) goto loc_823E87F0;
	// beq cr6,0x823e87e8
	if (ctx.cr6.eq) goto loc_823E87E8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823e87c8
	if (ctx.cr6.lt) goto loc_823E87C8;
	// beq cr6,0x823e8728
	if (ctx.cr6.eq) goto loc_823E8728;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823e8690
	if (ctx.cr6.eq) goto loc_823E8690;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823e89d4
	goto loc_823E89D4;
loc_823E8690:
	// lwz r9,52(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r27,r11,r9
	r27.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e86ac
	if (!ctx.cr6.gt) goto loc_823E86AC;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_823E86AC:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823e8720
	if (ctx.cr6.eq) goto loc_823E8720;
loc_823E86B8:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e8714
	if (ctx.cr0.eq) goto loc_823E8714;
	// li r29,0
	r29.s64 = 0;
loc_823E86CC:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x823e8638
	ctx.lr = 0x823E86EC;
	sub_823E8638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e89d4
	if (ctx.cr0.lt) goto loc_823E89D4;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 10);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x823e86cc
	if (ctx.cr6.lt) goto loc_823E86CC;
loc_823E8714:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x823e86b8
	if (ctx.cr6.lt) goto loc_823E86B8;
loc_823E8720:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e89d4
	goto loc_823E89D4;
loc_823E8728:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// divwu r3,r11,r7
	ctx.r3.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823e874c
	if (!ctx.cr6.gt) goto loc_823E874C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_823E874C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e87c0
	if (ctx.cr6.eq) goto loc_823E87C0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823E875C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823e87b4
	if (ctx.cr6.eq) goto loc_823E87B4;
loc_823E8768:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e87a4
	if (ctx.cr6.eq) goto loc_823E87A4;
loc_823E8774:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e8774
	if (ctx.cr6.lt) goto loc_823E8774;
loc_823E87A4:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823e8768
	if (ctx.cr6.lt) goto loc_823E8768;
loc_823E87B4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823e875c
	if (ctx.cr6.lt) goto loc_823E875C;
loc_823E87C0:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// b 0x823e8804
	goto loc_823E8804;
loc_823E87C8:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_823E87D4:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r3,r11,r9
	ctx.r3.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// b 0x823e87fc
	goto loc_823E87FC;
loc_823E87E8:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// b 0x823e87d4
	goto loc_823E87D4;
loc_823E87F0:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823E87FC:
	// ble cr6,0x823e8804
	if (!ctx.cr6.gt) goto loc_823E8804;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E8804:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823e88a4
	if (ctx.cr6.eq) goto loc_823E88A4;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x823e8874
	if (ctx.cr6.eq) goto loc_823E8874;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823e88a0
	if (!ctx.cr6.eq) goto loc_823E88A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e88a0
	if (ctx.cr6.eq) goto loc_823E88A0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
	// lfs f12,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E884C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823e8860
	if (ctx.cr6.eq) goto loc_823E8860;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823e8864
	goto loc_823E8864;
loc_823E8860:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_823E8864:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e884c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E884C;
	// b 0x823e88a0
	goto loc_823E88A0;
loc_823E8874:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e88a0
	if (ctx.cr6.eq) goto loc_823E88A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
loc_823E8888:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e8888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E8888;
loc_823E88A0:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_823E88A4:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823e8984
	if (ctx.cr0.eq) goto loc_823E8984;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e88c8
	if (ctx.cr6.eq) goto loc_823E88C8;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x823e88d0
	goto loc_823E88D0;
loc_823E88C8:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 6);
loc_823E88D0:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e8984
	if (ctx.cr0.eq) goto loc_823E8984;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823e88ec
	if (!ctx.cr6.eq) goto loc_823E88EC;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9268
	ctx.r4.s64 = ctx.r9.s64 + 9268;
	// b 0x823e88f4
	goto loc_823E88F4;
loc_823E88EC:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9252
	ctx.r4.s64 = ctx.r9.s64 + 9252;
loc_823E88F4:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823e8980
	if (ctx.cr0.eq) goto loc_823E8980;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_823E890C:
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
	// ble cr6,0x823e8948
	if (!ctx.cr6.gt) goto loc_823E8948;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823E892C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e892c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E892C;
loc_823E8948:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e8978
	if (ctx.cr6.eq) goto loc_823E8978;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E8958:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r5,r10
	r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r25
	r31.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e8958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E8958;
loc_823E8978:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823e890c
	if (!ctx.cr6.eq) goto loc_823E890C;
loc_823E8980:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_823E8984:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e899c
	if (!ctx.cr6.gt) goto loc_823E899C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823E899C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e89b4
	if (!ctx.cr6.eq) goto loc_823E89B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e89d4
	goto loc_823E89D4;
loc_823E89B4:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x823E89CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823E89D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823F6DA8) {
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
	ctx.lr = 0x823F6DB0;
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r28,48(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r7,-262
	ctx.r5.s64 = ctx.r7.s64 + -262;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r26,116(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// lwz r27,136(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x823f6dec
	if (!ctx.cr6.gt) goto loc_823F6DEC;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r25,r11,262
	r25.s64 = ctx.r11.s64 + 262;
	// b 0x823f6df0
	goto loc_823F6DF0;
loc_823F6DEC:
	// li r25,0
	r25.s64 = 0;
loc_823F6DF0:
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r7,132(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,56(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// addi r5,r9,258
	ctx.r5.s64 = ctx.r9.s64 + 258;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// lwz r29,44(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lbzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// blt cr6,0x823f6e18
	if (ctx.cr6.lt) goto loc_823F6E18;
	// rlwinm r26,r26,30,2,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
loc_823F6E18:
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823f6e28
	if (!ctx.cr6.gt) goto loc_823F6E28;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823F6E28:
	// add r8,r28,r4
	ctx.r8.u64 = r28.u64 + ctx.r4.u64;
	// clrlwi r24,r7,24
	r24.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbzx r23,r8,r6
	r23.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// bne cr6,0x823f6f30
	if (!ctx.cr6.eq) goto loc_823F6F30;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r24,r31,24
	r24.u64 = r31.u32 & 0xFF;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x823f6f30
	if (!ctx.cr6.eq) goto loc_823F6F30;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x823f6f30
	if (!ctx.cr6.eq) goto loc_823F6F30;
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzu r24,1(r8)
	ea = 1 + ctx.r8.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f6f30
	if (!ctx.cr6.eq) goto loc_823F6F30;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
loc_823F6E78:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823f6f00
	if (!ctx.cr6.eq) goto loc_823F6F00;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823f6e78
	if (ctx.cr6.lt) goto loc_823F6E78;
loc_823F6F00:
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r9,r5,-258
	ctx.r9.s64 = ctx.r5.s64 + -258;
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x823f6f30
	if (!ctx.cr6.gt) goto loc_823F6F30;
	// stw r4,104(r10)
	REX_STORE_U32(ctx.r10.u32 + 104, ctx.r4.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x823f6f4c
	if (!ctx.cr6.lt) goto loc_823F6F4C;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r31,-1(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
loc_823F6F30:
	// and r11,r29,r4
	ctx.r11.u64 = r29.u64 & ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// ble cr6,0x823f6f4c
	if (!ctx.cr6.gt) goto loc_823F6F4C;
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x823f6e28
	if (!ctx.cr0.eq) goto loc_823F6E28;
loc_823F6F4C:
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823f6f58
	if (ctx.cr6.gt) goto loc_823F6F58;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_823F6F58:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823FDE60) {
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
	ctx.lr = 0x823FDE68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,456(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fdf00
	if (ctx.cr6.lt) goto loc_823FDF00;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r28,0
	r28.s64 = 0;
	// lwz r27,220(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fdef8
	if (!ctx.cr6.gt) goto loc_823FDEF8;
	// addi r26,r4,-4
	r26.s64 = ctx.r4.s64 + -4;
	// addi r31,r29,12
	r31.s64 = r29.s64 + 12;
loc_823FDEB0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwzu r11,4(r26)
	ea = 4 + r26.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FDEE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r27,r27,84
	r27.s64 = r27.s64 + 84;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823fdeb0
	if (ctx.cr6.lt) goto loc_823FDEB0;
loc_823FDEF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r11.u32);
loc_823FDF00:
	// lwz r5,92(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r10,316(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 316);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// subf r31,r5,r10
	r31.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823fdf1c
	if (!ctx.cr6.gt) goto loc_823FDF1C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823FDF1C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r10,r11,r23
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823fdf30
	if (!ctx.cr6.gt) goto loc_823FDF30;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823FDF30:
	// lwz r10,460(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 460);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + r22.u64;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FDF54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// lwz r7,96(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 96);
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - r31.u64;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r11,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r11.u32);
	// stw r6,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r6.u32);
	// lwz r5,316(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 316);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823fdf90
	if (ctx.cr6.lt) goto loc_823FDF90;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_823FDF90:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82404870) {
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
	ctx.lr = 0x82404878;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// bl 0x822d5870
	ctx.lr = 0x824048A0;
	sub_822D5870(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm. r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x824048c8
	if (ctx.cr0.eq) goto loc_824048C8;
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824048C8:
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824048dc
	if (ctx.cr0.eq) goto loc_824048DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824048DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r29,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0xE0000000;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824055B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824055B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
loc_824055D0:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82409e00
	ctx.lr = 0x824055EC;
	sub_82409E00(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v63,v0,20
	temp.u32 = ctx.v0.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[0] = vTemp.u32[0];
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// bne 0x824055d0
	if (!ctx.cr0.eq) goto loc_824055D0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82409228) {
	REX_FUNC_PROLOGUE();
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r9,r4,2,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r5,31
	ctx.r9.s64 = ctx.r5.s64 + 31;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r3,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r4,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r4,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r8,r4,4,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r4,1,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFF0;
	// rlwinm r6,r10,0,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r10,0,23,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,3,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xC0;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240EAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lhz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-30028(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f13,f0,f2
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fnmsubs f12,f12,f0,f1
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
loc_8240EB50:
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f11,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fnmsubs f13,f13,f0,f1
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f1.f64)));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f11,f11,f0,f2
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f2.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8240eb98
	if (!ctx.cr6.lt) goto loc_8240EB98;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8240EB98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8240eb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240EB50;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82412850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82412858;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// clrlwi. r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// beq 0x82412a08
	if (ctx.cr0.eq) goto loc_82412A08;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82412a08
	if (ctx.cr6.gt) goto loc_82412A08;
	// rlwinm. r11,r6,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82412a08
	if (!ctx.cr0.eq) goto loc_82412A08;
	// rlwinm r11,r6,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200000;
	// rlwinm r10,r6,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400000;
	// stw r11,72(r5)
	REX_STORE_U32(ctx.r5.u32 + 72, ctx.r11.u32);
	// rlwinm r9,r6,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000;
	// rlwinm r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// stw r10,72(r4)
	REX_STORE_U32(ctx.r4.u32 + 72, ctx.r10.u32);
	// stw r9,64(r4)
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// bl 0x8241d878
	ctx.lr = 0x824128B4;
	sub_8241D878(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82412998
	if (ctx.cr0.eq) goto loc_82412998;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241d878
	ctx.lr = 0x824128C8;
	sub_8241D878(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// beq 0x82412998
	if (ctx.cr0.eq) goto loc_82412998;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82413a18
	ctx.lr = 0x824128DC;
	sub_82413A18(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824129b8
	if (ctx.cr0.lt) goto loc_824129B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240fa58
	ctx.lr = 0x824128EC;
	sub_8240FA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240fbe8
	ctx.lr = 0x824128FC;
	sub_8240FBE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240fd30
	ctx.lr = 0x8241290C;
	sub_8240FD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240ff98
	ctx.lr = 0x8241291C;
	sub_8240FF98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824101d0
	ctx.lr = 0x8241292C;
	sub_824101D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824106c0
	ctx.lr = 0x8241293C;
	sub_824106C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410cc0
	ctx.lr = 0x8241294C;
	sub_82410CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82411058
	ctx.lr = 0x8241295C;
	sub_82411058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412118
	ctx.lr = 0x8241296C;
	sub_82412118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82411930
	ctx.lr = 0x8241297C;
	sub_82411930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82412990
	if (!ctx.cr0.lt) goto loc_82412990;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29976
	ctx.r3.s64 = ctx.r11.s64 + -29976;
	// b 0x824129a0
	goto loc_824129A0;
loc_82412990:
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x824129b8
	goto loc_824129B8;
loc_82412998:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30004
	ctx.r3.s64 = ctx.r11.s64 + -30004;
loc_824129A0:
	// bl 0x823cd328
	ctx.lr = 0x824129A4;
	sub_823CD328(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// bl 0x823cd328
	ctx.lr = 0x824129B0;
	sub_823CD328(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_824129B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824129dc
	if (ctx.cr6.eq) goto loc_824129DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824129D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_824129DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82412a00
	if (ctx.cr6.eq) goto loc_82412A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824129FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_82412A00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82412a28
	goto loc_82412A28;
loc_82412A08:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-30028
	ctx.r3.s64 = ctx.r11.s64 + -30028;
	// bl 0x823cd328
	ctx.lr = 0x82412A14;
	sub_823CD328(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// bl 0x823cd328
	ctx.lr = 0x82412A20;
	sub_823CD328(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82412A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82419F40) {
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
	ctx.lr = 0x82419F48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82419f70
	if (ctx.cr6.eq) goto loc_82419F70;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82419F6C;
	sub_82413DD0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82419F70:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82419fd0
	if (!ctx.cr6.gt) goto loc_82419FD0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82419FA0:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e7018
	ctx.lr = 0x82419FB8;
	sub_823E7018(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419fa0
	if (ctx.cr6.lt) goto loc_82419FA0;
loc_82419FD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8241A510) {
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
	// bge cr6,0x8241a5e0
	if (!ctx.cr6.lt) goto loc_8241A5E0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,9952(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241A574:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
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
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241a574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A574;
loc_8241A5E0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a5fc
	if (ctx.cr6.eq) goto loc_8241A5FC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241A5FC;
	sub_82413D40(ctx, base);
loc_8241A5FC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a618
	if (ctx.cr6.eq) goto loc_8241A618;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241A618;
	sub_82414110(ctx, base);
loc_8241A618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241BC90) {
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
	// bge cr6,0x8241bd24
	if (!ctx.cr6.lt) goto loc_8241BD24;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-30028(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241BCF4:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241bcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BCF4;
loc_8241BD24:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bd40
	if (ctx.cr6.eq) goto loc_8241BD40;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241BD40;
	sub_82413D40(ctx, base);
loc_8241BD40:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bd5c
	if (ctx.cr6.eq) goto loc_8241BD5C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241BD5C;
	sub_82414110(ctx, base);
loc_8241BD5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241EF80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241EF88;
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
	// bne cr6,0x8241efc4
	if (!ctx.cr6.eq) goto loc_8241EFC4;
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
	// li r7,1367
	ctx.r7.s64 = 1367;
	// bl 0x8240e308
	ctx.lr = 0x8241EFC4;
	sub_8240E308(ctx, base);
loc_8241EFC4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241EFD0;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241f034
	if (!ctx.cr6.eq) goto loc_8241F034;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241eff4
	if (ctx.cr6.eq) goto loc_8241EFF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241EFF4;
	sub_8240E930(ctx, base);
loc_8241EFF4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f02c
	if (ctx.cr6.eq) goto loc_8241F02C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f02c
	if (ctx.cr6.eq) goto loc_8241F02C;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x8241F02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F02C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f08c
	goto loc_8241F08C;
loc_8241F034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f050
	if (ctx.cr6.eq) goto loc_8241F050;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F050;
	sub_8240E930(ctx, base);
loc_8241F050:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f088
	if (ctx.cr6.eq) goto loc_8241F088;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f088
	if (ctx.cr6.eq) goto loc_8241F088;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x8241F088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F08C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824212A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421680) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x82421688;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
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
	// bne cr6,0x824216d4
	if (!ctx.cr6.eq) goto loc_824216D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824216D4;
	sub_8240E308(ctx, base);
loc_824216D4:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x824216E0;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82421738
	if (!ctx.cr6.eq) goto loc_82421738;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x82412bf8
	ctx.lr = 0x824216F4;
	sub_82412BF8(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82412bf8
	ctx.lr = 0x82421704;
	sub_82412BF8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82421728
	if (!ctx.cr6.eq) goto loc_82421728;
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8242175c
	goto loc_8242175C;
loc_82421728:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x82421758
	goto loc_82421758;
loc_82421738:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x82412bf8
	ctx.lr = 0x82421740;
	sub_82412BF8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-28716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28716);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82421758:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8242175C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82421768;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8242178c
	if (ctx.cr6.eq) goto loc_8242178C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18560
	ctx.r5.s64 = ctx.r11.s64 + -18560;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8242178C;
	sub_8240E308(ctx, base);
loc_8242178C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824217d0
	if (ctx.cr6.eq) goto loc_824217D0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824217d0
	if (ctx.cr6.eq) goto loc_824217D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241e418
	ctx.lr = 0x824217A8;
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
	// li r6,27
	ctx.r6.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// bctrl 
	ctx.lr = 0x824217D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824217D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82428398) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82427100
	ctx.lr = 0x824283B8;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5612
	ctx.r11.s64 = ctx.r11.s64 + -5612;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1424(r30)
	REX_STORE_U32(r30.u32 + 1424, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82428FD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2112
	ctx.r3.s64 = ctx.r11.s64 + -2112;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824292A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-1664
	ctx.r3.s64 = ctx.r11.s64 + -1664;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824293B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-1424
	ctx.r3.s64 = ctx.r11.s64 + -1424;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824295C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824295D0;
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
	ctx.lr = 0x824295EC;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242960c
	if (ctx.cr0.eq) goto loc_8242960C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824291a0
	ctx.lr = 0x82429608;
	sub_824291A0(ctx, base);
	// b 0x82429610
	goto loc_82429610;
loc_8242960C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429CF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429CF8;
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
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429D18;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429d3c
	if (ctx.cr0.eq) goto loc_82429D3C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427840
	ctx.lr = 0x82429D38;
	sub_82427840(ctx, base);
	// b 0x82429d40
	goto loc_82429D40;
loc_82429D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429D40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C298) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8242C2B8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
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
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8242c2b8
	if (!ctx.cr0.eq) goto loc_8242C2B8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8242c314
	if (!ctx.cr6.eq) goto loc_8242C314;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x824d440c
	ctx.lr = 0x8242C2E4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242bfc8
	ctx.lr = 0x8242C2F0;
	sub_8242BFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242c314
	if (!ctx.cr0.lt) goto loc_8242C314;
loc_8242C2F8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8242c2f8
	if (!ctx.cr0.eq) goto loc_8242C2F8;
loc_8242C314:
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

DEFINE_REX_FUNC(sub_8242F2B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242F2B8;
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
	ctx.lr = 0x8242F2D0;
	sub_8242C298(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8242f2e4
	if (!ctx.cr6.eq) goto loc_8242F2E4;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16387
	r31.u64 = r31.u64 | 16387;
	// b 0x8242f320
	goto loc_8242F320;
loc_8242F2E4:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x8242c3b0
	ctx.lr = 0x8242F2FC;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242f30c
	if (ctx.cr0.eq) goto loc_8242F30C;
	// bl 0x8243d608
	ctx.lr = 0x8242F308;
	sub_8243D608(ctx, base);
	// b 0x8242f310
	goto loc_8242F310;
loc_8242F30C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242F310:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f334
	if (ctx.cr6.eq) goto loc_8242F334;
	// li r31,0
	r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8242F320:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c330
	ctx.lr = 0x8242F328;
	sub_8242C330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8242F334:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8242f320
	goto loc_8242F320;
}

DEFINE_REX_FUNC(sub_824348A8) {
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
	ctx.lr = 0x824348B0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824348E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r25,0
	r25.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// bl 0x824343d0
	ctx.lr = 0x824348F4;
	sub_824343D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82434930
	if (ctx.cr6.eq) goto loc_82434930;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// bgt cr6,0x82434930
	if (ctx.cr6.gt) goto loc_82434930;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243a368
	ctx.lr = 0x82434910;
	sub_8243A368(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82434930
	if (!ctx.cr6.eq) goto loc_82434930;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mulli r11,r11,240
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(240));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r11,-1880
	r28.s64 = ctx.r11.s64 + -1880;
	// b 0x82434a04
	goto loc_82434A04;
loc_82434930:
	// lwz r10,15424(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15424);
	// b 0x82434978
	goto loc_82434978;
loc_82434938:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82434950
	if (ctx.cr6.eq) goto loc_82434950;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82434954
	goto loc_82434954;
loc_82434950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82434954:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bne cr6,0x82434978
	if (!ctx.cr6.eq) goto loc_82434978;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bne cr6,0x82434978
	if (!ctx.cr6.eq) goto loc_82434978;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x82434984
	if (ctx.cr6.eq) goto loc_82434984;
loc_82434978:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82434938
	if (!ctx.cr6.eq) goto loc_82434938;
	// b 0x8243498c
	goto loc_8243498C;
loc_82434984:
	// addic. r28,r11,12
	ctx.xer.ca = ctx.r11.u32 > 4294967283;
	r28.s64 = ctx.r11.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82434a0c
	if (!ctx.cr0.eq) goto loc_82434A0C;
loc_8243498C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x8242c3b0
	ctx.lr = 0x824349A8;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824349c8
	if (ctx.cr0.eq) goto loc_824349C8;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x8242e5a0
	ctx.lr = 0x824349C4;
	sub_8242E5A0(ctx, base);
	// b 0x824349cc
	goto loc_824349CC;
loc_824349C8:
	// li r31,0
	r31.s64 = 0;
loc_824349CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82434a5c
	if (ctx.cr6.eq) goto loc_82434A5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,15400
	ctx.r3.s64 = r30.s64 + 15400;
	// bl 0x8242d110
	ctx.lr = 0x824349E0;
	sub_8242D110(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824349f0
	if (ctx.cr0.eq) goto loc_824349F0;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// b 0x82434a04
	goto loc_82434A04;
loc_824349F0:
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8242d988
	ctx.lr = 0x824349FC;
	sub_8242D988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82434A04;
	sub_82473600(ctx, base);
loc_82434A04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82434a5c
	if (ctx.cr6.eq) goto loc_82434A5C;
loc_82434A0C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82434a34
	if (!ctx.cr6.eq) goto loc_82434A34;
	// bl 0x82434548
	ctx.lr = 0x82434A2C;
	sub_82434548(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82434a5c
	goto loc_82434A5C;
loc_82434A34:
	// bl 0x824346e0
	ctx.lr = 0x82434A38;
	sub_824346E0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82434a5c
	if (ctx.cr0.eq) goto loc_82434A5C;
loc_82434A40:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82434a40
	if (!ctx.cr0.eq) goto loc_82434A40;
loc_82434A5C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82438BB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82438BB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,576(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438c54
	if (ctx.cr6.eq) goto loc_82438C54;
	// lwz r31,568(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82438bf0
	if (ctx.cr6.eq) goto loc_82438BF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82438c5c
	if (ctx.cr6.eq) goto loc_82438C5C;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82438bf8
	goto loc_82438BF8;
loc_82438BF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82438BF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82438c5c
	if (ctx.cr6.eq) goto loc_82438C5C;
	// addi r29,r3,544
	r29.s64 = ctx.r3.s64 + 544;
	// addi r28,r3,180
	r28.s64 = ctx.r3.s64 + 180;
loc_82438C08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82438c24
	if (ctx.cr6.eq) goto loc_82438C24;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82438c28
	goto loc_82438C28;
loc_82438C24:
	// li r30,0
	r30.s64 = 0;
loc_82438C28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82443938
	ctx.lr = 0x82438C30;
	sub_82443938(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x824351e8
	ctx.lr = 0x82438C40;
	sub_824351E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x82438C48;
	sub_82473600(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82438c08
	if (!ctx.cr6.eq) goto loc_82438C08;
	// b 0x82438c5c
	goto loc_82438C5C;
loc_82438C54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82438C5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8243B490) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82444298
	ctx.lr = 0x8243B4AC;
	sub_82444298(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10960
	ctx.r10.s64 = ctx.r10.s64 + 10960;
	// addi r9,r9,10720
	ctx.r9.s64 = ctx.r9.s64 + 10720;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8243C108) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8243c1f8
	if (!ctx.cr6.gt) goto loc_8243C1F8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r30,16
	r30.s64 = 16;
	// li r31,32
	r31.s64 = 32;
loc_8243C130:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r9,r10,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8243c1bc
	if (ctx.cr0.eq) goto loc_8243C1BC;
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r10,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// ble 0x8243c174
	if (!ctx.cr0.gt) goto loc_8243C174;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8243C168:
	// dcbf r9,r8
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8243c168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243C168;
loc_8243C174:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8243c18c
	if (ctx.cr6.eq) goto loc_8243C18C;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
loc_8243C18C:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8243c1a4
	if (ctx.cr6.eq) goto loc_8243C1A4;
	// lvx128 v63,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r30
	ea = (ctx.r7.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
loc_8243C1A4:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8243c1bc
	if (ctx.cr6.eq) goto loc_8243C1BC;
	// lvx128 v63,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
loc_8243C1BC:
	// lhz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addis r9,r9,8187
	ctx.r9.s64 = ctx.r9.s64 + 536543232;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r9,-31152
	ctx.r9.s64 = ctx.r9.s64 + -31152;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r11,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243c130
	if (ctx.cr6.lt) goto loc_8243C130;
loc_8243C1F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82441498) {
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
	ctx.lr = 0x824414A0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824414DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// bne cr6,0x824414ec
	if (!ctx.cr6.eq) goto loc_824414EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824414EC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r31,68(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x8245f1e0
	ctx.lr = 0x82441534;
	sub_8245F1E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82441548
	if (ctx.cr0.lt) goto loc_82441548;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82441548:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244155C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82443620) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82443628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82443660;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82444AA8) {
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
	ctx.lr = 0x82444AB0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// ori r21,r10,61441
	r21.u64 = ctx.r10.u64 | 61441;
	// mr r23,r25
	r23.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82444d40
	if (!ctx.cr6.gt) goto loc_82444D40;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r26,r25
	r26.u64 = r25.u64;
	// ori r24,r10,14
	r24.u64 = ctx.r10.u64 | 14;
	// addi r22,r11,7712
	r22.s64 = ctx.r11.s64 + 7712;
loc_82444AF0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82444d7c
	if (ctx.cr6.lt) goto loc_82444D7C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82444B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82444b38
	if (!ctx.cr6.eq) goto loc_82444B38;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82444B38:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82444b68
	if (!ctx.cr6.eq) goto loc_82444B68;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444b64
	if (ctx.cr6.eq) goto loc_82444B64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82444b68
	goto loc_82444B68;
loc_82444B64:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
loc_82444B68:
	// lwz r7,168(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82444bb0
	if (!ctx.cr6.eq) goto loc_82444BB0;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444b8c
	if (ctx.cr6.eq) goto loc_82444B8C;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82444bb0
	goto loc_82444BB0;
loc_82444B8C:
	// lwz r7,172(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82444bb0
	if (!ctx.cr6.eq) goto loc_82444BB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82444BB0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// bl 0x82443770
	ctx.lr = 0x82444BD4;
	sub_82443770(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82444d24
	if (ctx.cr0.lt) goto loc_82444D24;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8242c3b0
	ctx.lr = 0x82444BF4;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82444c10
	if (ctx.cr0.eq) goto loc_82444C10;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// b 0x82444c14
	goto loc_82444C14;
loc_82444C10:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82444C14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82444c68
	if (ctx.cr6.eq) goto loc_82444C68;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444c30
	if (ctx.cr6.eq) goto loc_82444C30;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444c34
	goto loc_82444C34;
loc_82444C30:
	// lwz r7,100(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 100);
loc_82444C34:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// bl 0x82444180
	ctx.lr = 0x82444C4C;
	sub_82444180(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82444cbc
	if (ctx.cr0.lt) goto loc_82444CBC;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82438e18
	ctx.lr = 0x82444C60;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82444c70
	if (!ctx.cr0.eq) goto loc_82444C70;
loc_82444C68:
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x82444cbc
	goto loc_82444CBC;
loc_82444C70:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82444ca0
	if (ctx.cr6.eq) goto loc_82444CA0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82444cbc
	if (ctx.cr0.lt) goto loc_82444CBC;
loc_82444CA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,120
	ctx.r3.s64 = r28.s64 + 120;
	// bl 0x82438e18
	ctx.lr = 0x82444CAC;
	sub_82438E18(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r31,r11,r24
	r31.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82444d24
	if (!ctx.cr0.lt) goto loc_82444D24;
loc_82444CBC:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444cd4
	if (ctx.cr6.eq) goto loc_82444CD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444cd8
	goto loc_82444CD8;
loc_82444CD4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82444CD8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82444ce4
	if (!ctx.cr6.eq) goto loc_82444CE4;
	// bl 0x82435630
	ctx.lr = 0x82444CE4;
	sub_82435630(ctx, base);
loc_82444CE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82444cfc
	if (ctx.cr6.eq) goto loc_82444CFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82444240
	ctx.lr = 0x82444CF4;
	sub_82444240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82473600
	ctx.lr = 0x82444CFC;
	sub_82473600(ctx, base);
loc_82444CFC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444D18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82444D24;
	sub_8242C888(ctx, base);
loc_82444D24:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82444af0
	if (ctx.cr6.lt) goto loc_82444AF0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82444d7c
	if (ctx.cr6.lt) goto loc_82444D7C;
loc_82444D40:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lwz r5,116(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444d58
	if (ctx.cr6.eq) goto loc_82444D58;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444d5c
	goto loc_82444D5C;
loc_82444D58:
	// lwz r4,100(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 100);
loc_82444D5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82444d84
	if (!ctx.cr0.lt) goto loc_82444D84;
loc_82444D7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824448f0
	ctx.lr = 0x82444D84;
	sub_824448F0(ctx, base);
loc_82444D84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82456218) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82456224
	if (!ctx.cr6.eq) goto loc_82456224;
	// b 0x82455698
	sub_82455698(ctx, base);
	return;
loc_82456224:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82456230
	if (!ctx.cr6.eq) goto loc_82456230;
	// b 0x82455e38
	sub_82455E38(ctx, base);
	return;
loc_82456230:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8245623c
	if (!ctx.cr6.eq) goto loc_8245623C;
	// b 0x82455db8
	sub_82455DB8(ctx, base);
	return;
loc_8245623C:
	// b 0x82456108
	sub_82456108(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824563E0) {
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
	ctx.lr = 0x824563E8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456400;
	sub_822D5870(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r7,r30,1
	ctx.r7.s64 = r30.s64 + 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,36
	ctx.r8.u64 = ctx.r11.u64 | 36;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfsx f31,r30,r8
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r31,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r31.u32);
	// stfs f31,16(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f31,20(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456448;
	sub_822D5870(ctx, base);
	// addis r28,r30,1
	r28.s64 = r30.s64 + 65536;
	// stfs f31,2088(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2088, temp.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stfs f31,2092(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2092, temp.u32);
	// addi r28,r28,2208
	r28.s64 = r28.s64 + 2208;
	// stfs f31,2096(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2096, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456470;
	sub_822D5870(ctx, base);
	// lwz r6,520(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 520);
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// stfs f31,532(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 532, temp.u32);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r31,512(r28)
	REX_STORE_U32(r28.u32 + 512, r31.u32);
	// addi r29,r29,2752
	r29.s64 = r29.s64 + 2752;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,516(r28)
	REX_STORE_U32(r28.u32 + 516, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x824564A0;
	sub_822D5870(ctx, base);
	// addis r28,r30,1
	r28.s64 = r30.s64 + 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stfs f31,8232(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8232, temp.u32);
	// addi r28,r28,11008
	r28.s64 = r28.s64 + 11008;
	// stfs f31,8236(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8236, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,8240(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8240, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,8192(r29)
	REX_STORE_U32(r29.u32 + 8192, r31.u32);
	// bl 0x822d5870
	ctx.lr = 0x824564C8;
	sub_822D5870(ctx, base);
	// lwz r9,1032(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 1032);
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// stfs f31,1044(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 1044, temp.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r31,1024(r28)
	REX_STORE_U32(r28.u32 + 1024, r31.u32);
	// addi r29,r29,12064
	r29.s64 = r29.s64 + 12064;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,1028(r28)
	REX_STORE_U32(r28.u32 + 1028, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x824564F8;
	sub_822D5870(ctx, base);
	// lwz r6,2056(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 2056);
	// addis r28,r30,1
	r28.s64 = r30.s64 + 65536;
	// stfs f31,2068(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2068, temp.u32);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// addi r28,r28,14144
	r28.s64 = r28.s64 + 14144;
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,2052(r29)
	REX_STORE_U32(r29.u32 + 2052, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456528;
	sub_822D5870(ctx, base);
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// stfs f31,4116(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 4116, temp.u32);
	// addi r29,r29,18272
	r29.s64 = r29.s64 + 18272;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,4120(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 4120, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,4096(r28)
	REX_STORE_U32(r28.u32 + 4096, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245654C;
	sub_822D5870(ctx, base);
	// lwz r9,2056(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 2056);
	// addis r28,r30,1
	r28.s64 = r30.s64 + 65536;
	// stfs f31,2068(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2068, temp.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// addi r28,r28,20352
	r28.s64 = r28.s64 + 20352;
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,2052(r29)
	REX_STORE_U32(r29.u32 + 2052, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245657C;
	sub_822D5870(ctx, base);
	// lwz r9,2056(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// addis r6,r30,1
	ctx.r6.s64 = r30.s64 + 65536;
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// addi r6,r6,22432
	ctx.r6.s64 = ctx.r6.s64 + 22432;
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// addi r11,r11,22452
	ctx.r11.s64 = ctx.r11.s64 + 22452;
	// addi r10,r10,22480
	ctx.r10.s64 = ctx.r10.s64 + 22480;
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// addi r29,r29,22512
	r29.s64 = r29.s64 + 22512;
	// stw r7,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r7.u32);
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// stfs f31,16(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,0(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,20(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x824565E8;
	sub_822D5870(ctx, base);
	// addis r6,r30,2
	ctx.r6.s64 = r30.s64 + 131072;
	// stfs f31,16404(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16404, temp.u32);
	// addis r28,r30,2
	r28.s64 = r30.s64 + 131072;
	// stfs f31,16408(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16408, temp.u32);
	// addi r6,r6,-26608
	ctx.r6.s64 = ctx.r6.s64 + -26608;
	// stw r31,16384(r29)
	REX_STORE_U32(r29.u32 + 16384, r31.u32);
	// addi r28,r28,-26576
	r28.s64 = r28.s64 + -26576;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f31,16(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456620;
	sub_822D5870(ctx, base);
	// lwz r11,2056(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// addis r29,r30,2
	r29.s64 = r30.s64 + 131072;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// addi r29,r29,-24496
	r29.s64 = r29.s64 + -24496;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r9.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456650;
	sub_822D5870(ctx, base);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// addis r7,r30,2
	ctx.r7.s64 = r30.s64 + 131072;
	// stfs f31,2068(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2068, temp.u32);
	// addis r6,r30,2
	ctx.r6.s64 = r30.s64 + 131072;
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// addis r28,r30,2
	r28.s64 = r30.s64 + 131072;
	// addi r8,r8,-22416
	ctx.r8.s64 = ctx.r8.s64 + -22416;
	// addi r7,r7,-22396
	ctx.r7.s64 = ctx.r7.s64 + -22396;
	// addi r6,r6,-22368
	ctx.r6.s64 = ctx.r6.s64 + -22368;
	// addi r28,r28,-22336
	r28.s64 = r28.s64 + -22336;
	// lwz r11,2056(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2056);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// stw r9,2052(r29)
	REX_STORE_U32(r29.u32 + 2052, ctx.r9.u32);
	// stfs f31,0(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f31,4(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f31,16(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f31,0(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,24(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f31,20(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x824566BC;
	sub_822D5870(ctx, base);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// stfs f31,16404(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 16404, temp.u32);
	// addis r29,r30,2
	r29.s64 = r30.s64 + 131072;
	// stfs f31,16408(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 16408, temp.u32);
	// addi r8,r8,-5920
	ctx.r8.s64 = ctx.r8.s64 + -5920;
	// stw r31,16384(r28)
	REX_STORE_U32(r28.u32 + 16384, r31.u32);
	// addi r29,r29,-5888
	r29.s64 = r29.s64 + -5888;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,0(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f31,4(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f31,16(r8)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x824566F4;
	sub_822D5870(ctx, base);
	// lwz r7,8200(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8200);
	// addis r28,r30,2
	r28.s64 = r30.s64 + 131072;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stfs f31,8212(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8212, temp.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r31,8192(r29)
	REX_STORE_U32(r29.u32 + 8192, r31.u32);
	// addi r28,r28,2336
	r28.s64 = r28.s64 + 2336;
	// clrlwi r11,r6,21
	ctx.r11.u64 = ctx.r6.u32 & 0x7FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8196(r29)
	REX_STORE_U32(r29.u32 + 8196, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456724;
	sub_822D5870(ctx, base);
	// lwz r10,8200(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8200);
	// addis r29,r30,2
	r29.s64 = r30.s64 + 131072;
	// stfs f31,8216(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8216, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,8192(r28)
	REX_STORE_U32(r28.u32 + 8192, r31.u32);
	// addi r29,r29,10560
	r29.s64 = r29.s64 + 10560;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8196(r28)
	REX_STORE_U32(r28.u32 + 8196, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456754;
	sub_822D5870(ctx, base);
	// lwz r7,8200(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8200);
	// addis r28,r30,2
	r28.s64 = r30.s64 + 131072;
	// stfs f31,8212(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8212, temp.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r31,8192(r29)
	REX_STORE_U32(r29.u32 + 8192, r31.u32);
	// addi r28,r28,18784
	r28.s64 = r28.s64 + 18784;
	// clrlwi r11,r6,21
	ctx.r11.u64 = ctx.r6.u32 & 0x7FF;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8196(r29)
	REX_STORE_U32(r29.u32 + 8196, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456784;
	sub_822D5870(ctx, base);
	// lwz r10,4104(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4104);
	// addis r29,r30,2
	r29.s64 = r30.s64 + 131072;
	// stfs f31,4116(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 4116, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,4096(r28)
	REX_STORE_U32(r28.u32 + 4096, r31.u32);
	// addi r29,r29,22912
	r29.s64 = r29.s64 + 22912;
	// clrlwi r8,r9,22
	ctx.r8.u64 = ctx.r9.u32 & 0x3FF;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,4100(r28)
	REX_STORE_U32(r28.u32 + 4100, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x824567B4;
	sub_822D5870(ctx, base);
	// addis r7,r30,3
	ctx.r7.s64 = r30.s64 + 196608;
	// addi r7,r7,-26208
	ctx.r7.s64 = ctx.r7.s64 + -26208;
	// addis r28,r30,3
	r28.s64 = r30.s64 + 196608;
	// stfs f31,16404(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16404, temp.u32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stfs f31,16408(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16408, temp.u32);
	// addi r28,r28,-26176
	r28.s64 = r28.s64 + -26176;
	// stw r31,16384(r29)
	REX_STORE_U32(r29.u32 + 16384, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,0(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,20(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x824567EC;
	sub_822D5870(ctx, base);
	// lwz r6,8200(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8200);
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// stfs f31,8212(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8212, temp.u32);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r31,8192(r28)
	REX_STORE_U32(r28.u32 + 8192, r31.u32);
	// addi r29,r29,-17952
	r29.s64 = r29.s64 + -17952;
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8196(r28)
	REX_STORE_U32(r28.u32 + 8196, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245681C;
	sub_822D5870(ctx, base);
	// lwz r9,8200(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8200);
	// addis r28,r30,3
	r28.s64 = r30.s64 + 196608;
	// stfs f31,8216(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8216, temp.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r31,8192(r29)
	REX_STORE_U32(r29.u32 + 8192, r31.u32);
	// addi r28,r28,-9728
	r28.s64 = r28.s64 + -9728;
	// clrlwi r7,r8,21
	ctx.r7.u64 = ctx.r8.u32 & 0x7FF;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,8196(r29)
	REX_STORE_U32(r29.u32 + 8196, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245684C;
	sub_822D5870(ctx, base);
	// lwz r6,8200(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8200);
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// stfs f31,8212(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8212, temp.u32);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r31,8192(r28)
	REX_STORE_U32(r28.u32 + 8192, r31.u32);
	// addi r29,r29,-1504
	r29.s64 = r29.s64 + -1504;
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8196(r28)
	REX_STORE_U32(r28.u32 + 8196, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8245687C;
	sub_822D5870(ctx, base);
	// lwz r9,4104(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4104);
	// addis r28,r30,3
	r28.s64 = r30.s64 + 196608;
	// stfs f31,4116(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4116, temp.u32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r31,4096(r29)
	REX_STORE_U32(r29.u32 + 4096, r31.u32);
	// addi r28,r28,2624
	r28.s64 = r28.s64 + 2624;
	// clrlwi r7,r8,22
	ctx.r7.u64 = ctx.r8.u32 & 0x3FF;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,4100(r29)
	REX_STORE_U32(r29.u32 + 4100, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x824568AC;
	sub_822D5870(ctx, base);
	// addis r6,r30,3
	ctx.r6.s64 = r30.s64 + 196608;
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// stfs f31,16404(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 16404, temp.u32);
	// addi r6,r6,19040
	ctx.r6.s64 = ctx.r6.s64 + 19040;
	// stfs f31,16408(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 16408, temp.u32);
	// addi r29,r29,19072
	r29.s64 = r29.s64 + 19072;
	// stw r31,16384(r28)
	REX_STORE_U32(r28.u32 + 16384, r31.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f31,20(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x824568E4;
	sub_822D5870(ctx, base);
	// addis r30,r30,3
	r30.s64 = r30.s64 + 196608;
	// stfs f31,2068(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2068, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// addi r30,r30,21152
	r30.s64 = r30.s64 + 21152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,2056(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2056);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// stw r9,2052(r29)
	REX_STORE_U32(r29.u32 + 2052, ctx.r9.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456914;
	sub_822D5870(ctx, base);
	// lwz r8,2056(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2056);
	// stfs f31,2068(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 2068, temp.u32);
	// stw r31,2048(r30)
	REX_STORE_U32(r30.u32 + 2048, r31.u32);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// clrlwi r6,r7,23
	ctx.r6.u64 = ctx.r7.u32 & 0x1FF;
	// stw r6,2052(r30)
	REX_STORE_U32(r30.u32 + 2052, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8246E1F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8246E200;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,516
	r31.s64 = ctx.r3.s64 + 516;
	// lwz r11,816(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246e290
	if (!ctx.cr6.eq) goto loc_8246E290;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246E230;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246e2ec
	if (ctx.cr6.lt) goto loc_8246E2EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246e264
	if (!ctx.cr6.eq) goto loc_8246E264;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r11,8016
	ctx.r8.s64 = ctx.r11.s64 + 8016;
	// addi r7,r10,10032
	ctx.r7.s64 = ctx.r10.s64 + 10032;
	// addi r6,r9,10520
	ctx.r6.s64 = ctx.r9.s64 + 10520;
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x8246e280
	goto loc_8246E280;
loc_8246E264:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r11,8968
	ctx.r8.s64 = ctx.r11.s64 + 8968;
	// addi r7,r10,11008
	ctx.r7.s64 = ctx.r10.s64 + 11008;
	// addi r6,r9,11552
	ctx.r6.s64 = ctx.r9.s64 + 11552;
	// li r5,28
	ctx.r5.s64 = 28;
loc_8246E280:
	// stw r8,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// stw r7,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r7.u32);
	// stw r6,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r6.u32);
	// sth r5,314(r30)
	REX_STORE_U16(r30.u32 + 314, ctx.r5.u16);
loc_8246E290:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8246E2C0:
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8246e2c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246E2C0;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,-9104
	ctx.r10.s64 = ctx.r11.s64 + -9104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8246E2EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8246E2EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82472710) {
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
	ctx.lr = 0x82472718;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247294c
	if (ctx.cr6.eq) goto loc_8247294C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247294c
	if (ctx.cr6.eq) goto loc_8247294C;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x82472944
	if (ctx.cr6.lt) goto loc_82472944;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// clrlwi r17,r7,16
	r17.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r18,r11,-1840
	r18.s64 = ctx.r11.s64 + -1840;
	// addi r20,r10,-1868
	r20.s64 = ctx.r10.s64 + -1868;
	// addi r19,r9,-1896
	r19.s64 = ctx.r9.s64 + -1896;
loc_82472750:
	// cmplw cr6,r4,r17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r17.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82472760
	if (ctx.cr6.lt) goto loc_82472760;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82472760:
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
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbzu r29,1(r3)
	ea = 1 + ctx.r3.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lwzx r22,r8,r19
	r22.u64 = REX_LOAD_U32(ctx.r8.u32 + r19.u32);
	// lwzx r21,r8,r20
	r21.u64 = REX_LOAD_U32(ctx.r8.u32 + r20.u32);
	// lwzx r24,r6,r19
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + r19.u32);
	// lwzx r23,r6,r20
	r23.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r6,r11,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
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
	// lbz r30,1(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r28,r30,8
	r28.u64 = __builtin_rotateleft32(r30.u32, 8);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// srawi r28,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r28.s64 = ctx.r11.s32 >> 8;
	// srawi r26,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r26.s64 = ctx.r10.s32 >> 8;
	// addi r30,r28,128
	r30.s64 = r28.s64 + 128;
	// addi r29,r26,128
	r29.s64 = r26.s64 + 128;
	// stb r30,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r30.u8);
	// srawi r27,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r27.s64 = ctx.r9.s32 >> 8;
	// stbu r29,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r5.u32 = ea;
	// srawi r28,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	r28.s64 = ctx.r8.s32 >> 8;
	// addi r30,r27,128
	r30.s64 = r27.s64 + 128;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stbu r30,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r5.u32 = ea;
	// stbu r28,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r28.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x8247293c
	if (ctx.cr0.eq) goto loc_8247293C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8247282C:
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r29,r21
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mullw r30,r9,r22
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
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
	// ble cr6,0x82472870
	if (!ctx.cr6.gt) goto loc_82472870;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8247287c
	goto loc_8247287C;
loc_82472870:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8247287c
	if (!ctx.cr6.lt) goto loc_8247287C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_8247287C:
	// rlwinm r30,r29,2,26,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r18
	r30.u64 = REX_LOAD_U32(r30.u32 + r18.u32);
	// mullw r6,r30,r6
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// srawi r28,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r28.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// bge cr6,0x82472898
	if (!ctx.cr6.lt) goto loc_82472898;
	// li r28,16
	r28.s64 = 16;
loc_82472898:
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// extsb r30,r6
	r30.s64 = ctx.r6.s8;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// mullw r6,r8,r24
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// stb r7,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x824728f4
	if (!ctx.cr6.gt) goto loc_824728F4;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x82472900
	goto loc_82472900;
loc_824728F4:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x82472900
	if (!ctx.cr6.lt) goto loc_82472900;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_82472900:
	// rlwinm r11,r30,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// srawi r31,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r31.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x8247291c
	if (!ctx.cr6.lt) goto loc_8247291C;
	// li r31,16
	r31.s64 = 16;
loc_8247291C:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x8247282c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247282C;
loc_8247293C:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bge cr6,0x82472750
	if (!ctx.cr6.lt) goto loc_82472750;
loc_82472944:
	// subf r3,r16,r5
	ctx.r3.u64 = ctx.r5.u64 - r16.u64;
	// b 0x822d4ea8
	return;
loc_8247294C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8247C0E8) {
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
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x8247c1d4
	if (ctx.cr6.eq) goto loc_8247C1D4;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8247c1d4
	if (!ctx.cr6.eq) goto loc_8247C1D4;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247c1a8
	if (ctx.cr6.eq) goto loc_8247C1A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247c1a8
	if (ctx.cr6.eq) goto loc_8247C1A8;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8247b8e8
	ctx.lr = 0x8247C15C;
	sub_8247B8E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c178
	if (ctx.cr6.eq) goto loc_8247C178;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8247c19c
	if (ctx.cr6.eq) goto loc_8247C19C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8247c190
	if (ctx.cr6.gt) goto loc_8247C190;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8247C178:
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
loc_8247C190:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8247c178
	goto loc_8247C178;
loc_8247C19C:
	// lis r31,-32719
	r31.s64 = -2144272384;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// b 0x8247c178
	goto loc_8247C178;
loc_8247C1A8:
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8247b620
	ctx.lr = 0x8247C1B0;
	sub_8247B620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8247c178
	if (!ctx.cr6.eq) goto loc_8247C178;
	// lis r3,-32719
	ctx.r3.s64 = -2144272384;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
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
loc_8247C1D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

DEFINE_REX_FUNC(sub_8247F77C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822dcd80
	ctx.lr = 0x8247F7AC;
	sub_822DCD80(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r30,r10,-11328
	ctx.r30.s64 = ctx.r10.s64 + -11328;
	// addi r10,r11,-11324
	ctx.r10.s64 = ctx.r11.s64 + -11324;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82484030) {
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
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,144
	ctx.r9.s64 = 144;
	// add r2,r5,r8
	ctx.r2.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v14,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r12,r6,1,0,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvx128 v2,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v3,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lvx128 v12,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v15,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r2,r10
	ctx.r2.u64 = ctx.r2.u64 + ctx.r10.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v6,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// lvx128 v7,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v17,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v18,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// lvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// lvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v1,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// lvx128 v18,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v2,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// lvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v18
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vaddshs v27,v4,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vpkshus v25,v25,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v28,v5,v20
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v21,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 + ctx.r12.u64;
	// lvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v29,v6,v21
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvewx v25,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v30,v7,v22
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx v25,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v31,v8,v23
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx v26,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v26,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r12,r8
	ctx.r10.u64 = ctx.r12.u64 + ctx.r8.u64;
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
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

DEFINE_REX_FUNC(sub_824A77C0) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
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
	// bl 0x824a6a08
	ctx.lr = 0x824A77FC;
	sub_824A6A08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A80C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824A80C8;
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v13,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// vsubshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6648
	ctx.lr = 0x824A8108;
	sub_824A6648(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7318
	ctx.lr = 0x824A8120;
	sub_824A7318(ctx, base);
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

DEFINE_REX_FUNC(sub_824A9408) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	ctx.lr = 0x824A9410;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,48
	r30.s64 = 48;
	// lvx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	r29.s64 = 96;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,144
	r28.s64 = 144;
	// lvx128 v58,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v57,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v61,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v60,v56,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v59,v55,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v12,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v62,v54,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v24,v0,v29
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v25,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v28,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v18,v22,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v21,v9
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v16,v20,v12
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v19,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824a95a0
	if (!ctx.cr6.eq) goto loc_824A95A0;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,192
	r30.s64 = 192;
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,240
	r29.s64 = 240;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	r28.s64 = 288;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,336
	r27.s64 = 336;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v46,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v47,v46,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
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
	// vadduhm v27,v30,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v26,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v28,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v21,v25,v11
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v20,v24,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v23,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v0
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v21,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824A95A0:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// bne cr6,0x824a9620
	if (!ctx.cr6.eq) goto loc_824A9620;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824a9620
	if (!ctx.cr6.gt) goto loc_824A9620;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r31,r10,r4
	r31.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r6,-48
	ctx.r9.s64 = ctx.r6.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824A95DC:
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbzux r6,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824a95dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A95DC;
loc_824A9620:
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B0D48) {
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
	ctx.lr = 0x824B0D50;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x824b0e9c
	if (ctx.cr6.gt) goto loc_824B0E9C;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b0fd4
	if (!ctx.cr6.gt) goto loc_824B0FD4;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r3,-32
	ctx.r3.s64 = -32;
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// li r9,-96
	ctx.r9.s64 = -96;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,48
	ctx.r7.s64 = 48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// li r31,-80
	r31.s64 = -80;
	// li r25,64
	r25.s64 = 64;
	// li r26,16
	r26.s64 = 16;
loc_824B0DA8:
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lvx128 v11,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lvx128 v63,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// lvx128 v61,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v6,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v5,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v4,v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v4,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v30,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v24,v28,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v27,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vpkshus128 v58,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r9,-96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v58,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r29,-72(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stwx r29,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x824b0e7c
	if (!ctx.cr6.eq) goto loc_824B0E7C;
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// lwz r7,-84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r29,-76(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r28,-68(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stwx r7,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stwx r28,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
loc_824B0E7C:
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// li r9,-96
	ctx.r9.s64 = -96;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,48
	ctx.r7.s64 = 48;
	// bdnz 0x824b0da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B0DA8;
	// b 0x822d4ecc
	return;
loc_824B0E9C:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// li r8,-96
	ctx.r8.s64 = -96;
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r31,-80
	r31.s64 = -80;
	// li r3,-32
	ctx.r3.s64 = -32;
	// li r25,64
	r25.s64 = 64;
	// li r26,16
	r26.s64 = 16;
	// li r27,-16
	r27.s64 = -16;
	// li r28,32
	r28.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// li r30,-64
	r30.s64 = -64;
loc_824B0ED4:
	// lvx128 v12,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v8,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v5,v8,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 14));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v9,v12,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v56,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v4,v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 14));
	// lvx128 v10,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v55,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// lvx128 v9,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v12,v11,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// lvx128 v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v7
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v54,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v31,v6,v10,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v8,v10,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vslh v23,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v30,v5,v9,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// vaddshs v28,v12,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v4,v9,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vslh v22,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v6
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// vaddshs v27,v8,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v30,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v4,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v21,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v23,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v22,v1
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v12,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v11,v20,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v10,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v7,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v6,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v51,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v50,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvx128 v50,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x824b0ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B0ED4;
loc_824B0FD4:
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824D17C0) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8120
	ctx.r11.s64 = r31.s64 + 8120;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D17E0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21596
	ctx.r11.s64 = ctx.r11.s64 + 21596;
	// stw r11,8120(r31)
	REX_STORE_U32(r31.u32 + 8120, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1A00) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8480
	ctx.r11.s64 = r31.s64 + 8480;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1A20;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21668
	ctx.r11.s64 = ctx.r11.s64 + 21668;
	// stw r11,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1C80) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8884
	ctx.r11.s64 = r31.s64 + 8884;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1CA0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21748
	ctx.r11.s64 = ctx.r11.s64 + 21748;
	// stw r11,8884(r31)
	REX_STORE_U32(r31.u32 + 8884, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1E40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-28756
	ctx.r9.s64 = ctx.r11.s64 + -28756;
	// addi r11,r10,-22960
	ctx.r11.s64 = ctx.r10.s64 + -22960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2020) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26680
	ctx.r9.s64 = ctx.r11.s64 + -26680;
	// addi r11,r10,-22336
	ctx.r11.s64 = ctx.r10.s64 + -22336;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2308) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r3,r11,24016
	ctx.r3.s64 = ctx.r11.s64 + 24016;
	// b 0x82114bb8
	sub_82114BB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D23E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14168
	ctx.r3.s64 = ctx.r11.s64 + 14168;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2900) {
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
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// bl 0x82174348
	ctx.lr = 0x824D2918;
	sub_82174348(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// bl 0x822d5848
	ctx.lr = 0x824D2924;
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

DEFINE_REX_FUNC(sub_824D2BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1588
	ctx.r10.s64 = 1588;
	// addi r11,r11,3472
	ctx.r11.s64 = ctx.r11.s64 + 3472;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824D2BE0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d2be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2BE0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2FE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D30B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15664
	ctx.r3.s64 = ctx.r11.s64 + 15664;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D30E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D31C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3298) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3310) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,7284
	ctx.r3.s64 = ctx.r11.s64 + 7284;
	// b 0x82412f60
	sub_82412F60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3608) {
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
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,26664
	r31.s64 = ctx.r11.s64 + 26664;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x822d5870
	ctx.lr = 0x824D3630;
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
	ctx.lr = 0x824D3644;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D3654;
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

DEFINE_REX_FUNC(sub_824D3D30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E88) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3F50) {
	REX_FUNC_PROLOGUE();
	// .long 0x200020a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D40A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000191
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4200) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100c5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4380) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010130
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4500) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4680) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4800) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000004
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4980) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010353
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B00) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

