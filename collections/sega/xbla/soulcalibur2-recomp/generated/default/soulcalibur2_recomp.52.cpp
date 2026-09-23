#include "soulcalibur2_funcs.52.h"

DEFINE_REX_FUNC(sub_820E2148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6E20) {
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
	ctx.lr = 0x820E6E28;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
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
	// stwu r1,-8464(r1)
	ea = -8464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,8500(r1)
	REX_STORE_U32(ctx.r1.u32 + 8500, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,8504
	ctx.r10.s64 = ctx.r1.s64 + 8504;
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
	ctx.lr = 0x820E6E78;
	sub_822D5598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e6998
	ctx.lr = 0x820E6E84;
	sub_820E6998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820e6ecc
	if (!ctx.cr0.gt) goto loc_820E6ECC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lis r29,-32177
	r29.s64 = -2108751872;
loc_820E6E9C:
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lwzu r5,4(r30)
	ea = 4 + r30.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eaf80
	ctx.lr = 0x820E6EBC;
	sub_821EAF80(ctx, base);
	// lfs f0,-700(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bne 0x820e6e9c
	if (!ctx.cr0.eq) goto loc_820E6E9C;
loc_820E6ECC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,8464
	ctx.r1.s64 = ctx.r1.s64 + 8464;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820ED1B8) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f2850
	ctx.lr = 0x820ED1E8;
	sub_820F2850(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x820ed24c
	if (!ctx.cr6.eq) goto loc_820ED24C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4900);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820ed24c
	if (!ctx.cr6.eq) goto loc_820ED24C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x820ed218
	if (!ctx.cr6.gt) goto loc_820ED218;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_820ED218:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820ed22c
	if (!ctx.cr6.lt) goto loc_820ED22C;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_820ED22C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82202560
	ctx.lr = 0x820ED23C;
	sub_82202560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x82202560
	ctx.lr = 0x820ED24C;
	sub_82202560(ctx, base);
loc_820ED24C:
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

DEFINE_REX_FUNC(sub_820F1048) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 500);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820f1084
	if (ctx.cr6.lt) goto loc_820F1084;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x820f0370
	sub_820F0370(ctx, base);
	return;
loc_820F1084:
	// b 0x820ec540
	sub_820EC540(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F2828) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82200428
	sub_82200428(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F28E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,18116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820f2900
	if (ctx.cr6.gt) goto loc_820F2900;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f2938
	goto loc_820F2938;
loc_820F2900:
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,136(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r9,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lfs f0,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
loc_820F2938:
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4B90) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x820F4B98;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f30
	ctx.lr = 0x820F4BA0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8572);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f4d14
	if (!ctx.cr6.eq) goto loc_820F4D14;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8572(r3)
	REX_STORE_U32(ctx.r3.u32 + 8572, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4d14
	if (ctx.cr6.eq) goto loc_820F4D14;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,10316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10316);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f2,10312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10312);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10308);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f26,f30
	f26.f64 = f30.f64;
	// bl 0x820e0ec8
	ctx.lr = 0x820F4BE8;
	sub_820E0EC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f29,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,10484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f0,10488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f0,10492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f29,252(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f1,10268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0778
	ctx.lr = 0x820F4C1C;
	sub_820E0778(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,10484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,10488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r10,1872
	r28.s64 = ctx.r10.s64 + 1872;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,10492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// lfs f27,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f27.f64 = double(temp.f32);
	// lfs f28,16372(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16372);
	f28.f64 = double(temp.f32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r29,r31,8536
	r29.s64 = r31.s64 + 8536;
	// lfs f31,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f31.f64 = double(temp.f32);
	// stw r27,9340(r31)
	REX_STORE_U32(r31.u32 + 9340, r27.u32);
	// stfs f29,188(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_820F4C6C:
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f1,f0,f28,f27
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f27.f64)));
	// bl 0x820e00c0
	ctx.lr = 0x820F4C94;
	sub_820E00C0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x820F4CC4;
	sub_820E1DF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211ac68
	ctx.lr = 0x820F4CCC;
	sub_8211AC68(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x820f4cf8
	if (ctx.cr6.gt) goto loc_820F4CF8;
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(f26.f64, ctx.f0.f64);
	// ble cr6,0x820f4ce4
	if (!ctx.cr6.gt) goto loc_820F4CE4;
	// fmr f26,f0
	f26.f64 = ctx.f0.f64;
loc_820F4CE4:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,9340(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9340);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,9340(r31)
	REX_STORE_U32(r31.u32 + 9340, ctx.r11.u32);
loc_820F4CF8:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r11,r28,32
	ctx.r11.s64 = r28.s64 + 32;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f4c6c
	if (ctx.cr6.lt) goto loc_820F4C6C;
	// stfs f26,8568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 8568, temp.u32);
loc_820F4D14:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f7c
	ctx.lr = 0x820F4D20;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820FEFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r10,528
	ctx.r11.s64 = ctx.r10.s64 + 528;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r5,2
	ctx.r5.s64 = 2;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lbz r6,14(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 14);
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r5,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r5.u8);
	// subfic r8,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r8.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// ori r7,r6,64
	ctx.r7.u64 = ctx.r6.u64 | 64;
	// stb r11,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stw r10,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stb r8,53(r3)
	REX_STORE_U8(ctx.r3.u32 + 53, ctx.r8.u8);
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r5,55(r3)
	REX_STORE_U8(ctx.r3.u32 + 55, ctx.r5.u8);
	// stb r9,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r9.u8);
	// stb r7,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r7.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82102518) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f24
	ctx.lr = 0x8210252C;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// std r11,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// lfd f0,272(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne cr6,0x821025e8
	if (!ctx.cr6.eq) goto loc_821025E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
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
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x82102654
	goto loc_82102654;
loc_821025E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_82102654:
	// fadds f26,f28,f5
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f28.f64 + ctx.f5.f64));
	// stfs f29,176(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,180(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f29,192(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f26,196(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,26896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26896);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f12,f0
	f25.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f24,f27,f0
	f24.f64 = double(float(f27.f64 * ctx.f0.f64));
	// fmuls f23,f27,f13
	f23.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e0028
	ctx.lr = 0x821026A4;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f24.f64, f23.f64)));
	// stfs f28,212(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821026C4;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f24.f64, f23.f64)));
	// fadds f13,f29,f27
	ctx.f13.f64 = double(float(f29.f64 + f27.f64));
	// stfs f26,228(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f30,232(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// clrldi r6,r31,32
	ctx.r6.u64 = r31.u64 & 0xFFFFFFFF;
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f28,244(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f26,260(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,264(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82102718;
	sub_821E7C08(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f70
	ctx.lr = 0x82102724;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82112380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f2,88(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r11,r11,29604
	ctx.r11.s64 = ctx.r11.s64 + 29604;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x821123c4
	if (!ctx.cr6.eq) goto loc_821123C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x821123f8
	goto loc_821123F8;
loc_821123C4:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// stw r8,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
loc_821123F8:
	// stb r9,100(r3)
	REX_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r10,101(r3)
	REX_STORE_U8(ctx.r3.u32 + 101, ctx.r10.u8);
	// stw r7,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_82112418:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82112418
	if (!ctx.cr0.eq) goto loc_82112418;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82115958) {
	REX_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
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

DEFINE_REX_FUNC(sub_82115F88) {
	REX_FUNC_PROLOGUE();
	// li r11,-999
	ctx.r11.s64 = -999;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82115F98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,24020(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,304(r11)
	REX_STORE_U32(ctx.r11.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821164A8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r30,1
	r30.s64 = 1;
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r30,1819(r10)
	REX_STORE_U8(ctx.r10.u32 + 1819, r30.u8);
	// lfs f0,1840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116574
	if (!ctx.cr6.eq) goto loc_82116574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82116574
	if (!ctx.cr6.gt) goto loc_82116574;
	// stw r30,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r30.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,31564
	ctx.r6.s64 = ctx.r10.s64 + 31564;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8211652C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82116574
	if (ctx.cr0.eq) goto loc_82116574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f6,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,31560(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 31560);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// addi r7,r11,31544
	ctx.r7.s64 = ctx.r11.s64 + 31544;
	// lfs f5,31556(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31556);
	ctx.f5.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f4,2348(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2348);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,15632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// bl 0x82115fd8
	ctx.lr = 0x82116574;
	sub_82115FD8(ctx, base);
loc_82116574:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,31540(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211658c
	if (!ctx.cr6.gt) goto loc_8211658C;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
loc_8211658C:
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

DEFINE_REX_FUNC(sub_82118CD0) {
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
	// li r10,777
	ctx.r10.s64 = 777;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// sth r10,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// lwz r4,24040(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24040);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118d14
	if (ctx.cr6.eq) goto loc_82118D14;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821e7888
	ctx.lr = 0x82118D0C;
	sub_821E7888(ctx, base);
	// stb r30,110(r31)
	REX_STORE_U8(r31.u32 + 110, r30.u8);
	// b 0x82118d28
	goto loc_82118D28;
loc_82118D14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// stb r11,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r11.u8);
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
loc_82118D28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,90(r31)
	REX_STORE_U8(r31.u32 + 90, r30.u8);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// stb r30,91(r31)
	REX_STORE_U8(r31.u32 + 91, r30.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// addi r10,r10,1936
	ctx.r10.s64 = ctx.r10.s64 + 1936;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f0,2380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// sth r8,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r8.u16);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// bl 0x820e0208
	ctx.lr = 0x82118D68;
	sub_820E0208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82118d88
	if (ctx.cr6.gt) goto loc_82118D88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
loc_82118D88:
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82118da0
	if (ctx.cr6.gt) goto loc_82118DA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
loc_82118DA0:
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
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

DEFINE_REX_FUNC(sub_8211D640) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x8211D648;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f24
	ctx.lr = 0x8211D650;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
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
	// bne 0x8211d9dc
	if (!ctx.cr0.eq) goto loc_8211D9DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r3,136
	r30.s64 = ctx.r3.s64 + 136;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// lfs f24,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	f24.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211d6dc
	if (!ctx.cr6.gt) goto loc_8211D6DC;
	// lfs f13,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f24
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f24.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211D6B8;
	sub_820E0028(ctx, base);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f23,f1,f30
	f23.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8211d6e0
	if (ctx.cr6.gt) goto loc_8211D6E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8211c218
	ctx.lr = 0x8211D6D8;
	sub_8211C218(ctx, base);
	// b 0x8211d9dc
	goto loc_8211D9DC;
loc_8211D6DC:
	// fmr f23,f30
	ctx.fpscr.disableFlushMode();
	f23.f64 = f30.f64;
loc_8211D6E0:
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8211d6f4
	if (!ctx.cr6.eq) goto loc_8211D6F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211D6F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211d760
	if (ctx.cr0.eq) goto loc_8211D760;
	// addi r29,r30,116
	r29.s64 = r30.s64 + 116;
	// addi r5,r30,132
	ctx.r5.s64 = r30.s64 + 132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8211D710;
	sub_820E1B70(ctx, base);
	// addi r5,r31,364
	ctx.r5.s64 = r31.s64 + 364;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1ba8
	ctx.lr = 0x8211D720;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e22e8
	ctx.lr = 0x8211D728;
	sub_820E22E8(ctx, base);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
loc_8211D760:
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x8211c1b0
	ctx.lr = 0x8211D768;
	sub_8211C1B0(ctx, base);
	// lfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8211D770;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// fmuls f25,f1,f0
	f25.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r28,2
	r28.s64 = 2;
	// lfs f26,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f26.f64 = double(temp.f32);
loc_8211D788:
	// addi r3,r29,-48
	ctx.r3.s64 = r29.s64 + -48;
	// bl 0x8211c1b0
	ctx.lr = 0x8211D790;
	sub_8211C1B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8211c1b0
	ctx.lr = 0x8211D798;
	sub_8211C1B0(ctx, base);
	// lfs f1,-48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8211D7A0;
	sub_820E0028(ctx, base);
	// lfs f0,-36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f0,f29,f28
	f28.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f28.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211D7B4;
	sub_820E0028(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f27,f0,f29,f27
	f27.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f27.f64)));
	// fmuls f29,f29,f26
	f29.f64 = double(float(f29.f64 * f26.f64));
	// bne 0x8211d788
	if (!ctx.cr0.eq) goto loc_8211D788;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lfs f0,-30672(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fmuls f29,f27,f0
	f29.f64 = double(float(f27.f64 * ctx.f0.f64));
	// ble cr6,0x8211d81c
	if (!ctx.cr6.gt) goto loc_8211D81C;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x8211d81c
	if (!ctx.cr6.lt) goto loc_8211D81C;
	// bl 0x821fef70
	ctx.lr = 0x8211D808;
	sub_821FEF70(ctx, base);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211d81c
	if (!ctx.cr6.lt) goto loc_8211D81C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8211d820
	goto loc_8211D820;
loc_8211D81C:
	// fadds f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f30.f64));
loc_8211D820:
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// lfs f13,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// lfs f13,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211d8a8
	if (!ctx.cr6.gt) goto loc_8211D8A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211d880
	if (!ctx.cr6.lt) goto loc_8211D880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 + f24.f64));
	// bl 0x820e0028
	ctx.lr = 0x8211D870;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f13,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8211d898
	goto loc_8211D898;
loc_8211D880:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfd f2,-30680(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -30680);
	// bl 0x822d5b48
	ctx.lr = 0x8211D890;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_8211D898:
	// stfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// b 0x8211d8ac
	goto loc_8211D8AC;
loc_8211D8A8:
	// stfs f31,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
loc_8211D8AC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e01b0
	ctx.lr = 0x8211D8B4;
	sub_820E01B0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f2,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8211D8C8;
	sub_820E0EC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,16648(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1d28
	ctx.lr = 0x8211D8F8;
	sub_820E1D28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f1,16268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x8211D910;
	sub_820E2028(ctx, base);
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2290
	ctx.lr = 0x8211D91C;
	sub_820E2290(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30660);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8211d948
	if (!ctx.cr6.gt) goto loc_8211D948;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x8211d944
	if (ctx.cr6.gt) goto loc_8211D944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30664(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30664);
	ctx.f0.f64 = double(temp.f32);
loc_8211D944:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8211D948:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3300
	ctx.r5.s64 = ctx.r11.s64 + 3300;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c50
	ctx.lr = 0x8211D95C;
	sub_820E1C50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x8211D96C;
	sub_820E1C50(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f31,328(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f12,324(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f12,340(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f31,344(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// lfs f0,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// lfs f0,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f30,360(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
loc_8211D9DC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f70
	ctx.lr = 0x8211D9E8;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8212C010) {
	REX_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// b 0x82203138
	sub_82203138(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212C1E0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,-23000
	ctx.r10.s64 = ctx.r10.s64 + -23000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C7C8) {
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
	// addi r31,r11,10792
	r31.s64 = ctx.r11.s64 + 10792;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c824
	if (ctx.cr6.eq) goto loc_8212C824;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ccd80
	ctx.lr = 0x8212C7F4;
	sub_822CCD80(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bne cr6,0x8212c814
	if (!ctx.cr6.eq) goto loc_8212C814;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c824
	if (ctx.cr6.eq) goto loc_8212C824;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ccd08
	ctx.lr = 0x8212C810;
	sub_822CCD08(ctx, base);
	// b 0x8212c824
	goto loc_8212C824;
loc_8212C814:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c824
	if (ctx.cr6.eq) goto loc_8212C824;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ccc90
	ctx.lr = 0x8212C824;
	sub_822CCC90(ctx, base);
loc_8212C824:
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

DEFINE_REX_FUNC(sub_8212EE78) {
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
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212eea0
	if (ctx.cr6.eq) goto loc_8212EEA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212ef64
	goto loc_8212EF64;
loc_8212EEA0:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,-23024(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -23024);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8212eec0
	if (!ctx.cr6.eq) goto loc_8212EEC0;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8212eed8
	if (!ctx.cr6.eq) goto loc_8212EED8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,-23024(r10)
	REX_STORE_U32(ctx.r10.u32 + -23024, ctx.r11.u32);
loc_8212EEC0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8212eed8
	if (!ctx.cr6.eq) goto loc_8212EED8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8212eed8
	if (!ctx.cr6.eq) goto loc_8212EED8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,-23024(r10)
	REX_STORE_U32(ctx.r10.u32 + -23024, ctx.r11.u32);
loc_8212EED8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8212eefc
	if (ctx.cr6.eq) goto loc_8212EEFC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212eef4
	if (ctx.cr6.eq) goto loc_8212EEF4;
	// bl 0x8212ec38
	ctx.lr = 0x8212EEEC;
	sub_8212EC38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212eefc
	if (ctx.cr0.eq) goto loc_8212EEFC;
loc_8212EEF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212ef64
	goto loc_8212EF64;
loc_8212EEFC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,-23028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ef60
	if (ctx.cr6.eq) goto loc_8212EF60;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-29092
	ctx.r6.s64 = ctx.r10.s64 + -29092;
	// addi r8,r11,-15120
	ctx.r8.s64 = ctx.r11.s64 + -15120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8212EF34;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212ef50
	if (ctx.cr0.eq) goto loc_8212EF50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8212ef54
	goto loc_8212EF54;
loc_8212EF50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212EF54:
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8212ef64
	goto loc_8212EF64;
loc_8212EF60:
	// bl 0x8212c3b8
	ctx.lr = 0x8212EF64;
	sub_8212C3B8(ctx, base);
loc_8212EF64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82131A58) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82131A60;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f08
	ctx.lr = 0x82131A68;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f24,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f24.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// lfs f23,-25000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25000);
	f23.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f25,-25008(r8)
	f25.u64 = REX_LOAD_U64(ctx.r8.u32 + -25008);
	// lfs f31,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f20,-25012(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -25012);
	f20.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f22,-25016(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25016);
	f22.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,16352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16352);
	f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f26,-25020(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25020);
	f26.f64 = double(temp.f32);
	// lfs f17,2348(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2348);
	f17.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f18,2340(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2340);
	f18.f64 = double(temp.f32);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lfs f19,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	f19.f64 = double(temp.f32);
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// lfs f21,1984(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1984);
	f21.f64 = double(temp.f32);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r27,r11,65535
	r27.u64 = ctx.r11.u64 | 65535;
loc_82131AF0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 + f19.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// ble cr6,0x82131b08
	if (!ctx.cr6.gt) goto loc_82131B08;
	// stfs f17,0(r31)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82131B08:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82131b68
	if (ctx.cr6.lt) goto loc_82131B68;
	// beq cr6,0x82131b54
	if (ctx.cr6.eq) goto loc_82131B54;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82131b3c
	if (ctx.cr6.lt) goto loc_82131B3C;
	// bne cr6,0x82131cf0
	if (!ctx.cr6.eq) goto loc_82131CF0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f26
	f30.f64 = f26.f64;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f28.f64 = double(temp.f32);
	// fadds f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82131b7c
	goto loc_82131B7C;
loc_82131B3C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f22
	f30.f64 = f22.f64;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f28.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x82131b7c
	goto loc_82131B7C;
loc_82131B54:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f21
	f30.f64 = f21.f64;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82131b78
	goto loc_82131B78;
loc_82131B68:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f20
	f30.f64 = f20.f64;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82131B78:
	// lfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f29.f64 = double(temp.f32);
loc_82131B7C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0000
	ctx.lr = 0x82131B84;
	sub_820E0000(ctx, base);
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0058
	ctx.lr = 0x82131B90;
	sub_820E0058(ctx, base);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f30,f30,f26
	f30.f64 = double(float(f30.f64 + f26.f64));
	// stfs f16,100(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0000
	ctx.lr = 0x82131BAC;
	sub_820E0000(ctx, base);
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0058
	ctx.lr = 0x82131BB8;
	sub_820E0058(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f30,f30,f26
	f30.f64 = double(float(f30.f64 + f26.f64));
	// stfs f16,84(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0000
	ctx.lr = 0x82131BD4;
	sub_820E0000(ctx, base);
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0058
	ctx.lr = 0x82131BE0;
	sub_820E0058(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// stfs f16,116(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x82131BF8;
	sub_822D6130(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x822d6130
	ctx.lr = 0x82131C04;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f23,136(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f13,f28,f30
	ctx.f13.f64 = double(float(f28.f64 - f30.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f24,140(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x820e1cc0
	ctx.lr = 0x82131C30;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x82131C40;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x82131C50;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x82131C60;
	sub_820E1B28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x82131C70;
	sub_820E1B28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b28
	ctx.lr = 0x82131C80;
	sub_820E1B28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e8750
	ctx.lr = 0x82131CA4;
	sub_821E8750(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e8678
	ctx.lr = 0x82131CB8;
	sub_821E8678(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e8678
	ctx.lr = 0x82131CCC;
	sub_821E8678(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e8678
	ctx.lr = 0x82131CE0;
	sub_821E8678(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// blt cr6,0x82131af0
	if (ctx.cr6.lt) goto loc_82131AF0;
loc_82131CF0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f54
	ctx.lr = 0x82131CFC;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82141FB0) {
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
	ctx.lr = 0x82141FB8;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,23912
	r28.s64 = ctx.r11.s64 + 23912;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,64(r28)
	REX_STORE_U32(r28.u32 + 64, r31.u32);
	// bl 0x8212ff80
	ctx.lr = 0x82141FE0;
	sub_8212FF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r9,r11,-8304
	ctx.r9.s64 = ctx.r11.s64 + -8304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29368
	ctx.r5.s64 = ctx.r11.s64 + 29368;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,324(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 324);
	// lwz r11,-5012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -5012);
	// lwz r30,20(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r29,112(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x821af9d8
	ctx.lr = 0x82142010;
	sub_821AF9D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r10,20332
	ctx.r4.s64 = ctx.r10.s64 + 20332;
	// addi r7,r9,-23292
	ctx.r7.s64 = ctx.r9.s64 + -23292;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,-23280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23280);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82138a78
	ctx.lr = 0x82142038;
	sub_82138A78(ctx, base);
	// lis r27,-32165
	r27.s64 = -2107965440;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-32480(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -32480);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	f31.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f29,26856(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26856);
	f29.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f30,28452(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28452);
	f30.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f5,-24440(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24440);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32100(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32100);
	ctx.f4.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// lfs f2,29404(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29404);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r11,200(r28)
	REX_STORE_U32(r28.u32 + 200, ctx.r11.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82104548
	ctx.lr = 0x821420A4;
	sub_82104548(ctx, base);
	// stw r3,160(r28)
	REX_STORE_U32(r28.u32 + 160, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r11,-32480(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -32480);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lfs f31,-24016(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24016);
	f31.f64 = double(temp.f32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f5,-24964(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24964);
	ctx.f5.f64 = double(temp.f32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f4,-24996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24996);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// lfs f2,-24452(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24452);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82104548
	ctx.lr = 0x821420F4;
	sub_82104548(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,13128
	ctx.r8.s64 = ctx.r11.s64 + 13128;
	// stw r3,164(r28)
	REX_STORE_U32(r28.u32 + 164, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lfs f13,1840(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f0,20484(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,56(r28)
	REX_STORE_U32(r28.u32 + 56, r31.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r8,r11,22648
	ctx.r8.s64 = ctx.r11.s64 + 22648;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,60(r28)
	REX_STORE_U32(r28.u32 + 60, ctx.r11.u32);
	// stfs f30,0(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,156(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 156);
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 164);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r31,492(r8)
	REX_STORE_U32(ctx.r8.u32 + 492, r31.u32);
	// stw r31,488(r8)
	REX_STORE_U32(ctx.r8.u32 + 488, r31.u32);
	// bl 0x8213f160
	ctx.lr = 0x82142164;
	sub_8213F160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,26816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x82142178;
	sub_821FF668(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_8214CFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8214CFF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r4,46
	ctx.r9.s64 = ctx.r4.s64 + 46;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// addi r10,r4,30
	ctx.r10.s64 = ctx.r4.s64 + 30;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r29,r4,r11
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r8,r30,116
	ctx.r8.s64 = r30.s64 + 116;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sthx r11,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u16);
	// stwx r11,r29,r8
	REX_STORE_U32(r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzx r9,r28,r3
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r3.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r11,20(r9)
	REX_STORE_U16(ctx.r9.u32 + 20, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d044
	if (ctx.cr6.eq) goto loc_8214D044;
	// stb r11,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
loc_8214D044:
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// addi r11,r30,144
	ctx.r11.s64 = r30.s64 + 144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-21624
	ctx.r10.s64 = ctx.r10.s64 + -21624;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r11.u32));
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8214D06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,146
	ctx.r11.s64 = r30.s64 + 146;
	// lwzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// lhzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + ctx.r11.u32);
	// sth r11,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8214FA18) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214FC18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
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
	// bl 0x822d4e78
	ctx.lr = 0x8214FC20;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f20
	ctx.lr = 0x8214FC28;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r26,1
	r26.s64 = 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r26.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// sth r7,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r7.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bne cr6,0x8214fca0
	if (!ctx.cr6.eq) goto loc_8214FCA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214fc88
	if (ctx.cr6.eq) goto loc_8214FC88;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214fc80
	if (ctx.cr6.eq) goto loc_8214FC80;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214fc78
	if (ctx.cr6.eq) goto loc_8214FC78;
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x8214fc8c
	goto loc_8214FC8C;
loc_8214FC78:
	// li r8,18
	ctx.r8.s64 = 18;
	// b 0x8214fc8c
	goto loc_8214FC8C;
loc_8214FC80:
	// li r8,7
	ctx.r8.s64 = 7;
	// b 0x8214fc8c
	goto loc_8214FC8C;
loc_8214FC88:
	// li r8,19
	ctx.r8.s64 = 19;
loc_8214FC8C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-20760
	ctx.r9.s64 = ctx.r11.s64 + -20760;
	// lfs f22,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f22.f64 = double(temp.f32);
	// b 0x8214fce4
	goto loc_8214FCE4;
loc_8214FCA0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214fcd0
	if (ctx.cr6.eq) goto loc_8214FCD0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214fcc8
	if (ctx.cr6.eq) goto loc_8214FCC8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214fcc0
	if (ctx.cr6.eq) goto loc_8214FCC0;
	// li r8,6
	ctx.r8.s64 = 6;
	// b 0x8214fcd4
	goto loc_8214FCD4;
loc_8214FCC0:
	// li r8,15
	ctx.r8.s64 = 15;
	// b 0x8214fcd4
	goto loc_8214FCD4;
loc_8214FCC8:
	// li r8,21
	ctx.r8.s64 = 21;
	// b 0x8214fcd4
	goto loc_8214FCD4;
loc_8214FCD0:
	// li r8,20
	ctx.r8.s64 = 20;
loc_8214FCD4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-20248
	ctx.r9.s64 = ctx.r11.s64 + -20248;
	// lfs f22,16036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	f22.f64 = double(temp.f32);
loc_8214FCE4:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 324);
	// std r26,80(r31)
	REX_STORE_U64(r31.u32 + 80, r26.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r7,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r7.u16);
	// stb r26,90(r31)
	REX_STORE_U8(r31.u32 + 90, r26.u8);
	// bne cr6,0x8214fd04
	if (!ctx.cr6.eq) goto loc_8214FD04;
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
loc_8214FD04:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// beq cr6,0x8214fd1c
	if (ctx.cr6.eq) goto loc_8214FD1C;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stb r8,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r8.u8);
loc_8214FD1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f22,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r26,105(r31)
	REX_STORE_U8(r31.u32 + 105, r26.u8);
	// addi r11,r11,-19736
	ctx.r11.s64 = ctx.r11.s64 + -19736;
	// stb r26,107(r31)
	REX_STORE_U8(r31.u32 + 107, r26.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r26,109(r31)
	REX_STORE_U8(r31.u32 + 109, r26.u8);
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f24,-18804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18804);
	f24.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f26,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	f26.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f23,-18808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18808);
	f23.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f27,28452(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28452);
	f27.f64 = double(temp.f32);
	// li r24,0
	r24.s64 = 0;
	// lfs f25,-18812(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18812);
	f25.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f30,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f28,-19048(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -19048);
	f28.f64 = double(temp.f32);
	// stb r24,106(r31)
	REX_STORE_U8(r31.u32 + 106, r24.u8);
	// lfs f29,-24332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24332);
	f29.f64 = double(temp.f32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// addi r25,r11,-4224
	r25.s64 = ctx.r11.s64 + -4224;
loc_8214FD9C:
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r25,112
	ctx.r10.s64 = r25.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f8,f30
	ctx.f8.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// fmuls f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x821065b0
	ctx.lr = 0x8214FDE4;
	sub_821065B0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214fe04
	if (!ctx.cr6.eq) goto loc_8214FE04;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// b 0x8214fe18
	goto loc_8214FE18;
loc_8214FE04:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 - ctx.f0.f64));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f0.f64)));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
loc_8214FE18:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - f24.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x82204da8
	ctx.lr = 0x8214FE34;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214fe60
	if (ctx.cr0.eq) goto loc_8214FE60;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_8214FE60:
	// addi r28,r28,80
	r28.s64 = r28.s64 + 80;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpwi cr6,r28,640
	ctx.cr6.compare<int32_t>(r28.s32, 640, ctx.xer);
	// blt cr6,0x8214fd9c
	if (ctx.cr6.lt) goto loc_8214FD9C;
	// sth r24,344(r31)
	REX_STORE_U16(r31.u32 + 344, r24.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f6c
	ctx.lr = 0x8214FE88;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8215D838) {
	REX_FUNC_PROLOGUE();
	// b 0x821dd668
	sub_821DD668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D8D0) {
	REX_FUNC_PROLOGUE();
	// b 0x821dd670
	sub_821DD670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D958) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,78
	ctx.r3.s64 = 78;
	// b 0x821dce30
	sub_821DCE30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D978) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x821dce30
	sub_821DCE30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215DA88) {
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
	// bl 0x8215d8d8
	ctx.lr = 0x8215DA9C;
	sub_8215D8D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215dab0
	if (!ctx.cr6.eq) goto loc_8215DAB0;
loc_8215DAA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215db54
	goto loc_8215DB54;
loc_8215DAB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821dce30
	ctx.lr = 0x8215DABC;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215daa8
	if (ctx.cr6.eq) goto loc_8215DAA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215dad0
	if (!ctx.cr6.eq) goto loc_8215DAD0;
	// li r31,2
	r31.s64 = 2;
loc_8215DAD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x821dce30
	ctx.lr = 0x8215DADC;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215daa8
	if (ctx.cr6.eq) goto loc_8215DAA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215daf0
	if (!ctx.cr6.eq) goto loc_8215DAF0;
	// li r31,2
	r31.s64 = 2;
loc_8215DAF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821dce30
	ctx.lr = 0x8215DAFC;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215daa8
	if (ctx.cr6.eq) goto loc_8215DAA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215db10
	if (!ctx.cr6.eq) goto loc_8215DB10;
	// li r31,2
	r31.s64 = 2;
loc_8215DB10:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x821dce30
	ctx.lr = 0x8215DB1C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215daa8
	if (ctx.cr6.eq) goto loc_8215DAA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215db30
	if (!ctx.cr6.eq) goto loc_8215DB30;
	// li r31,2
	r31.s64 = 2;
loc_8215DB30:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x821dce30
	ctx.lr = 0x8215DB3C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215daa8
	if (ctx.cr6.eq) goto loc_8215DAA8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215db50
	if (!ctx.cr6.eq) goto loc_8215DB50;
	// li r31,2
	r31.s64 = 2;
loc_8215DB50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215DB54:
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

DEFINE_REX_FUNC(sub_82163190) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f24
	ctx.lr = 0x821631A8;
	// stwu r1,-2496(r1)
	ea = -2496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821631C0;
	sub_822D4FA0(ctx, base);
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,968
	ctx.r4.s64 = r31.s64 + 968;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82161230
	ctx.lr = 0x821631D4;
	sub_82161230(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1488(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1488);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,24472
	ctx.r8.s64 = ctx.r11.s64 + 24472;
	// lfs f13,1492(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,1496(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1744(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1744);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,1748(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1748);
	ctx.f10.f64 = double(temp.f32);
	// lfs f23,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f23.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f9,1752(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1752);
	ctx.f9.f64 = double(temp.f32);
	// stfs f23,12(r8)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f23,28(r8)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stfs f0,24472(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24472, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f11,16(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f10,20(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f9,24(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfs f24,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f24.f64 = double(temp.f32);
	// lha r11,2920(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2920));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821632b0
	if (ctx.cr0.gt) goto loc_821632B0;
	// lha r11,2934(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2934));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82163254
	if (ctx.cr0.gt) goto loc_82163254;
	// stfs f24,2944(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 2944, temp.u32);
	// fmr f30,f24
	f30.f64 = f24.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x821632a8
	goto loc_821632A8;
loc_82163254:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lha r8,2932(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2932));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r6,r11,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// sth r11,2934(r31)
	REX_STORE_U16(r31.u32 + 2934, ctx.r11.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bgt cr6,0x821632a4
	if (ctx.cr6.gt) goto loc_821632A4;
	// fmr f30,f24
	f30.f64 = f24.f64;
	// b 0x821632a8
	goto loc_821632A8;
loc_821632A4:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f0.f64;
loc_821632A8:
	// sth r10,2938(r31)
	REX_STORE_U16(r31.u32 + 2938, ctx.r10.u16);
	// b 0x821632bc
	goto loc_821632BC;
loc_821632B0:
	// lhz r11,2932(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2932);
	// fmr f30,f23
	ctx.fpscr.disableFlushMode();
	f30.f64 = f23.f64;
	// sth r11,2934(r31)
	REX_STORE_U16(r31.u32 + 2934, ctx.r11.u16);
loc_821632BC:
	// lha r11,2922(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2922));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82163334
	if (ctx.cr0.gt) goto loc_82163334;
	// lha r11,2936(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2936));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821632e0
	if (ctx.cr0.gt) goto loc_821632E0;
	// stfs f24,2940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 2940, temp.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// b 0x82163328
	goto loc_82163328;
loc_821632E0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lha r8,2932(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2932));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r6,r11,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// sth r11,2936(r31)
	REX_STORE_U16(r31.u32 + 2936, ctx.r11.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fcmpu cr6,f31,f24
	ctx.cr6.compare(f31.f64, f24.f64);
	// bgt cr6,0x8216332c
	if (ctx.cr6.gt) goto loc_8216332C;
loc_82163328:
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = f24.f64;
loc_8216332C:
	// sth r10,2938(r31)
	REX_STORE_U16(r31.u32 + 2938, ctx.r10.u16);
	// b 0x821633a4
	goto loc_821633A4;
loc_82163334:
	// lha r10,2936(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2936));
	// lha r11,2932(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2932));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216334c
	if (!ctx.cr6.gt) goto loc_8216334C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216334C:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r10,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// sth r10,2936(r31)
	REX_STORE_U16(r31.u32 + 2936, ctx.r10.u16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// blt cr6,0x82163394
	if (ctx.cr6.lt) goto loc_82163394;
	// fmr f31,f23
	f31.f64 = f23.f64;
	// b 0x821633a4
	goto loc_821633A4;
loc_82163394:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bgt cr6,0x821633a4
	if (ctx.cr6.gt) goto loc_821633A4;
	// fmr f31,f24
	f31.f64 = f24.f64;
loc_821633A4:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x821633b4
	if (!ctx.cr6.eq) goto loc_821633B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821639a4
	goto loc_821639A4;
loc_821633B4:
	// lfs f0,720(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,724(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,2904
	ctx.r4.s64 = r31.s64 + 2904;
	// lfs f12,728(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 728);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f23,92(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x821633E0;
	sub_820E1BA8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-30996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82163518
	if (ctx.cr6.lt) goto loc_82163518;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f1,f23,f0
	ctx.f1.f64 = double(float(f23.f64 / ctx.f0.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8216341C;
	sub_820E1CC0(ctx, base);
	// lfs f0,704(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,708(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,712(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 712);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x82163444;
	sub_820E1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x8216344C;
	sub_820E2290(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1c50
	ctx.lr = 0x8216345C;
	sub_820E1C50(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f11,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f24,236(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f24,252(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f24,268(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f9,248(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f7,260(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f6,264(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x820e0250
	ctx.lr = 0x821634BC;
	sub_820E0250(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x820e0590
	ctx.lr = 0x821634CC;
	sub_820E0590(ctx, base);
	// lfs f0,680(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f1,676(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 676);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,672(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x821634E8;
	sub_820E0130(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820e1028
	ctx.lr = 0x82163500;
	sub_820E1028(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(f29.f64 - ctx.f0.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x82163520
	goto loc_82163520;
loc_82163518:
	// fmr f9,f24
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f24.f64;
	// fmr f0,f24
	ctx.f0.f64 = f24.f64;
loc_82163520:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,-31056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31056);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82163560
	if (!ctx.cr6.gt) goto loc_82163560;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2940(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 2940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-11732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11732);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82163590
	if (ctx.cr6.lt) goto loc_82163590;
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// bgt cr6,0x82163590
	if (ctx.cr6.gt) goto loc_82163590;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - f23.f64));
	// stfs f0,2940(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2940, temp.u32);
	// lfs f0,-31060(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821635ac
	goto loc_821635AC;
loc_82163560:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-31060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31060);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821635a8
	if (!ctx.cr6.lt) goto loc_821635A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2940(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 2940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-11736(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11736);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8216359c
	if (ctx.cr6.gt) goto loc_8216359C;
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// blt cr6,0x8216359c
	if (ctx.cr6.lt) goto loc_8216359C;
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
loc_82163590:
	// stfs f0,2940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2940, temp.u32);
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x821635ac
	goto loc_821635AC;
loc_8216359C:
	// stfs f0,2940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2940, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821635ac
	goto loc_821635AC;
loc_821635A8:
	// stfs f0,2940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2940, temp.u32);
loc_821635AC:
	// lfs f13,2944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2944);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,2924(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 2924);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,2928(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 2928);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x821635e0
	if (!ctx.cr6.gt) goto loc_821635E0;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x821635dc
	if (!ctx.cr6.gt) goto loc_821635DC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821635e0
	goto loc_821635E0;
loc_821635DC:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_821635E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,2944(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2944, temp.u32);
	// lfs f13,-24832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x82163608
	if (ctx.cr6.gt) goto loc_82163608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-11740(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11740);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x8216360c
	if (!ctx.cr6.lt) goto loc_8216360C;
loc_82163608:
	// fmr f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f13.f64;
loc_8216360C:
	// lfs f12,2948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2948);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82163638
	if (!ctx.cr6.gt) goto loc_82163638;
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// ble cr6,0x82163634
	if (!ctx.cr6.gt) goto loc_82163634;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82163638
	goto loc_82163638;
loc_82163634:
	// fneg f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_82163638:
	// fadds f25,f12,f13
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,1248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1248);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f13,1256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,1252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,1264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1264);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f8,1268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	ctx.f8.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f13,-11744(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11744);
	ctx.f13.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,1272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,1280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1280);
	ctx.f7.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f6,1284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,1288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1288);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f25,2948(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 2948, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f13,-11748(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11748);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f28,f0,f12
	f28.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x820e0250
	ctx.lr = 0x821636D4;
	sub_820E0250(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0590
	ctx.lr = 0x821636E4;
	sub_820E0590(ctx, base);
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821636F0;
	sub_820E0130(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,31840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31840);
	f30.f64 = double(temp.f32);
	// lfs f27,-11752(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11752);
	f27.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x82163738
	if (!ctx.cr6.gt) goto loc_82163738;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x82163728
	if (!ctx.cr6.gt) goto loc_82163728;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f29,f30,f1
	f29.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// b 0x82163738
	goto loc_82163738;
loc_82163728:
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f29.f64));
	// fsubs f29,f27,f1
	f29.f64 = double(float(f27.f64 - ctx.f1.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_82163738:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e06e0
	ctx.lr = 0x82163744;
	sub_820E06E0(ctx, base);
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163758;
	sub_820E0590(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0250
	ctx.lr = 0x82163764;
	sub_820E0250(ctx, base);
	// addi r4,r30,896
	ctx.r4.s64 = r30.s64 + 896;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163774;
	sub_820E0590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f24.f64);
	// lfs f29,2016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	f29.f64 = double(temp.f32);
	// bge cr6,0x821637a0
	if (!ctx.cr6.lt) goto loc_821637A0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f25,f29
	ctx.f1.f64 = double(float(f25.f64 * f29.f64));
	// bl 0x820e0810
	ctx.lr = 0x82163790;
	sub_820E0810(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x821637A0;
	sub_820E0590(ctx, base);
loc_821637A0:
	// lfs f2,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821637AC;
	sub_820E0130(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x821637e4
	if (!ctx.cr6.gt) goto loc_821637E4;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x821637d4
	if (!ctx.cr6.gt) goto loc_821637D4;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f31,f30,f1
	f31.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fadds f28,f0,f28
	f28.f64 = double(float(ctx.f0.f64 + f28.f64));
	// b 0x821637e4
	goto loc_821637E4;
loc_821637D4:
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fsubs f31,f27,f1
	f31.f64 = double(float(f27.f64 - ctx.f1.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// fadds f28,f0,f30
	f28.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_821637E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e06e0
	ctx.lr = 0x821637F0;
	sub_820E06E0(ctx, base);
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163804;
	sub_820E0590(ctx, base);
	// fcmpu cr6,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f24.f64);
	// bge cr6,0x82163828
	if (!ctx.cr6.lt) goto loc_82163828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f25,f29
	ctx.f1.f64 = double(float(f25.f64 * f29.f64));
	// bl 0x820e0810
	ctx.lr = 0x82163818;
	sub_820E0810(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163828;
	sub_820E0590(ctx, base);
loc_82163828:
	// lfs f2,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x82163834;
	sub_820E0130(ctx, base);
	// fadds f13,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f28.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-11756(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11756);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8216387c
	if (!ctx.cr6.gt) goto loc_8216387C;
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// ble cr6,0x82163864
	if (!ctx.cr6.gt) goto loc_82163864;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f28,f0,f1
	f28.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fadds f26,f13,f26
	f26.f64 = double(float(ctx.f13.f64 + f26.f64));
	// b 0x8216387c
	goto loc_8216387C;
loc_82163864:
	// fadds f12,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + f28.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-11760(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11760);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f13,f1
	f28.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fadds f13,f12,f26
	ctx.f13.f64 = double(float(ctx.f12.f64 + f26.f64));
	// fadds f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8216387C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x820e06e0
	ctx.lr = 0x82163888;
	sub_820E06E0(ctx, base);
	// addi r31,r30,256
	r31.s64 = r30.s64 + 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x8216389C;
	sub_820E0590(ctx, base);
	// fcmpu cr6,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f24.f64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bge cr6,0x821638b4
	if (!ctx.cr6.lt) goto loc_821638B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2368);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821638bc
	goto loc_821638BC;
loc_821638B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-11764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11764);
	ctx.f0.f64 = double(temp.f32);
loc_821638BC:
	// fmuls f1,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f25.f64 * ctx.f0.f64));
	// bl 0x820e0810
	ctx.lr = 0x821638C4;
	sub_820E0810(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x821638D4;
	sub_820E0590(ctx, base);
	// stfs f24,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f23,128(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r31,r30,320
	r31.s64 = r30.s64 + 320;
	// stfs f24,144(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f24,116(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f24,132(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f23,148(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f23,120(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f24,152(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e0590
	ctx.lr = 0x8216390C;
	sub_820E0590(ctx, base);
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x82163918;
	sub_820E0130(ctx, base);
	// fadds f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f26.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-11768(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11768);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8216394c
	if (!ctx.cr6.gt) goto loc_8216394C;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x82163940
	if (!ctx.cr6.gt) goto loc_82163940;
	// fsubs f26,f13,f1
	f26.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// b 0x8216394c
	goto loc_8216394C;
loc_82163940:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-11772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11772);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f26,f0,f1
	f26.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_8216394C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x820e0810
	ctx.lr = 0x82163958;
	sub_820E0810(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x82163968;
	sub_820E0590(ctx, base);
	// fcmpu cr6,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f24.f64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bge cr6,0x82163980
	if (!ctx.cr6.lt) goto loc_82163980;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82163988
	goto loc_82163988;
loc_82163980:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-11776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11776);
	ctx.f0.f64 = double(temp.f32);
loc_82163988:
	// fmuls f1,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f25.f64 * ctx.f0.f64));
	// bl 0x820e0778
	ctx.lr = 0x82163990;
	sub_820E0778(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x821639A0;
	sub_820E0590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821639A4:
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f70
	ctx.lr = 0x821639B0;
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

DEFINE_REX_FUNC(sub_82184038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82184040;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,17044(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 17044);
	// addi r30,r3,17044
	r30.s64 = ctx.r3.s64 + 17044;
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
	ctx.lr = 0x82184064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,520
	ctx.r3.s64 = r31.s64 + 520;
	// bl 0x82183f10
	ctx.lr = 0x82184070;
	sub_82183F10(ctx, base);
	// lwz r11,17044(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 17044);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82184088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82185140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82185148;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82185164
	if (ctx.cr6.eq) goto loc_82185164;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821851ec
	goto loc_821851EC;
loc_82185164:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r30,36
	r31.s64 = r30.s64 + 36;
	// beq cr6,0x82185198
	if (ctx.cr6.eq) goto loc_82185198;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// b 0x821851b4
	goto loc_821851B4;
loc_82185198:
	// stw r29,36(r30)
	REX_STORE_U32(r30.u32 + 36, r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,40(r30)
	REX_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	REX_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	REX_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,36(r30)
	REX_STORE_U32(r30.u32 + 36, r29.u32);
	// stb r11,48(r30)
	REX_STORE_U8(r30.u32 + 48, ctx.r11.u8);
loc_821851B4:
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821851C4;
	sub_822D5870(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r29,436(r30)
	REX_STORE_U8(r30.u32 + 436, r29.u8);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 48);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stb r10,22(r30)
	REX_STORE_U8(r30.u32 + 22, ctx.r10.u8);
loc_821851EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82187D00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82187D08;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82187d6c
	if (!ctx.cr0.eq) goto loc_82187D6C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,3393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82187d80
	if (ctx.cr0.eq) goto loc_82187D80;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82187cb0
	ctx.lr = 0x82187D4C;
	sub_82187CB0(ctx, base);
	// b 0x82187d80
	goto loc_82187D80;
loc_82187D50:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82187D6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82187d50
	if (!ctx.cr6.eq) goto loc_82187D50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82188388
	ctx.lr = 0x82187D80;
	sub_82188388(ctx, base);
loc_82187D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82189140) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82189158
	if (!ctx.cr6.gt) goto loc_82189158;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
loc_82189158:
	// bne cr6,0x82189164
	if (!ctx.cr6.eq) goto loc_82189164;
	// li r3,300
	ctx.r3.s64 = 300;
	// blr 
	return;
loc_82189164:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,300
	ctx.r3.s64 = ctx.r11.s64 + 300;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189A18) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stb r30,860(r31)
	REX_STORE_U8(r31.u32 + 860, r30.u8);
	// stw r30,864(r31)
	REX_STORE_U32(r31.u32 + 864, r30.u32);
	// stb r11,868(r31)
	REX_STORE_U8(r31.u32 + 868, ctx.r11.u8);
	// stb r30,869(r31)
	REX_STORE_U8(r31.u32 + 869, r30.u8);
	// bl 0x822d5870
	ctx.lr = 0x82189A68;
	sub_822D5870(ctx, base);
	// stw r30,856(r31)
	REX_STORE_U32(r31.u32 + 856, r30.u32);
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

DEFINE_REX_FUNC(sub_8218B4F0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x8218B4F8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f30
	ctx.lr = 0x8218B500;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eb360
	ctx.lr = 0x8218B514;
	sub_821EB360(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,2336
	ctx.r3.s64 = ctx.r10.s64 + 2336;
	// lfd f27,2360(r11)
	ctx.fpscr.disableFlushMode();
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 2360);
	// stfd f27,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f27.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821ead40
	ctx.lr = 0x8218B534;
	sub_821EAD40(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// addi r10,r10,-17368
	ctx.r10.s64 = ctx.r10.s64 + -17368;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f28,-13048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -13048);
	f28.f64 = double(temp.f32);
	// ori r28,r6,255
	r28.u64 = ctx.r6.u64 | 255;
	// lfs f31,28664(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28664);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x8218b798
	if (!ctx.cr6.gt) goto loc_8218B798;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218b594
	if (ctx.cr6.eq) goto loc_8218B594;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,28268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28268);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821f9730
	ctx.lr = 0x8218B594;
	sub_821F9730(ctx, base);
loc_8218B594:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218b5d0
	if (ctx.cr6.eq) goto loc_8218B5D0;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218b9dc
	if (ctx.cr6.eq) goto loc_8218B9DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-24332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24332);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821f9730
	ctx.lr = 0x8218B5CC;
	sub_821F9730(ctx, base);
	// b 0x8218b9dc
	goto loc_8218B9DC;
loc_8218B5D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218b734
	if (!ctx.cr6.eq) goto loc_8218B734;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,2328
	r30.s64 = ctx.r11.s64 + 2328;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x8218B5F4;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,2320
	r29.s64 = ctx.r11.s64 + 2320;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// bl 0x821f8b80
	ctx.lr = 0x8218B610;
	sub_821F8B80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
	// addi r27,r11,2308
	r27.s64 = ctx.r11.s64 + 2308;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x8218B630;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,2284
	r26.s64 = ctx.r11.s64 + 2284;
	// fadds f29,f0,f30
	f29.f64 = double(float(ctx.f0.f64 + f30.f64));
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x821f8b80
	ctx.lr = 0x8218B650;
	sub_821F8B80(ctx, base);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// lfs f30,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	f30.f64 = double(temp.f32);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fnmsubs f26,f13,f0,f31
	f26.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// stfs f26,20(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821eaea8
	ctx.lr = 0x8218B698;
	sub_821EAEA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r30,-1
	r30.s64 = -1;
	// fadds f26,f0,f26
	f26.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f26,20(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f29,-23592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23592);
	f29.f64 = double(temp.f32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stfs f29,28(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821f9678
	ctx.lr = 0x8218B6D4;
	sub_821F9678(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fadds f30,f0,f26
	f30.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaea8
	ctx.lr = 0x8218B704;
	sub_821EAEA8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,28(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821f9678
	ctx.lr = 0x8218B730;
	sub_821F9678(ctx, base);
	// b 0x8218b75c
	goto loc_8218B75C;
loc_8218B734:
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,2252
	ctx.r5.s64 = ctx.r10.s64 + 2252;
	// lfs f2,-24332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24332);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821f9730
	ctx.lr = 0x8218B75C;
	sub_821F9730(ctx, base);
loc_8218B75C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8218b9dc
	if (ctx.cr6.eq) goto loc_8218B9DC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8218b9dc
	if (ctx.cr6.eq) goto loc_8218B9DC;
	// stfs f28,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// addi r5,r11,2212
	ctx.r5.s64 = ctx.r11.s64 + 2212;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821f9730
	ctx.lr = 0x8218B794;
	sub_821F9730(ctx, base);
	// b 0x8218b9dc
	goto loc_8218B9DC;
loc_8218B798:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8218b888
	if (!ctx.cr6.eq) goto loc_8218B888;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,2204
	ctx.r5.s64 = ctx.r11.s64 + 2204;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821eb1a0
	ctx.lr = 0x8218B7B8;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,2176
	r27.s64 = ctx.r11.s64 + 2176;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// bl 0x821f8b80
	ctx.lr = 0x8218B7D4;
	sub_821F8B80(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,-1
	r30.s64 = -1;
	// addi r7,r8,2160
	ctx.r7.s64 = ctx.r8.s64 + 2160;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f2,2172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2172);
	ctx.f2.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// fnmsubs f30,f13,f0,f31
	f30.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaea8
	ctx.lr = 0x8218B828;
	sub_821EAEA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lfs f2,2156(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2156);
	ctx.f2.f64 = double(temp.f32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821f9678
	ctx.lr = 0x8218B858;
	sub_821F9678(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218b9dc
	if (ctx.cr6.eq) goto loc_8218B9DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-24332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24332);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821f9730
	ctx.lr = 0x8218B884;
	sub_821F9730(ctx, base);
	// b 0x8218b9dc
	goto loc_8218B9DC;
loc_8218B888:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8218b9dc
	if (!ctx.cr6.eq) goto loc_8218B9DC;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218b8bc
	if (ctx.cr6.eq) goto loc_8218B8BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,28268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28268);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821f9730
	ctx.lr = 0x8218B8BC;
	sub_821F9730(ctx, base);
loc_8218B8BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,2144
	r29.s64 = ctx.r11.s64 + 2144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f8b80
	ctx.lr = 0x8218B8D4;
	sub_821F8B80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r5,r10,2204
	ctx.r5.s64 = ctx.r10.s64 + 2204;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x8218B904;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,2136
	r27.s64 = ctx.r11.s64 + 2136;
	// fadds f29,f0,f30
	f29.f64 = double(float(ctx.f0.f64 + f30.f64));
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821f8b80
	ctx.lr = 0x8218B924;
	sub_821F8B80(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,-1
	r30.s64 = -1;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r6,17
	ctx.r6.s64 = 17;
	// lfs f30,-23592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23592);
	f30.f64 = double(temp.f32);
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fnmsubs f29,f13,f0,f31
	f29.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821f9678
	ctx.lr = 0x8218B96C;
	sub_821F9678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r7,r10,2160
	ctx.r7.s64 = ctx.r10.s64 + 2160;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f2,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f2.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaea8
	ctx.lr = 0x8218B9B0;
	sub_821EAEA8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821f9678
	ctx.lr = 0x8218B9DC;
	sub_821F9678(ctx, base);
loc_8218B9DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8218ba68
	if (!ctx.cr6.lt) goto loc_8218BA68;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r11,33760
	ctx.r11.u64 = ctx.r11.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218ba10
	if (ctx.cr0.eq) goto loc_8218BA10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
loc_8218BA10:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218ba68
	if (ctx.cr0.eq) goto loc_8218BA68;
	// stfd f27,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f27.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// addi r3,r11,2116
	ctx.r3.s64 = ctx.r11.s64 + 2116;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821ead40
	ctx.lr = 0x8218BA40;
	sub_821EAD40(ctx, base);
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f28,28(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// addi r5,r11,2088
	ctx.r5.s64 = ctx.r11.s64 + 2088;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eb090
	ctx.lr = 0x8218BA68;
	sub_821EB090(ctx, base);
loc_8218BA68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f7c
	ctx.lr = 0x8218BA88;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821A40D8) {
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
	ctx.lr = 0x821A40E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r31,r10,-26560
	r31.s64 = ctx.r10.s64 + -26560;
	// addi r28,r11,14104
	r28.s64 = ctx.r11.s64 + 14104;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lhz r11,1038(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1038);
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821A4110:
	// lwz r9,1040(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// lwz r10,1044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1044);
loc_821A4118:
	// lbzx r6,r30,r29
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + r29.u32);
	// clrlwi r8,r6,25
	ctx.r8.u64 = ctx.r6.u32 & 0x7F;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bgt cr6,0x821a426c
	if (ctx.cr6.gt) goto loc_821A426C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r8,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,7080
	ctx.r12.s64 = ctx.r12.s64 + 7080;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,16724
	ctx.r12.s64 = ctx.r12.s64 + 16724;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_821A4268;
	case 1:
		goto loc_821A4154;
	case 2:
		goto loc_821A4B2C;
	case 3:
		goto loc_821A418C;
	case 4:
		goto loc_821A418C;
	case 5:
		goto loc_821A4C38;
	case 6:
		goto loc_821A4B2C;
	case 7:
		goto loc_821A4C48;
	case 8:
		goto loc_821A4C70;
	case 9:
		goto loc_821A41AC;
	case 10:
		goto loc_821A41CC;
	case 11:
		goto loc_821A41AC;
	case 12:
		goto loc_821A4224;
	case 13:
		goto loc_821A4298;
	case 14:
		goto loc_821A42DC;
	case 15:
		goto loc_821A4320;
	case 16:
		goto loc_821A4374;
	case 17:
		goto loc_821A43C8;
	case 18:
		goto loc_821A43EC;
	case 19:
		goto loc_821A4448;
	case 20:
		goto loc_821A44A0;
	case 21:
		goto loc_821A44E4;
	case 22:
		goto loc_821A4528;
	case 23:
		goto loc_821A4550;
	case 24:
		goto loc_821A4594;
	case 25:
		goto loc_821A45D8;
	case 26:
		goto loc_821A464C;
	case 27:
		goto loc_821A46C4;
	case 28:
		goto loc_821A473C;
	case 29:
		goto loc_821A47B4;
	case 30:
		goto loc_821A4858;
	case 31:
		goto loc_821A48F4;
	case 32:
		goto loc_821A4928;
	case 33:
		goto loc_821A4970;
	case 34:
		goto loc_821A49C0;
	case 35:
		goto loc_821A4A10;
	case 36:
		goto loc_821A4A44;
	case 37:
		goto loc_821A4A94;
	case 38:
		goto loc_821A4B70;
	case 39:
		goto loc_821A4B98;
	case 40:
		goto loc_821A4BB8;
	case 41:
		goto loc_821A4BF8;
	case 42:
		goto loc_821A418C;
	case 43:
		goto loc_821A4268;
	case 44:
		goto loc_821A4268;
	case 45:
		goto loc_821A4268;
	case 46:
		goto loc_821A4268;
	case 47:
		goto loc_821A4268;
	case 48:
		goto loc_821A4268;
	case 49:
		goto loc_821A4268;
	case 50:
		goto loc_821A4268;
	case 51:
		goto loc_821A4268;
	case 52:
		goto loc_821A4268;
	case 53:
		goto loc_821A4268;
	case 54:
		goto loc_821A4268;
	case 55:
		goto loc_821A4268;
	case 56:
		goto loc_821A4268;
	case 57:
		goto loc_821A4268;
	case 58:
		goto loc_821A4268;
	case 59:
		goto loc_821A4268;
	case 60:
		goto loc_821A4268;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821A4154:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// addi r3,r31,1036
	ctx.r3.s64 = r31.s64 + 1036;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r24,r11,r10
	r24.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x821a4018
	ctx.lr = 0x821A4178;
	sub_821A4018(ctx, base);
loc_821A4178:
	// lwz r9,1040(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// lwz r10,1044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// lhz r11,1038(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1038);
	// b 0x821a426c
	goto loc_821A426C;
loc_821A418C:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_821A41A4:
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// b 0x821a426c
	goto loc_821A426C;
loc_821A41AC:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x821a426c
	goto loc_821A426C;
loc_821A41CC:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// bge cr6,0x821a41fc
	if (!ctx.cr6.lt) goto loc_821A41FC;
	// lwz r7,1024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r8,r7
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32));
	// b 0x821a421c
	goto loc_821A421C;
loc_821A41FC:
	// lha r7,1036(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 1036));
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-256
	ctx.r8.s64 = ctx.r8.s64 + -256;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r8,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32));
loc_821A421C:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// b 0x821a426c
	goto loc_821A426C;
loc_821A4224:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// and r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 & ctx.r9.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_821A4268:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_821A426C:
	// rlwinm. r8,r27,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821a4118
	if (ctx.cr0.eq) goto loc_821A4118;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4110
	goto loc_821A4110;
loc_821A4298:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A42DC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4320:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r6,r7,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhax r5,r11,r10
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r7,r5,r6
	ctx.r7.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
loc_821A4368:
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4374:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r6,r6,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r5,r6,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// b 0x821a4368
	goto loc_821A4368;
loc_821A43C8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lhax r8,r8,r10
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A43EC:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a4414
	if (!ctx.cr6.lt) goto loc_821A4414;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a4434
	goto loc_821A4434;
loc_821A4414:
	// lhz r8,1036(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_821A4434:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r11,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
loc_821A4440:
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x821a4178
	goto loc_821A4178;
loc_821A4448:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a4470
	if (!ctx.cr6.lt) goto loc_821A4470;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a4490
	goto loc_821A4490;
loc_821A4470:
	// lhz r8,1036(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_821A4490:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r11,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// b 0x821a4440
	goto loc_821A4440;
loc_821A44A0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r6,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A44E4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r6,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4528:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhax r8,r8,r10
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32));
loc_821A4538:
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4550:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4594:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// sraw r7,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A45D8:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lbz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r5,r8,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lhax r6,r6,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// or r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sth r8,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r8.u16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a4620
	if (!ctx.cr6.lt) goto loc_821A4620;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a4640
	goto loc_821A4640;
loc_821A4620:
	// lha r8,1036(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 1036));
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_821A4640:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// b 0x821a4178
	goto loc_821A4178;
loc_821A464C:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhax r5,r11,r10
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r8,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r8.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a4694
	if (!ctx.cr6.lt) goto loc_821A4694;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a46b4
	goto loc_821A46B4;
loc_821A4694:
	// lhz r6,1036(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
loc_821A46B4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x821a4440
	goto loc_821A4440;
loc_821A46C4:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhax r5,r11,r10
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r8,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r8.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a470c
	if (!ctx.cr6.lt) goto loc_821A470C;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a472c
	goto loc_821A472C;
loc_821A470C:
	// lhz r6,1036(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
loc_821A472C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// b 0x821a4440
	goto loc_821A4440;
loc_821A473C:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhax r5,r11,r10
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r8,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r8.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x821a4784
	if (!ctx.cr6.lt) goto loc_821A4784;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// b 0x821a47a4
	goto loc_821A47A4;
loc_821A4784:
	// lhz r6,1036(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
loc_821A47A4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r10
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// b 0x821a4440
	goto loc_821A4440;
loc_821A47B4:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,1(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r5,r11,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lhax r4,r4,r10
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32));
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// bge cr6,0x821a4814
	if (!ctx.cr6.lt) goto loc_821A4814;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r6,r9,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r4
	ctx.r6.u64 = uint32_t((ctx.r4.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r6.s32 / ctx.r4.s32 : 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// b 0x821a4844
	goto loc_821A4844;
loc_821A4814:
	// lhz r6,1036(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r8,r8,-256
	ctx.r8.s64 = ctx.r8.s64 + -256;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r6,r9,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r6.s32 / ctx.r11.s32 : 0);
loc_821A4844:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sthx r6,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x821a4178
	goto loc_821A4178;
loc_821A4858:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,1(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// and r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r5,r11,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lhax r4,r4,r10
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32));
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// bge cr6,0x821a48a8
	if (!ctx.cr6.lt) goto loc_821A48A8;
	// lwz r10,1024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x821a48cc
	goto loc_821A48CC;
loc_821A48A8:
	// lhz r6,1036(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1036);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r8,r8,-256
	ctx.r8.s64 = ctx.r8.s64 + -256;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_821A48CC:
	// lhax r6,r9,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// divw r5,r6,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r6.s32 / ctx.r11.s32 : 0);
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// sthx r6,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x821a4178
	goto loc_821A4178;
loc_821A48F4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhax r8,r6,r10
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x821a4538
	goto loc_821A4538;
loc_821A4928:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhax r8,r6,r10
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subfe r7,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4970:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// subfc r6,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r7,r7,r11
	ctx.r7.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
loc_821A49A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A49C0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r6,r6,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// subfc r8,r6,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r6.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// adde r7,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4A10:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// subfc r6,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// eqv r7,r11,r7
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r7.u64);
	// b 0x821a49a0
	goto loc_821A49A0;
loc_821A4A44:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r7,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32));
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhax r6,r6,r10
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32));
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subfc r8,r8,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// adde r7,r7,r5
	temp.u8 = (ctx.r7.u32 + ctx.r5.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4A94:
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// lbz r4,2(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r5,1(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addic. r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x821a4af4
	if (ctx.cr0.lt) goto loc_821A4AF4;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,3098
	ctx.r8.s64 = r31.s64 + 3098;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x821a4ad0
	goto loc_821A4AD0;
loc_821A4AC4:
	// lwz r10,1044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// lwz r9,1040(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// lhz r11,1038(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1038);
loc_821A4AD0:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lhzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// sthu r10,-2(r8)
	ea = -2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x821a4ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4AC4;
loc_821A4AF4:
	// rlwinm r11,r5,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r5,r31,3096
	ctx.r5.s64 = r31.s64 + 3096;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A4B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3128);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r10,1044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,1040(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// lhz r11,1038(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1038);
	// beq cr6,0x821a421c
	if (ctx.cr6.eq) goto loc_821A421C;
	// extsh r25,r7
	r25.s64 = ctx.r7.s16;
loc_821A4B2C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x821a4b64
	if (!ctx.cr6.gt) goto loc_821A4B64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r11,1036(r31)
	REX_STORE_U16(r31.u32 + 1036, ctx.r11.u16);
	// sth r9,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r9.u16);
loc_821A4B64:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_821A4B70:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r10,1044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// lwz r9,1040(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1040);
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4B98:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhax r7,r8,r10
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32));
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4268
	goto loc_821A4268;
loc_821A4BB8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lhzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// bne 0x821a421c
	if (!ctx.cr0.eq) goto loc_821A421C;
	// b 0x821a41a4
	goto loc_821A41A4;
loc_821A4BF8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lhzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// beq 0x821a421c
	if (ctx.cr0.eq) goto loc_821A421C;
	// b 0x821a41a4
	goto loc_821A41A4;
loc_821A4C38:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r25,r8,r10
	r25.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// b 0x821a4c5c
	goto loc_821A4C5C;
loc_821A4C48:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r25,r8,r10
	r25.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,3128(r31)
	REX_STORE_U32(r31.u32 + 3128, ctx.r7.u32);
loc_821A4C5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,1038(r31)
	REX_STORE_U16(r31.u32 + 1038, ctx.r11.u16);
	// b 0x821a4b2c
	goto loc_821A4B2C;
loc_821A4C70:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,3128(r31)
	REX_STORE_U32(r31.u32 + 3128, ctx.r8.u32);
	// b 0x821a4b2c
	goto loc_821A4B2C;
}

DEFINE_REX_FUNC(sub_821DC0F0) {
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
	// bl 0x821d92a0
	ctx.lr = 0x821DC100;
	sub_821D92A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r6,r11,432
	ctx.r6.s64 = ctx.r11.s64 + 432;
	// stfs f1,248(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r6.u32 + 248, temp.u32);
	// bl 0x821d9370
	ctx.lr = 0x821DC110;
	sub_821D9370(ctx, base);
	// stfs f1,252(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r6.u32 + 252, temp.u32);
	// bl 0x821d9440
	ctx.lr = 0x821DC118;
	sub_821D9440(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,256(r6)
	REX_STORE_U16(ctx.r6.u32 + 256, ctx.r11.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,260(r6)
	REX_STORE_U16(ctx.r6.u32 + 260, ctx.r11.u16);
	// sth r11,258(r6)
	REX_STORE_U16(ctx.r6.u32 + 258, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD198) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821DD1B8;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821dd210
	if (ctx.cr0.eq) goto loc_821DD210;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(r31.s32, 33, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// ble cr6,0x821dd1d0
	if (!ctx.cr6.gt) goto loc_821DD1D0;
	// li r11,33
	ctx.r11.s64 = 33;
loc_821DD1D0:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5856
	ctx.r10.s64 = ctx.r10.s64 + -5856;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821dd1f0
	if (!ctx.cr6.eq) goto loc_821DD1F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821dd210
	goto loc_821DD210;
loc_821DD1F0:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_821DD210:
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

DEFINE_REX_FUNC(sub_821E0098) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,15352
	ctx.r5.s64 = ctx.r10.s64 + 15352;
	// lwz r3,-9744(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9744);
	// bl 0x821af9d8
	ctx.lr = 0x821E00C0;
	sub_821AF9D8(ctx, base);
	// bl 0x820ffa18
	ctx.lr = 0x821E00C4;
	sub_820FFA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0D68) {
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
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,64
	r30.s64 = ctx.r11.s64 + 64;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821e0e90
	if (ctx.cr6.lt) goto loc_821E0E90;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f0,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28900(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28900);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e0dc8
	if (ctx.cr6.lt) goto loc_821E0DC8;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
loc_821E0DC8:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// blt cr6,0x821e0e30
	if (ctx.cr6.lt) goto loc_821E0E30;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e0e00
	if (!ctx.cr6.eq) goto loc_821E0E00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,26552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26552);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,15200(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e0e30
	if (!ctx.cr6.lt) goto loc_821E0E30;
	// b 0x821e0e28
	goto loc_821E0E28;
loc_821E0E00:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26552(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-23928(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23928);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f13,r31,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821e0e30
	if (!ctx.cr6.gt) goto loc_821E0E30;
loc_821E0E28:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stwx r10,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r10.u32);
loc_821E0E30:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lwz r10,1852(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1852);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821e0e50
	if (ctx.cr0.eq) goto loc_821E0E50;
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// b 0x821e0e54
	goto loc_821E0E54;
loc_821E0E50:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_821E0E54:
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lfsx f2,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f1,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r9,28080
	ctx.r3.s64 = ctx.r9.s64 + 28080;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821E0E84;
	sub_821EACB0(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r11.u32);
loc_821E0E90:
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

DEFINE_REX_FUNC(sub_821E4DE0) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r5,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,28724(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28724);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r5,14672
	ctx.r9.s64 = ctx.r5.s64 + 14672;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f2,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// li r10,770
	ctx.r10.s64 = 770;
	// lfs f13,16088(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,29356(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29356);
	ctx.f11.f64 = double(temp.f32);
	// sth r10,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,16276(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16276);
	ctx.f10.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,16060(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16060);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r3,112
	ctx.r8.s64 = ctx.r3.s64 + 112;
	// stfs f2,124(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// addi r9,r9,15944
	ctx.r9.s64 = ctx.r9.s64 + 15944;
	// stfs f2,144(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f2,148(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f2,152(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// stfs f12,160(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r10,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r10.u8);
	// stfs f11,164(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r8,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stfs f10,168(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stb r10,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stb r6,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r6.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r6,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r6.u8);
	// stb r6,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r6.u8);
	// stb r7,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r7.u8);
	// stb r11,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// lfs f1,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e3858
	ctx.lr = 0x821E4EB8;
	sub_821E3858(ctx, base);
	// stw r6,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E88E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bge cr6,0x821e88fc
	if (!ctx.cr6.lt) goto loc_821E88FC;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-760
	ctx.r11.s64 = ctx.r11.s64 + -760;
	// ldx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821e8900
	goto loc_821E8900;
loc_821E88FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E8900:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9788) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f1,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821E97B4;
	sub_821ED290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
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

DEFINE_REX_FUNC(sub_821EB7F8) {
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
	ctx.lr = 0x821EB800;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f1c
	ctx.lr = 0x821EB808;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,1692(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1692);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,1700
	r30.s64 = ctx.r3.s64 + 1700;
	// addi r11,r4,384
	ctx.r11.s64 = ctx.r4.s64 + 384;
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// addi r9,r4,448
	ctx.r9.s64 = ctx.r4.s64 + 448;
	// stw r11,1672(r3)
	REX_STORE_U32(ctx.r3.u32 + 1672, ctx.r11.u32);
	// stw r10,1648(r3)
	REX_STORE_U32(ctx.r3.u32 + 1648, ctx.r10.u32);
	// addi r11,r4,256
	ctx.r11.s64 = ctx.r4.s64 + 256;
	// stw r9,1668(r3)
	REX_STORE_U32(ctx.r3.u32 + 1668, ctx.r9.u32);
	// addi r8,r4,640
	ctx.r8.s64 = ctx.r4.s64 + 640;
	// addi r10,r4,512
	ctx.r10.s64 = ctx.r4.s64 + 512;
	// stw r11,1652(r3)
	REX_STORE_U32(ctx.r3.u32 + 1652, ctx.r11.u32);
	// addi r9,r4,576
	ctx.r9.s64 = ctx.r4.s64 + 576;
	// stw r8,1688(r3)
	REX_STORE_U32(ctx.r3.u32 + 1688, ctx.r8.u32);
	// stw r10,1680(r3)
	REX_STORE_U32(ctx.r3.u32 + 1680, ctx.r10.u32);
	// addi r11,r4,320
	ctx.r11.s64 = ctx.r4.s64 + 320;
	// stw r9,1676(r3)
	REX_STORE_U32(ctx.r3.u32 + 1676, ctx.r9.u32);
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// addi r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 + 192;
	// stw r4,1644(r3)
	REX_STORE_U32(ctx.r3.u32 + 1644, ctx.r4.u32);
	// addi r9,r4,704
	ctx.r9.s64 = ctx.r4.s64 + 704;
	// stw r11,1664(r3)
	REX_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
	// stw r8,1656(r3)
	REX_STORE_U32(ctx.r3.u32 + 1656, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,1660(r31)
	REX_STORE_U32(r31.u32 + 1660, ctx.r10.u32);
	// stw r9,1684(r31)
	REX_STORE_U32(r31.u32 + 1684, ctx.r9.u32);
	// bl 0x82201b48
	ctx.lr = 0x821EB87C;
	sub_82201B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1648(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1648);
	// bl 0x82201ec8
	ctx.lr = 0x821EB888;
	sub_82201EC8(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lfs f12,1704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1548(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 1548, temp.u32);
	// lwz r11,7724(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821eb8a8
	if (!ctx.cr0.eq) goto loc_821EB8A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,7724(r10)
	REX_STORE_U32(ctx.r10.u32 + 7724, ctx.r11.u32);
loc_821EB8A8:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821eb8b8
	if (!ctx.cr0.eq) goto loc_821EB8B8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,7724(r10)
	REX_STORE_U32(ctx.r10.u32 + 7724, ctx.r11.u32);
loc_821EB8B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,1556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1556);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1596(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1596);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,1600(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1600);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f8,1552(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1552);
	ctx.f8.f64 = double(temp.f32);
	// lis r30,-32166
	r30.s64 = -2108030976;
	// lfs f7,1560(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1560);
	ctx.f7.f64 = double(temp.f32);
	// lis r29,-32166
	r29.s64 = -2108030976;
	// lfs f30,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f30.f64 = double(temp.f32);
	// lfs f29,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	f29.f64 = double(temp.f32);
	// fsubs f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfs f11,17320(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17320);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f29,f13
	ctx.f5.f64 = double(float(f29.f64 - ctx.f13.f64));
	// lfs f10,17316(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17316);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f25,f9,f11
	f25.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,7720(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 7720, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1552, temp.u32);
	// fmuls f24,f7,f10
	f24.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f13,7716(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 7716, temp.u32);
	// fmuls f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f25,4960(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 4960, temp.u32);
	// stfs f24,4964(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 4964, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f11,1548(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 1548, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,17312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f23,f12,f0
	f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,17308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17308);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2364(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f6,f13
	f22.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f21,f5,f0
	f21.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,15624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	f28.f64 = double(temp.f32);
	// lfs f27,16908(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16908);
	f27.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f26,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f26.f64 = double(temp.f32);
	// fmr f9,f28
	ctx.f9.f64 = f28.f64;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f8,f27
	ctx.f8.f64 = f27.f64;
	// fmr f7,f26
	ctx.f7.f64 = f26.f64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmr f4,f22
	ctx.f4.f64 = f22.f64;
	// fmr f5,f21
	ctx.f5.f64 = f21.f64;
	// bl 0x820e0f48
	ctx.lr = 0x821EB994;
	sub_820E0F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,1652(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// bl 0x822d4fa0
	ctx.lr = 0x821EB9A4;
	sub_822D4FA0(ctx, base);
	// lwz r11,1652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f9,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f28.f64;
	// fmr f8,f27
	ctx.f8.f64 = f27.f64;
	// fmr f7,f26
	ctx.f7.f64 = f26.f64;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f31,f21
	ctx.f5.f64 = double(float(f31.f64 - f21.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f4,f22,f31
	ctx.f4.f64 = double(float(f22.f64 + f31.f64));
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x820e0f48
	ctx.lr = 0x821EB9E0;
	sub_820E0F48(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1644(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1644);
	// bl 0x820e0368
	ctx.lr = 0x821EB9F0;
	sub_820E0368(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f9,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f8,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// lfs f7,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fmuls f8,f8,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * f29.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,1672(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1672);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EBA60;
	sub_822D4FA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x821EBA70;
	sub_822D4FA0(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r3,1668(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1668);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EBAC8;
	sub_822D4FA0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f9,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f28.f64;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// fmr f8,f27
	ctx.f8.f64 = f27.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f7,f26
	ctx.f7.f64 = f26.f64;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// lhz r11,26(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 26);
	// lhz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 24);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f13,7716(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 7716);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f0,7720(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 7720);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsubs f4,f31,f0
	ctx.f4.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fsubs f5,f31,f13
	ctx.f5.f64 = double(float(f31.f64 - ctx.f13.f64));
	// bl 0x820e0f48
	ctx.lr = 0x821EBB4C;
	sub_820E0F48(ctx, base);
	// lhz r11,26(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 26);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 24);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f29,f13,f30
	f29.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x822d4fa0
	ctx.lr = 0x821EBB8C;
	sub_822D4FA0(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,1676(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1676);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EBBE4;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1644(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1644);
	// bl 0x820e0368
	ctx.lr = 0x821EBBF4;
	sub_820E0368(ctx, base);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// lfs f9,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f8,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,1680(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1680);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EBC64;
	sub_822D4FA0(ctx, base);
	// lwz r3,1664(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1664);
	// bl 0x820e01b0
	ctx.lr = 0x821EBC6C;
	sub_820E01B0(ctx, base);
	// lwz r5,1644(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1644);
	// lwz r4,1664(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1664);
	// lwz r3,1660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1660);
	// bl 0x820e0368
	ctx.lr = 0x821EBC7C;
	sub_820E0368(ctx, base);
	// lwz r5,1644(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1644);
	// lwz r4,1664(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1664);
	// lwz r3,1656(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1656);
	// bl 0x820e0368
	ctx.lr = 0x821EBC8C;
	sub_820E0368(ctx, base);
	// lwz r3,1684(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// bl 0x820e01b0
	ctx.lr = 0x821EBC94;
	sub_820E01B0(ctx, base);
	// lhz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lwz r11,1684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// lfs f12,2372(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2372);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,1684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// lhz r11,26(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 26);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r11,1684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,1684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,1684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1684);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r3,1688(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1688);
	// bl 0x820e01b0
	ctx.lr = 0x821EBD0C;
	sub_820E01B0(ctx, base);
	// lwz r11,1668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1668);
	// lwz r10,1688(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1688);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r11,1668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1668);
	// lwz r10,1688(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1688);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f68
	ctx.lr = 0x821EBD38;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82205F38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82205F40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r3,r9,30736
	ctx.r3.s64 = ctx.r9.s64 + 30736;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bne cr6,0x82205f90
	if (!ctx.cr6.eq) goto loc_82205F90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82205f88
	if (!ctx.cr6.eq) goto loc_82205F88;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r31,r6,r9
	r31.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r9,r31,2047
	ctx.r9.s64 = r31.s64 + 2047;
	// rlwinm r31,r9,0,0,20
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
loc_82205F88:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82205fc8
	goto loc_82205FC8;
loc_82205F90:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82205fb4
	if (!ctx.cr6.eq) goto loc_82205FB4;
	// rlwinm r31,r5,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r31,r6,r9
	r31.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r9,r31,2047
	ctx.r9.s64 = r31.s64 + 2047;
	// rlwinm r31,r9,0,0,20
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
loc_82205FB4:
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_82205FC8:
	// lwz r30,244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x822059d0
	ctx.lr = 0x82205FFC;
	sub_822059D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82209598) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822095ac
	if (!ctx.cr6.eq) goto loc_822095AC;
	// b 0x822098c8
	sub_822098C8(ctx, base);
	return;
loc_822095AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822098D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822098D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82209900
	if (ctx.cr6.eq) goto loc_82209900;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82209900:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82209978
	if (ctx.cr6.eq) goto loc_82209978;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & r31.u64;
	// bl 0x824d41bc
	ctx.lr = 0x82209948;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822099e4
	if (ctx.cr6.eq) goto loc_822099E4;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x822099e4
	if (ctx.cr6.eq) goto loc_822099E4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82209970
	if (ctx.cr6.eq) goto loc_82209970;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82209970:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822099ec
	goto loc_822099EC;
loc_82209978:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d41bc
	ctx.lr = 0x8220998C;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x822099b4
	if (!ctx.cr6.eq) goto loc_822099B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d41ac
	ctx.lr = 0x822099A8;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822099cc
	if (ctx.cr0.lt) goto loc_822099CC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822099B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822099cc
	if (ctx.cr6.lt) goto loc_822099CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x822099ec
	goto loc_822099EC;
loc_822099CC:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822099e4
	if (!ctx.cr6.eq) goto loc_822099E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_822099E4:
	// bl 0x8220a840
	ctx.lr = 0x822099E8;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822099EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822103F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822105E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,12284(r3)
	REX_STORE_U32(ctx.r3.u32 + 12284, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// bne cr6,0x82210624
	if (!ctx.cr6.eq) goto loc_82210624;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82210624:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82210634
	if (!ctx.cr6.eq) goto loc_82210634;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82210634:
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211230) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211600) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12416(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12416);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211888) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822119B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
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

DEFINE_REX_FUNC(sub_82212210) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212488) {
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
	// lfs f0,13024(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13024);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f13,13032(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13032);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,13036(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13036);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,13028(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13028);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r31,8(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,12(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,12288(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12288);
	// stw r11,13052(r3)
	REX_STORE_U32(ctx.r3.u32 + 13052, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,13056(r3)
	REX_STORE_U32(ctx.r3.u32 + 13056, ctx.r10.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r31,13060(r3)
	REX_STORE_U32(ctx.r3.u32 + 13060, r31.u32);
	// stw r30,13064(r3)
	REX_STORE_U32(ctx.r3.u32 + 13064, r30.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x82212544
	if (ctx.cr6.eq) goto loc_82212544;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82212520
	if (ctx.cr6.gt) goto loc_82212520;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82212520:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8221252c
	if (ctx.cr6.gt) goto loc_8221252C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8221252C:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// blt cr6,0x82212538
	if (ctx.cr6.lt) goto loc_82212538;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82212538:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// blt cr6,0x82212544
	if (ctx.cr6.lt) goto loc_82212544;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82212544:
	// lwz r11,10436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10436(r3)
	REX_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// stw r10,10440(r3)
	REX_STORE_U32(ctx.r3.u32 + 10440, ctx.r10.u32);
	// bl 0x8220fed8
	ctx.lr = 0x82212568;
	sub_8220FED8(ctx, base);
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

DEFINE_REX_FUNC(sub_82217980) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,128
	ctx.r9.s64 = 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1022
	ctx.r11.s64 = ctx.r3.s64 + 1022;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,127
	ctx.r9.s64 = 127;
loc_82217994:
	// divwu r8,r10,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r8,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r8.u16);
	// divwu r7,r10,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// sth r8,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,-1020(r11)
	REX_STORE_U16(ctx.r11.u32 + -1020, ctx.r8.u16);
	// sth r8,-508(r11)
	REX_STORE_U16(ctx.r11.u32 + -508, ctx.r8.u16);
	// sthu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82217994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82217994;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82217690
	sub_82217690(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221A4C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8221A4D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cctpl 
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221A4E8:
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// bdnz 0x8221a4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221A4E8;
	// cctpm 
	// lbz r11,11069(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a59c
	if (!ctx.cr0.eq) goto loc_8221A59C;
	// lwz r11,11024(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 11024);
	// lwz r10,256(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,88(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8221a544
	if (ctx.cr6.eq) goto loc_8221A544;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8221A544:
	// bl 0x823cd280
	ctx.lr = 0x8221A548;
	sub_823CD280(ctx, base);
	// lwz r11,11016(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8221a564
	if (!ctx.cr6.eq) goto loc_8221A564;
	// lwz r11,11148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 11148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221a564
	if (ctx.cr6.eq) goto loc_8221A564;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8221A564:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// lwz r11,6240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6240);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221a584
	if (!ctx.cr6.lt) goto loc_8221A584;
loc_8221A57C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221a5a0
	goto loc_8221A5A0;
loc_8221A584:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82224970
	ctx.lr = 0x8221A58C;
	sub_82224970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221a59c
	if (!ctx.cr0.eq) goto loc_8221A59C;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x8221a57c
	goto loc_8221A57C;
loc_8221A59C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221A5A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221D8F8) {
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
	ctx.lr = 0x8221D900;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8220bed8
	ctx.lr = 0x8221D914;
	sub_8220BED8(ctx, base);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r23,-32256
	r23.s64 = -2113929216;
loc_8221D91C:
	// lis r11,-5
	ctx.r11.s64 = -327680;
	// lwz r25,0(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27680
	ctx.r11.u64 = ctx.r11.u64 | 27680;
	// lwz r8,88(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 88);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 84);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,384(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 384);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r9
	r26.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bne cr6,0x8221da6c
	if (!ctx.cr6.eq) goto loc_8221DA6C;
	// addi r30,r25,44
	r30.s64 = r25.s64 + 44;
loc_8221D95C:
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
	// bne 0x8221d95c
	if (!ctx.cr0.eq) goto loc_8221D95C;
	// addi r27,r28,60
	r27.s64 = r28.s64 + 60;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d459c
	ctx.lr = 0x8221D994;
	__imp__KeWaitForSingleObject(ctx, base);
loc_8221D994:
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
	// bne 0x8221d994
	if (!ctx.cr0.eq) goto loc_8221D994;
	// b 0x8221da64
	goto loc_8221DA64;
loc_8221D9B4:
	// bl 0x824d419c
	ctx.lr = 0x8221D9B8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221d9c8
	if (!ctx.cr6.eq) goto loc_8221D9C8;
	// lwz r11,1496(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 1496);
	// b 0x8221d9cc
	goto loc_8221D9CC;
loc_8221D9C8:
	// lwz r11,1500(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1500);
loc_8221D9CC:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r31,15348
	r29.s64 = r31.s64 + 15348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x8221D9DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221da0c
	if (ctx.cr0.eq) goto loc_8221DA0C;
	// lwz r11,24584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d9fc
	if (!ctx.cr6.eq) goto loc_8221D9FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221bcc0
	ctx.lr = 0x8221D9FC;
	sub_8221BCC0(ctx, base);
loc_8221D9FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,15248
	ctx.r4.s64 = r31.s64 + 15248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221bcc8
	ctx.lr = 0x8221DA0C;
	sub_8221BCC8(ctx, base);
loc_8221DA0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x8221DA14;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8221DA14:
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
	// bne 0x8221da14
	if (!ctx.cr0.eq) goto loc_8221DA14;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d459c
	ctx.lr = 0x8221DA48;
	__imp__KeWaitForSingleObject(ctx, base);
loc_8221DA48:
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
	// bne 0x8221da48
	if (!ctx.cr0.eq) goto loc_8221DA48;
loc_8221DA64:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8221d9b4
	if (ctx.cr6.eq) goto loc_8221D9B4;
loc_8221DA6C:
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
	// bl 0x824d458c
	ctx.lr = 0x8221DA74;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221da8c
	if (ctx.cr6.eq) goto loc_8221DA8C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221d638
	ctx.lr = 0x8221DA88;
	sub_8221D638(ctx, base);
	// b 0x8221d91c
	goto loc_8221D91C;
loc_8221DA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82225FF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8222600c
	goto loc_8222600C;
loc_82226004:
	// lhzu r10,12(r3)
	ea = 12 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8222600C:
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82226004
	if (!ctx.cr6.eq) goto loc_82226004;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226AF8) {
	REX_FUNC_PROLOGUE();
	// stw r4,12240(r3)
	REX_STORE_U32(ctx.r3.u32 + 12240, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82226C88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82226cac
	if (!ctx.cr6.eq) goto loc_82226CAC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82226cac
	if (!ctx.cr6.eq) goto loc_82226CAC;
	// li r30,64
	r30.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_82226CAC:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82226cbc
	if (ctx.cr0.eq) goto loc_82226CBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82226ccc
	goto loc_82226CCC;
loc_82226CBC:
	// lwz r11,11048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11048);
	// rlwimi r6,r30,8,17,23
	ctx.r6.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0x7F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwimi r11,r6,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r11,r6,4,13,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7F000) | (ctx.r11.u64 & 0xFFFFFFFFFFF80FFF);
loc_82226CCC:
	// stw r11,11048(r31)
	REX_STORE_U32(r31.u32 + 11048, ctx.r11.u32);
	// lwz r10,13092(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13092);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// and r29,r10,r4
	r29.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82226cf4
	if (!ctx.cr6.gt) goto loc_82226CF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82226CF0;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82226CF4:
	// oris r9,r29,49153
	ctx.r9.u64 = r29.u64 | 3221291008;
	// addi r8,r30,1775
	ctx.r8.s64 = r30.s64 + 1775;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,14192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14192);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r7,14188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14188);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,14196(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14196);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15224);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15220);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822261f8
	ctx.lr = 0x82226D60;
	sub_822261F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8222C5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f30,f1
	f30.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18068);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bge cr6,0x8222c670
	if (!ctx.cr6.lt) goto loc_8222C670;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,-25524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25524);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-25528(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25528);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-25532(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25532);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,-25536(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -25536);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,-25540(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -25540);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-25544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25544);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-25548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25548);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f0,f7,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f0,f7,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f0,f0,f7,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f0,f0,f7,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmadds f1,f0,f7,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f8.f64)));
	// b 0x8222c76c
	goto loc_8222C76C;
loc_8222C670:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fdivs f29,f0,f30
	f29.f64 = double(float(ctx.f0.f64 / f30.f64));
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v1,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222be18
	ctx.lr = 0x8222C698;
	sub_8222BE18(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// lfs f0,-25552(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25552);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v12,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f13,-25556(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25556);
	ctx.f13.f64 = double(temp.f32);
	// vmulfp128 v13,v63,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// fmsubs f13,f29,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfs f0,-25560(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -25560);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vcmpeqfp128 v62,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f12,-25568(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25568);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// lfs f13,-25564(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25564);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v11,v13,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f10,-25576(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25576);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-25572(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25572);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,-25580(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25580);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmsubs f13,f0,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f13.f64)));
	// lfs f0,-25584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25584);
	ctx.f0.f64 = double(temp.f32);
	// vmaddfp v0,v0,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// fmadds f13,f13,f29,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f12.f64)));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// fmsubs f13,f13,f29,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, -ctx.f11.f64)));
	// vsel v13,v0,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f13,f13,f29,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f10.f64)));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// fmadds f13,f13,f29,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f9.f64)));
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_8222C76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82236B70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-11712
	ctx.r11.s64 = ctx.r11.s64 + -11712;
	// li r29,84
	r29.s64 = 84;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// lis r30,-32163
	r30.s64 = -2107834368;
loc_82236B8C:
	// lwz r11,-5612(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5612);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x824d438c
	ctx.lr = 0x82236B98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-5612(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5612);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236bdc
	if (ctx.cr6.eq) goto loc_82236BDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,-12
	ctx.r6.s64 = r31.s64 + -12;
	// stw r11,-16(r31)
	REX_STORE_U32(r31.u32 + -16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// bl 0x8223a368
	ctx.lr = 0x82236BC0;
	sub_8223A368(ctx, base);
	// lwz r11,-5612(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5612);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x824d437c
	ctx.lr = 0x82236BCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-5612(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -5612);
	// bl 0x82237e90
	ctx.lr = 0x82236BD8;
	sub_82237E90(ctx, base);
	// b 0x82236bec
	goto loc_82236BEC;
loc_82236BDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stw r10,-16(r31)
	REX_STORE_U32(r31.u32 + -16, ctx.r10.u32);
	// bl 0x824d437c
	ctx.lr = 0x82236BEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82236BEC:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(r29.u32, 100, ctx.xer);
	// blt cr6,0x82236b8c
	if (ctx.cr6.lt) goto loc_82236B8C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82238300) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82238334
	if (ctx.cr6.eq) goto loc_82238334;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
loc_82238314:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82238334
	if (ctx.cr6.eq) goto loc_82238334;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82238314
	if (ctx.cr6.lt) goto loc_82238314;
loc_82238334:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223834c
	if (!ctx.cr6.lt) goto loc_8223834C;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8223834C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822395D0) {
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
	ctx.lr = 0x822395D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239610
	if (ctx.cr6.eq) goto loc_82239610;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82239610
	if (ctx.cr6.eq) goto loc_82239610;
loc_82239604:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82239604
	if (ctx.cr6.lt) goto loc_82239604;
loc_82239610:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239638
	if (ctx.cr6.eq) goto loc_82239638;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82239638
	if (ctx.cr6.eq) goto loc_82239638;
loc_8223962C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223962c
	if (ctx.cr6.lt) goto loc_8223962C;
loc_82239638:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,1224
	ctx.r3.s64 = 1224;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823cd118
	ctx.lr = 0x82239648;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8223965c
	if (!ctx.cr0.eq) goto loc_8223965C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x822398a8
	goto loc_822398A8;
loc_8223965C:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-5612
	ctx.r7.s64 = ctx.r11.s64 + -5612;
loc_82239668:
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
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8223968c
	if (!ctx.cr6.eq) goto loc_8223968C;
	// stwcx. r31,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82239668
	if (!ctx.cr0.eq) goto loc_82239668;
	// b 0x82239694
	goto loc_82239694;
loc_8223968C:
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82239694:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822396bc
	if (ctx.cr6.eq) goto loc_822396BC;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823cd250
	ctx.lr = 0x822396B0;
	sub_823CD250(ctx, base);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x822398a4
	goto loc_822398A4;
loc_822396BC:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,-5728
	r29.s64 = ctx.r11.s64 + -5728;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82239458
	ctx.lr = 0x822396CC;
	sub_82239458(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,1
	r25.s64 = 1;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r25,1216(r31)
	REX_STORE_U32(r31.u32 + 1216, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,1688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1688);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// subfic r11,r11,13300
	ctx.xer.ca = ctx.r11.u32 <= 13300;
	ctx.r11.u64 = static_cast<uint64_t>(13300) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1220(r31)
	REX_STORE_U32(r31.u32 + 1220, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82239708;
	sub_822D4FA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822380c0
	ctx.lr = 0x82239714;
	sub_822380C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8223989c
	if (ctx.cr0.lt) goto loc_8223989C;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
loc_82239724:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223a918
	ctx.lr = 0x8223973C;
	sub_8223A918(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8223989c
	if (ctx.cr0.lt) goto loc_8223989C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// blt cr6,0x82239724
	if (ctx.cr6.lt) goto loc_82239724;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822397c4
	if (!ctx.cr6.gt) goto loc_822397C4;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r31,100
	r27.s64 = r31.s64 + 100;
loc_8223976C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239784
	if (ctx.cr6.eq) goto loc_82239784;
	// lwzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
loc_82239784:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239794
	if (ctx.cr6.eq) goto loc_82239794;
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
loc_82239794:
	// add r8,r27,r28
	ctx.r8.u64 = r27.u64 + r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x8223e150
	ctx.lr = 0x822397A8;
	sub_8223E150(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8223989c
	if (ctx.cr0.lt) goto loc_8223989C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223976c
	if (ctx.cr6.lt) goto loc_8223976C;
loc_822397C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x822397D8;
	sub_822095C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// bne 0x822397f0
	if (!ctx.cr0.eq) goto loc_822397F0;
loc_822397E4:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x8223989c
	goto loc_8223989C;
loc_822397F0:
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x824d3fdc
	ctx.lr = 0x822397FC;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822397e4
	if (ctx.cr0.eq) goto loc_822397E4;
	// stw r25,288(r31)
	REX_STORE_U32(r31.u32 + 288, r25.u32);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x824d440c
	ctx.lr = 0x82239814;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82239894
	if (!ctx.cr6.eq) goto loc_82239894;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-27736
	ctx.r5.s64 = ctx.r11.s64 + -27736;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cdd08
	ctx.lr = 0x82239844;
	sub_823CDD08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r3.u32);
	// beq 0x822397e4
	if (ctx.cr0.eq) goto loc_822397E4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// bl 0x8220aa00
	ctx.lr = 0x8223985C;
	sub_8220AA00(ctx, base);
	// lwz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82239894
	if (ctx.cr6.eq) goto loc_82239894;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cdcc0
	ctx.lr = 0x82239884;
	sub_823CDCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82239894
	if (!ctx.cr0.eq) goto loc_82239894;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
loc_82239894:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x822398a8
	if (!ctx.cr6.lt) goto loc_822398A8;
loc_8223989C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238a70
	ctx.lr = 0x822398A4;
	sub_82238A70(ctx, base);
loc_822398A4:
	// li r31,0
	r31.s64 = 0;
loc_822398A8:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82246C10) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82275ea0
	sub_82275EA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C88) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x822663e0
	sub_822663E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82247020) {
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
	ctx.lr = 0x82247028;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2015
	ctx.r4.s64 = 2015;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8225da70
	ctx.lr = 0x82247048;
	sub_8225DA70(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82247054;
	sub_8227C2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82247AE0) {
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
	ctx.lr = 0x82247AF8;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247b30
	if (ctx.cr0.lt) goto loc_82247B30;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247b28
	if (ctx.cr6.eq) goto loc_82247B28;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82247b28
	if (!ctx.cr6.eq) goto loc_82247B28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lfs f1,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822454a8
	ctx.lr = 0x82247B24;
	sub_822454A8(ctx, base);
	// b 0x82247b30
	goto loc_82247B30;
loc_82247B28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247B30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248AC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82246220
	ctx.lr = 0x82248AE0;
	sub_82246220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82248b1c
	if (ctx.cr6.eq) goto loc_82248B1C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82248b1c
	if (!ctx.cr6.eq) goto loc_82248B1C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82248b1c
	if (ctx.cr6.lt) goto loc_82248B1C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82248b1c
	if (ctx.cr6.gt) goto loc_82248B1C;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82248b24
	goto loc_82248B24;
loc_82248B1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248B24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A560) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224A568;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,-2144(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bgt cr6,0x8224a748
	if (ctx.cr6.gt) goto loc_8224A748;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8224a5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A5EC;
	// bdzf 4*cr6+eq,0x8224a608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A608;
	// bdzf 4*cr6+eq,0x8224a620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A620;
	// bdzf 4*cr6+eq,0x8224a640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A640;
	// bdzf 4*cr6+eq,0x8224a6b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A6B0;
	// bdzf 4*cr6+eq,0x8224a6c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8224A6C8;
	// bne cr6,0x8224a6fc
	if (!ctx.cr6.eq) goto loc_8224A6FC;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8224a5d4
	if (!ctx.cr6.lt) goto loc_8224A5D4;
loc_8224A5C0:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8224A5C8;
	sub_822D7B58(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// b 0x8224a758
	goto loc_8224A758;
loc_8224A5D4:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227adb0
	ctx.lr = 0x8224A5E4;
	sub_8227ADB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8224a734
	goto loc_8224A734;
loc_8224A5EC:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8227adf8
	ctx.lr = 0x8224A600;
	sub_8227ADF8(ctx, base);
loc_8224A600:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8224a734
	goto loc_8224A734;
loc_8224A608:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8227ae40
	ctx.lr = 0x8224A61C;
	sub_8227AE40(ctx, base);
	// b 0x8224a600
	goto loc_8224A600;
loc_8224A620:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ae88
	ctx.lr = 0x8224A63C;
	sub_8227AE88(ctx, base);
	// b 0x8224a600
	goto loc_8224A600;
loc_8224A640:
	// lhz r30,0(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8224a5c0
	if (!ctx.cr6.lt) goto loc_8224A5C0;
	// rlwinm. r8,r30,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x8224a680
	if (ctx.cr0.eq) goto loc_8224A680;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8224A660:
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// sth r6,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// blt cr6,0x8224a660
	if (ctx.cr6.lt) goto loc_8224A660;
loc_8224A680:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// bl 0x8227af18
	ctx.lr = 0x8224A690;
	sub_8227AF18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8224a6a8
	if (!ctx.cr0.lt) goto loc_8224A6A8;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8224A6A0;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8224a758
	goto loc_8224A758;
loc_8224A6A8:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// b 0x8224a734
	goto loc_8224A734;
loc_8224A6B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8227aed0
	ctx.lr = 0x8224A6C4;
	sub_8227AED0(ctx, base);
	// b 0x8224a600
	goto loc_8224A600;
loc_8224A6C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8227afa8
	ctx.lr = 0x8224A6F4;
	sub_8227AFA8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8224a734
	goto loc_8224A734;
loc_8224A6FC:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224a5c0
	if (ctx.cr6.lt) goto loc_8224A5C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8227b000
	ctx.lr = 0x8224A730;
	sub_8227B000(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
loc_8224A734:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x822d7b58
	ctx.lr = 0x8224A740;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224a758
	goto loc_8224A758;
loc_8224A748:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8224A750;
	sub_822D7B58(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8224A758:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82252BF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5092
	ctx.r3.s64 = ctx.r11.s64 + -5092;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252E28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4988
	ctx.r3.s64 = ctx.r11.s64 + -4988;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253048) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822532A8) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x822532CC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822532e0
	if (ctx.cr0.eq) goto loc_822532E0;
	// bl 0x8224fad0
	ctx.lr = 0x822532D8;
	sub_8224FAD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822532e4
	goto loc_822532E4;
loc_822532E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822532E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822532f8
	if (!ctx.cr6.eq) goto loc_822532F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82253304
	goto loc_82253304;
loc_822532F8:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82253304:
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

DEFINE_REX_FUNC(sub_82255318) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225542c
	if (ctx.cr6.eq) goto loc_8225542C;
	// bl 0x822d7988
	ctx.lr = 0x82255378;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82255388
	if (ctx.cr0.eq) goto loc_82255388;
loc_82255380:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82255434
	goto loc_82255434;
loc_82255388:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822d7988
	ctx.lr = 0x82255394;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255380
	if (!ctx.cr0.eq) goto loc_82255380;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822553c4
	if (!ctx.cr6.eq) goto loc_822553C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822553bc
	if (!ctx.cr6.eq) goto loc_822553BC;
loc_822553B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82255434
	goto loc_82255434;
loc_822553BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82255380
	if (ctx.cr6.eq) goto loc_82255380;
loc_822553C4:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82255380
	if (ctx.cr6.eq) goto loc_82255380;
	// bl 0x822d7988
	ctx.lr = 0x822553D4;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255380
	if (!ctx.cr0.eq) goto loc_82255380;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r10,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82255380
	if (!ctx.cr6.eq) goto loc_82255380;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82255418
	if (ctx.cr6.eq) goto loc_82255418;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82255418
	if (ctx.cr6.eq) goto loc_82255418;
	// bl 0x822d7988
	ctx.lr = 0x82255410;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255380
	if (!ctx.cr0.eq) goto loc_82255380;
loc_82255418:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822553b4
	if (ctx.cr6.eq) goto loc_822553B4;
	// b 0x82255380
	goto loc_82255380;
loc_8225542C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82255434:
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

DEFINE_REX_FUNC(sub_8225B210) {
	REX_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8225ad40
	sub_8225AD40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225B300) {
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
	ctx.lr = 0x8225B318;
	sub_82255CF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225b32c
	if (!ctx.cr0.eq) goto loc_8225B32C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8225b340
	goto loc_8225B340;
loc_8225B32C:
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225a890
	ctx.lr = 0x8225B340;
	sub_8225A890(ctx, base);
loc_8225B340:
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

DEFINE_REX_FUNC(sub_8225C1F0) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// beq cr6,0x8225c248
	if (ctx.cr6.eq) goto loc_8225C248;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c248
	if (ctx.cr6.eq) goto loc_8225C248;
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82288d40
	ctx.lr = 0x8225C23C;
	sub_82288D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,244(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 244);
	// bl 0x8228e5a8
	ctx.lr = 0x8225C248;
	sub_8228E5A8(ctx, base);
loc_8225C248:
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

DEFINE_REX_FUNC(sub_8225D608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225D610;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8225D63C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225d674
	if (ctx.cr6.eq) goto loc_8225D674;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822570a8
	ctx.lr = 0x8225D654;
	sub_822570A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d688
	if (ctx.cr0.lt) goto loc_8225D688;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c6c8
	ctx.lr = 0x8225D674;
	sub_8225C6C8(ctx, base);
loc_8225D674:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x8225d63c
	if (ctx.cr6.lt) goto loc_8225D63C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225EE28) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225e590
	ctx.lr = 0x8225EE60;
	sub_8225E590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225EE68;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8225EE70;
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

DEFINE_REX_FUNC(sub_822607F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// subfic r7,r10,-4
	ctx.xer.ca = ctx.r10.u32 <= 4294967292;
	ctx.r7.u64 = static_cast<uint64_t>(-4) - ctx.r10.u64;
loc_82260828:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82260844
	if (ctx.cr6.gt) goto loc_82260844;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8226085c
	if (ctx.cr6.lt) goto loc_8226085C;
loc_82260844:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82260898
	if (ctx.cr6.gt) goto loc_82260898;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82260898
	if (!ctx.cr6.lt) goto loc_82260898;
loc_8226085C:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82260898
	if (!ctx.cr6.lt) goto loc_82260898;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82260898:
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82260828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82260828;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822660C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bge cr6,0x82266104
	if (!ctx.cr6.lt) goto loc_82266104;
loc_822660F4:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822d7b58
	ctx.lr = 0x822660FC;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822661bc
	goto loc_822661BC;
loc_82266104:
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82266138
	if (!ctx.cr6.eq) goto loc_82266138;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822660f4
	if (ctx.cr0.eq) goto loc_822660F4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82266138
	if (!ctx.cr6.eq) goto loc_82266138;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x824d4a0c
	ctx.lr = 0x82266134;
	__imp__swprintf(ctx, base);
	// b 0x8226614c
	goto loc_8226614C;
loc_82266138:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d4a0c
	ctx.lr = 0x8226614C;
	__imp__swprintf(ctx, base);
loc_8226614C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82257378
	ctx.lr = 0x8226615C;
	sub_82257378(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r5,r11,676
	ctx.r5.s64 = ctx.r11.s64 + 676;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7d70
	ctx.lr = 0x82266170;
	sub_822D7D70(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257378
	ctx.lr = 0x82266180;
	sub_82257378(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82266190
	if (!ctx.cr6.eq) goto loc_82266190;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82266190:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265e68
	ctx.lr = 0x822661AC;
	sub_82265E68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822d7b58
	ctx.lr = 0x822661B8;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822661BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226C618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226C620;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c6e4
	if (ctx.cr6.eq) goto loc_8226C6E4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8226c6a4
	if (ctx.cr6.eq) goto loc_8226C6A4;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x8226c67c
	if (ctx.cr6.eq) goto loc_8226C67C;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x8226c7a0
	if (!ctx.cr6.eq) goto loc_8226C7A0;
	// bl 0x82266a00
	ctx.lr = 0x8226C654;
	sub_82266A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226c7a4
	if (ctx.cr0.lt) goto loc_8226C7A4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226c674
	if (!ctx.cr6.eq) goto loc_8226C674;
	// bl 0x8226c2a0
	ctx.lr = 0x8226C670;
	sub_8226C2A0(ctx, base);
	// b 0x8226c7a0
	goto loc_8226C7A0;
loc_8226C674:
	// bl 0x82266610
	ctx.lr = 0x8226C678;
	sub_82266610(ctx, base);
	// b 0x8226c7a0
	goto loc_8226C7A0;
loc_8226C67C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c7a0
	if (ctx.cr6.eq) goto loc_8226C7A0;
	// bl 0x82288ee8
	ctx.lr = 0x8226C68C;
	sub_82288EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8226c7a0
	goto loc_8226C7A0;
loc_8226C6A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c6d8
	if (ctx.cr6.eq) goto loc_8226C6D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226c6d8
	if (!ctx.cr0.eq) goto loc_8226C6D8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226c6d4
	if (!ctx.cr6.eq) goto loc_8226C6D4;
	// bl 0x8226c2a0
	ctx.lr = 0x8226C6D0;
	sub_8226C2A0(ctx, base);
	// b 0x8226c6d8
	goto loc_8226C6D8;
loc_8226C6D4:
	// bl 0x82266610
	ctx.lr = 0x8226C6D8;
	sub_82266610(ctx, base);
loc_8226C6D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x8226c7a0
	goto loc_8226C7A0;
loc_8226C6E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c700
	if (ctx.cr0.eq) goto loc_8226C700;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266a00
	ctx.lr = 0x8226C700;
	sub_82266A00(ctx, base);
loc_8226C700:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c7a0
	if (ctx.cr6.eq) goto loc_8226C7A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c734
	if (ctx.cr0.eq) goto loc_8226C734;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226c730
	if (!ctx.cr6.eq) goto loc_8226C730;
	// bl 0x8226c2a0
	ctx.lr = 0x8226C72C;
	sub_8226C2A0(ctx, base);
	// b 0x8226c734
	goto loc_8226C734;
loc_8226C730:
	// bl 0x82266610
	ctx.lr = 0x8226C734;
	sub_82266610(ctx, base);
loc_8226C734:
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82257610
	ctx.lr = 0x8226C74C;
	sub_82257610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x82288db8
	ctx.lr = 0x8226C75C;
	sub_82288DB8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,23
	ctx.r5.s64 = ctx.r11.s64 + 23;
	// bl 0x82289308
	ctx.lr = 0x8226C790;
	sub_82289308(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257670
	ctx.lr = 0x8226C7A0;
	sub_82257670(ctx, base);
loc_8226C7A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226C7A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82275C60) {
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
	ctx.lr = 0x82275C68;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82275ba8
	ctx.lr = 0x82275C8C;
	sub_82275BA8(ctx, base);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82275ba8
	ctx.lr = 0x82275CA4;
	sub_82275BA8(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82275ba8
	ctx.lr = 0x82275CBC;
	sub_82275BA8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225ec20
	ctx.lr = 0x82275CC4;
	sub_8225EC20(ctx, base);
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,100(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// bgt cr6,0x82275ce0
	if (ctx.cr6.gt) goto loc_82275CE0;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82275CE0:
	// lwz r24,84(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// ble cr6,0x82275d04
	if (!ctx.cr6.gt) goto loc_82275D04;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bgt cr6,0x82275cfc
	if (ctx.cr6.gt) goto loc_82275CFC;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82275CFC:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// b 0x82275d08
	goto loc_82275D08;
loc_82275D04:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82275D08:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r26,r4
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82275d20
	if (!ctx.cr6.gt) goto loc_82275D20;
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// bl 0x8225f0f8
	ctx.lr = 0x82275D1C;
	sub_8225F0F8(ctx, base);
	// b 0x82275d2c
	goto loc_82275D2C;
loc_82275D20:
	// subf r5,r26,r4
	ctx.r5.u64 = ctx.r4.u64 - r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8225f140
	ctx.lr = 0x82275D2C;
	sub_8225F140(ctx, base);
loc_82275D2C:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82275D34;
	sub_822469C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225eb40
	ctx.lr = 0x82275D3C;
	sub_8225EB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225eae0
	ctx.lr = 0x82275D48;
	sub_8225EAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82275d60
	if (!ctx.cr0.eq) goto loc_82275D60;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82275D58;
	sub_822469C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225ed40
	ctx.lr = 0x82275D60;
	sub_8225ED40(ctx, base);
loc_82275D60:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82275d90
	if (!ctx.cr6.gt) goto loc_82275D90;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r28,r11,-12
	r28.s64 = ctx.r11.s64 + -12;
loc_82275D74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzu r5,12(r28)
	ea = 12 + r28.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225f218
	ctx.lr = 0x82275D84;
	sub_8225F218(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x82275d74
	if (ctx.cr6.lt) goto loc_82275D74;
loc_82275D90:
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// bge cr6,0x82275db8
	if (!ctx.cr6.lt) goto loc_82275DB8;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82275D9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225f218
	ctx.lr = 0x82275DAC;
	sub_8225F218(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// blt cr6,0x82275d9c
	if (ctx.cr6.lt) goto loc_82275D9C;
loc_82275DB8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82275de8
	if (!ctx.cr6.gt) goto loc_82275DE8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r28,r11,-12
	r28.s64 = ctx.r11.s64 + -12;
loc_82275DCC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzu r5,12(r28)
	ea = 12 + r28.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225f2c8
	ctx.lr = 0x82275DDC;
	sub_8225F2C8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// blt cr6,0x82275dcc
	if (ctx.cr6.lt) goto loc_82275DCC;
loc_82275DE8:
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(r25.s32, r26.s32, ctx.xer);
	// bge cr6,0x82275e10
	if (!ctx.cr6.lt) goto loc_82275E10;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82275DF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225f2c8
	ctx.lr = 0x82275E04;
	sub_8225F2C8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// blt cr6,0x82275df4
	if (ctx.cr6.lt) goto loc_82275DF4;
loc_82275E10:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82275e48
	if (!ctx.cr6.gt) goto loc_82275E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-12
	r30.s64 = ctx.r11.s64 + -12;
loc_82275E20:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzu r5,12(r30)
	ea = 12 + r30.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8225f4a8
	ctx.lr = 0x82275E3C;
	sub_8225F4A8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// blt cr6,0x82275e20
	if (ctx.cr6.lt) goto loc_82275E20;
loc_82275E48:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(r24.s32, r26.s32, ctx.xer);
	// bge cr6,0x82275e7c
	if (!ctx.cr6.lt) goto loc_82275E7C;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82275E54:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8225f4a8
	ctx.lr = 0x82275E70;
	sub_8225F4A8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// blt cr6,0x82275e54
	if (ctx.cr6.lt) goto loc_82275E54;
loc_82275E7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82253400
	ctx.lr = 0x82275E84;
	sub_82253400(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82253400
	ctx.lr = 0x82275E8C;
	sub_82253400(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82253400
	ctx.lr = 0x82275E94;
	sub_82253400(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8227BE50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227BE58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,512
	r30.s64 = ctx.r3.s64 + 512;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227BE70;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r10,r29,25,23,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FC;
	// clrlwi r11,r29,23
	ctx.r11.u64 = r29.u32 & 0x1FF;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r29,16
	ctx.r7.u64 = r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// rlwinm r9,r10,2,23,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r7,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r7.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// bl 0x824d437c
	ctx.lr = 0x8227BEE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227DA08) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8227da40
	if (!ctx.cr6.eq) goto loc_8227DA40;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8227da88
	goto loc_8227DA88;
loc_8227DA40:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227da80
	if (ctx.cr6.eq) goto loc_8227DA80;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DA64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227da88
	if (ctx.cr0.lt) goto loc_8227DA88;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8227da88
	goto loc_8227DA88;
loc_8227DA80:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8227DA88:
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

DEFINE_REX_FUNC(sub_8227EF10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227EF18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227f010
	if (ctx.cr6.eq) goto loc_8227F010;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227f010
	if (ctx.cr0.eq) goto loc_8227F010;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82246a38
	ctx.lr = 0x8227EF48;
	sub_82246A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227f018
	if (ctx.cr0.lt) goto loc_8227F018;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x8227ef74
	goto loc_8227EF74;
loc_8227EF5C:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8227ef70
	if (!ctx.cr6.eq) goto loc_8227EF70;
	// li r10,92
	ctx.r10.s64 = 92;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8227EF70:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
loc_8227EF74:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8227ef5c
	if (!ctx.cr0.eq) goto loc_8227EF5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8227EF84;
	sub_822D6A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82255b48
	ctx.lr = 0x8227EF90;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8227efa4
	if (!ctx.cr0.eq) goto loc_8227EFA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227f018
	goto loc_8227F018;
loc_8227EFA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8227efcc
	if (!ctx.cr6.gt) goto loc_8227EFCC;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8227EFB8:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8227efb8
	if (!ctx.cr0.eq) goto loc_8227EFB8;
loc_8227EFCC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cdde0
	ctx.lr = 0x8227EFDC;
	sub_823CDDE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227EFE8;
	sub_82255B70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8227f008
	if (!ctx.cr6.eq) goto loc_8227F008;
	// bl 0x822098c8
	ctx.lr = 0x8227EFF4;
	sub_822098C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227f018
	if (!ctx.cr0.gt) goto loc_8227F018;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8227f018
	goto loc_8227F018;
loc_8227F008:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227f018
	goto loc_8227F018;
loc_8227F010:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
loc_8227F018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822845A0) {
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
	ctx.lr = 0x822845A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822845d8
	if (!ctx.cr0.eq) goto loc_822845D8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82284660
	goto loc_82284660;
loc_822845D8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8228465c
	if (ctx.cr6.eq) goto loc_8228465C;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82280900
	ctx.lr = 0x822845EC;
	sub_82280900(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r8,r29,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82284668
	if (ctx.cr0.eq) goto loc_82284668;
	// bl 0x82283938
	ctx.lr = 0x82284630;
	sub_82283938(ctx, base);
loc_82284630:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82284660
	if (ctx.cr0.lt) goto loc_82284660;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8228465C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82284660:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82284668:
	// bl 0x822837a8
	ctx.lr = 0x8228466C;
	sub_822837A8(ctx, base);
	// b 0x82284630
	goto loc_82284630;
}

DEFINE_REX_FUNC(sub_822869A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,7544
	ctx.r11.s64 = ctx.r11.s64 + 7544;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822868f0
	ctx.lr = 0x822869CC;
	sub_822868F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,7296
	ctx.r11.s64 = ctx.r11.s64 + 7296;
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

DEFINE_REX_FUNC(sub_82287428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82287430;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82287464
	if (!ctx.cr6.eq) goto loc_82287464;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8228748c
	if (!ctx.cr6.eq) goto loc_8228748C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822874b4
	if (!ctx.cr6.eq) goto loc_822874B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822874d8
	goto loc_822874D8;
loc_82287464:
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 332);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822874ac
	if (ctx.cr6.eq) goto loc_822874AC;
loc_8228748C:
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822874AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822874AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822874d4
	if (ctx.cr6.eq) goto loc_822874D4;
loc_822874B4:
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822874D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822874D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822874D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82289380) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822895B0) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_822895CC:
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
	// bne 0x822895cc
	if (!ctx.cr0.eq) goto loc_822895CC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8228960c
	if (!ctx.cr6.eq) goto loc_8228960C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228960c
	if (ctx.cr6.eq) goto loc_8228960C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822894a8
	ctx.lr = 0x82289604;
	sub_822894A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228960C;
	sub_82255B70(ctx, base);
loc_8228960C:
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

DEFINE_REX_FUNC(sub_8228BD00) {
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
	ctx.lr = 0x8228BD08;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228bd68
	if (ctx.cr6.eq) goto loc_8228BD68;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228bd68
	if (ctx.cr6.eq) goto loc_8228BD68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x8228b1d0
	ctx.lr = 0x8228BD38;
	sub_8228B1D0(ctx, base);
	// addi r28,r30,100
	r28.s64 = r30.s64 + 100;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228BD48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b590
	ctx.lr = 0x8228BD58;
	sub_8228B590(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8228bd74
	if (!ctx.cr0.eq) goto loc_8228BD74;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228BD68;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228BD68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228BD6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8228BD74:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BD98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8228bdc8
	if (ctx.cr6.eq) goto loc_8228BDC8;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228BDC8;
	sub_822D4FA0(ctx, base);
loc_8228BDC8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228BDD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228bd6c
	goto loc_8228BD6C;
}

DEFINE_REX_FUNC(sub_8228FC60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
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
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x8228FC68;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d8a5c
	ctx.lr = 0x8228FC70;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,164(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8228fd00
	if (!ctx.cr6.eq) goto loc_8228FD00;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82215e78
	ctx.lr = 0x8228FCC4;
	sub_82215E78(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82222dc0
	ctx.lr = 0x8228FCD4;
	sub_82222DC0(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// beq cr6,0x8228fe54
	if (ctx.cr6.eq) goto loc_8228FE54;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82289098
	ctx.lr = 0x8228FCF8;
	sub_82289098(ctx, base);
	// stw r29,168(r31)
	REX_STORE_U32(r31.u32 + 168, r29.u32);
	// b 0x8228fe54
	goto loc_8228FE54;
loc_8228FD00:
	// lwz r27,168(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r25,r31,168
	r25.s64 = r31.s64 + 168;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r29,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bne cr6,0x8228fdfc
	if (!ctx.cr6.eq) goto loc_8228FDFC;
	// bl 0x822d5870
	ctx.lr = 0x8228FD24;
	sub_822D5870(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288fd0
	ctx.lr = 0x8228FD38;
	sub_82288FD0(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228fdb8
	if (!ctx.cr0.eq) goto loc_8228FDB8;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31380(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31380);
	// bl 0x822852f8
	ctx.lr = 0x8228FD50;
	sub_822852F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228fd6c
	if (!ctx.cr0.eq) goto loc_8228FD6C;
loc_8228FD58:
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x822d7b58
	ctx.lr = 0x8228FD60;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822904a0
	goto loc_822904A0;
loc_8228FD6C:
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x8228FD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8228fda4
	if (!ctx.cr6.eq) goto loc_8228FDA4;
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x822d7b58
	ctx.lr = 0x8228FD9C;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822904a0
	goto loc_822904A0;
loc_8228FDA4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x8228ae60
	ctx.lr = 0x8228FDB4;
	sub_8228AE60(ctx, base);
	// b 0x8228fde8
	goto loc_8228FDE8;
loc_8228FDB8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FDCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x82215e78
	ctx.lr = 0x8228FDD4;
	sub_82215E78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FDE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FDE8:
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// b 0x8228fe54
	goto loc_8228FE54;
loc_8228FDFC:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822d5870
	ctx.lr = 0x8228FE04;
	sub_822D5870(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82289030
	ctx.lr = 0x8228FE14;
	sub_82289030(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FE38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x82215e78
	ctx.lr = 0x8228FE40;
	sub_82215E78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FE54:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228fd58
	if (ctx.cr6.eq) goto loc_8228FD58;
	// lwa r11,176(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 176));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwa r9,172(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 172));
	// lfs f13,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r9,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r10,r10,1992
	ctx.r10.s64 = ctx.r10.s64 + 1992;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// vupkd3d128 v63,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// stfs f13,280(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vpermwi128 v61,v63,234
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v60,v63,234
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x15));
	// lfs f13,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// vpermwi128 v0,v63,186
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x45));
	// lfs f12,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// vpermwi128 v13,v63,174
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x51));
	// vspltw128 v59,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// vpermwi128 v126,v63,171
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x54));
	// vpermwi128 v123,v63,174
	simde_mm_store_si128((simde__m128i*)v123.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x51));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// vpermwi128 v122,v63,186
	simde_mm_store_si128((simde__m128i*)v122.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x45));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vmulfp128 v11,v59,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vpermwi128 v121,v63,234
	simde_mm_store_si128((simde__m128i*)v121.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v59,v63,174
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x51));
	// stfs f12,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vpermwi128 v58,v63,186
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x45));
	// vor128 v125,v62,v62
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// lfd f9,128(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// vspltw128 v12,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lfd f8,136(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f12,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// vor128 v127,v62,v62
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vspltw128 v10,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lfs f11,15944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15944);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// vor128 v124,v62,v62
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vmaddfp v12,v12,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// frsp f9,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fdivs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lvlx128 v56,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// vrlimi128 v125,v63,4,3
	simde_mm_store_ps(v125.f32, simde_mm_blend_ps(simde_mm_load_ps(v125.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f12,276(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// vmaddfp v11,v10,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f8,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vrlimi128 v127,v57,2,2
	simde_mm_store_ps(v127.f32, simde_mm_blend_ps(simde_mm_load_ps(v127.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 78), 2));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vspltw128 v63,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vspltw128 v57,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v8,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vspltw128 v10,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// vspltw128 v9,v58,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xAA));
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v6,v57,v60
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v57,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v7,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vrlimi128 v56,v62,7,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmaddfp v11,v10,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw128 v3,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x55));
	// vmulfp128 v4,v57,v60
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v2,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vspltw128 v1,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vrlimi128 v61,v62,7,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 7));
	// vspltw128 v31,v58,3
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x0));
	// lfs f0,-29184(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -29184);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v30,v59,3
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v10,v9,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw128 v29,v63,3
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lfs f13,192(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// vrlimi128 v124,v62,4,3
	simde_mm_store_ps(v124.f32, simde_mm_blend_ps(simde_mm_load_ps(v124.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// vor128 v120,v56,v56
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vmaddfp v9,v7,v0,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor128 v119,v61,v61
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vor128 v118,v11,v11
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaddfp v0,v5,v0,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v3,v13,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v2,v13,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v1,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v31,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v30,v12,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v29,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v117,v13,v13
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v116,v11,v11
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v115,v0,v0
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// bl 0x8228e7f0
	ctx.lr = 0x82290058;
	sub_8228E7F0(ctx, base);
	// vspltw128 v63,v118,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v118.u32), 0xFF));
	// lvx128 v60,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v117,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v117.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltw128 v11,v118,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v118.u32), 0xAA));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw128 v6,v117,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v117.u32), 0xAA));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// vmulfp128 v7,v63,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v61,v116,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v116.u32), 0xFF));
	// vmulfp128 v5,v62,v60
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v63,v115,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v115.u32), 0xFF));
	// lvx128 v0,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v30,v117,2
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v117.u32), 0x55));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltw128 v2,v118,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v118.u32), 0x55));
	// vmulfp128 v3,v61,v60
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v4,v116,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v116.u32), 0xAA));
	// vmulfp128 v31,v63,v60
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v1,v115,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v115.u32), 0xAA));
	// lvx128 v13,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v28,v118,3
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v118.u32), 0x0));
	// vspltw128 v29,v116,2
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v116.u32), 0x55));
	// lvx128 v12,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v27,v115,2
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v115.u32), 0x55));
	// vspltw128 v8,v117,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v117.u32), 0x0));
	// vspltw128 v9,v116,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v116.u32), 0x0));
	// vspltw128 v10,v115,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v115.u32), 0x0));
	// vmaddfp v11,v11,v0,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v7,v6,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v6,v4,v0,v3
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v1,v0,v31
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v5,v2,v13,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v30,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor128 v30,v124,v124
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v124.u8));
	// vmaddfp v6,v29,v13,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmaddfp v13,v27,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v5,v28,v12,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v8,v8,v12,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v9,v12,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v63,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// vor128 v62,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vspltw v6,v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xAA));
	// vspltw v9,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x0));
	// vspltw v4,v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x55));
	// vspltw128 v31,v62,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v7,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v12,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vor128 v61,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmulfp128 v0,v63,v119
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v119.f32)));
	// vspltw128 v63,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vmulfp128 v1,v63,v119
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v119.f32)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v2,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v8,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vmulfp128 v3,v60,v119
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(v119.f32)));
	// vspltw128 v13,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v5,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddcfp128 v30,v6,v30,v0
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v0,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmulfp128 v6,v62,v119
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(v119.f32)));
	// vmaddfp128 v1,v31,v124,v1
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v124.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp128 v3,v2,v124,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v124.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddcfp128 v4,v127,v4,v30
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(v30.f32)));
	// vor128 v30,v122,v122
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v122.u8));
	// vmaddcfp128 v5,v124,v5,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v124.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor128 v6,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmaddcfp128 v6,v7,v6,v1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vor128 v7,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmaddcfp128 v7,v8,v7,v3
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor128 v8,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// vmaddcfp128 v8,v9,v8,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vor128 v9,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmaddcfp128 v9,v10,v9,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vor128 v10,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// vmaddcfp128 v10,v12,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor128 v12,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// vmaddcfp128 v12,v13,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor128 v13,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// vspltw128 v63,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v6,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// vspltw v4,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// vmaddcfp128 v13,v0,v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw v9,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vmulfp128 v0,v63,v121
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v121.f32)));
	// vspltw128 v62,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v31,v10,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v7,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmulfp128 v1,v62,v121
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(v121.f32)));
	// vspltw v12,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vor128 v62,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddcfp128 v30,v6,v30,v0
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v2,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v8,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmulfp128 v3,v61,v121
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(v121.f32)));
	// vspltw128 v63,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v5,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v10,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v0,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vmulfp128 v6,v63,v121
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v121.f32)));
	// vmaddfp128 v1,v31,v122,v1
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v122.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddcfp128 v4,v123,v4,v30
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v123.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(v30.f32)));
	// vmaddfp128 v3,v2,v122,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v122.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor128 v2,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// vmaddfp128 v6,v5,v122,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v122.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v9,v11,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddcfp128 v8,v123,v8,v3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v123.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor128 v3,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// vmaddcfp128 v10,v123,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v123.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v63,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmaddcfp128 v7,v123,v7,v1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v123.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmaddfp v5,v13,v11,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r4,3
	ctx.r7.s64 = ctx.r4.s64 + 3;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r29,r6,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// vmaddfp v6,v0,v11,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v0,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x55));
	// vmaddfp v12,v12,v11,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw v7,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xAA));
	// vor128 v62,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmulfp128 v10,v63,v120
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v120.f32)));
	// vspltw v9,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x0));
	// srad r7,r29,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (r29.s64 < 0) & (((r29.s64 >> temp.u64) << temp.u64) != r29.s64);
	ctx.r7.s64 = r29.s64 >> temp.u64;
	// vspltw128 v63,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vor128 v61,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmaddcfp128 v3,v7,v3,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v11,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v4,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// srd r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r3.u8 & 0x7F));
	// vmulfp128 v5,v63,v120
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v120.f32)));
	// vspltw128 v63,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vmaddfp128 v3,v0,v127,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v127.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw128 v6,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vspltw128 v10,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vmulfp128 v13,v63,v120
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(v120.f32)));
	// vspltw v8,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vmulfp128 v7,v60,v120
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(v120.f32)));
	// vspltw128 v0,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vmaddfp128 v5,v4,v125,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v125.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddcfp128 v9,v126,v9,v3
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddcfp128 v2,v11,v2,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v11,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vmaddfp128 v7,v6,v125,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v125.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v13,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vmaddcfp128 v10,v127,v10,v5
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddcfp128 v8,v127,v8,v2
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddcfp128 v11,v127,v11,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddcfp128 v13,v126,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddcfp128 v12,v126,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddcfp128 v0,v126,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmrghw128 v63,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw128 v62,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw128 v61,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw128 v60,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrghw128 v61,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82226380
	ctx.lr = 0x8229033C;
	sub_82226380(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82290400
	if (ctx.cr6.eq) goto loc_82290400;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x82223398
	ctx.lr = 0x82290360;
	sub_82223398(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82287658
	ctx.lr = 0x82290368;
	sub_82287658(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwimi r10,r3,10,19,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// srd r11,r29,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82287670
	ctx.lr = 0x822903A0;
	sub_82287670(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwimi r10,r3,13,16,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// srd r11,r29,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82287688
	ctx.lr = 0x822903D8;
	sub_82287688(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82211a60
	ctx.lr = 0x822903E8;
	sub_82211A60(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82287698
	ctx.lr = 0x822903F0;
	sub_82287698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82211c08
	ctx.lr = 0x82290400;
	sub_82211C08(ctx, base);
loc_82290400:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8228cac8
	ctx.lr = 0x82290408;
	sub_8228CAC8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82290458
	if (ctx.cr6.eq) goto loc_82290458;
	// addi r9,r10,376
	ctx.r9.s64 = ctx.r10.s64 + 376;
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r30.u32, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r10.u8 & 0x7F));
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// lfs f0,220(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_82290458:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8229046c
	if (ctx.cr6.eq) goto loc_8229046C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822268e0
	ctx.lr = 0x8229046C;
	sub_822268E0(ctx, base);
loc_8229046C:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82290480
	if (ctx.cr6.eq) goto loc_82290480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82226af8
	ctx.lr = 0x82290480;
	sub_82226AF8(ctx, base);
loc_82290480:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82290494
	if (ctx.cr6.eq) goto loc_82290494;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822266d8
	ctx.lr = 0x82290494;
	sub_822266D8(ctx, base);
loc_82290494:
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x822d7b58
	ctx.lr = 0x8229049C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822904A0:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d8cf4
	ctx.lr = 0x822904AC;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822CD3F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CD400;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cd430
	if (!ctx.cr6.eq) goto loc_822CD430;
loc_822CD41C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203958
	ctx.lr = 0x822CD424;
	sub_82203958(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CD428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822CD430:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bge cr6,0x822cd41c
	if (!ctx.cr6.lt) goto loc_822CD41C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822045a0
	ctx.lr = 0x822CD444;
	sub_822045A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x822d3b30
	ctx.lr = 0x822CD454;
	sub_822D3B30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cd470
	if (!ctx.cr0.eq) goto loc_822CD470;
	// li r30,0
	r30.s64 = 0;
loc_822CD460:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203958
	ctx.lr = 0x822CD468;
	sub_82203958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822cd428
	goto loc_822CD428;
loc_822CD470:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822045a0
	ctx.lr = 0x822CD47C;
	sub_822045A0(ctx, base);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x822cd348
	ctx.lr = 0x822CD490;
	sub_822CD348(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x822cd460
	goto loc_822CD460;
}

DEFINE_REX_FUNC(sub_822CE8C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CE8D0;
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
	// bne cr6,0x822ce8f0
	if (!ctx.cr6.eq) goto loc_822CE8F0;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x822ce930
	goto loc_822CE930;
loc_822CE8F0:
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
	ctx.lr = 0x822CE908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbzx r31,r11,r9
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x822CE92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822CE930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D0F90) {
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
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822D0FCC;
	sub_822C88C0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822D0FF0;
	sub_822D5870(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822D1000;
	sub_822D5870(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1014;
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

DEFINE_REX_FUNC(sub_822D2700) {
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
	// bl 0x822d0de0
	ctx.lr = 0x822D271C;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2764
	if (ctx.cr0.eq) goto loc_822D2764;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r30,r31,220
	r30.s64 = r31.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D273C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822D2760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D2764:
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

DEFINE_REX_FUNC(sub_822D4640) {
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
	// bl 0x822d4448
	ctx.lr = 0x822D4660;
	sub_822D4448(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4670
	if (ctx.cr0.eq) goto loc_822D4670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D4670;
	sub_822C80A8(ctx, base);
loc_822D4670:
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

DEFINE_REX_FUNC(__restgprlr_16) {
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
	// ld r16,-136(r1)
	r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_28) {
	REX_FUNC_PROLOGUE();
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D60F0) {
	REX_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f13,26664(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// lfd f0,26920(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26920);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 - ctx.f1.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D7660;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// ori r29,r11,65279
	r29.u64 = ctx.r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dc9d0
	ctx.lr = 0x822D768C;
	sub_822DC9D0(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x822d7718
	if (!ctx.cr6.eq) goto loc_822D7718;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822da780
	ctx.lr = 0x822D76A8;
	sub_822DA780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d76e4
	if (!ctx.cr0.gt) goto loc_822D76E4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x822d780c
	if (!ctx.cr6.gt) goto loc_822D780C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822d76e4
	if (!ctx.cr6.eq) goto loc_822D76E4;
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r3,25
	ctx.r3.s64 = 25;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x822dc788
	ctx.lr = 0x822D76E0;
	sub_822DC788(ctx, base);
	// b 0x822d781c
	goto loc_822D781C;
loc_822D76E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f0,26664(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// fadd f3,f31,f0
	ctx.f3.f64 = f31.f64 + ctx.f0.f64;
loc_822D7704:
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x822dc8e0
	ctx.lr = 0x822D7714;
	sub_822DC8E0(ctx, base);
	// b 0x822d781c
	goto loc_822D781C;
loc_822D7718:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,31912(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x822d780c
	if (ctx.cr6.eq) goto loc_822D780C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822da808
	ctx.lr = 0x822D7734;
	sub_822DA808(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822d7754
	if (!ctx.cr6.lt) goto loc_822D7754;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d77c8
	if (ctx.cr6.lt) goto loc_822D77C8;
	// b 0x822d7768
	goto loc_822D7768;
loc_822D7754:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822d7774
	if (ctx.cr6.gt) goto loc_822D7774;
loc_822D7768:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x822d77a0
	if (!ctx.cr6.gt) goto loc_822D77A0;
loc_822D7774:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,-2072(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
	// bl 0x822d6cd0
	ctx.lr = 0x822D7784;
	sub_822D6CD0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_822D7790:
	// li r3,17
	ctx.r3.s64 = 17;
loc_822D7794:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
loc_822D7798:
	// fcfid f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(ctx.f0.s64);
	// b 0x822d7704
	goto loc_822D7704;
loc_822D77A0:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x822d77c0
	if (!ctx.cr6.gt) goto loc_822D77C0;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x822da740
	ctx.lr = 0x822D77B0;
	sub_822DA740(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822d7790
	goto loc_822D7790;
loc_822D77C0:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x822d77e0
	if (!ctx.cr6.lt) goto loc_822D77E0;
loc_822D77C8:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822d7798
	goto loc_822D7798;
loc_822D77E0:
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// bge cr6,0x822d7804
	if (!ctx.cr6.lt) goto loc_822D7804;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x822da740
	ctx.lr = 0x822D77F0;
	sub_822DA740(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822d7794
	goto loc_822D7794;
loc_822D7804:
	// bl 0x822da740
	ctx.lr = 0x822D7808;
	sub_822DA740(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_822D780C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dc9d0
	ctx.lr = 0x822D7818;
	sub_822DC9D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822D781C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savevmx_119) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_15) {
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

DEFINE_REX_FUNC(__restvmx_101) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DB650) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2032
	ctx.r9.s64 = ctx.r10.s64 + -2032;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822DB660:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822db694
	if (ctx.cr6.eq) goto loc_822DB694;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// blt cr6,0x822db660
	if (ctx.cr6.lt) goto loc_822DB660;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// blt cr6,0x822db6a4
	if (ctx.cr6.lt) goto loc_822DB6A4;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// bgt cr6,0x822db6a4
	if (ctx.cr6.gt) goto loc_822DB6A4;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_822DB694:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_822DB6A4:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// blt cr6,0x822db6b8
	if (ctx.cr6.lt) goto loc_822DB6B8;
	// cmplwi cr6,r3,202
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 202, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822DB6B8:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCA10) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DD3D0) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822dd0f8
	sub_822DD0F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DE7C0) {
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
	ctx.lr = 0x822DE7C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x822e3890
	ctx.lr = 0x822DE800;
	sub_822E3890(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de81c
	if (ctx.cr0.eq) goto loc_822DE81C;
	// li r30,512
	r30.s64 = 512;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x822de850
	goto loc_822DE850;
loc_822DE81C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e2a60
	ctx.lr = 0x822DE828;
	sub_822E2A60(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822de838
	if (!ctx.cr0.eq) goto loc_822DE838;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822de83c
	if (!ctx.cr6.eq) goto loc_822DE83C;
loc_822DE838:
	// li r30,128
	r30.s64 = 128;
loc_822DE83C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822de84c
	if (!ctx.cr0.eq) goto loc_822DE84C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822de850
	if (!ctx.cr6.eq) goto loc_822DE850;
loc_822DE84C:
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
loc_822DE850:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// std r10,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r10.u64);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822E2660) {
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
	ctx.lr = 0x822E2668;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822e2694
	if (ctx.cr6.eq) goto loc_822E2694;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e2924
	if (ctx.cr6.eq) goto loc_822E2924;
loc_822E2694:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822e26b0
	if (!ctx.cr6.eq) goto loc_822E26B0;
	// bl 0x822db6c0
	ctx.lr = 0x822E26A0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E26AC;
	sub_822D6910(ctx, base);
	// b 0x822e2920
	goto loc_822E2920;
loc_822E26B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822e2894
	if (ctx.cr6.eq) goto loc_822E2894;
	// lis r27,-32172
	r27.s64 = -2108424192;
	// lwz r9,88(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 88);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e2704
	if (!ctx.cr6.eq) goto loc_822E2704;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822e2924
	if (ctx.cr6.eq) goto loc_822E2924;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
loc_822E26D8:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bgt cr6,0x822e2910
	if (ctx.cr6.gt) goto loc_822E2910;
	// stbx r10,r3,r28
	REX_STORE_U8(ctx.r3.u32 + r28.u32, ctx.r10.u8);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822e2924
	if (ctx.cr0.eq) goto loc_822E2924;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// blt cr6,0x822e26d8
	if (ctx.cr6.lt) goto loc_822E26D8;
	// b 0x822e2924
	goto loc_822E2924;
loc_822E2704:
	// lwz r11,172(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e27a4
	if (!ctx.cr6.eq) goto loc_822E27A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822e2758
	if (ctx.cr6.eq) goto loc_822E2758;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822E2720:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822e2738
	if (ctx.cr0.eq) goto loc_822E2738;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x822e2720
	if (!ctx.cr0.eq) goto loc_822E2720;
loc_822E2738:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e2758
	if (ctx.cr6.eq) goto loc_822E2758;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822e2758
	if (!ctx.cr0.eq) goto loc_822E2758;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_822E2758:
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822094d8
	ctx.lr = 0x822E277C;
	sub_822094D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e2910
	if (ctx.cr0.eq) goto loc_822E2910;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2910
	if (!ctx.cr6.eq) goto loc_822E2910;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + r28.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822e2924
	if (!ctx.cr0.eq) goto loc_822E2924;
	// b 0x822e2908
	goto loc_822E2908;
loc_822E27A4:
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822094d8
	ctx.lr = 0x822E27C8;
	sub_822094D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2910
	if (!ctx.cr6.eq) goto loc_822E2910;
	// beq 0x822e27e4
	if (ctx.cr0.eq) goto loc_822E27E4;
	// addi r3,r30,-1
	ctx.r3.s64 = r30.s64 + -1;
	// b 0x822e2924
	goto loc_822E2924;
loc_822E27E4:
	// bl 0x822098c8
	ctx.lr = 0x822E27E8;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x822e2910
	if (!ctx.cr6.eq) goto loc_822E2910;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822e288c
	if (ctx.cr6.eq) goto loc_822E288C;
loc_822E27F8:
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,172(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822094d8
	ctx.lr = 0x822E2820;
	sub_822094D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e2910
	if (ctx.cr0.eq) goto loc_822E2910;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2910
	if (!ctx.cr6.eq) goto loc_822E2910;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e2910
	if (ctx.cr6.lt) goto loc_822E2910;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x822e2910
	if (ctx.cr6.gt) goto loc_822E2910;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x822e288c
	if (ctx.cr6.gt) goto loc_822E288C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822e2880
	if (!ctx.cr6.gt) goto loc_822E2880;
loc_822E285C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r30,r28
	REX_STORE_U8(r30.u32 + r28.u32, ctx.r10.u8);
	// beq 0x822e288c
	if (ctx.cr0.eq) goto loc_822E288C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822e285c
	if (ctx.cr6.lt) goto loc_822E285C;
loc_822E2880:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x822e27f8
	if (ctx.cr6.lt) goto loc_822E27F8;
loc_822E288C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822e2924
	goto loc_822E2924;
loc_822E2894:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e28d0
	if (!ctx.cr6.eq) goto loc_822E28D0;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e28c4
	goto loc_822E28C4;
loc_822E28B4:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x822e2910
	if (ctx.cr6.gt) goto loc_822E2910;
	// lhzu r11,2(r31)
	ea = 2 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822E28C4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822e28b4
	if (!ctx.cr0.eq) goto loc_822E28B4;
	// b 0x822e2924
	goto loc_822E2924;
loc_822E28D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822094d8
	ctx.lr = 0x822E28F4;
	sub_822094D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e2910
	if (ctx.cr0.eq) goto loc_822E2910;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2910
	if (!ctx.cr6.eq) goto loc_822E2910;
loc_822E2908:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x822e2924
	goto loc_822E2924;
loc_822E2910:
	// bl 0x822db6c0
	ctx.lr = 0x822E2914;
	sub_822DB6C0(ctx, base);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822E2920:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822E2924:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F1248) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f8f38
	ctx.lr = 0x822F1270;
	sub_822F8F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f1290
	if (ctx.cr6.lt) goto loc_822F1290;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822f0a10
	ctx.lr = 0x822F1288;
	sub_822F0A10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f12b0
	if (!ctx.cr6.lt) goto loc_822F12B0;
loc_822F1290:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822f9530
	ctx.lr = 0x822F1298;
	sub_822F9530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_822F12B0:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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

DEFINE_REX_FUNC(sub_822F3948) {
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
	ctx.lr = 0x822F3950;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r25,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r25.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// li r23,128
	r23.s64 = 128;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3f5c
	if (ctx.cr6.eq) goto loc_822F3F5C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f3f68
	if (ctx.cr6.eq) goto loc_822F3F68;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f3f5c
	if (ctx.cr6.eq) goto loc_822F3F5C;
	// stw r25,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r25.u32);
	// li r21,7
	r21.s64 = 7;
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// li r22,1
	r22.s64 = 1;
	// lbz r11,525(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822f3bd4
	if (ctx.cr6.eq) goto loc_822F3BD4;
loc_822F39A8:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3a24
	if (!ctx.cr6.eq) goto loc_822F3A24;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822f39f8
	if (!ctx.cr6.eq) goto loc_822F39F8;
	// lwz r30,392(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,392(r31)
	REX_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x822f25e8
	ctx.lr = 0x822F39D0;
	sub_822F25E8(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x822f3f4c
	if (ctx.cr6.eq) goto loc_822F3F4C;
	// lbz r11,525(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 525);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822f3bc8
	if (ctx.cr6.eq) goto loc_822F3BC8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x822f3c08
	if (ctx.cr6.eq) goto loc_822F3C08;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f3dfc
	if (!ctx.cr6.eq) goto loc_822F3DFC;
loc_822F39F8:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3a24
	if (!ctx.cr6.eq) goto loc_822F3A24;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822f3dfc
	if (ctx.cr6.eq) goto loc_822F3DFC;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r8,408(r31)
	REX_STORE_U64(r31.u32 + 408, ctx.r8.u64);
	// stw r10,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r10.u32);
loc_822F3A24:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822f3a34
	if (!ctx.cr6.gt) goto loc_822F3A34;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_822F3A34:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822F3A48;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bne cr6,0x822f3dd8
	if (!ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3abc
	if (ctx.cr6.eq) goto loc_822F3ABC;
	// lhz r9,518(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x822f3c1c
	if (ctx.cr6.gt) goto loc_822F3C1C;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 408);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpld cr6,r8,r6
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x822f3c1c
	if (ctx.cr6.gt) goto loc_822F3C1C;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822F3AB8;
	sub_822D4FA0(ctx, base);
	// b 0x822f3ad8
	goto loc_822F3AD8;
loc_822F3ABC:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x822f3f3c
	if (ctx.cr6.gt) goto loc_822F3F3C;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x822d4fa0
	ctx.lr = 0x822F3AD0;
	sub_822D4FA0(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_822F3AD8:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// ld r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 420);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,548(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 548);
	// std r8,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r8.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// bne cr6,0x822f3dfc
	if (!ctx.cr6.eq) goto loc_822F3DFC;
	// lwz r10,552(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f3b5c
	if (ctx.cr6.eq) goto loc_822F3B5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3b54
	if (!ctx.cr6.eq) goto loc_822F3B54;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x822f3b54
	if (ctx.cr6.gt) goto loc_822F3B54;
	// addi r6,r31,600
	ctx.r6.s64 = r31.s64 + 600;
	// lwz r4,612(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwz r3,592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lhz r5,518(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 518);
	// bl 0x82306738
	ctx.lr = 0x822F3B38;
	sub_82306738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f3e60
	if (ctx.cr6.lt) goto loc_822F3E60;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lhz r10,518(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 518);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// b 0x822f3b5c
	goto loc_822F3B5C;
loc_822F3B54:
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
loc_822F3B5C:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3bb0
	if (ctx.cr6.eq) goto loc_822F3BB0;
	// lhz r11,518(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// ld r9,408(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 408);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r25,416(r31)
	REX_STORE_U32(r31.u32 + 416, r25.u32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x822f3ba4
	if (!ctx.cr6.eq) goto loc_822F3BA4;
	// stw r22,4(r20)
	REX_STORE_U32(r20.u32 + 4, r22.u32);
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulli r7,r8,10000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10000));
	// std r7,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r7.u64);
loc_822F3BA4:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3dfc
	if (ctx.cr6.eq) goto loc_822F3DFC;
loc_822F3BB0:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3f30
	if (ctx.cr6.eq) goto loc_822F3F30;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3dfc
	if (!ctx.cr6.eq) goto loc_822F3DFC;
loc_822F3BC8:
	// lbz r11,525(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f39a8
	if (!ctx.cr6.eq) goto loc_822F39A8;
loc_822F3BD4:
	// lbz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822f3dfc
	if (ctx.cr6.gt) goto loc_822F3DFC;
	// li r29,2
	r29.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_822F3BF0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3c2c
	if (ctx.cr6.eq) goto loc_822F3C2C;
	// bdz 0x822f3cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F3CD0;
	// bdz 0x822f3cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F3CF0;
	// b 0x822f3d8c
	goto loc_822F3D8C;
loc_822F3C08:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3C1C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3C2C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822F3C40;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822f3dd8
	if (!ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f3dd8
	if (ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// ld r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 400);
	// sth r25,536(r31)
	REX_STORE_U16(r31.u32 + 536, r25.u16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// std r8,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r8.u64);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r7,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r7.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,526(r31)
	REX_STORE_U8(r31.u32 + 526, ctx.r7.u8);
	// beq cr6,0x822f3c94
	if (ctx.cr6.eq) goto loc_822F3C94;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
loc_822F3C94:
	// lbz r9,526(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 526);
	// lhz r10,522(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 522);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822f3cbc
	if (!ctx.cr6.gt) goto loc_822F3CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r10.u16);
	// b 0x822f3dbc
	goto loc_822F3DBC;
loc_822F3CBC:
	// bne cr6,0x822f3cc8
	if (!ctx.cr6.eq) goto loc_822F3CC8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// sth r11,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r11.u16);
loc_822F3CC8:
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// b 0x822f3dbc
	goto loc_822F3DBC;
loc_822F3CD0:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3e20
	if (!ctx.cr6.eq) goto loc_822F3E20;
	// lhz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f3de8
	if (!ctx.cr6.eq) goto loc_822F3DE8;
	// stb r27,524(r31)
	REX_STORE_U8(r31.u32 + 524, r27.u8);
	// b 0x822f3dbc
	goto loc_822F3DBC;
loc_822F3CF0:
	// lhz r11,522(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 522);
	// lhz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 520);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822f3d84
	if (!ctx.cr6.gt) goto loc_822F3D84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822F3D14;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822f3dd8
	if (!ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f3dd8
	if (ctx.cr6.eq) goto loc_822F3DD8;
	// ld r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 400);
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// std r11,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r11.u64);
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r8,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,526(r31)
	REX_STORE_U8(r31.u32 + 526, ctx.r8.u8);
	// beq cr6,0x822f3d64
	if (ctx.cr6.eq) goto loc_822F3D64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
loc_822F3D64:
	// lhz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 520);
	// lbz r11,526(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 526);
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r10.u16);
	// b 0x822f3dbc
	goto loc_822F3DBC;
loc_822F3D84:
	// stb r28,524(r31)
	REX_STORE_U8(r31.u32 + 524, r28.u8);
	// b 0x822f3dbc
	goto loc_822F3DBC;
loc_822F3D8C:
	// lwz r30,392(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r25,524(r31)
	REX_STORE_U8(r31.u32 + 524, r25.u8);
	// std r25,408(r31)
	REX_STORE_U64(r31.u32 + 408, r25.u64);
	// stb r25,525(r31)
	REX_STORE_U8(r31.u32 + 525, r25.u8);
	// stw r21,392(r31)
	REX_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x822f25e8
	ctx.lr = 0x822F3DA8;
	sub_822F25E8(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x822f3f4c
	if (ctx.cr6.eq) goto loc_822F3F4C;
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f3dfc
	if (!ctx.cr6.eq) goto loc_822F3DFC;
loc_822F3DBC:
	// lbz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x822f3bf0
	if (!ctx.cr6.gt) goto loc_822F3BF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3DD8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3DE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3e20
	if (!ctx.cr6.eq) goto loc_822F3E20;
	// lhz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3e08
	if (!ctx.cr6.eq) goto loc_822F3E08;
loc_822F3DFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3E08:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
	// stw r10,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r10.u32);
loc_822F3E20:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822f3e30
	if (!ctx.cr6.gt) goto loc_822F3E30;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_822F3E30:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822F3E44;
	sub_822EC1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bne cr6,0x822f3dd8
	if (!ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3e74
	if (ctx.cr6.eq) goto loc_822F3E74;
loc_822F3E60:
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3E74:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x822f3f3c
	if (ctx.cr6.gt) goto loc_822F3F3C;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f3f3c
	if (ctx.cr6.eq) goto loc_822F3F3C;
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x822d4fa0
	ctx.lr = 0x822F3E90;
	sub_822D4FA0(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 420);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 548);
	// std r7,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r7.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r5,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r5.u32);
	// bne cr6,0x822f3dfc
	if (!ctx.cr6.eq) goto loc_822F3DFC;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f3f30
	if (ctx.cr6.eq) goto loc_822F3F30;
	// lbz r11,526(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 526);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lhz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 528);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f3f20
	if (!ctx.cr6.eq) goto loc_822F3F20;
	// stw r22,4(r20)
	REX_STORE_U32(r20.u32 + 4, r22.u32);
	// lhz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 536);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 512);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulli r5,r6,10000
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(10000));
	// std r5,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r5.u64);
	// lhz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 536);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,536(r31)
	REX_STORE_U16(r31.u32 + 536, ctx.r4.u16);
loc_822F3F20:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,416(r31)
	REX_STORE_U32(r31.u32 + 416, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3F3C:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3F4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_822F3F5C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822f3f68
	if (ctx.cr6.eq) goto loc_822F3F68;
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
loc_822F3F68:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822f3f74
	if (ctx.cr6.eq) goto loc_822F3F74;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
loc_822F3F74:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82311848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82311850;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82311868:
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311894
	if (ctx.cr6.eq) goto loc_82311894;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82311894:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 64);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82311900
	if (!ctx.cr6.lt) goto loc_82311900;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823118C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311900
	if (ctx.cr6.lt) goto loc_82311900;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82310d28
	ctx.lr = 0x823118D8;
	sub_82310D28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311900
	if (ctx.cr6.lt) goto loc_82311900;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82311868
	if (ctx.cr6.lt) goto loc_82311868;
loc_82311900:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82313378) {
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
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823133c8
	if (ctx.cr6.eq) goto loc_823133C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823133c8
	if (ctx.cr6.eq) goto loc_823133C8;
loc_823133B0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823133e4
	if (ctx.cr6.eq) goto loc_823133E4;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x823133b0
	if (!ctx.cr6.eq) goto loc_823133B0;
loc_823133C8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_823133E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823133fc
	if (!ctx.cr6.eq) goto loc_823133FC;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823133FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82313420
	if (!ctx.cr6.eq) goto loc_82313420;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82313454
	if (ctx.cr6.eq) goto loc_82313454;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x82313454
	goto loc_82313454;
loc_82313420:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231343c
	if (ctx.cr6.eq) goto loc_8231343C;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8231343C:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313454
	if (ctx.cr6.eq) goto loc_82313454;
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
loc_82313454:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bne 0x8231346c
	if (!ctx.cr0.eq) goto loc_8231346C;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_8231346C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x822f94e8
	ctx.lr = 0x82313480;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313498
	if (ctx.cr6.lt) goto loc_82313498;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822f94e8
	ctx.lr = 0x82313498;
	sub_822F94E8(ctx, base);
loc_82313498:
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

DEFINE_REX_FUNC(sub_82317B30) {
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
	ctx.lr = 0x82317B38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bf4
	if (ctx.cr6.eq) goto loc_82317BF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317bf4
	if (ctx.cr6.eq) goto loc_82317BF4;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82317be0
	if (!ctx.cr6.gt) goto loc_82317BE0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_82317B68:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317b84
	if (ctx.cr6.eq) goto loc_82317B84;
	// bl 0x823143d0
	ctx.lr = 0x82317B80;
	sub_823143D0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82317B84:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317b98
	if (ctx.cr6.eq) goto loc_82317B98;
	// bl 0x823143d0
	ctx.lr = 0x82317B94;
	sub_823143D0(ctx, base);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
loc_82317B98:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bac
	if (ctx.cr6.eq) goto loc_82317BAC;
	// bl 0x823143d0
	ctx.lr = 0x82317BA8;
	sub_823143D0(ctx, base);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_82317BAC:
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bc0
	if (ctx.cr6.eq) goto loc_82317BC0;
	// bl 0x823143d0
	ctx.lr = 0x82317BBC;
	sub_823143D0(ctx, base);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
loc_82317BC0:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bd4
	if (ctx.cr6.eq) goto loc_82317BD4;
	// bl 0x823143d0
	ctx.lr = 0x82317BD0;
	sub_823143D0(ctx, base);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_82317BD4:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// bne 0x82317b68
	if (!ctx.cr0.eq) goto loc_82317B68;
loc_82317BE0:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bf4
	if (ctx.cr6.eq) goto loc_82317BF4;
	// bl 0x823143d0
	ctx.lr = 0x82317BF0;
	sub_823143D0(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_82317BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823205A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82320644
	if (ctx.cr6.eq) goto loc_82320644;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82320608
	if (ctx.cr6.eq) goto loc_82320608;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x823205f0
	if (ctx.cr6.eq) goto loc_823205F0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82320648
	goto loc_82320648;
loc_823205F0:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-20220
	ctx.r3.s64 = ctx.r10.s64 + -20220;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82320518
	ctx.lr = 0x82320604;
	sub_82320518(ctx, base);
	// b 0x82320648
	goto loc_82320648;
loc_82320608:
	// subfic r11,r6,24
	ctx.xer.ca = ctx.r6.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r6.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8232062c
	if (ctx.cr6.lt) goto loc_8232062C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r9,-20220
	ctx.r3.s64 = ctx.r9.s64 + -20220;
	// bl 0x82320518
	ctx.lr = 0x82320628;
	sub_82320518(ctx, base);
	// b 0x82320648
	goto loc_82320648;
loc_8232062C:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// sraw r4,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r4.s64 = ctx.r10.s32 >> temp.u32;
	// addi r3,r8,-20220
	ctx.r3.s64 = ctx.r8.s64 + -20220;
	// bl 0x82320518
	ctx.lr = 0x82320640;
	sub_82320518(ctx, base);
	// b 0x82320648
	goto loc_82320648;
loc_82320644:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_82320648:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82320654
	if (ctx.cr6.eq) goto loc_82320654;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82320654:
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

DEFINE_REX_FUNC(sub_82324350) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82324358;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823243ec
	if (!ctx.cr6.eq) goto loc_823243EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82324394;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8232447c
	if (ctx.cr6.lt) goto loc_8232447C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823243c8
	if (!ctx.cr6.eq) goto loc_823243C8;
	// li r11,-64
	ctx.r11.s64 = -64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_823243C8:
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
	// ble cr6,0x823243e4
	if (!ctx.cr6.gt) goto loc_823243E4;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// blt cr6,0x823243ec
	if (ctx.cr6.lt) goto loc_823243EC;
loc_823243E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_823243EC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232447c
	if (ctx.cr6.eq) goto loc_8232447C;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_823243FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8232440C;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8232447c
	if (ctx.cr6.lt) goto loc_8232447C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82324454
	if (!ctx.cr6.eq) goto loc_82324454;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8232446c
	if (ctx.cr6.lt) goto loc_8232446C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823243fc
	if (!ctx.cr6.eq) goto loc_823243FC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_82324454:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8232446C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// li r11,62
	ctx.r11.s64 = 62;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
loc_8232447C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82328808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_8232881C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8232881c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232881C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329278) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82329280;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f38
	ctx.lr = 0x82329288;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r15,4(r4)
	r15.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,64(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r18,r29
	r18.u64 = r29.u64;
	// lwz r8,172(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// mr r19,r29
	r19.u64 = r29.u64;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// lwz r22,20(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r23,16(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r17,56(r4)
	r17.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r15,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r15.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x823292e8
	if (ctx.cr6.eq) goto loc_823292E8;
	// lwz r24,176(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 176);
	// b 0x823292ec
	goto loc_823292EC;
loc_823292E8:
	// mr r24,r29
	r24.u64 = r29.u64;
loc_823292EC:
	// lwz r11,224(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232a1ac
	if (!ctx.cr6.gt) goto loc_8232A1AC;
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232a1ac
	if (!ctx.cr6.gt) goto loc_8232A1AC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82329320
	if (ctx.cr6.eq) goto loc_82329320;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x82329320;
	sub_822D5870(ctx, base);
loc_82329320:
	// lwz r9,224(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 224);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 118);
	// rlwinm r7,r9,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r11,r7,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82329370
	if (!ctx.cr6.gt) goto loc_82329370;
loc_8232935C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srw r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8232935c
	if (ctx.cr6.gt) goto loc_8232935C;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82329370:
	// lwz r11,256(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 256);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823293ac
	if (!ctx.cr6.gt) goto loc_823293AC;
loc_8232939C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8232939c
	if (ctx.cr6.gt) goto loc_8232939C;
loc_823293AC:
	// lwz r9,344(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 344);
	// mulli r10,r10,116
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(116));
	// add r16,r10,r9
	r16.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823293d4
	if (!ctx.cr6.gt) goto loc_823293D4;
loc_823293C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x823293c4
	if (ctx.cr6.gt) goto loc_823293C4;
loc_823293D4:
	// lwz r11,340(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 340);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,308(r20)
	r30.u64 = REX_LOAD_U32(r20.u32 + 308);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// ld r28,128(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwzx r14,r10,r11
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rldicr r8,r14,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r14.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r14,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r14.u32);
	// bl 0x82328978
	ctx.lr = 0x8232940C;
	sub_82328978(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,264(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 264);
	// rldicr r8,r14,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r14.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823288d0
	ctx.lr = 0x82329428;
	sub_823288D0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82329448
	if (ctx.cr6.gt) goto loc_82329448;
loc_82329438:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82329438
	if (!ctx.cr6.gt) goto loc_82329438;
loc_82329448:
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,15470
	ctx.r10.s64 = 1013841920;
	// lis r25,-32253
	r25.s64 = -2113732608;
	// ori r30,r11,26125
	r30.u64 = ctx.r11.u64 | 26125;
	// ori r31,r10,62303
	r31.u64 = ctx.r10.u64 | 62303;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82329524
	if (!ctx.cr6.gt) goto loc_82329524;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f29,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r20,540
	r28.s64 = r20.s64 + 540;
	// rlwinm r26,r21,2,0,29
	r26.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r17,-4
	r27.s64 = r17.s64 + -4;
	// lfd f30,-6032(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lfs f31,16288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
	f31.f64 = double(temp.f32);
loc_82329488:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lfs f0,23636(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 23636);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + r31.u64;
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r9,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lfs f13,292(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r4,r26,r15
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + r15.u32);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f8,f31
	ctx.f2.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f28,f6,f13
	f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82329500;
	sub_822D5B48(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * f28.f64));
	// fmul f3,f4,f29
	ctx.f3.f64 = ctx.f4.f64 * f29.f64;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfsu f2,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// lwz r9,264(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 264);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82329488
	if (ctx.cr6.lt) goto loc_82329488;
loc_82329524:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,404(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 404);
	// li r15,1
	r15.s64 = 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// lfs f31,23640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23640);
	f31.f64 = double(temp.f32);
	// bge cr6,0x823298c8
	if (!ctx.cr6.lt) goto loc_823298C8;
	// lwz r27,92(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ld r26,128(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
loc_82329544:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r14.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x8232955C;
	sub_823288D0(ctx, base);
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823204b8
	ctx.lr = 0x82329574;
	sub_823204B8(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82329864
	if (!ctx.cr6.lt) goto loc_82329864;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823297b0
	if (ctx.cr6.lt) goto loc_823297B0;
	// addi r11,r19,2
	ctx.r11.s64 = r19.s64 + 2;
	// addi r9,r29,2
	ctx.r9.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = r28.s64 + -3;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
loc_823295A8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r7,r5,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lwz r4,-8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x82329624
	if (ctx.cr6.eq) goto loc_82329624;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329624
	if (ctx.cr6.eq) goto loc_82329624;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + r24.u32, r15.u32);
loc_82329624:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x823296a0
	if (ctx.cr6.eq) goto loc_823296A0;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823296a0
	if (ctx.cr6.eq) goto loc_823296A0;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + r24.u32, r15.u32);
loc_823296A0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x8232971c
	if (ctx.cr6.eq) goto loc_8232971C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8232971c
	if (ctx.cr6.eq) goto loc_8232971C;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + r24.u32, r15.u32);
loc_8232971C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,216(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x82329798
	if (ctx.cr6.eq) goto loc_82329798;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329798
	if (ctx.cr6.eq) goto loc_82329798;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r8,r24
	REX_STORE_U32(ctx.r8.u32 + r24.u32, r15.u32);
loc_82329798:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823295a8
	if (ctx.cr6.lt) goto loc_823295A8;
loc_823297B0:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82329864
	if (!ctx.cr6.lt) goto loc_82329864;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// add r19,r10,r19
	r19.u64 = ctx.r10.u64 + r19.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_823297DC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x82329858
	if (ctx.cr6.eq) goto loc_82329858;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82329858
	if (ctx.cr6.eq) goto loc_82329858;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r10,r24
	REX_STORE_U32(ctx.r10.u32 + r24.u32, r15.u32);
loc_82329858:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823297dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823297DC;
loc_82329864:
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82329890
	if (ctx.cr6.lt) goto loc_82329890;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_82329890:
	// addi r11,r18,1
	ctx.r11.s64 = r18.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823298bc
	if (ctx.cr6.lt) goto loc_823298BC;
loc_823298AC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823298ac
	if (!ctx.cr6.lt) goto loc_823298AC;
loc_823298BC:
	// lwz r5,404(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 404);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82329544
	if (ctx.cr6.lt) goto loc_82329544;
loc_823298C8:
	// lwz r5,268(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82329f10
	if (!ctx.cr6.lt) goto loc_82329F10;
	// subf r22,r23,r22
	r22.u64 = r22.u64 - r23.u64;
loc_823298D8:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lbzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r18.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82329b84
	if (!ctx.cr6.eq) goto loc_82329B84;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823298f8
	if (ctx.cr6.eq) goto loc_823298F8;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r11,r24
	REX_STORE_U32(ctx.r11.u32 + r24.u32, r15.u32);
loc_823298F8:
	// lwzx r3,r22,r23
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + r23.u32);
	// bl 0x8231ad48
	ctx.lr = 0x82329900;
	sub_8231AD48(ctx, base);
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,268(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 268);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// blt cr6,0x82329930
	if (ctx.cr6.lt) goto loc_82329930;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82329930:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82329b7c
	if (!ctx.cr6.lt) goto loc_82329B7C;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
loc_8232993C:
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bl 0x82328830
	ctx.lr = 0x82329950;
	sub_82328830(ctx, base);
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r14.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// ld r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmuls f0,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x82329970;
	sub_823288D0(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82329b40
	if (!ctx.cr6.lt) goto loc_82329B40;
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82329acc
	if (ctx.cr6.lt) goto loc_82329ACC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// addi r7,r3,-3
	ctx.r7.s64 = ctx.r3.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82329998:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,23636(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 23636);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r4,r30
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + r31.u64;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f1,216(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f7,184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82329998
	if (ctx.cr6.lt) goto loc_82329998;
	// lwz r14,136(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_82329ACC:
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82329b40
	if (!ctx.cr6.lt) goto loc_82329B40;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82329AF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,23636(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 23636);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfd f12,176(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82329af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82329AF0;
loc_82329B40:
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r21,1
	ctx.r9.s64 = r21.s64 + 1;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// lwzx r5,r7,r16
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + r16.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82329b70
	if (ctx.cr6.lt) goto loc_82329B70;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_82329B70:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8232993c
	if (ctx.cr6.lt) goto loc_8232993C;
loc_82329B7C:
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// b 0x82329eb8
	goto loc_82329EB8;
loc_82329B84:
	// rldicr r8,r14,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r14.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x82329B9C;
	sub_823288D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r27,r18,2,0,29
	r27.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82329bc0
	if (!ctx.cr6.gt) goto loc_82329BC0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82329BC0:
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x823204b8
	ctx.lr = 0x82329BD4;
	sub_823204B8(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82329eb8
	if (!ctx.cr6.lt) goto loc_82329EB8;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82329e04
	if (ctx.cr6.lt) goto loc_82329E04;
	// addi r11,r19,2
	ctx.r11.s64 = r19.s64 + 2;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r29,2
	ctx.r7.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = r28.s64 + -3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
loc_82329C0C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x82329c84
	if (ctx.cr6.eq) goto loc_82329C84;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329c84
	if (ctx.cr6.eq) goto loc_82329C84;
	// stwx r15,r27,r24
	REX_STORE_U32(r27.u32 + r24.u32, r15.u32);
loc_82329C84:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x82329cfc
	if (ctx.cr6.eq) goto loc_82329CFC;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329cfc
	if (ctx.cr6.eq) goto loc_82329CFC;
	// stwx r15,r27,r24
	REX_STORE_U32(r27.u32 + r24.u32, r15.u32);
loc_82329CFC:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,248(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x82329d74
	if (ctx.cr6.eq) goto loc_82329D74;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329d74
	if (ctx.cr6.eq) goto loc_82329D74;
	// stwx r15,r27,r24
	REX_STORE_U32(r27.u32 + r24.u32, r15.u32);
loc_82329D74:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x82329dec
	if (ctx.cr6.eq) goto loc_82329DEC;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82329dec
	if (ctx.cr6.eq) goto loc_82329DEC;
	// stwx r15,r27,r24
	REX_STORE_U32(r27.u32 + r24.u32, r15.u32);
loc_82329DEC:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82329c0c
	if (ctx.cr6.lt) goto loc_82329C0C;
loc_82329E04:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82329eb8
	if (!ctx.cr6.lt) goto loc_82329EB8;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// add r19,r10,r19
	r19.u64 = ctx.r10.u64 + r19.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_82329E34:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x82329eac
	if (ctx.cr6.eq) goto loc_82329EAC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82329eac
	if (ctx.cr6.eq) goto loc_82329EAC;
	// stwx r15,r27,r24
	REX_STORE_U32(r27.u32 + r24.u32, r15.u32);
loc_82329EAC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82329e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82329E34;
loc_82329EB8:
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82329ee4
	if (ctx.cr6.lt) goto loc_82329EE4;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_82329EE4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82329f04
	if (ctx.cr6.lt) goto loc_82329F04;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82329EF4:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82329ef4
	if (!ctx.cr6.lt) goto loc_82329EF4;
loc_82329F04:
	// lwz r5,268(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823298d8
	if (ctx.cr6.lt) goto loc_823298D8;
loc_82329F10:
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lhz r10,118(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x8232a134
	if (!ctx.cr6.lt) goto loc_8232A134;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + r16.u64;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82329f58
	if (!ctx.cr6.lt) goto loc_82329F58;
loc_82329F48:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82329f48
	if (ctx.cr6.lt) goto loc_82329F48;
loc_82329F58:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823204b8
	ctx.lr = 0x82329F68;
	sub_823204B8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,23632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23632);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x8232a0c4
	if (ctx.cr6.lt) goto loc_8232A0C4;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82329F94:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,23636(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 23636);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f7,224(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f2,208(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsu f5,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82329f94
	if (ctx.cr6.lt) goto loc_82329F94;
loc_8232A0C4:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x8232a134
	if (!ctx.cr6.lt) goto loc_8232A134;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r28
	ctx.r8.u64 = r28.u64 - r29.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// addi r11,r20,540
	ctx.r11.s64 = r20.s64 + 540;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232A0E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,23636(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 23636);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8232a0e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232A0E4;
loc_8232A134:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8232a198
	if (ctx.cr6.eq) goto loc_8232A198;
	// lwz r11,304(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8232a198
	if (ctx.cr0.lt) goto loc_8232A198;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,268(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 268);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8232A158:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232a170
	if (ctx.cr6.lt) goto loc_8232A170;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232a190
	if (ctx.cr6.lt) goto loc_8232A190;
loc_8232A170:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x8232a158
	if (!ctx.cr0.lt) goto loc_8232A158;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x8232A18C;
	// b 0x822d4ea0
	return;
loc_8232A190:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r11,r24
	REX_STORE_U32(ctx.r11.u32 + r24.u32, r15.u32);
loc_8232A198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x8232A1A8;
	// b 0x822d4ea0
	return;
loc_8232A1AC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x8232A1C0;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8237CD58) {
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
	ctx.lr = 0x8237CD60;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237cda0
	if (ctx.cr6.eq) goto loc_8237CDA0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r15,0
	r15.s64 = 0;
	// bne cr6,0x8237cda4
	if (!ctx.cr6.eq) goto loc_8237CDA4;
loc_8237CDA0:
	// li r15,1
	r15.s64 = 1;
loc_8237CDA4:
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237cdb8
	if (!ctx.cr6.eq) goto loc_8237CDB8;
	// lwz r10,20688(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// b 0x8237cdbc
	goto loc_8237CDBC;
loc_8237CDB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237CDBC:
	// lwz r8,3776(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,3780(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r8,3792(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r30.s64 = ctx.r3.s32 >> 1;
	// lwz r7,3796(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3812(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r5,r9
	r21.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r20,r4,r10
	r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r19,r6,r10
	r19.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r18,r3,r9
	r18.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r17,r8,r10
	r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r16,r11,r10
	r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8237ce34
	if (ctx.cr6.eq) goto loc_8237CE34;
loc_8237CE28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8237CE34:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8237ce28
	if (ctx.cr6.eq) goto loc_8237CE28;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237d2ac
	if (!ctx.cr6.lt) goto loc_8237D2AC;
loc_8237CE4C:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mullw r24,r28,r23
	r24.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// lwz r8,232(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r6,21940(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r21
	r29.u64 = ctx.r9.u64 + r21.u64;
	// add r25,r11,r20
	r25.u64 = ctx.r11.u64 + r20.u64;
	// add r26,r11,r19
	r26.u64 = ctx.r11.u64 + r19.u64;
	// add r30,r11,r17
	r30.u64 = ctx.r11.u64 + r17.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8237cebc
	if (ctx.cr6.eq) goto loc_8237CEBC;
	// lwz r8,21968(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21968);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8237cebc
	if (ctx.cr6.eq) goto loc_8237CEBC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8237d0dc
	if (ctx.cr6.eq) goto loc_8237D0DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt cr6,0x8237d0dc
	if (ctx.cr6.gt) goto loc_8237D0DC;
loc_8237CEBC:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8237ced4
	if (!ctx.cr6.eq) goto loc_8237CED4;
	// lwz r10,3432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237d094
	if (ctx.cr6.eq) goto loc_8237D094;
loc_8237CED4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x8237d02c
	if (ctx.cr6.eq) goto loc_8237D02C;
	// ld r10,3632(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// bne cr6,0x8237d02c
	if (!ctx.cr6.eq) goto loc_8237D02C;
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8237cf14
	if (!ctx.cr6.eq) goto loc_8237CF14;
	// lwz r10,21704(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21704);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237cf18
	if (!ctx.cr6.eq) goto loc_8237CF18;
loc_8237CF14:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8237CF18:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237d024
	if (!ctx.cr6.eq) goto loc_8237D024;
	// lwz r30,20688(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x8237d090
	if (!ctx.cr6.lt) goto loc_8237D090;
loc_8237CF2C:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 0);
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + r25.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237d014
	if (ctx.cr6.eq) goto loc_8237D014;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8237d014
	if (!ctx.cr6.lt) goto loc_8237D014;
loc_8237CF98:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzu r3,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwu r3,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzu r3,4(r5)
	ea = 4 + ctx.r5.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// blt cr6,0x8237cf98
	if (ctx.cr6.lt) goto loc_8237CF98;
loc_8237D014:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x8237cf2c
	if (ctx.cr6.lt) goto loc_8237CF2C;
	// b 0x8237d090
	goto loc_8237D090;
loc_8237D024:
	// li r30,0
	r30.s64 = 0;
	// b 0x8237cf2c
	goto loc_8237CF2C;
loc_8237D02C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237d094
	if (!ctx.cr6.lt) goto loc_8237D094;
	// subf r28,r30,r11
	r28.u64 = ctx.r11.u64 - r30.u64;
	// subf r27,r29,r9
	r27.u64 = ctx.r9.u64 - r29.u64;
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// subf r25,r30,r25
	r25.u64 = r25.u64 - r30.u64;
loc_8237D04C:
	// lwz r11,3156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3156);
	// add r8,r28,r30
	ctx.r8.u64 = r28.u64 + r30.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r6,r27,r29
	ctx.r6.u64 = r27.u64 + r29.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r5,r26,r30
	ctx.r5.u64 = r26.u64 + r30.u64;
	// add r4,r25,r30
	ctx.r4.u64 = r25.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237D078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237d04c
	if (ctx.cr6.lt) goto loc_8237D04C;
loc_8237D090:
	// lwz r27,276(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8237D094:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8237d0ac
	if (ctx.cr6.eq) goto loc_8237D0AC;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8237D0AC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237ce4c
	if (ctx.cr6.lt) goto loc_8237CE4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8237D0DC:
	// lwz r5,22020(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22020);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,21960(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21960);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,21976(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21976);
	// li r10,4
	ctx.r10.s64 = 4;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_8237D0F8:
	// subfic r9,r27,0
	ctx.xer.ca = r27.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r27.u64;
	// rlwinm r7,r27,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// addme r9,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8237d128
	if (ctx.cr6.gt) goto loc_8237D128;
	// lwz r9,21956(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8237d0f8
	goto loc_8237D0F8;
loc_8237D128:
	// lwz r10,21948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237d158
	if (!ctx.cr6.lt) goto loc_8237D158;
	// lwz r8,21956(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21948(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21948);
loc_8237D140:
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8237d140
	if (ctx.cr6.lt) goto loc_8237D140;
loc_8237D158:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8237ce28
	if (ctx.cr6.eq) goto loc_8237CE28;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82337cb0
	ctx.lr = 0x8237D184;
	sub_82337CB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237D188:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237d1cc
	if (!ctx.cr6.eq) goto loc_8237D1CC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8237d188
	if (ctx.cr6.lt) goto loc_8237D188;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8237D1CC:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8237ce28
	if (!ctx.cr6.lt) goto loc_8237CE28;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8237d1f4
	if (ctx.cr6.eq) goto loc_8237D1F4;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
loc_8237D1F4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bge cr6,0x8237d210
	if (!ctx.cr6.lt) goto loc_8237D210;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8237D210:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237d220
	if (ctx.cr6.eq) goto loc_8237D220;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8237D220:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237d2ac
	if (ctx.cr6.eq) goto loc_8237D2AC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8237D234:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237d278
	if (ctx.cr6.eq) goto loc_8237D278;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,-12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8237d29c
	goto loc_8237D29C;
loc_8237D278:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_8237D29C:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,-12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237d234
	if (!ctx.cr6.eq) goto loc_8237D234;
loc_8237D2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	REX_STORE_U32(r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82392F48) {
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
	ctx.lr = 0x82392F50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82392fe0
	if (!ctx.cr6.gt) goto loc_82392FE0;
	// lwz r31,260(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subf r27,r6,r11
	r27.u64 = ctx.r11.u64 - ctx.r6.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_82392F88:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392fac
	if (!ctx.cr6.gt) goto loc_82392FAC;
	// subf r11,r31,r27
	ctx.r11.u64 = r27.u64 - r31.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
loc_82392FA0:
	// lbzux r9,r11,r31
	ea = ctx.r11.u32 + r31.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82392fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392FA0;
loc_82392FAC:
	// bl 0x82392780
	ctx.lr = 0x82392FB0;
	sub_82392780(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392fd4
	if (!ctx.cr6.gt) goto loc_82392FD4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
loc_82392FC4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbux r9,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82392fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392FC4;
loc_82392FD4:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bne 0x82392f88
	if (!ctx.cr0.eq) goto loc_82392F88;
loc_82392FE0:
	// lwz r26,244(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r31,268(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823930bc
	if (!ctx.cr6.gt) goto loc_823930BC;
	// mr r27,r26
	r27.u64 = r26.u64;
	// subf r28,r29,r25
	r28.u64 = r25.u64 - r29.u64;
loc_82392FFC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82393020
	if (!ctx.cr6.gt) goto loc_82393020;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
loc_82393014:
	// lbzux r9,r11,r31
	ea = ctx.r11.u32 + r31.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82393014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393014;
loc_82393020:
	// bl 0x82392780
	ctx.lr = 0x82393024;
	sub_82392780(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82393048
	if (!ctx.cr6.gt) goto loc_82393048;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
loc_82393038:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbux r9,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82393038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393038;
loc_82393048:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82392ffc
	if (!ctx.cr0.eq) goto loc_82392FFC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823930bc
	if (!ctx.cr6.gt) goto loc_823930BC;
	// mr r28,r26
	r28.u64 = r26.u64;
	// subf r29,r30,r24
	r29.u64 = r24.u64 - r30.u64;
loc_82393064:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82393088
	if (!ctx.cr6.gt) goto loc_82393088;
	// subf r11,r31,r29
	ctx.r11.u64 = r29.u64 - r31.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_8239307C:
	// lbzux r9,r11,r31
	ea = ctx.r11.u32 + r31.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239307c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239307C;
loc_82393088:
	// bl 0x82392780
	ctx.lr = 0x8239308C;
	sub_82392780(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823930b0
	if (!ctx.cr6.gt) goto loc_823930B0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
loc_823930A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbux r9,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823930a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823930A0;
loc_823930B0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x82393064
	if (!ctx.cr0.eq) goto loc_82393064;
loc_823930BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82395218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82395220;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r7,r10,16496
	ctx.r7.s64 = ctx.r10.s64 + 16496;
	// addi r6,r9,17080
	ctx.r6.s64 = ctx.r9.s64 + 17080;
	// addi r8,r11,20056
	ctx.r8.s64 = ctx.r11.s64 + 20056;
	// stw r7,3220(r3)
	REX_STORE_U32(ctx.r3.u32 + 3220, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r6,3224(r3)
	REX_STORE_U32(ctx.r3.u32 + 3224, ctx.r6.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,3232(r3)
	REX_STORE_U32(ctx.r3.u32 + 3232, ctx.r8.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,15876(r3)
	REX_STORE_U32(ctx.r3.u32 + 15876, ctx.r9.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r11,15888(r3)
	REX_STORE_U32(ctx.r3.u32 + 15888, ctx.r11.u32);
	// lis r4,-32199
	ctx.r4.s64 = -2110193664;
	// stw r7,15880(r3)
	REX_STORE_U32(ctx.r3.u32 + 15880, ctx.r7.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// addi r5,r5,19160
	ctx.r5.s64 = ctx.r5.s64 + 19160;
	// addi r4,r4,10416
	ctx.r4.s64 = ctx.r4.s64 + 10416;
	// addi r10,r10,11472
	ctx.r10.s64 = ctx.r10.s64 + 11472;
	// stw r5,3228(r3)
	REX_STORE_U32(ctx.r3.u32 + 3228, ctx.r5.u32);
	// addi r8,r8,11048
	ctx.r8.s64 = ctx.r8.s64 + 11048;
	// stw r4,15844(r3)
	REX_STORE_U32(ctx.r3.u32 + 15844, ctx.r4.u32);
	// addi r6,r6,12104
	ctx.r6.s64 = ctx.r6.s64 + 12104;
	// stw r10,15852(r3)
	REX_STORE_U32(ctx.r3.u32 + 15852, ctx.r10.u32);
	// lis r31,-32199
	r31.s64 = -2110193664;
	// stw r8,15848(r3)
	REX_STORE_U32(ctx.r3.u32 + 15848, ctx.r8.u32);
	// lis r30,-32199
	r30.s64 = -2110193664;
	// stw r6,15856(r3)
	REX_STORE_U32(ctx.r3.u32 + 15856, ctx.r6.u32);
	// lis r29,-32199
	r29.s64 = -2110193664;
	// lis r28,-32199
	r28.s64 = -2110193664;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r4,r31,13384
	ctx.r4.s64 = r31.s64 + 13384;
	// addi r10,r30,14584
	ctx.r10.s64 = r30.s64 + 14584;
	// stw r5,15884(r3)
	REX_STORE_U32(ctx.r3.u32 + 15884, ctx.r5.u32);
	// addi r8,r29,13952
	ctx.r8.s64 = r29.s64 + 13952;
	// stw r4,15860(r3)
	REX_STORE_U32(ctx.r3.u32 + 15860, ctx.r4.u32);
	// addi r6,r28,15104
	ctx.r6.s64 = r28.s64 + 15104;
	// stw r10,15868(r3)
	REX_STORE_U32(ctx.r3.u32 + 15868, ctx.r10.u32);
	// stw r8,15864(r3)
	REX_STORE_U32(ctx.r3.u32 + 15864, ctx.r8.u32);
	// stw r6,15872(r3)
	REX_STORE_U32(ctx.r3.u32 + 15872, ctx.r6.u32);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823959A8) {
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
	ctx.lr = 0x823959B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r21,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r21.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r21,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r21.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,15387
	r22.s64 = ctx.r11.s64 + 15387;
	// bne cr6,0x82395a18
	if (!ctx.cr6.eq) goto loc_82395A18;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8233feb8
	ctx.lr = 0x823959F8;
	sub_8233FEB8(ctx, base);
	// stw r3,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395b00
	if (ctx.cr6.eq) goto loc_82395B00;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823958a0
	ctx.lr = 0x82395A0C;
	sub_823958A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395b04
	if (!ctx.cr6.eq) goto loc_82395B04;
loc_82395A18:
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82395af4
	if (!ctx.cr6.gt) goto loc_82395AF4;
	// lwz r19,276(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r20,-1
	r20.s64 = -1;
loc_82395A2C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,648
	ctx.r4.s64 = 648;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233feb8
	ctx.lr = 0x82395A3C;
	sub_8233FEB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395b00
	if (ctx.cr6.eq) goto loc_82395B00;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82395a64
	if (ctx.cr6.eq) goto loc_82395A64;
	// li r5,648
	ctx.r5.s64 = 648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82395A5C;
	sub_822D5870(ctx, base);
	// stw r20,640(r30)
	REX_STORE_U32(r30.u32 + 640, r20.u32);
	// b 0x82395a88
	goto loc_82395A88;
loc_82395A64:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233cd08
	ctx.lr = 0x82395A7C;
	sub_8233CD08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395b04
	if (!ctx.cr6.eq) goto loc_82395B04;
loc_82395A88:
	// stw r29,640(r30)
	REX_STORE_U32(r30.u32 + 640, r29.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395b00
	if (ctx.cr6.eq) goto loc_82395B00;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82395b00
	if (ctx.cr6.lt) goto loc_82395B00;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82395abc
	if (!ctx.cr6.eq) goto loc_82395ABC;
	// stw r21,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r21.u32);
loc_82395ABC:
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82395adc
	if (!ctx.cr6.eq) goto loc_82395ADC;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82395ADC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blt cr6,0x82395a2c
	if (ctx.cr6.lt) goto loc_82395A2C;
loc_82395AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_82395B00:
	// li r31,-9
	r31.s64 = -9;
loc_82395B04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82395668
	ctx.lr = 0x82395B10;
	sub_82395668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8239A100) {
	REX_FUNC_PROLOGUE();
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,1940(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1940);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8239a178
	if (!ctx.cr6.lt) goto loc_8239A178;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8239A178:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239DDD0) {
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
	ctx.lr = 0x8239DDD8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r22,0
	r22.s64 = 0;
	// lwz r14,0(r7)
	r14.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r18,1764(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r23,r22
	r23.u64 = r22.u64;
	// lwz r30,20(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r19,r22
	r19.u64 = r22.u64;
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,28(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r17,r11,1
	r17.s64 = ctx.r11.s64 + 1;
	// lwz r21,32(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// bl 0x822d5870
	ctx.lr = 0x8239DE60;
	sub_822D5870(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822d5870
	ctx.lr = 0x8239DE70;
	sub_822D5870(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r16,3
	r16.s64 = 3;
	// ori r25,r11,32768
	r25.u64 = ctx.r11.u64 | 32768;
	// bne cr6,0x8239e8c0
	if (!ctx.cr6.eq) goto loc_8239E8C0;
loc_8239DE84:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239de9c
	if (!ctx.cr6.eq) goto loc_8239DE9C;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239dfc0
	goto loc_8239DFC0;
loc_8239DE9C:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239df88
	if (ctx.cr6.lt) goto loc_8239DF88;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239df80
	if (!ctx.cr6.lt) goto loc_8239DF80;
loc_8239DEE8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239df14
	if (ctx.cr6.lt) goto loc_8239DF14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239DF04;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239dee8
	if (ctx.cr6.eq) goto loc_8239DEE8;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239dfc0
	goto loc_8239DFC0;
loc_8239DF14:
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
loc_8239DF80:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239dfc0
	goto loc_8239DFC0;
loc_8239DF88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239DF90;
	sub_82337F50(ctx, base);
loc_8239DF90:
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
	ctx.lr = 0x8239DFA8;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239df90
	if (ctx.cr6.lt) goto loc_8239DF90;
loc_8239DFC0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239e018
	if (ctx.cr6.eq) goto loc_8239E018;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// blt cr6,0x8239dfe0
	if (ctx.cr6.lt) goto loc_8239DFE0;
	// li r23,1
	r23.s64 = 1;
loc_8239DFE0:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
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
	// bge 0x8239e830
	if (!ctx.cr0.lt) goto loc_8239E830;
	// bl 0x823380c8
	ctx.lr = 0x8239E014;
	sub_823380C8(ctx, base);
	// b 0x8239e830
	goto loc_8239E830;
loc_8239E018:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239e040
	if (!ctx.cr0.lt) goto loc_8239E040;
	// bl 0x823380c8
	ctx.lr = 0x8239E040;
	sub_823380C8(ctx, base);
loc_8239E040:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8239e1f4
	if (ctx.cr6.eq) goto loc_8239E1F4;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239e060
	if (!ctx.cr6.eq) goto loc_8239E060;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239e184
	goto loc_8239E184;
loc_8239E060:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e14c
	if (ctx.cr6.lt) goto loc_8239E14C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239e144
	if (!ctx.cr6.lt) goto loc_8239E144;
loc_8239E0AC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239e0d8
	if (ctx.cr6.lt) goto loc_8239E0D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239E0C8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239e0ac
	if (ctx.cr6.eq) goto loc_8239E0AC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e184
	goto loc_8239E184;
loc_8239E0D8:
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
loc_8239E144:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e184
	goto loc_8239E184;
loc_8239E14C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239E154;
	sub_82337F50(ctx, base);
loc_8239E154:
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
	ctx.lr = 0x8239E16C;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e154
	if (ctx.cr6.lt) goto loc_8239E154;
loc_8239E184:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239f2e0
	if (ctx.cr6.eq) goto loc_8239F2E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x8239e1b8
	if (ctx.cr6.lt) goto loc_8239E1B8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,1
	r23.s64 = 1;
	// b 0x8239e1bc
	goto loc_8239E1BC;
loc_8239E1B8:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8239E1BC:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// bge 0x8239e830
	if (!ctx.cr0.lt) goto loc_8239E830;
	// bl 0x823380c8
	ctx.lr = 0x8239E1F0;
	sub_823380C8(ctx, base);
	// b 0x8239e830
	goto loc_8239E830;
loc_8239E1F4:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239e21c
	if (!ctx.cr0.lt) goto loc_8239E21C;
	// bl 0x823380c8
	ctx.lr = 0x8239E21C;
	sub_823380C8(ctx, base);
loc_8239E21C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8239e3d4
	if (ctx.cr6.eq) goto loc_8239E3D4;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239e23c
	if (!ctx.cr6.eq) goto loc_8239E23C;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239e360
	goto loc_8239E360;
loc_8239E23C:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e328
	if (ctx.cr6.lt) goto loc_8239E328;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239e320
	if (!ctx.cr6.lt) goto loc_8239E320;
loc_8239E288:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239e2b4
	if (ctx.cr6.lt) goto loc_8239E2B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239E2A4;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239e288
	if (ctx.cr6.eq) goto loc_8239E288;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e360
	goto loc_8239E360;
loc_8239E2B4:
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
loc_8239E320:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e360
	goto loc_8239E360;
loc_8239E328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239E330;
	sub_82337F50(ctx, base);
loc_8239E330:
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
	ctx.lr = 0x8239E348;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e330
	if (ctx.cr6.lt) goto loc_8239E330;
loc_8239E360:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239f2e0
	if (ctx.cr6.eq) goto loc_8239F2E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lbzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// lwz r10,1936(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1936);
	// blt cr6,0x8239e398
	if (ctx.cr6.lt) goto loc_8239E398;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,1
	r23.s64 = 1;
	// b 0x8239e39c
	goto loc_8239E39C;
loc_8239E398:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8239E39C:
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// bge 0x8239e830
	if (!ctx.cr0.lt) goto loc_8239E830;
	// bl 0x823380c8
	ctx.lr = 0x8239E3D0;
	sub_823380C8(ctx, base);
	// b 0x8239e830
	goto loc_8239E830;
loc_8239E3D4:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239e3fc
	if (!ctx.cr0.lt) goto loc_8239E3FC;
	// bl 0x823380c8
	ctx.lr = 0x8239E3FC;
	sub_823380C8(ctx, base);
loc_8239E3FC:
	// lwz r11,15536(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15536);
	// mr r23,r31
	r23.u64 = r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8239e6c0
	if (ctx.cr6.lt) goto loc_8239E6C0;
	// lwz r11,1948(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239e424
	if (ctx.cr6.eq) goto loc_8239E424;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239a188
	ctx.lr = 0x8239E420;
	sub_8239A188(ctx, base);
	// stw r22,1948(r26)
	REX_STORE_U32(r26.u32 + 1948, r22.u32);
loc_8239E424:
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,1956(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8239e448
	if (!ctx.cr6.gt) goto loc_8239E448;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8239e4f4
	goto loc_8239E4F4;
loc_8239E448:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239e458
	if (!ctx.cr6.eq) goto loc_8239E458;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8239e4f4
	goto loc_8239E4F4;
loc_8239E458:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239e4b8
	if (!ctx.cr6.gt) goto loc_8239E4B8;
loc_8239E460:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e4b8
	if (ctx.cr6.eq) goto loc_8239E4B8;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239e4a8
	if (!ctx.cr0.lt) goto loc_8239E4A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E4A8;
	sub_823380C8(ctx, base);
loc_8239E4A8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239e460
	if (ctx.cr6.gt) goto loc_8239E460;
loc_8239E4B8:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239e4f0
	if (!ctx.cr0.lt) goto loc_8239E4F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E4F0;
	sub_823380C8(ctx, base);
loc_8239E4F0:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8239E4F4:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239e51c
	if (!ctx.cr0.lt) goto loc_8239E51C;
	// bl 0x823380c8
	ctx.lr = 0x8239E51C;
	sub_823380C8(ctx, base);
loc_8239E51C:
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,1952(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 1952);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8239e604
	if (ctx.cr6.eq) goto loc_8239E604;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8239e54c
	if (!ctx.cr6.gt) goto loc_8239E54C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E54C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239e560
	if (!ctx.cr6.eq) goto loc_8239E560;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E560:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239e5c0
	if (!ctx.cr6.gt) goto loc_8239E5C0;
loc_8239E568:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e5c0
	if (ctx.cr6.eq) goto loc_8239E5C0;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239e5b0
	if (!ctx.cr0.lt) goto loc_8239E5B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E5B0;
	sub_823380C8(ctx, base);
loc_8239E5B0:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239e568
	if (ctx.cr6.gt) goto loc_8239E568;
loc_8239E5C0:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239e5f8
	if (!ctx.cr0.lt) goto loc_8239E5F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E5F8;
	sub_823380C8(ctx, base);
loc_8239E5F8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E604:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8239e614
	if (!ctx.cr6.gt) goto loc_8239E614;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E614:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239e624
	if (!ctx.cr6.eq) goto loc_8239E624;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E624:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239e684
	if (!ctx.cr6.gt) goto loc_8239E684;
loc_8239E62C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e684
	if (ctx.cr6.eq) goto loc_8239E684;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239e674
	if (!ctx.cr0.lt) goto loc_8239E674;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E674;
	sub_823380C8(ctx, base);
loc_8239E674:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239e62c
	if (ctx.cr6.gt) goto loc_8239E62C;
loc_8239E684:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239e820
	if (!ctx.cr0.lt) goto loc_8239E820;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E6BC;
	sub_823380C8(ctx, base);
	// b 0x8239e820
	goto loc_8239E820;
loc_8239E6C0:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8239e734
	if (!ctx.cr6.lt) goto loc_8239E734;
loc_8239E6DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e734
	if (ctx.cr6.eq) goto loc_8239E734;
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
	// bge 0x8239e724
	if (!ctx.cr0.lt) goto loc_8239E724;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E724;
	sub_823380C8(ctx, base);
loc_8239E724:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239e6dc
	if (ctx.cr6.gt) goto loc_8239E6DC;
loc_8239E734:
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
	// bge 0x8239e76c
	if (!ctx.cr0.lt) goto loc_8239E76C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E76C;
	sub_823380C8(ctx, base);
loc_8239E76C:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8239e7e4
	if (!ctx.cr6.lt) goto loc_8239E7E4;
loc_8239E78C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e7e4
	if (ctx.cr6.eq) goto loc_8239E7E4;
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
	// bge 0x8239e7d4
	if (!ctx.cr0.lt) goto loc_8239E7D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E7D4;
	sub_823380C8(ctx, base);
loc_8239E7D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239e78c
	if (ctx.cr6.gt) goto loc_8239E78C;
loc_8239E7E4:
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
	// bge 0x8239e81c
	if (!ctx.cr0.lt) goto loc_8239E81C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239E81C;
	sub_823380C8(ctx, base);
loc_8239E81C:
	// extsb r31,r30
	r31.s64 = r30.s8;
loc_8239E820:
	// rlwinm r30,r31,1,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8239e830
	if (!ctx.cr6.lt) goto loc_8239E830;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_8239E830:
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = r28.u64 + r19.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8239f2e0
	if (!ctx.cr6.eq) goto loc_8239F2E0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lwz r10,1832(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1832);
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239e874
	if (ctx.cr6.eq) goto loc_8239E874;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// or r27,r7,r27
	r27.u64 = ctx.r7.u64 | r27.u64;
loc_8239E874:
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r31,r14
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r14.s32);
	// lbzx r8,r11,r15
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// addi r7,r30,-1
	ctx.r7.s64 = r30.s64 + -1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// rotlwi r4,r8,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// sthx r11,r4,r18
	REX_STORE_U16(ctx.r4.u32 + r18.u32, ctx.r11.u16);
	// bne cr6,0x8239e8b0
	if (!ctx.cr6.eq) goto loc_8239E8B0;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8239de84
	goto loc_8239DE84;
loc_8239E8B0:
	// stw r27,1944(r26)
	REX_STORE_U32(r26.u32 + 1944, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
loc_8239E8C0:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239e8d8
	if (!ctx.cr6.eq) goto loc_8239E8D8;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239e9fc
	goto loc_8239E9FC;
loc_8239E8D8:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e9c4
	if (ctx.cr6.lt) goto loc_8239E9C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239e9bc
	if (!ctx.cr6.lt) goto loc_8239E9BC;
loc_8239E924:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239e950
	if (ctx.cr6.lt) goto loc_8239E950;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239E940;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239e924
	if (ctx.cr6.eq) goto loc_8239E924;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e9fc
	goto loc_8239E9FC;
loc_8239E950:
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
loc_8239E9BC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239e9fc
	goto loc_8239E9FC;
loc_8239E9C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239E9CC;
	sub_82337F50(ctx, base);
loc_8239E9CC:
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
	ctx.lr = 0x8239E9E4;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239e9cc
	if (ctx.cr6.lt) goto loc_8239E9CC;
loc_8239E9FC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239ea58
	if (ctx.cr6.eq) goto loc_8239EA58;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// blt cr6,0x8239ea1c
	if (ctx.cr6.lt) goto loc_8239EA1C;
	// li r23,1
	r23.s64 = 1;
loc_8239EA1C:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
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
	// bge 0x8239ea48
	if (!ctx.cr0.lt) goto loc_8239EA48;
	// bl 0x823380c8
	ctx.lr = 0x8239EA48;
	sub_823380C8(ctx, base);
loc_8239EA48:
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x8239f278
	goto loc_8239F278;
loc_8239EA58:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239ea80
	if (!ctx.cr0.lt) goto loc_8239EA80;
	// bl 0x823380c8
	ctx.lr = 0x8239EA80;
	sub_823380C8(ctx, base);
loc_8239EA80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8239ec38
	if (ctx.cr6.eq) goto loc_8239EC38;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239eaa0
	if (!ctx.cr6.eq) goto loc_8239EAA0;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239ebc4
	goto loc_8239EBC4;
loc_8239EAA0:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239eb8c
	if (ctx.cr6.lt) goto loc_8239EB8C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239eb84
	if (!ctx.cr6.lt) goto loc_8239EB84;
loc_8239EAEC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239eb18
	if (ctx.cr6.lt) goto loc_8239EB18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239EB08;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239eaec
	if (ctx.cr6.eq) goto loc_8239EAEC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239ebc4
	goto loc_8239EBC4;
loc_8239EB18:
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
loc_8239EB84:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239ebc4
	goto loc_8239EBC4;
loc_8239EB8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239EB94;
	sub_82337F50(ctx, base);
loc_8239EB94:
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
	ctx.lr = 0x8239EBAC;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239eb94
	if (ctx.cr6.lt) goto loc_8239EB94;
loc_8239EBC4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239f2e0
	if (ctx.cr6.eq) goto loc_8239F2E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lbzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r28,r30,r21
	r28.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x8239ebf8
	if (ctx.cr6.lt) goto loc_8239EBF8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,1
	r23.s64 = 1;
	// b 0x8239ebfc
	goto loc_8239EBFC;
loc_8239EBF8:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8239EBFC:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// bge 0x8239ee14
	if (!ctx.cr0.lt) goto loc_8239EE14;
	// bl 0x823380c8
	ctx.lr = 0x8239EC30;
	sub_823380C8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x8239f278
	goto loc_8239F278;
loc_8239EC38:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239ec60
	if (!ctx.cr0.lt) goto loc_8239EC60;
	// bl 0x823380c8
	ctx.lr = 0x8239EC60;
	sub_823380C8(ctx, base);
loc_8239EC60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8239ee1c
	if (ctx.cr6.eq) goto loc_8239EE1C;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8239ec80
	if (!ctx.cr6.eq) goto loc_8239EC80;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r16,20(r31)
	REX_STORE_U32(r31.u32 + 20, r16.u32);
	// b 0x8239eda4
	goto loc_8239EDA4;
loc_8239EC80:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239ed6c
	if (ctx.cr6.lt) goto loc_8239ED6C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
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
	// bge cr6,0x8239ed64
	if (!ctx.cr6.lt) goto loc_8239ED64;
loc_8239ECCC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239ecf8
	if (ctx.cr6.lt) goto loc_8239ECF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8239ECE8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239eccc
	if (ctx.cr6.eq) goto loc_8239ECCC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239eda4
	goto loc_8239EDA4;
loc_8239ECF8:
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
loc_8239ED64:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8239eda4
	goto loc_8239EDA4;
loc_8239ED6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8239ED74;
	sub_82337F50(ctx, base);
loc_8239ED74:
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
	ctx.lr = 0x8239ED8C;
	sub_82337F50(ctx, base);
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8239ed74
	if (ctx.cr6.lt) goto loc_8239ED74;
loc_8239EDA4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// beq cr6,0x8239f2e0
	if (ctx.cr6.eq) goto loc_8239F2E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lbzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + r20.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(r30.s32, r17.s32, ctx.xer);
	// lbzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r21.u32);
	// lwz r9,1936(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 1936);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x8239eddc
	if (ctx.cr6.lt) goto loc_8239EDDC;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,1
	r23.s64 = 1;
	// b 0x8239ede0
	goto loc_8239EDE0;
loc_8239EDDC:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8239EDE0:
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// bge 0x8239ee14
	if (!ctx.cr0.lt) goto loc_8239EE14;
	// bl 0x823380c8
	ctx.lr = 0x8239EE14;
	sub_823380C8(ctx, base);
loc_8239EE14:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x8239f278
	goto loc_8239F278;
loc_8239EE1C:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239ee44
	if (!ctx.cr0.lt) goto loc_8239EE44;
	// bl 0x823380c8
	ctx.lr = 0x8239EE44;
	sub_823380C8(ctx, base);
loc_8239EE44:
	// lwz r11,15536(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 15536);
	// mr r23,r31
	r23.u64 = r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8239f108
	if (ctx.cr6.lt) goto loc_8239F108;
	// lwz r11,1948(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ee6c
	if (ctx.cr6.eq) goto loc_8239EE6C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239a188
	ctx.lr = 0x8239EE68;
	sub_8239A188(ctx, base);
	// stw r22,1948(r26)
	REX_STORE_U32(r26.u32 + 1948, r22.u32);
loc_8239EE6C:
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,1956(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8239ee90
	if (!ctx.cr6.gt) goto loc_8239EE90;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8239ef3c
	goto loc_8239EF3C;
loc_8239EE90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239eea0
	if (!ctx.cr6.eq) goto loc_8239EEA0;
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8239ef3c
	goto loc_8239EF3C;
loc_8239EEA0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239ef00
	if (!ctx.cr6.gt) goto loc_8239EF00;
loc_8239EEA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239ef00
	if (ctx.cr6.eq) goto loc_8239EF00;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239eef0
	if (!ctx.cr0.lt) goto loc_8239EEF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239EEF0;
	sub_823380C8(ctx, base);
loc_8239EEF0:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239eea8
	if (ctx.cr6.gt) goto loc_8239EEA8;
loc_8239EF00:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239ef38
	if (!ctx.cr0.lt) goto loc_8239EF38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239EF38;
	sub_823380C8(ctx, base);
loc_8239EF38:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8239EF3C:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8239ef64
	if (!ctx.cr0.lt) goto loc_8239EF64;
	// bl 0x823380c8
	ctx.lr = 0x8239EF64;
	sub_823380C8(ctx, base);
loc_8239EF64:
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,1952(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 1952);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8239f04c
	if (ctx.cr6.eq) goto loc_8239F04C;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8239ef94
	if (!ctx.cr6.gt) goto loc_8239EF94;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x8239f268
	goto loc_8239F268;
loc_8239EF94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239efa8
	if (!ctx.cr6.eq) goto loc_8239EFA8;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// neg r31,r22
	r31.s64 = static_cast<int64_t>(-r22.u64);
	// b 0x8239f268
	goto loc_8239F268;
loc_8239EFA8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239f008
	if (!ctx.cr6.gt) goto loc_8239F008;
loc_8239EFB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f008
	if (ctx.cr6.eq) goto loc_8239F008;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239eff8
	if (!ctx.cr0.lt) goto loc_8239EFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239EFF8;
	sub_823380C8(ctx, base);
loc_8239EFF8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239efb0
	if (ctx.cr6.gt) goto loc_8239EFB0;
loc_8239F008:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239f040
	if (!ctx.cr0.lt) goto loc_8239F040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F040;
	sub_823380C8(ctx, base);
loc_8239F040:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x8239f268
	goto loc_8239F268;
loc_8239F04C:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8239f05c
	if (!ctx.cr6.gt) goto loc_8239F05C;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8239f268
	goto loc_8239F268;
loc_8239F05C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8239f06c
	if (!ctx.cr6.eq) goto loc_8239F06C;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8239f268
	goto loc_8239F268;
loc_8239F06C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239f0cc
	if (!ctx.cr6.gt) goto loc_8239F0CC;
loc_8239F074:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f0cc
	if (ctx.cr6.eq) goto loc_8239F0CC;
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8239f0bc
	if (!ctx.cr0.lt) goto loc_8239F0BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F0BC;
	sub_823380C8(ctx, base);
loc_8239F0BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239f074
	if (ctx.cr6.gt) goto loc_8239F074;
loc_8239F0CC:
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
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8239f268
	if (!ctx.cr0.lt) goto loc_8239F268;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F104;
	sub_823380C8(ctx, base);
	// b 0x8239f268
	goto loc_8239F268;
loc_8239F108:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8239f17c
	if (!ctx.cr6.lt) goto loc_8239F17C;
loc_8239F124:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f17c
	if (ctx.cr6.eq) goto loc_8239F17C;
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
	// bge 0x8239f16c
	if (!ctx.cr0.lt) goto loc_8239F16C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F16C;
	sub_823380C8(ctx, base);
loc_8239F16C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239f124
	if (ctx.cr6.gt) goto loc_8239F124;
loc_8239F17C:
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
	// bge 0x8239f1b4
	if (!ctx.cr0.lt) goto loc_8239F1B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F1B4;
	sub_823380C8(ctx, base);
loc_8239F1B4:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8239f22c
	if (!ctx.cr6.lt) goto loc_8239F22C;
loc_8239F1D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f22c
	if (ctx.cr6.eq) goto loc_8239F22C;
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
	// bge 0x8239f21c
	if (!ctx.cr0.lt) goto loc_8239F21C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F21C;
	sub_823380C8(ctx, base);
loc_8239F21C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239f1d4
	if (ctx.cr6.gt) goto loc_8239F1D4;
loc_8239F22C:
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
	// bge 0x8239f264
	if (!ctx.cr0.lt) goto loc_8239F264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239F264;
	sub_823380C8(ctx, base);
loc_8239F264:
	// extsb r31,r30
	r31.s64 = r30.s8;
loc_8239F268:
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8239f278
	if (!ctx.cr6.lt) goto loc_8239F278;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_8239F278:
	// lwz r10,84(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 84);
	// add r11,r28,r19
	ctx.r11.u64 = r28.u64 + r19.u64;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8239f2e0
	if (!ctx.cr6.eq) goto loc_8239F2E0;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8239f2e0
	if (!ctx.cr6.lt) goto loc_8239F2E0;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r10,r31,r14
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r14.s32);
	// lbzx r7,r11,r15
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// not r4,r6
	ctx.r4.u64 = ~ctx.r6.u64;
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// xor r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// sthx r9,r3,r18
	REX_STORE_U16(ctx.r3.u32 + r18.u32, ctx.r9.u16);
	// bne cr6,0x8239f2d0
	if (!ctx.cr6.eq) goto loc_8239F2D0;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8239e8c0
	goto loc_8239E8C0;
loc_8239F2D0:
	// stw r22,1944(r26)
	REX_STORE_U32(r26.u32 + 1944, r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
loc_8239F2E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823EB0A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823EB0B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x823eb0d0
	goto loc_823EB0D0;
loc_823EB0C4:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb0f4
	if (ctx.cr6.eq) goto loc_823EB0F4;
loc_823EB0D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ea028
	ctx.lr = 0x823EB0E8;
	sub_823EA028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eb0c4
	if (!ctx.cr0.lt) goto loc_823EB0C4;
	// b 0x823eb0f8
	goto loc_823EB0F8;
loc_823EB0F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EC658) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ECE18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823ECE20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x823ece64
	if (ctx.cr6.eq) goto loc_823ECE64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ECE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECE64:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ecea4
	if (ctx.cr6.lt) goto loc_823ECEA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,123
	ctx.r10.s64 = 123;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ECE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_823ECEA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eced4
	if (ctx.cr6.eq) goto loc_823ECED4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ECED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECED4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823ECEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r8,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EF760) {
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
	ctx.lr = 0x823EF768;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,1564(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1564);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// bge cr6,0x823ef7f4
	if (!ctx.cr6.lt) goto loc_823EF7F4;
	// subfic r30,r31,8
	ctx.xer.ca = r31.u32 <= 8;
	r30.u64 = static_cast<uint64_t>(8) - r31.u64;
	// add r11,r31,r4
	ctx.r11.u64 = r31.u64 + ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x823f2248
	ctx.lr = 0x823EF794;
	sub_823F2248(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
	// stb r11,1564(r28)
	REX_STORE_U8(r28.u32 + 1564, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ec4c8
	ctx.lr = 0x823EF7B0;
	sub_823EC4C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ef7f4
	if (ctx.cr0.eq) goto loc_823EF7F4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bge cr6,0x823ef7e4
	if (!ctx.cr6.lt) goto loc_823EF7E4;
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ec4c8
	ctx.lr = 0x823EF7D0;
	sub_823EC4C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823ef7e4
	if (ctx.cr0.eq) goto loc_823EF7E4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15156
	ctx.r4.s64 = ctx.r11.s64 + 15156;
	// b 0x823ef7ec
	goto loc_823EF7EC;
loc_823EF7E4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15116
	ctx.r4.s64 = ctx.r11.s64 + 15116;
loc_823EF7EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ec3e0
	ctx.lr = 0x823EF7F4;
	sub_823EC3E0(ctx, base);
loc_823EF7F4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r28,1548
	r31.s64 = r28.s64 + 1548;
	// addi r30,r11,14992
	r30.s64 = ctx.r11.s64 + 14992;
loc_823EF800:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f2248
	ctx.lr = 0x823EF810;
	sub_823F2248(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f8f38
	ctx.lr = 0x823EF81C;
	sub_823F8F38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ec5b8
	ctx.lr = 0x823EF828;
	sub_823EC5B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f83b0
	ctx.lr = 0x823EF838;
	sub_823F83B0(ctx, base);
	// addi r10,r30,-48
	ctx.r10.s64 = r30.s64 + -48;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
loc_823EF844:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823ef864
	if (!ctx.cr0.eq) goto loc_823EF864;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823ef844
	if (!ctx.cr6.eq) goto loc_823EF844;
loc_823EF864:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823ef880
	if (!ctx.cr0.eq) goto loc_823EF880;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f90a0
	ctx.lr = 0x823EF87C;
	sub_823F90A0(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EF880:
	// addi r10,r30,-24
	ctx.r10.s64 = r30.s64 + -24;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF88C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef8ac
	if (!ctx.cr0.eq) goto loc_823EF8AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef88c
	if (!ctx.cr6.eq) goto loc_823EF88C;
loc_823EF8AC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef8c8
	if (!ctx.cr0.eq) goto loc_823EF8C8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f9368
	ctx.lr = 0x823EF8C4;
	sub_823F9368(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EF8C8:
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF8D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef8f4
	if (!ctx.cr0.eq) goto loc_823EF8F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef8d4
	if (!ctx.cr6.eq) goto loc_823EF8D4;
loc_823EF8F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef910
	if (!ctx.cr0.eq) goto loc_823EF910;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f9520
	ctx.lr = 0x823EF90C;
	sub_823F9520(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EF910:
	// addi r10,r30,-40
	ctx.r10.s64 = r30.s64 + -40;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF91C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef93c
	if (!ctx.cr0.eq) goto loc_823EF93C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef91c
	if (!ctx.cr6.eq) goto loc_823EF91C;
loc_823EF93C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823efa24
	if (ctx.cr0.eq) goto loc_823EFA24;
	// addi r10,r30,-16
	ctx.r10.s64 = r30.s64 + -16;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF950:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef970
	if (!ctx.cr0.eq) goto loc_823EF970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef950
	if (!ctx.cr6.eq) goto loc_823EF950;
loc_823EF970:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef98c
	if (!ctx.cr0.eq) goto loc_823EF98C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f95a0
	ctx.lr = 0x823EF988;
	sub_823F95A0(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EF98C:
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF998:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef9b8
	if (!ctx.cr0.eq) goto loc_823EF9B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef998
	if (!ctx.cr6.eq) goto loc_823EF998;
loc_823EF9B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ef9d4
	if (!ctx.cr0.eq) goto loc_823EF9D4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f9740
	ctx.lr = 0x823EF9D0;
	sub_823F9740(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EF9D4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_823EF9E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823efa00
	if (!ctx.cr0.eq) goto loc_823EFA00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ef9e0
	if (!ctx.cr6.eq) goto loc_823EF9E0;
loc_823EFA00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne 0x823efa1c
	if (!ctx.cr0.eq) goto loc_823EFA1C;
	// bl 0x823f98b0
	ctx.lr = 0x823EFA18;
	sub_823F98B0(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EFA1C:
	// bl 0x823f9ae8
	ctx.lr = 0x823EFA20;
	sub_823F9AE8(ctx, base);
	// b 0x823ef800
	goto loc_823EF800;
loc_823EFA24:
	// lwz r11,1368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823efa3c
	if (!ctx.cr0.eq) goto loc_823EFA3C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15088
	ctx.r4.s64 = ctx.r11.s64 + 15088;
	// b 0x823efa58
	goto loc_823EFA58;
loc_823EFA3C:
	// lbz r10,1558(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823efa60
	if (!ctx.cr6.eq) goto loc_823EFA60;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823efa60
	if (!ctx.cr0.eq) goto loc_823EFA60;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15060
	ctx.r4.s64 = ctx.r11.s64 + 15060;
loc_823EFA58:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ec3e0
	ctx.lr = 0x823EFA60;
	sub_823EC3E0(ctx, base);
loc_823EFA60:
	// lwz r11,1368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1368);
	// stw r29,1532(r28)
	REX_STORE_U32(r28.u32 + 1532, r29.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,1368(r28)
	REX_STORE_U32(r28.u32 + 1368, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F9AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F9AF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r3,1548
	ctx.r4.s64 = ctx.r3.s64 + 1548;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823f84b0
	ctx.lr = 0x823F9B08;
	sub_823F84B0(ctx, base);
	// lbz r11,1548(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1548);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f9b2c
	if (!ctx.cr0.eq) goto loc_823F9B2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3632
	ctx.r4.s64 = ctx.r11.s64 + 3632;
	// bl 0x823ec430
	ctx.lr = 0x823F9B24;
	sub_823EC430(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f9b4c
	if (ctx.cr6.eq) goto loc_823F9B4C;
loc_823F9B2C:
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f9b40
	if (ctx.cr0.eq) goto loc_823F9B40;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r11.u32);
loc_823F9B40:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F9B4C;
	sub_823F8FA8(ctx, base);
loc_823F9B4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823FA790) {
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
	// lwz r31,428(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823fa7d0
	if (ctx.cr6.eq) goto loc_823FA7D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FA7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa818
	goto loc_823FA818;
loc_823FA7D0:
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fa804
	if (ctx.cr6.eq) goto loc_823FA804;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-23064
	ctx.r10.s64 = ctx.r11.s64 + -23064;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x823fa238
	ctx.lr = 0x823FA7F4;
	sub_823FA238(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// b 0x823fa810
	goto loc_823FA810;
loc_823FA804:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r10,r11,-23232
	ctx.r10.s64 = ctx.r11.s64 + -23232;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_823FA810:
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_823FA818:
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

DEFINE_REX_FUNC(sub_823FD6B8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FD6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,-11312
	ctx.r8.s64 = ctx.r9.s64 + -11312;
	// li r30,0
	r30.s64 = 0;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r30.u32);
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r30.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r30.u32);
	// stw r30,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r30.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FD734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fd774
	if (!ctx.cr6.gt) goto loc_823FD774;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_823FD74C:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823FD758:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fd758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FD758;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fd74c
	if (ctx.cr6.lt) goto loc_823FD74C;
loc_823FD774:
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

DEFINE_REX_FUNC(sub_823FF628) {
	REX_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF900) {
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
	ctx.lr = 0x823FF908;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,456(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r29,r30,r5
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,16(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r25,24(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r24,28(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r30,r4,r5
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x823ffa4c
	if (ctx.cr6.eq) goto loc_823FFA4C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823FF968:
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r23,r5,2
	r23.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r4,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r28,r23,r24
	r28.u64 = REX_LOAD_U32(r23.u32 + r24.u32);
	// lwzx r6,r4,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	// add r22,r31,r5
	r22.u64 = r31.u64 + ctx.r5.u64;
	// lwzx r4,r23,r26
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + r26.u32);
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r28,r31,r4
	r28.u64 = r31.u64 + ctx.r4.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r23,r22,r11
	r23.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r31.u8);
	// lbzx r31,r28,r11
	r31.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// stb r31,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// lbzu r31,1(r8)
	ea = 1 + ctx.r8.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r23,r31,r6
	r23.u64 = r31.u64 + ctx.r6.u64;
	// stbu r28,3(r10)
	ea = 3 + ctx.r10.u32;
	REX_STORE_U8(ea, r28.u8);
	ctx.r10.u32 = ea;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// lbzx r28,r23,r11
	r28.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r28,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r28.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r31,0(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r28,r31,r5
	r28.u64 = r31.u64 + ctx.r5.u64;
	// add r23,r31,r6
	r23.u64 = r31.u64 + ctx.r6.u64;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// stb r28,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r28.u8);
	// lbzx r28,r23,r11
	r28.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// stb r28,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, r28.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r31,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r31.u8);
	// lbzu r31,1(r7)
	ea = 1 + ctx.r7.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// lbzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// stbu r5,3(r9)
	ea = 3 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// lbzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r6,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bdnz 0x823ff968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FF968;
loc_823FFA4C:
	// lwz r6,112(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ffad4
	if (ctx.cr6.eq) goto loc_823FFAD4;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r31,r5,2
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r4,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r6,r4,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	// lwzx r3,r31,r24
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r24.u32);
	// add r30,r8,r5
	r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// stb r8,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r3,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r11,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_823FFAD4:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82406E80) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82406bc0
	ctx.lr = 0x82406EA4;
	sub_82406BC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82406bc0
	ctx.lr = 0x82406EB4;
	sub_82406BC0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82406EBC:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v63,v63,17
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xEE));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x82406ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82406EBC;
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

DEFINE_REX_FUNC(sub_824098C8) {
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
	ctx.lr = 0x824098D0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82409910
	if (!ctx.cr6.eq) goto loc_82409910;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
loc_82409910:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r17,r10,r11
	r17.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r25,r6,r9
	r25.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// bne cr6,0x82409944
	if (!ctx.cr6.eq) goto loc_82409944;
	// stw r14,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_82409944:
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// rlwinm r26,r11,0,0,26
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x8240998c
	if (!ctx.cr6.eq) goto loc_8240998C;
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x82409978;
	sub_823CD118(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x824092c8
	ctx.lr = 0x82409988;
	sub_824092C8(ctx, base);
	// b 0x82409990
	goto loc_82409990;
loc_8240998C:
	// mr r19,r27
	r19.u64 = r27.u64;
loc_82409990:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r15,r11,r7
	r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r16,r11,r10
	r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r30,r29,6
	r30.s64 = r29.s64 + 6;
	// cmplw cr6,r15,r17
	ctx.cr6.compare<uint32_t>(r15.u32, r17.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bgt cr6,0x824099f0
	if (ctx.cr6.gt) goto loc_824099F0;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_824099F0:
	// slw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82409c7c
	if (ctx.cr6.eq) goto loc_82409C7C;
	// rlwinm r11,r26,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82409A08:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r14,r11
	ctx.r11.u64 = r14.u64 + ctx.r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r27,r11,2,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r26,r6,r9
	r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r31,r11,29,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,30,30,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r24,r31,r30
	r24.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// rlwinm r23,r11,4,27,27
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r22,r11,28,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// rlwinm r11,r9,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r11,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r10,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 + r14.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r7,r3
	r21.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r10,r4,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + r18.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409AE4;
	sub_822D4FA0(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(r15.s32, r16.s32, ctx.xer);
	// bge cr6,0x82409bb4
	if (!ctx.cr6.lt) goto loc_82409BB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
loc_82409AF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r6,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r29.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + r21.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + r18.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409BA0;
	sub_822D4FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(r31.s32, r16.s32, ctx.xer);
	// blt cr6,0x82409af8
	if (ctx.cr6.lt) goto loc_82409AF8;
	// lwz r17,92(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82409BB4:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// bge cr6,0x82409c68
	if (!ctx.cr6.lt) goto loc_82409C68;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r6,r31,r17
	ctx.r6.u64 = r17.u64 - r31.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r5,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r29.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82409C68;
	sub_822D4FA0(ctx, base);
loc_82409C68:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82409a08
	if (ctx.cr6.lt) goto loc_82409A08;
	// lwz r27,332(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_82409C7C:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// bne cr6,0x82409c90
	if (!ctx.cr6.eq) goto loc_82409C90;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823cd250
	ctx.lr = 0x82409C90;
	sub_823CD250(ctx, base);
loc_82409C90:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8241B200) {
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
	// bge cr6,0x8241b2a4
	if (!ctx.cr6.lt) goto loc_8241B2A4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
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
loc_8241B25C:
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
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
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241b25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B25C;
loc_8241B2A4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b2c0
	if (ctx.cr6.eq) goto loc_8241B2C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B2C0;
	sub_82413D40(ctx, base);
loc_8241B2C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b2dc
	if (ctx.cr6.eq) goto loc_8241B2DC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B2DC;
	sub_82414110(ctx, base);
loc_8241B2DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241CEA8) {
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
	ctx.lr = 0x8241CEB0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// add r25,r11,r5
	r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x8241cf28
	if (!ctx.cr6.eq) goto loc_8241CF28;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8241cf00
	if (!ctx.cr6.gt) goto loc_8241CF00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8241CF00:
	// bl 0x822c80d0
	ctx.lr = 0x8241CF04;
	sub_822C80D0(ctx, base);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241d45c
	if (ctx.cr0.eq) goto loc_8241D45C;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822d5870
	ctx.lr = 0x8241CF28;
	sub_822D5870(ctx, base);
loc_8241CF28:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r21,0
	r21.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// subf r8,r10,r27
	ctx.r8.u64 = r27.u64 - ctx.r10.u64;
	// lwz r10,248(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241cfa4
	if (!ctx.cr6.eq) goto loc_8241CFA4;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241cf84
	if (!ctx.cr6.gt) goto loc_8241CF84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8241CF84:
	// bl 0x822c80d0
	ctx.lr = 0x8241CF88;
	sub_822C80D0(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241d45c
	if (ctx.cr6.eq) goto loc_8241D45C;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_8241CFA4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241d164
	if (!ctx.cr6.eq) goto loc_8241D164;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r24,r27,0,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241cfd4
	if (!ctx.cr6.lt) goto loc_8241CFD4;
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8241cfec
	if (ctx.cr6.gt) goto loc_8241CFEC;
loc_8241CFD4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8241d068
	if (!ctx.cr6.gt) goto loc_8241D068;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241d068
	if (!ctx.cr6.lt) goto loc_8241D068;
loc_8241CFEC:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8241d124
	if (!ctx.cr6.lt) goto loc_8241D124;
loc_8241D034:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241D048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241d034
	if (ctx.cr6.lt) goto loc_8241D034;
	// b 0x8241d124
	goto loc_8241D124;
loc_8241D068:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241d0c4
	if (!ctx.cr6.lt) goto loc_8241D0C4;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8241d0c4
	if (!ctx.cr6.gt) goto loc_8241D0C4;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8241D0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241D0C4:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241d124
	if (!ctx.cr6.gt) goto loc_8241D124;
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241d124
	if (!ctx.cr6.lt) goto loc_8241D124;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8241D124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241D124:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241D130:
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241d14c
	if (ctx.cr6.lt) goto loc_8241D14C;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241d15c
	if (ctx.cr6.lt) goto loc_8241D15C;
loc_8241D14C:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8241D15C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8241d130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241D130;
loc_8241D164:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241d180
	if (ctx.cr6.eq) goto loc_8241D180;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413040
	ctx.lr = 0x8241D17C;
	sub_82413040(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8241D180:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241d19c
	if (ctx.cr6.eq) goto loc_8241D19C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x8241D198;
	sub_82413DD0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8241D19C:
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r9,r8,r27
	ctx.r9.u64 = r27.u64 - ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241d214
	if (!ctx.cr6.lt) goto loc_8241D214;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8241D1C8:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,0(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r5,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r9,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 12);
	// addi r23,r23,16
	r23.s64 = r23.s64 + 16;
	// stw r9,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// bne 0x8241d1c8
	if (!ctx.cr0.eq) goto loc_8241D1C8;
loc_8241D214:
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8241d45c
	if (!ctx.cr6.eq) goto loc_8241D45C;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8241d3f8
	if (!ctx.cr6.lt) goto loc_8241D3F8;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// rlwinm r27,r27,0,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
loc_8241D28C:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - r29.u64;
	// subf r3,r27,r10
	ctx.r3.u64 = ctx.r10.u64 - r27.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x8241d328
	if (!ctx.cr6.lt) goto loc_8241D328;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241d328
	if (ctx.cr6.eq) goto loc_8241D328;
loc_8241D2B0:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x8241d328
	if (!ctx.cr6.lt) goto loc_8241D328;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// subfic r11,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r7.u64;
loc_8241D2D4:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r5,r30
	r25.u64 = ctx.r5.u64 + r30.u64;
	// add r24,r6,r30
	r24.u64 = ctx.r6.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// stwx r6,r5,r30
	REX_STORE_U32(ctx.r5.u32 + r30.u32, ctx.r6.u32);
	// lwz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 4);
	// stw r6,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 8);
	// stw r6,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r6.u32);
	// lwz r6,12(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 12);
	// stw r6,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r6.u32);
	// bne 0x8241d2d4
	if (!ctx.cr0.eq) goto loc_8241D2D4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8241d2b0
	if (ctx.cr6.lt) goto loc_8241D2B0;
loc_8241D328:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8241d3a8
	if (!ctx.cr6.lt) goto loc_8241D3A8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8241D340:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8241D354:
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r6,r30
	ctx.r3.u64 = ctx.r6.u64 + r30.u64;
	// add r25,r7,r30
	r25.u64 = ctx.r7.u64 + r30.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r7,r30
	REX_STORE_U32(ctx.r7.u32 + r30.u32, ctx.r6.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r7.u32);
	// bne 0x8241d354
	if (!ctx.cr0.eq) goto loc_8241D354;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x8241d340
	if (ctx.cr6.lt) goto loc_8241D340;
loc_8241D3A8:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241d3c4
	if (!ctx.cr6.eq) goto loc_8241D3C4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241d3c8
	if (ctx.cr6.eq) goto loc_8241D3C8;
loc_8241D3C4:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_8241D3C8:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241D3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241d28c
	if (ctx.cr6.lt) goto loc_8241D28C;
loc_8241D3F8:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241d444
	if (!ctx.cr6.lt) goto loc_8241D444;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241d444
	if (!ctx.cr6.eq) goto loc_8241D444;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241d444
	if (!ctx.cr6.eq) goto loc_8241D444;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r21,4(r26)
	REX_STORE_U32(r26.u32 + 4, r21.u32);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// b 0x8241d458
	goto loc_8241D458;
loc_8241D444:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x822c80a8
	ctx.lr = 0x8241D44C;
	sub_822C80A8(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_8241D458:
	// stw r21,4(r26)
	REX_STORE_U32(r26.u32 + 4, r21.u32);
loc_8241D45C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82435DA8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82435E80) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82435d60
	sub_82435D60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824364F8) {
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
	ctx.lr = 0x82436500;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82436540
	if (!ctx.cr6.eq) goto loc_82436540;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824366b8
	if (ctx.cr6.eq) goto loc_824366B8;
loc_82436540:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82436558
	if (!ctx.cr6.eq) goto loc_82436558;
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436558
	if (ctx.cr0.eq) goto loc_82436558;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824366b8
	if (ctx.cr6.eq) goto loc_824366B8;
loc_82436558:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824365d4
	if (ctx.cr6.eq) goto loc_824365D4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824354d8
	ctx.lr = 0x8243656C;
	sub_824354D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824366b8
	if (ctx.cr0.lt) goto loc_824366B8;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82436578:
	// lwz r3,184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 184);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824366b8
	if (ctx.cr0.lt) goto loc_824366B8;
	// rlwinm. r25,r26,0,26,26
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82436650
	if (!ctx.cr0.eq) goto loc_82436650;
	// lwz r3,176(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824365cc
	if (ctx.cr6.eq) goto loc_824365CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824365C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824365CC:
	// lwz r29,72(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 72);
	// b 0x82436628
	goto loc_82436628;
loc_824365D4:
	// lis r28,4919
	r28.s64 = 322371584;
	// ori r28,r28,61441
	r28.u64 = r28.u64 | 61441;
	// b 0x82436578
	goto loc_82436578;
loc_824365E0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x824366b8
	if (ctx.cr6.lt) goto loc_824366B8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82436600
	if (ctx.cr6.eq) goto loc_82436600;
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82436604
	goto loc_82436604;
loc_82436600:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82436604:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82436628:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824365e0
	if (!ctx.cr6.eq) goto loc_824365E0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x824366b8
	if (ctx.cr6.lt) goto loc_824366B8;
	// lwz r3,92(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82436650
	if (ctx.cr0.eq) goto loc_82436650;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82442988
	ctx.lr = 0x8243664C;
	sub_82442988(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82436650:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x824366b8
	if (ctx.cr6.lt) goto loc_824366B8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824366a0
	if (!ctx.cr6.eq) goto loc_824366A0;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
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
	ctx.lr = 0x8243667C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824366b8
	if (ctx.cr0.lt) goto loc_824366B8;
	// cntlzw r11,r25
	ctx.r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x824355a8
	ctx.lr = 0x8243669C;
	sub_824355A8(ctx, base);
	// b 0x824366b8
	goto loc_824366B8;
loc_824366A0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82435bd8
	ctx.lr = 0x824366B4;
	sub_82435BD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824366B8:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824366D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8243BF48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r8,r10,6
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8243bf74
	if (ctx.cr6.eq) goto loc_8243BF74;
	// rlwimi r5,r10,0,0,5
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000000) | (ctx.r5.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
loc_8243BF74:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r10,8,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x7;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8243bf90
	if (ctx.cr6.eq) goto loc_8243BF90;
	// rlwimi r10,r6,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8243BF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D558) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82440208
	sub_82440208(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243D668) {
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
	ctx.lr = 0x8243D670;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r28,14(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8242b7d0
	ctx.lr = 0x8243D6A0;
	sub_8242B7D0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x8243d758
	if (ctx.cr0.lt) goto loc_8243D758;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8243d6c8
	if (!ctx.cr6.eq) goto loc_8243D6C8;
	// lhz r27,18(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
loc_8243D6C8:
	// bl 0x82451d48
	ctx.lr = 0x8243D6CC;
	sub_82451D48(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8243a300
	ctx.lr = 0x8243D6D8;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243d74c
	if (!ctx.cr6.eq) goto loc_8243D74C;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// bne cr6,0x8243d714
	if (!ctx.cr6.eq) goto loc_8243D714;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(r27.u32, 32, ctx.xer);
	// bne cr6,0x8243d6fc
	if (!ctx.cr6.eq) goto loc_8243D6FC;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D6FC:
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(r27.u32, 24, ctx.xer);
	// bne cr6,0x8243d70c
	if (!ctx.cr6.eq) goto loc_8243D70C;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D70C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D714:
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(r28.u32, 24, ctx.xer);
	// bne cr6,0x8243d734
	if (!ctx.cr6.eq) goto loc_8243D734;
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(r27.u32, 24, ctx.xer);
	// bne cr6,0x8243d72c
	if (!ctx.cr6.eq) goto loc_8243D72C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D72C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D734:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bne cr6,0x8243d744
	if (!ctx.cr6.eq) goto loc_8243D744;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D744:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243d750
	goto loc_8243D750;
loc_8243D74C:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8243D750:
	// bl 0x82451cc0
	ctx.lr = 0x8243D754;
	sub_82451CC0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_8243D758:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824411D0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8245cd90
	ctx.lr = 0x824411E4;
	sub_8245CD90(ctx, base);
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

DEFINE_REX_FUNC(sub_82441860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82441868;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
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
	ctx.lr = 0x8244188C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
loc_82441894:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824418b8
	if (!ctx.cr6.eq) goto loc_824418B8;
	// stwcx. r29,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82441894
	if (!ctx.cr0.eq) goto loc_82441894;
	// b 0x824418c0
	goto loc_824418C0;
loc_824418B8:
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_824418C0:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82441930
	if (ctx.cr6.lt) goto loc_82441930;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244190c
	if (ctx.cr6.eq) goto loc_8244190C;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x824412c0
	ctx.lr = 0x824418E0;
	sub_824412C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,-12
	ctx.r3.s64 = r31.s64 + -12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne 0x82441904
	if (!ctx.cr0.eq) goto loc_82441904;
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244190c
	goto loc_8244190C;
loc_82441904:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82441598
	ctx.lr = 0x8244190C;
	sub_82441598(ctx, base);
loc_8244190C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441930
	if (ctx.cr6.eq) goto loc_82441930;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441930:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82445988) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lhz r8,110(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// lhz r7,110(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// stw r10,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x824459dc
	if (!ctx.cr6.gt) goto loc_824459DC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_824459DC:
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lhz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r11,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244B550) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// beq cr6,0x8244b580
	if (ctx.cr6.eq) goto loc_8244B580;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,17136
	ctx.r11.s64 = ctx.r11.s64 + 17136;
	// beq cr6,0x8244b574
	if (ctx.cr6.eq) goto loc_8244B574;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r11,8768
	ctx.r8.s64 = ctx.r11.s64 + 8768;
	// b 0x8244b588
	goto loc_8244B588;
loc_8244B574:
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r11,6104
	ctx.r8.s64 = ctx.r11.s64 + 6104;
	// b 0x8244b588
	goto loc_8244B588;
loc_8244B580:
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r8,r11,17136
	ctx.r8.s64 = ctx.r11.s64 + 17136;
loc_8244B588:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8244b5e8
	if (ctx.cr6.eq) goto loc_8244B5E8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8244B598:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8244b5b0
	if (!ctx.cr6.eq) goto loc_8244B5B0;
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8244b5c8
	if (ctx.cr6.eq) goto loc_8244B5C8;
loc_8244B5B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8244b598
	if (ctx.cr6.lt) goto loc_8244B598;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8244B5C8:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244b5e8
	if (ctx.cr6.eq) goto loc_8244B5E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8244B5E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82450290) {
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
	ctx.lr = 0x82450298;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,24(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r5,28(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r31,36(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f30,21052(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21052);
	f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// beq cr6,0x8245035c
	if (ctx.cr6.eq) goto loc_8245035C;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 2);
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 * f30.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8245035C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// bge cr6,0x824503f4
	if (!ctx.cr6.lt) goto loc_824503F4;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
loc_8245038C:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x824503f0
	if (!ctx.cr6.lt) goto loc_824503F0;
	// lfs f11,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lfsux f13,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// add r31,r6,r31
	r31.u64 = ctx.r6.u64 + r31.u64;
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmadds f6,f8,f0,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f5,f7,f0,f11
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f5,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824503e8
	if (ctx.cr6.lt) goto loc_824503E8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_824503E8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x8245038c
	if (ctx.cr6.lt) goto loc_8245038C;
loc_824503F0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_824503F4:
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x8244fe88
	ctx.lr = 0x82450414;
	sub_8244FE88(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// blt cr6,0x82450430
	if (ctx.cr6.lt) goto loc_82450430;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_82450430:
	// addi r10,r29,-2
	ctx.r10.s64 = r29.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82450440
	if (!ctx.cr6.lt) goto loc_82450440;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82450440:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r29
	ctx.r8.s64 = static_cast<int64_t>(-r29.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r9,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// stw r10,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82450510
	if (!ctx.cr6.lt) goto loc_82450510;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x824504d4
	if (ctx.cr6.lt) goto loc_824504D4;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r29,2
	ctx.r7.s64 = r29.s64 + 2;
	// addi r6,r29,3
	ctx.r6.s64 = r29.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
loc_82450498:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r30
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r3,r30
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82450498
	if (ctx.cr6.lt) goto loc_82450498;
loc_824504D4:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82450510
	if (!ctx.cr6.lt) goto loc_82450510;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82450504:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82450504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450504;
loc_82450510:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x824505ec
	if (ctx.cr6.lt) goto loc_824505EC;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + r30.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,2
	ctx.r7.s64 = r29.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r29,3
	ctx.r6.s64 = r29.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
loc_82450550:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// lhzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 * f30.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 * f30.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * f30.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f13,f3,f30
	ctx.f13.f64 = double(float(ctx.f3.f64 * f30.f64));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82450550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450550;
loc_824505EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82450640
	if (!ctx.cr6.lt) goto loc_82450640;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82450618:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82450618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450618;
loc_82450640:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8245FD40) {
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
	ctx.lr = 0x8245FD48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,212(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// b 0x8245fe20
	goto loc_8245FE20;
loc_8245FD5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245fd9c
	if (!ctx.cr6.eq) goto loc_8245FD9C;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x8245cef8
	ctx.lr = 0x8245FD80;
	sub_8245CEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245fce0
	ctx.lr = 0x8245FD8C;
	sub_8245FCE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8245fe20
	if (!ctx.cr0.lt) goto loc_8245FE20;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8245fe20
	goto loc_8245FE20;
loc_8245FD9C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8245fe20
	if (!ctx.cr6.eq) goto loc_8245FE20;
	// lwz r31,212(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 212);
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8245fe00
	goto loc_8245FE00;
loc_8245FDB0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8245fdd4
	if (ctx.cr6.eq) goto loc_8245FDD4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8245fe00
	if (!ctx.cr6.eq) goto loc_8245FE00;
loc_8245FDD4:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x8245cef8
	ctx.lr = 0x8245FDDC;
	sub_8245CEF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8245fe0c
	if (ctx.cr6.eq) goto loc_8245FE0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8245fce0
	ctx.lr = 0x8245FDF4;
	sub_8245FCE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8245fe00
	if (!ctx.cr0.lt) goto loc_8245FE00;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8245FE00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8245fdb0
	if (!ctx.cr6.eq) goto loc_8245FDB0;
	// b 0x8245fe28
	goto loc_8245FE28;
loc_8245FE0C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8245fe20
	if (ctx.cr6.eq) goto loc_8245FE20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x8245FE20;
	sub_82473600(ctx, base);
loc_8245FE20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8245fd5c
	if (!ctx.cr6.eq) goto loc_8245FD5C;
loc_8245FE28:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824639F0) {
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
	ctx.lr = 0x824639F8;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f1c
	ctx.lr = 0x82463A00;
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
	// bl 0x82463940
	ctx.lr = 0x82463A20;
	sub_82463940(ctx, base);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r10,r11,38528
	ctx.r10.u64 = ctx.r11.u64 | 38528;
	// cmpw cr6,r16,r10
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82463a48
	if (!ctx.cr6.gt) goto loc_82463A48;
loc_82463A30:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x82463A44;
	// b 0x822d4ea8
	return;
loc_82463A48:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82463a30
	if (ctx.cr6.gt) goto loc_82463A30;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82463a30
	if (ctx.cr6.gt) goto loc_82463A30;
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
	// bl 0x82460ed8
	ctx.lr = 0x82463A84;
	sub_82460ED8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82463aa8
	if (!ctx.cr6.eq) goto loc_82463AA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x82463AA4;
	// b 0x822d4ea8
	return;
loc_82463AA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ed8
	ctx.lr = 0x82463AB0;
	sub_82460ED8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82463f40
	if (ctx.cr6.eq) goto loc_82463F40;
	// rlwinm r3,r23,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82460ed8
	ctx.lr = 0x82463AC4;
	sub_82460ED8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82463f40
	if (ctx.cr6.eq) goto loc_82463F40;
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
	// ble cr6,0x82463bac
	if (!ctx.cr6.gt) goto loc_82463BAC;
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
loc_82463B20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82463b90
	if (ctx.cr6.eq) goto loc_82463B90;
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
	ctx.lr = 0x82463B48;
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
	ctx.lr = 0x82463B70;
	sub_822D4C88(ctx, base);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = ctx.f1.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x822d4c88
	ctx.lr = 0x82463B7C;
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
	// b 0x82463b9c
	goto loc_82463B9C;
loc_82463B90:
	// fdiv f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 / f30.f64;
	// stfdx f0,r27,r31
	REX_STORE_U64(r27.u32 + r31.u32, ctx.f0.u64);
	// stfd f24,0(r31)
	REX_STORE_U64(r31.u32 + 0, f24.u64);
loc_82463B9C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82463b20
	if (!ctx.cr0.eq) goto loc_82463B20;
loc_82463BAC:
	// fmr f28,f24
	ctx.fpscr.disableFlushMode();
	f28.f64 = f24.f64;
	// neg r22,r24
	r22.s64 = static_cast<int64_t>(-r24.u64);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82463ca0
	if (!ctx.cr6.gt) goto loc_82463CA0;
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
loc_82463BFC:
	// stfd f24,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, f24.u64);
	// cmpw cr6,r20,r27
	ctx.cr6.compare<int32_t>(r20.s32, r27.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bgt cr6,0x82463c10
	if (ctx.cr6.gt) goto loc_82463C10;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82463C10:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// blt cr6,0x82463c20
	if (ctx.cr6.lt) goto loc_82463C20;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82463C20:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82463c58
	if (!ctx.cr6.lt) goto loc_82463C58;
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
	// b 0x82463c10
	goto loc_82463C10;
loc_82463C58:
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
	ctx.lr = 0x82463C78;
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
	// bne 0x82463bfc
	if (!ctx.cr0.eq) goto loc_82463BFC;
loc_82463CA0:
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
	ctx.lr = 0x82463CB8;
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
	ctx.lr = 0x82463CCC;
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
	// blt cr6,0x82463d64
	if (ctx.cr6.lt) goto loc_82463D64;
	// fdiv f0,f31,f13
	ctx.f0.f64 = f31.f64 / ctx.f13.f64;
	// addi r9,r23,-3
	ctx.r9.s64 = r23.s64 + -3;
	// addi r11,r18,-8
	ctx.r11.s64 = r18.s64 + -8;
loc_82463D08:
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
	// blt cr6,0x82463d08
	if (ctx.cr6.lt) goto loc_82463D08;
loc_82463D64:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// bge cr6,0x82463d9c
	if (!ctx.cr6.lt) goto loc_82463D9C;
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
loc_82463D84:
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
	// bdnz 0x82463d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82463D84;
loc_82463D9C:
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
	// ble cr6,0x82463dcc
	if (!ctx.cr6.gt) goto loc_82463DCC;
	// fmr f0,f23
	ctx.f0.f64 = f23.f64;
	// b 0x82463dd8
	goto loc_82463DD8;
loc_82463DCC:
	// fmul f0,f23,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f23.f64 * f28.f64;
	// fmadd f12,f0,f12,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, f31.f64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
loc_82463DD8:
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
	ctx.lr = 0x82463E48;
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
	ctx.lr = 0x82463E68;
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
	// bl 0x8247a108
	ctx.lr = 0x82463EAC;
	sub_8247A108(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82463f48
	if (ctx.cr6.lt) goto loc_82463F48;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r3,r25,24
	ctx.r3.s64 = r25.s64 + 24;
	// bl 0x8247a520
	ctx.lr = 0x82463EC8;
	sub_8247A520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82463f48
	if (ctx.cr6.lt) goto loc_82463F48;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r3,r25,44
	ctx.r3.s64 = r25.s64 + 44;
	// bl 0x8247a520
	ctx.lr = 0x82463EE4;
	sub_8247A520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82463f48
	if (ctx.cr6.lt) goto loc_82463F48;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmul f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 * f30.f64;
	// addi r3,r25,64
	ctx.r3.s64 = r25.s64 + 64;
	// bl 0x8247a520
	ctx.lr = 0x82463F00;
	sub_8247A520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82463f48
	if (ctx.cr6.lt) goto loc_82463F48;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmul f1,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 * f26.f64;
	// addi r3,r25,84
	ctx.r3.s64 = r25.s64 + 84;
	// bl 0x8247a520
	ctx.lr = 0x82463F1C;
	sub_8247A520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82463f48
	if (ctx.cr6.lt) goto loc_82463F48;
	// stw r16,152(r25)
	REX_STORE_U32(r25.u32 + 152, r16.u32);
	// mulli r3,r16,28
	ctx.r3.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// bl 0x82460ed8
	ctx.lr = 0x82463F34;
	sub_82460ED8(ctx, base);
	// stw r3,148(r25)
	REX_STORE_U32(r25.u32 + 148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82463f48
	if (!ctx.cr6.eq) goto loc_82463F48;
loc_82463F40:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_82463F48:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82460ee8
	ctx.lr = 0x82463F50;
	sub_82460EE8(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82463f60
	if (ctx.cr6.eq) goto loc_82463F60;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82460ee8
	ctx.lr = 0x82463F60;
	sub_82460EE8(ctx, base);
loc_82463F60:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82463f70
	if (ctx.cr6.eq) goto loc_82463F70;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82460ee8
	ctx.lr = 0x82463F70;
	sub_82460EE8(ctx, base);
loc_82463F70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x82463F80;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8247CD90) {
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
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,-8648
	ctx.r3.s64 = ctx.r10.s64 + -8648;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8247ccc8
	ctx.lr = 0x8247CDE0;
	sub_8247CCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247D9AC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,88(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x8247d9e4
	goto loc_8247D9E4;
loc_8247D9E4:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247d9f8
	if (ctx.cr6.eq) goto loc_8247D9F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dcd40
	ctx.lr = 0x8247D9F8;
	sub_822DCD40(ctx, base);
loc_8247D9F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822dbb00
	ctx.lr = 0x8247DA00;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247F28C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x822e5ce0
	ctx.lr = 0x8247F2AC;
	sub_822E5CE0(ctx, base);
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

DEFINE_REX_FUNC(sub_8247FE74) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
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
	// lwz r30,164(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x8247feac
	goto loc_8247FEAC;
loc_8247FEAC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247ff04
	if (ctx.cr6.eq) goto loc_8247FF04;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247fefc
	if (ctx.cr6.eq) goto loc_8247FEFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8247FEFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e5ce0
	ctx.lr = 0x8247FF04;
	sub_822E5CE0(ctx, base);
loc_8247FF04:
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

DEFINE_REX_FUNC(sub_82489E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82489E60;
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r11,2208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2208));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,15984
	r30.s64 = ctx.r11.s64 + 15984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82487190
	ctx.lr = 0x82489E80;
	sub_82487190(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r28,r31,22432
	r28.s64 = r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,5108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 5108);
	// bl 0x8248a7b8
	ctx.lr = 0x82489E94;
	sub_8248A7B8(ctx, base);
	// lhz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 52);
	// addi r29,r30,1408
	r29.s64 = r30.s64 + 1408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x824843d0
	ctx.lr = 0x82489EB8;
	sub_824843D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82489f68
	if (!ctx.cr6.eq) goto loc_82489F68;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824867a0
	ctx.lr = 0x82489EE0;
	sub_824867A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82489f68
	if (!ctx.cr6.eq) goto loc_82489F68;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82489f50
	if (ctx.cr6.eq) goto loc_82489F50;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r30,1368(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 1368);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r29.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r30,r3
	ctx.r10.u64 = r30.u64 + ctx.r3.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235fc08
	ctx.lr = 0x82489F50;
	sub_8235FC08(ctx, base);
loc_82489F50:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248ab00
	ctx.lr = 0x82489F64;
	sub_8248AB00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82489F68:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82495D30) {
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
	// lwz r11,14840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14840);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,3428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82495d70
	if (ctx.cr6.eq) goto loc_82495D70;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82495d78
	goto loc_82495D78;
loc_82495D70:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82495D78:
	// stw r11,14844(r31)
	REX_STORE_U32(r31.u32 + 14844, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2964);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,14848(r31)
	REX_STORE_U32(r31.u32 + 14848, ctx.r10.u32);
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// lwz r10,2092(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2092);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,263
	ctx.r5.s64 = ctx.r10.s64 + 263;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// stw r6,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r6.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r11,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r11.u32);
	// lwzx r10,r7,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r10,2096(r31)
	REX_STORE_U32(r31.u32 + 2096, ctx.r10.u32);
	// lwz r8,2108(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 2108);
	// stw r8,2100(r31)
	REX_STORE_U32(r31.u32 + 2100, ctx.r8.u32);
	// stw r9,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r9.u32);
	// bl 0x8237d2c0
	ctx.lr = 0x82495DDC;
	sub_8237D2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82375748
	ctx.lr = 0x82495DE4;
	sub_82375748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82385710
	ctx.lr = 0x82495DF0;
	sub_82385710(ctx, base);
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

DEFINE_REX_FUNC(sub_824A5148) {
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
	ctx.lr = 0x824A5150;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,22264(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r3,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r8,1312(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1312);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r6.u32);
	// lwz r9,22276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22276);
	// stw r9,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// lwz r7,616(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 616);
	// stw r7,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 428);
	// stw r6,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r6.u32);
	// lwz r9,1164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// stw r9,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r9.u32);
	// lwz r7,616(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 616);
	// stw r7,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 428);
	// stw r6,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r6.u32);
	// lwz r9,1164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// stw r9,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r9.u32);
	// lhz r9,50(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 50);
	// lhz r6,52(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 52);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x824a5698
	if (ctx.cr6.eq) goto loc_824A5698;
	// li r15,16
	r15.s64 = 16;
	// li r14,32
	r14.s64 = 32;
	// li r16,48
	r16.s64 = 48;
	// li r17,64
	r17.s64 = 64;
	// li r18,80
	r18.s64 = 80;
	// li r19,96
	r19.s64 = 96;
	// li r20,112
	r20.s64 = 112;
loc_824A5220:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x824a5654
	if (ctx.cr6.eq) goto loc_824A5654;
loc_824A523C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r6,0,21,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// beq cr6,0x824a5624
	if (ctx.cr6.eq) goto loc_824A5624;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r7,388(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 388);
	// rldicl r9,r11,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stw r24,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r22.u32);
	// rlwinm r6,r6,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r24,8
	ctx.r8.s64 = r24.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// clrlwi r21,r9,26
	r21.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// add r28,r10,r7
	r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r10,74(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824a52bc
	if (ctx.cr6.eq) goto loc_824A52BC;
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + r24.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// b 0x824a52c4
	goto loc_824A52C4;
loc_824A52BC:
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
loc_824A52C4:
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// lwz r8,-28604(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -28604);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x824a5424
	if (ctx.cr6.gt) goto loc_824A5424;
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21244
	ctx.r12.s64 = ctx.r12.s64 + 21244;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_824A5324;
	case 1:
		goto loc_824A5378;
	case 2:
		goto loc_824A53CC;
	case 3:
		goto loc_824A53D4;
	case 4:
		goto loc_824A5424;
	case 5:
		goto loc_824A5424;
	case 6:
		goto loc_824A5424;
	case 7:
		goto loc_824A5424;
	case 8:
		goto loc_824A5324;
	case 9:
		goto loc_824A5378;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824A5324:
	// addi r11,r24,128
	ctx.r11.s64 = r24.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x824a5424
	goto loc_824A5424;
loc_824A5378:
	// addi r11,r9,128
	ctx.r11.s64 = ctx.r9.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x824a5424
	goto loc_824A5424;
loc_824A53CC:
	// addi r10,r23,128
	ctx.r10.s64 = r23.s64 + 128;
	// b 0x824a53d8
	goto loc_824A53D8;
loc_824A53D4:
	// addi r10,r22,128
	ctx.r10.s64 = r22.s64 + 128;
loc_824A53D8:
	// dcbt r0,r10
	// dcbt r11,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r10
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_824A5424:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r27,0
	r27.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,-28604(r7)
	REX_STORE_U32(ctx.r7.u32 + -28604, ctx.r11.u32);
loc_824A5440:
	// clrlwi r10,r21,31
	ctx.r10.u64 = r21.u32 & 0x1;
	// rldicl r9,r26,20,44
	ctx.r9.u64 = __builtin_rotateleft64(r26.u64, 20) & 0xFFFFF;
	// srawi r25,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r25.s64 = r27.s32 >> 2;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a5608
	if (ctx.cr6.eq) goto loc_824A5608;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5598
	if (!ctx.cr6.eq) goto loc_824A5598;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r5,r30,168
	ctx.r5.s64 = r30.s64 + 168;
	// lwz r4,444(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824a54b4
	if (ctx.cr6.lt) goto loc_824A54B4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824A54AC;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824a551c
	goto loc_824A551C;
loc_824A54B4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824a5518
	if (!ctx.cr6.gt) goto loc_824A5518;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824A54C0:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r15,r3,24,8,31
	r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r15,r7
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r15,r10,r4
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r14,r15,r5
	r14.u64 = REX_LOAD_U8(r15.u32 + ctx.r5.u32);
	// rotlwi r15,r15,1
	r15.u64 = __builtin_rotateleft32(r15.u32, 1);
	// or r9,r14,r9
	ctx.r9.u64 = r14.u64 | ctx.r9.u64;
	// sthx r8,r15,r31
	REX_STORE_U16(r15.u32 + r31.u32, ctx.r8.u16);
	// bdnz 0x824a54c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A54C0;
	// li r14,32
	r14.s64 = 32;
	// li r15,16
	r15.s64 = 16;
loc_824A5518:
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
loc_824A551C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824a5588
	if (!ctx.cr6.eq) goto loc_824A5588;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r15
	ea = (r31.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r14
	ea = (r31.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r18
	ea = (r31.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r19
	ea = (r31.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r20
	ea = (r31.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824a55dc
	goto loc_824A55DC;
loc_824A5588:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a5c10
	ctx.lr = 0x824A5594;
	sub_824A5C10(ctx, base);
	// b 0x824a55dc
	goto loc_824A55DC;
loc_824A5598:
	// rldicl r10,r26,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r26.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A55DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A55DC:
	// lwz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 960);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x824A5604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_824A5608:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r21,r21,31,1,31
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r26,r26,8,55
	r26.u64 = __builtin_rotateleft64(r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// blt cr6,0x824a5440
	if (ctx.cr6.lt) goto loc_824A5440;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824A5624:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824a523c
	if (ctx.cr6.lt) goto loc_824A523C;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_824A5654:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// blt cr6,0x824a5220
	if (ctx.cr6.lt) goto loc_824A5220;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A5698:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824AEB20) {
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
	ctx.lr = 0x824AEB28;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltish v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// vrlh v11,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, result);
	}
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v0,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v2,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stvx128 v12,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stvx128 v10,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6eb0
	ctx.lr = 0x824AEB8C;
	sub_824A6EB0(ctx, base);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v2,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824aec74
	if (!ctx.cr6.eq) goto loc_824AEC74;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aed6c
	if (!ctx.cr6.gt) goto loc_824AED6C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824AEBE8:
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824aebe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AEBE8;
	// b 0x824aed6c
	goto loc_824AED6C;
loc_824AEC74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aed6c
	if (!ctx.cr6.gt) goto loc_824AED6C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824AEC8C:
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824aec8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AEC8C;
loc_824AED6C:
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
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B85C8) {
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
	ctx.lr = 0x824B85D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lbz r10,668(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r28,r10,30
	r28.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r26.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x824b863c
	if (ctx.cr6.lt) goto loc_824B863C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8634;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b869c
	goto loc_824B869C;
loc_824B863C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x824b8698
	if (!ctx.cr6.gt) goto loc_824B8698;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_824B8648:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r29,r3,24,8,31
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r29,r7
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r29,r10,r4
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r26,r29,r5
	r26.u64 = REX_LOAD_U8(r29.u32 + ctx.r5.u32);
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = r26.u64 | ctx.r9.u64;
	// sthx r8,r29,r31
	REX_STORE_U16(r29.u32 + r31.u32, ctx.r8.u16);
	// bdnz 0x824b8648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8648;
loc_824B8698:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_824B869C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// bne cr6,0x824b870c
	if (!ctx.cr6.eq) goto loc_824B870C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
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
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + r27.u64;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_824B870C:
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B8724;
	sub_824A64E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824D1640) {
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
	// addi r11,r31,7880
	ctx.r11.s64 = r31.s64 + 7880;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1660;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21548
	ctx.r11.s64 = ctx.r11.s64 + 21548;
	// stw r11,7880(r31)
	REX_STORE_U32(r31.u32 + 7880, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1840) {
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
	// addi r11,r31,8200
	ctx.r11.s64 = r31.s64 + 8200;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1860;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21612
	ctx.r11.s64 = ctx.r11.s64 + 21612;
	// stw r11,8200(r31)
	REX_STORE_U32(r31.u32 + 8200, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1A80) {
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
	// addi r11,r31,8564
	ctx.r11.s64 = r31.s64 + 8564;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1AA0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21684
	ctx.r11.s64 = ctx.r11.s64 + 21684;
	// stw r11,8564(r31)
	REX_STORE_U32(r31.u32 + 8564, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1D00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27144
	ctx.r9.s64 = ctx.r11.s64 + -27144;
	// addi r11,r10,-23376
	ctx.r11.s64 = ctx.r10.s64 + -23376;
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

DEFINE_REX_FUNC(sub_824D1E68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-28756
	ctx.r9.s64 = ctx.r11.s64 + -28756;
	// addi r11,r10,-22908
	ctx.r11.s64 = ctx.r10.s64 + -22908;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2048) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26680
	ctx.r9.s64 = ctx.r11.s64 + -26680;
	// addi r11,r10,-22284
	ctx.r11.s64 = ctx.r10.s64 + -22284;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20148
	ctx.r11.s64 = ctx.r11.s64 + 20148;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D2334:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stwu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d2334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2334;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2A28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2C40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14904
	ctx.r3.s64 = ctx.r11.s64 + 14904;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2F08) {
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
	// addi r3,r11,-5780
	ctx.r3.s64 = ctx.r11.s64 + -5780;
	// bl 0x82236a70
	ctx.lr = 0x824D2F20;
	sub_82236A70(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// bl 0x822d5848
	ctx.lr = 0x824D2F2C;
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

DEFINE_REX_FUNC(sub_824D3188) {
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
	// addi r11,r11,30128
	ctx.r11.s64 = ctx.r11.s64 + 30128;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824d440c
	ctx.lr = 0x824D31A4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// bl 0x822d5848
	ctx.lr = 0x824D31B0;
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

DEFINE_REX_FUNC(sub_824D3780) {
	REX_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20148
	ctx.r11.s64 = ctx.r11.s64 + 20148;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D379C:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x824d379c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D379C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,-5780
	ctx.r3.s64 = ctx.r11.s64 + -5780;
	// b 0x822369b8
	sub_822369B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3AB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25236
	ctx.r3.s64 = ctx.r11.s64 + 25236;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25484
	ctx.r3.s64 = ctx.r11.s64 + 25484;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25956
	ctx.r3.s64 = ctx.r11.s64 + 25956;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26420
	ctx.r3.s64 = ctx.r11.s64 + 26420;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3DF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29900
	ctx.r3.s64 = ctx.r11.s64 + 29900;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F70) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002bf
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D40C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4230) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010003
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010028
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4530) {
	REX_FUNC_PROLOGUE();
	// .long 0x201013a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010269
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4830) {
	REX_FUNC_PROLOGUE();
	// .long 0x200000b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010153
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B30) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010127
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

