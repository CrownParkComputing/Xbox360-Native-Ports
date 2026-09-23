#include "soulcalibur2_funcs.58.h"

DEFINE_REX_FUNC(sub_820E2320) {
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
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6FC8) {
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
	ctx.lr = 0x820E6FD0;
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,8500(r1)
	REX_STORE_U32(ctx.r1.u32 + 8500, ctx.r5.u32);
	// addi r10,r1,8504
	ctx.r10.s64 = ctx.r1.s64 + 8504;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d5598
	ctx.lr = 0x820E7018;
	sub_822D5598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e6998
	ctx.lr = 0x820E7024;
	sub_820E6998(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// ble 0x820e7088
	if (!ctx.cr0.gt) goto loc_820E7088;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r27,-32177
	r27.s64 = -2108751872;
loc_820E7048:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x820E7058;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e706c
	if (!ctx.cr6.lt) goto loc_820E706C;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_820E706C:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f0,-700(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bne 0x820e7048
	if (!ctx.cr0.eq) goto loc_820E7048;
loc_820E7088:
	// addi r1,r1,8464
	ctx.r1.s64 = ctx.r1.s64 + 8464;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820ED968) {
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
	ctx.lr = 0x820ED970;
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-28296
	ctx.r9.s64 = ctx.r11.s64 + -28296;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r29,-32170
	r29.s64 = -2108293120;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stfs f31,16(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// addi r11,r8,432
	ctx.r11.s64 = ctx.r8.s64 + 432;
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// lwz r31,220(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ED9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82200838
	ctx.lr = 0x820ED9D8;
	sub_82200838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f29,2360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82200710
	ctx.lr = 0x820ED9F4;
	sub_82200710(ctx, base);
	// lwz r3,-28236(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -28236);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EDA0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200838
	ctx.lr = 0x820EDA18;
	sub_82200838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82200710
	ctx.lr = 0x820EDA2C;
	sub_82200710(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x820eda70
	if (ctx.cr6.eq) goto loc_820EDA70;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x820eda60
	if (!ctx.cr6.eq) goto loc_820EDA60;
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,20220
	ctx.r10.s64 = ctx.r11.s64 + 20220;
	// lfs f30,20268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20268);
	f30.f64 = double(temp.f32);
	// lfs f29,20272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20272);
	f29.f64 = double(temp.f32);
	// lfs f31,20276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20276);
	f31.f64 = double(temp.f32);
	// b 0x820eda7c
	goto loc_820EDA7C;
loc_820EDA60:
	// lfs f30,10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10532);
	f30.f64 = double(temp.f32);
	// lfs f29,10536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10536);
	f29.f64 = double(temp.f32);
	// lfs f31,10540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10540);
	f31.f64 = double(temp.f32);
	// b 0x820eda7c
	goto loc_820EDA7C;
loc_820EDA70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// lfs f29,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	f29.f64 = double(temp.f32);
loc_820EDA7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EDA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EDABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_820F6318) {
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
	// lwz r11,8412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8412);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f6340
	if (ctx.cr6.eq) goto loc_820F6340;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f63f8
	goto loc_820F63F8;
loc_820F6340:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, ctx.r10.u32);
	// lwz r11,5780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f63d8
	if (ctx.cr6.eq) goto loc_820F63D8;
	// lhz r11,78(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 78);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x820f63a0
	if (ctx.cr6.lt) goto loc_820F63A0;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// blt cr6,0x820f6388
	if (ctx.cr6.lt) goto loc_820F6388;
	// bl 0x820f4d28
	ctx.lr = 0x820F6378;
	sub_820F4D28(ctx, base);
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
	// stw r3,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f63e8
	goto loc_820F63E8;
loc_820F6388:
	// bl 0x820f4d28
	ctx.lr = 0x820F638C;
	sub_820F4D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// b 0x820f63f0
	goto loc_820F63F0;
loc_820F63A0:
	// bl 0x820f4a40
	ctx.lr = 0x820F63A4;
	sub_820F4A40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f63d0
	if (!ctx.cr0.eq) goto loc_820F63D0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, ctx.r10.u32);
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// b 0x820f63f8
	goto loc_820F63F8;
loc_820F63D0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820f63f8
	goto loc_820F63F8;
loc_820F63D8:
	// bl 0x820f4d28
	ctx.lr = 0x820F63DC;
	sub_820F4D28(ctx, base);
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
	// stw r3,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F63E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, ctx.r11.u32);
loc_820F63F0:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r10.u32);
loc_820F63F8:
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

DEFINE_REX_FUNC(sub_820FC470) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,9616
	ctx.r9.s64 = ctx.r11.s64 + 9616;
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
loc_820FC494:
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
	// bdnz 0x820fc494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC494;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC4E8:
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
	// bdnz 0x820fc4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC4E8;
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

DEFINE_REX_FUNC(sub_820FED40) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lwz r11,8964(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,8964(r10)
	REX_STORE_U32(ctx.r10.u32 + 8964, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fed78
	if (ctx.cr6.eq) goto loc_820FED78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fed74
	if (ctx.cr6.eq) goto loc_820FED74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820fed70
	if (ctx.cr6.eq) goto loc_820FED70;
	// b 0x821fedc8
	sub_821FEDC8(ctx, base);
	return;
loc_820FED70:
	// b 0x821feec8
	sub_821FEEC8(ctx, base);
	return;
loc_820FED74:
	// b 0x821fee88
	sub_821FEE88(ctx, base);
	return;
loc_820FED78:
	// b 0x821fee08
	sub_821FEE08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FF470) {
	REX_FUNC_PROLOGUE();
	// li r9,31
	ctx.r9.s64 = 31;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,9024
	ctx.r11.s64 = ctx.r11.s64 + 9024;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FF484:
	// addi r9,r10,212
	ctx.r9.s64 = ctx.r10.s64 + 212;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bdnz 0x820ff484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FF484;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,6572(r11)
	REX_STORE_U32(ctx.r11.u32 + 6572, ctx.r10.u32);
	// stw r11,8976(r8)
	REX_STORE_U32(ctx.r8.u32 + 8976, ctx.r11.u32);
	// stw r9,8980(r7)
	REX_STORE_U32(ctx.r7.u32 + 8980, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100790) {
	REX_FUNC_PROLOGUE();
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
	// bne cr6,0x821007b0
	if (!ctx.cr6.eq) goto loc_821007B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821007B0:
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100CF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,22576
	ctx.r10.s64 = ctx.r11.s64 + 22576;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,152(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82100D10:
	// lwz r8,120(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// ori r7,r7,16
	ctx.r7.u64 = ctx.r7.u64 | 16;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,152(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82100d10
	if (ctx.cr6.lt) goto loc_82100D10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82106650) {
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
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r31,220(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// bl 0x821b9dc8
	ctx.lr = 0x82106674;
	sub_821B9DC8(ctx, base);
	// bl 0x820ec518
	ctx.lr = 0x82106678;
	sub_820EC518(ctx, base);
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x82106688;
	sub_82202540(ctx, base);
	// lwz r11,-28236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820f2d80
	ctx.lr = 0x8210669C;
	sub_820F2D80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e8650
	ctx.lr = 0x821066AC;
	sub_820E8650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,22960
	ctx.r10.s64 = ctx.r10.s64 + 22960;
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82107430) {
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
	ctx.lr = 0x82107444;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107460;
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
	ctx.lr = 0x82107474;
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

DEFINE_REX_FUNC(sub_82108B98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,22960
	ctx.r11.s64 = ctx.r11.s64 + 22960;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82108bbc
	if (!ctx.cr6.eq) goto loc_82108BBC;
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82108BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82109DD0) {
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
	ctx.lr = 0x82109DD8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r21,r10,432
	r21.s64 = ctx.r10.s64 + 432;
	// li r22,1
	r22.s64 = 1;
	// li r24,0
	r24.s64 = 0;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r23,220(r21)
	r23.u64 = REX_LOAD_U32(r21.u32 + 220);
	// mulli r10,r10,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// lwz r25,8(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,280(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82109e20
	if (!ctx.cr6.eq) goto loc_82109E20;
	// stw r24,604(r3)
	REX_STORE_U32(ctx.r3.u32 + 604, r24.u32);
	// b 0x82109e24
	goto loc_82109E24;
loc_82109E20:
	// stw r22,604(r31)
	REX_STORE_U32(r31.u32 + 604, r22.u32);
loc_82109E24:
	// lbz r10,2(r23)
	ctx.r10.u64 = REX_LOAD_U8(r23.u32 + 2);
	// li r27,3
	r27.s64 = 3;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82109eac
	if (ctx.cr6.eq) goto loc_82109EAC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82109e74
	if (ctx.cr6.eq) goto loc_82109E74;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82109edc
	if (!ctx.cr6.eq) goto loc_82109EDC;
	// lwz r9,668(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// stw r9,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// addi r11,r8,13128
	ctx.r11.s64 = ctx.r8.s64 + 13128;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r24,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r24.u32);
	// stwx r24,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r24.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// b 0x82109edc
	goto loc_82109EDC;
loc_82109E74:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r9,672(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 672);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r9,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r9.u32);
	// stwx r24,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r24.u32);
	// stwx r24,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r24.u32);
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82109edc
	if (ctx.cr6.gt) goto loc_82109EDC;
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// b 0x82109edc
	goto loc_82109EDC;
loc_82109EAC:
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r7,r10,136
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// stw r8,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r8.u32);
	// stw r24,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r24.u32);
	// addi r10,r9,13128
	ctx.r10.s64 = ctx.r9.s64 + 13128;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stwx r24,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r24.u32);
	// stwx r24,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, r24.u32);
	// stw r27,672(r31)
	REX_STORE_U32(r31.u32 + 672, r27.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_82109EDC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lwz r9,616(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 616);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r29,r11,-30144
	r29.s64 = ctx.r11.s64 + -30144;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// li r26,120
	r26.s64 = 120;
	// addi r28,r10,-30176
	r28.s64 = ctx.r10.s64 + -30176;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82109f74
	if (ctx.cr6.eq) goto loc_82109F74;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82109f54
	if (ctx.cr6.lt) goto loc_82109F54;
	// bne cr6,0x82109f6c
	if (!ctx.cr6.eq) goto loc_82109F6C;
	// lwz r10,640(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 640);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82109f38
	if (!ctx.cr6.gt) goto loc_82109F38;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82109F38:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r10,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r10.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// stw r27,80(r25)
	REX_STORE_U32(r25.u32 + 80, r27.u32);
	// b 0x82109f6c
	goto loc_82109F6C;
loc_82109F54:
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// bl 0x82107b58
	ctx.lr = 0x82109F6C;
	sub_82107B58(ctx, base);
loc_82109F6C:
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
loc_82109F74:
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r11,r10,-24528
	ctx.r11.s64 = ctx.r10.s64 + -24528;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8210a020
	if (!ctx.cr6.eq) goto loc_8210A020;
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8210a018
	if (!ctx.cr6.eq) goto loc_8210A018;
	// stw r22,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, r22.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r10,640(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 640);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82109fc4
	if (!ctx.cr6.gt) goto loc_82109FC4;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82109FC4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r30,r10,-27144
	r30.s64 = ctx.r10.s64 + -27144;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r10.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f34a8
	ctx.lr = 0x82109FF8;
	sub_820F34A8(ctx, base);
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// lwz r4,648(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 648);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f3560
	ctx.lr = 0x8210A010;
	sub_820F3560(ctx, base);
	// stw r27,80(r25)
	REX_STORE_U32(r25.u32 + 80, r27.u32);
	// b 0x8210a020
	goto loc_8210A020;
loc_8210A018:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r24,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, r24.u32);
loc_8210A020:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82109d68
	ctx.lr = 0x8210A028;
	sub_82109D68(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-103
	ctx.r11.s64 = -6750208;
	// addi r8,r10,22576
	ctx.r8.s64 = ctx.r10.s64 + 22576;
	// ori r11,r11,6655
	ctx.r11.u64 = ctx.r11.u64 | 6655;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210a084
	if (ctx.cr6.eq) goto loc_8210A084;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// bne 0x8210a058
	if (!ctx.cr0.eq) goto loc_8210A058;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
loc_8210A058:
	// ori r10,r10,255
	ctx.r10.u64 = ctx.r10.u64 | 255;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,152(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210a074
	if (!ctx.cr6.eq) goto loc_8210A074;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8210A074:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8210a088
	if (ctx.cr6.gt) goto loc_8210A088;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
loc_8210A084:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8210A088:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210a0d8
	if (ctx.cr6.eq) goto loc_8210A0D8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm. r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8210a0a8
	if (ctx.cr0.eq) goto loc_8210A0A8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8210A0A8:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,152(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210a0c0
	if (!ctx.cr6.eq) goto loc_8210A0C0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8210A0C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8210a0e0
	if (ctx.cr6.gt) goto loc_8210A0E0;
	// stw r24,20(r31)
	REX_STORE_U32(r31.u32 + 20, r24.u32);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// b 0x8210a0e0
	goto loc_8210A0E0;
loc_8210A0D8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8210A0E0:
	// lbz r11,176(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a158
	if (!ctx.cr0.eq) goto loc_8210A158;
	// lbz r11,177(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a158
	if (!ctx.cr0.eq) goto loc_8210A158;
	// lbz r11,178(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a158
	if (!ctx.cr0.eq) goto loc_8210A158;
	// lbz r11,179(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a158
	if (!ctx.cr0.eq) goto loc_8210A158;
	// lbz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a158
	if (!ctx.cr0.eq) goto loc_8210A158;
	// lhz r11,588(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8210a158
	if (!ctx.cr6.eq) goto loc_8210A158;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8210a148
	if (!ctx.cr6.gt) goto loc_8210A148;
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 628, temp.u32);
	// stw r26,636(r31)
	REX_STORE_U32(r31.u32 + 636, r26.u32);
	// stfs f13,624(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 624, temp.u32);
loc_8210A148:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210a158
	if (ctx.cr6.eq) goto loc_8210A158;
	// stw r24,36(r31)
	REX_STORE_U32(r31.u32 + 36, r24.u32);
loc_8210A158:
	// lwz r11,636(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210a16c
	if (!ctx.cr6.gt) goto loc_8210A16C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,636(r31)
	REX_STORE_U32(r31.u32 + 636, ctx.r11.u32);
loc_8210A16C:
	// lbz r11,176(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a1a8
	if (!ctx.cr0.eq) goto loc_8210A1A8;
	// lbz r11,177(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a1a8
	if (!ctx.cr0.eq) goto loc_8210A1A8;
	// lbz r11,178(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a1a8
	if (!ctx.cr0.eq) goto loc_8210A1A8;
	// lbz r11,179(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a1a8
	if (!ctx.cr0.eq) goto loc_8210A1A8;
	// lbz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210a1c4
	if (ctx.cr0.eq) goto loc_8210A1C4;
loc_8210A1A8:
	// lhz r11,588(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8210a1c4
	if (ctx.cr6.eq) goto loc_8210A1C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210a1c4
	if (ctx.cr6.eq) goto loc_8210A1C4;
	// stw r22,36(r31)
	REX_STORE_U32(r31.u32 + 36, r22.u32);
loc_8210A1C4:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210a1ec
	if (ctx.cr6.eq) goto loc_8210A1EC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8210a1e8
	if (ctx.cr6.lt) goto loc_8210A1E8;
	// bne cr6,0x8210a1ec
	if (!ctx.cr6.eq) goto loc_8210A1EC;
	// stw r22,6216(r25)
	REX_STORE_U32(r25.u32 + 6216, r22.u32);
	// b 0x8210a1ec
	goto loc_8210A1EC;
loc_8210A1E8:
	// stw r10,6216(r25)
	REX_STORE_U32(r25.u32 + 6216, ctx.r10.u32);
loc_8210A1EC:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r11,22960
	r30.s64 = ctx.r11.s64 + 22960;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x8210a2f4
	if (!ctx.cr6.eq) goto loc_8210A2F4;
	// lwz r11,612(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210a2f4
	if (!ctx.cr6.eq) goto loc_8210A2F4;
	// lbz r11,205(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 205);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210a250
	if (ctx.cr0.eq) goto loc_8210A250;
	// lwz r10,660(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 660);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8210a250
	if (ctx.cr6.eq) goto loc_8210A250;
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r11.u32);
	// cmpwi cr6,r11,9999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9999, ctx.xer);
	// blt cr6,0x8210a23c
	if (ctx.cr6.lt) goto loc_8210A23C;
	// li r11,9999
	ctx.r11.s64 = 9999;
loc_8210A23C:
	// stw r11,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r24,656(r31)
	REX_STORE_U32(r31.u32 + 656, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82109178
	ctx.lr = 0x8210A250;
	sub_82109178(ctx, base);
loc_8210A250:
	// lbz r11,176(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a28c
	if (!ctx.cr0.eq) goto loc_8210A28C;
	// lbz r11,177(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a28c
	if (!ctx.cr0.eq) goto loc_8210A28C;
	// lbz r11,178(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a28c
	if (!ctx.cr0.eq) goto loc_8210A28C;
	// lbz r11,179(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a28c
	if (!ctx.cr0.eq) goto loc_8210A28C;
	// lbz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210a290
	if (ctx.cr0.eq) goto loc_8210A290;
loc_8210A28C:
	// stw r24,652(r31)
	REX_STORE_U32(r31.u32 + 652, r24.u32);
loc_8210A290:
	// lbz r11,176(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a2cc
	if (!ctx.cr0.eq) goto loc_8210A2CC;
	// lbz r11,177(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a2cc
	if (!ctx.cr0.eq) goto loc_8210A2CC;
	// lbz r11,178(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a2cc
	if (!ctx.cr0.eq) goto loc_8210A2CC;
	// lbz r11,179(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210a2cc
	if (!ctx.cr0.eq) goto loc_8210A2CC;
	// lbz r11,180(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210a2d0
	if (ctx.cr0.eq) goto loc_8210A2D0;
loc_8210A2CC:
	// stw r24,652(r31)
	REX_STORE_U32(r31.u32 + 652, r24.u32);
loc_8210A2D0:
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// ble cr6,0x8210a2e8
	if (!ctx.cr6.gt) goto loc_8210A2E8;
	// stw r24,652(r31)
	REX_STORE_U32(r31.u32 + 652, r24.u32);
loc_8210A2E8:
	// lbz r11,205(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 205);
	// stw r11,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r11.u32);
	// b 0x8210a2f8
	goto loc_8210A2F8;
loc_8210A2F4:
	// stw r24,652(r31)
	REX_STORE_U32(r31.u32 + 652, r24.u32);
loc_8210A2F8:
	// lwz r10,612(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 612);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8210a344
	if (!ctx.cr6.eq) goto loc_8210A344;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bne cr6,0x8210a318
	if (!ctx.cr6.eq) goto loc_8210A318;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8210A318:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x8210a324
	if (!ctx.cr6.eq) goto loc_8210A324;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8210A324:
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bne cr6,0x8210a330
	if (!ctx.cr6.eq) goto loc_8210A330;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8210A330:
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bne cr6,0x8210a33c
	if (!ctx.cr6.eq) goto loc_8210A33C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8210A33C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210a34c
	if (!ctx.cr6.eq) goto loc_8210A34C;
loc_8210A344:
	// lwz r11,216(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 216);
	// stb r24,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r24.u8);
loc_8210A34C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d9620
	ctx.lr = 0x8210A358;
	sub_821D9620(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82120C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82120C50;
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
	// beq cr6,0x82120c88
	if (ctx.cr6.eq) goto loc_82120C88;
	// mulli r4,r30,80
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x82120C88;
	sub_82190670(ctx, base);
loc_82120C88:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120ca4
	if (ctx.cr6.eq) goto loc_82120CA4;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x82120CA4;
	sub_82190670(ctx, base);
loc_82120CA4:
	// lhz r11,142(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 142);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82120cc4
	if (!ctx.cr6.eq) goto loc_82120CC4;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,-27784(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -27784);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-27784(r10)
	REX_STORE_U32(ctx.r10.u32 + -27784, ctx.r11.u32);
	// b 0x82120cd4
	goto loc_82120CD4;
loc_82120CC4:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lwz r11,29816(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29816);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29816(r10)
	REX_STORE_U32(ctx.r10.u32 + 29816, ctx.r11.u32);
loc_82120CD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821236C0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x821236C8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f1c
	ctx.lr = 0x821236D0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r29,2
	r29.s64 = 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82123700
	if (ctx.cr6.lt) goto loc_82123700;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82123a78
	goto loc_82123A78;
loc_82123700:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lfs f30,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmr f24,f30
	f24.f64 = f30.f64;
	// blt cr6,0x82123760
	if (ctx.cr6.lt) goto loc_82123760;
	// beq cr6,0x8212374c
	if (ctx.cr6.eq) goto loc_8212374C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x82123790
	if (!ctx.cr6.lt) goto loc_82123790;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,31220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f13,f0
	f24.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82123790
	goto loc_82123790;
loc_8212374C:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82123790
	if (ctx.cr6.lt) goto loc_82123790;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82123790
	goto loc_82123790;
loc_82123760:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16372(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f13,f0
	f24.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blt cr6,0x82123790
	if (ctx.cr6.lt) goto loc_82123790;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_82123790:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x820e6998
	ctx.lr = 0x8212379C;
	sub_820E6998(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	f27.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,26636(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26636);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e6960
	ctx.lr = 0x821237C8;
	sub_820E6960(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stfs f30,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,220(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,16616(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f24,f0
	f22.f64 = double(float(f24.f64 * ctx.f0.f64));
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,-30168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30168);
	f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f26,160(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f26,176(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f22,108(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f22,124(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f29,29340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29340);
	f29.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f25,-30172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30172);
	f25.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f31,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f31.f64 = double(temp.f32);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f28,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f28.f64 = double(temp.f32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f29,184(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f25,192(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,200(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f25,208(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,216(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f21,f0,f13,f27
	f21.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -f27.f64)));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f22,140(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f23,f23,f21
	f23.f64 = double(float(f23.f64 + f21.f64));
	// stfs f22,156(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f21,164(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f21,196(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f23,180(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f23,212(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x821238C0;
	sub_821E7C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f21,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f27,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f27.f64 = double(temp.f32);
	// stfs f27,160(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f27,176(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f23,180(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f29,184(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f26,192(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f21,196(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f29,200(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f26,208(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f23,212(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f29,216(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f27,108(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f27,124(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f22,140(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f22,156(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82123960;
	sub_821E7C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f25,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f21,164(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f25,176(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f23,180(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f21,196(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f29,200(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f23,212(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f29,216(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f22,108(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f22,124(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,140(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82123A00;
	sub_821E7C08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82123A08;
	sub_821EB2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r3,r11,-30180
	ctx.r3.s64 = ctx.r11.s64 + -30180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f24,236(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,17136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x821eacb0
	ctx.lr = 0x82123A30;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// addi r5,r10,-30192
	ctx.r5.s64 = ctx.r10.s64 + -30192;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,-30184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30184);
	ctx.f0.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82123A6C;
	sub_821EAF80(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82123A78:
	// bl 0x82121c98
	ctx.lr = 0x82123A7C;
	sub_82121C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82123a9c
	if (ctx.cr0.eq) goto loc_82123A9C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82123ab8
	if (ctx.cr6.eq) goto loc_82123AB8;
loc_82123A9C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82123ab8
	if (ctx.cr6.eq) goto loc_82123AB8;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82123AB8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f68
	ctx.lr = 0x82123AC4;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82133568) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,142
	ctx.r10.s64 = ctx.r10.s64 + 142;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r9
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// mulli r9,r10,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,9(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 9);
	// b 0x821335ac
	goto loc_821335AC;
loc_82133598:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r7,r7,24
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(24));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r7,9(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 9);
loc_821335AC:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x82133598
	if (!ctx.cr6.eq) goto loc_82133598;
	// lbz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821335d4
	goto loc_821335D4;
loc_821335C0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r7,r7,24
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(24));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
loc_821335D4:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x821335c0
	if (!ctx.cr6.eq) goto loc_821335C0;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821335e8
	if (!ctx.cr6.lt) goto loc_821335E8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_821335E8:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82133608
	if (!ctx.cr6.lt) goto loc_82133608;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r3,18(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 18));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82133608:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135C90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r11,23912
	ctx.r9.s64 = ctx.r11.s64 + 23912;
	// addi r8,r10,22000
	ctx.r8.s64 = ctx.r10.s64 + 22000;
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r8,r8,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r7
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32));
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82135cfc
	if (ctx.cr6.eq) goto loc_82135CFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82135CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A4D0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,20960
	r31.s64 = ctx.r11.s64 + 20960;
	// lwz r11,-572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213a504
	if (!ctx.cr6.eq) goto loc_8213A504;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213a5bc
	goto loc_8213A5BC;
loc_8213A504:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,-32480(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,26856(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f31,28724(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28724);
	f31.f64 = double(temp.f32);
	// lfs f0,26840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f13,28900(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28900);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f1,26632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26632);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmadds f5,f12,f0,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82104548
	ctx.lr = 0x8213A584;
	sub_82104548(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-24412
	ctx.r8.s64 = ctx.r10.s64 + -24412;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-8496(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8496);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8213a318
	ctx.lr = 0x8213A5B0;
	sub_8213A318(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_8213A5BC:
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

DEFINE_REX_FUNC(sub_82141600) {
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
	ctx.lr = 0x82141608;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r11,20320
	r31.s64 = ctx.r11.s64 + 20320;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r7,r7,-23332
	ctx.r7.s64 = ctx.r7.s64 + -23332;
	// lfs f1,-29984(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -29984);
	ctx.f1.f64 = double(temp.f32);
	// li r6,66
	ctx.r6.s64 = 66;
	// addis r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 3670016;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82138a78
	ctx.lr = 0x82141660;
	sub_82138A78(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821416a4
	if (!ctx.cr6.eq) goto loc_821416A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821416a4
	if (!ctx.cr6.eq) goto loc_821416A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821416A4:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r25,r23,24
	r25.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(24));
	// addi r26,r11,14448
	r26.s64 = ctx.r11.s64 + 14448;
	// mulli r22,r18,28
	r22.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(28));
	// addi r21,r26,4
	r21.s64 = r26.s64 + 4;
	// li r20,0
	r20.s64 = 0;
	// li r19,40
	r19.s64 = 40;
	// mr r24,r20
	r24.u64 = r20.u64;
	// li r15,80
	r15.s64 = 80;
	// lwzx r11,r25,r21
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r21.u32);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// addi r17,r11,4
	r17.s64 = ctx.r11.s64 + 4;
	// addi r14,r11,12
	r14.s64 = ctx.r11.s64 + 12;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23232
	ctx.r11.s64 = ctx.r11.s64 + 23232;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821416E8:
	// lbz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U8(r17.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lbz r10,1(r17)
	ctx.r10.u64 = REX_LOAD_U8(r17.u32 + 1);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// extsb r30,r10
	r30.s64 = ctx.r10.s8;
	// bl 0x82132ef8
	ctx.lr = 0x82141710;
	sub_82132EF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// bl 0x82132ef8
	ctx.lr = 0x82141744;
	sub_82132EF8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r16,r11,27,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82141b68
	if (ctx.cr6.eq) goto loc_82141B68;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x82141b68
	if (ctx.cr6.eq) goto loc_82141B68;
	// lha r11,0(r14)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r14.u32 + 0));
	// li r12,-8531
	ctx.r12.s64 = -8531;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-8531
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8531, ctx.xer);
	// bne cr6,0x821417e4
	if (!ctx.cr6.eq) goto loc_821417E4;
	// cmpw cr6,r23,r31
	ctx.cr6.compare<int32_t>(r23.s32, r31.s32, ctx.xer);
	// beq cr6,0x82141b68
	if (ctx.cr6.eq) goto loc_82141B68;
	// mulli r9,r31,24
	ctx.r9.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r25,r21
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r21.u32);
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r22,r11
	r29.u64 = r22.u64 + ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_821417A8:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bne cr6,0x821417c8
	if (!ctx.cr6.eq) goto loc_821417C8;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// beq cr6,0x821417d8
	if (ctx.cr6.eq) goto loc_821417D8;
loc_821417C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821417a8
	if (ctx.cr6.lt) goto loc_821417A8;
loc_821417D8:
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// b 0x82141844
	goto loc_82141844;
loc_821417E4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82141b68
	if (ctx.cr6.eq) goto loc_82141B68;
	// mulli r9,r31,24
	ctx.r9.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r25,r21
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r21.u32);
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r22,r11
	ctx.r4.u64 = r22.u64 + ctx.r11.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r30,r20
	r30.u64 = r20.u64;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
loc_82141814:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bne cr6,0x82141834
	if (!ctx.cr6.eq) goto loc_82141834;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// beq cr6,0x821418e4
	if (ctx.cr6.eq) goto loc_821418E4;
loc_82141834:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82141814
	if (ctx.cr6.lt) goto loc_82141814;
loc_82141844:
	// cmpw cr6,r23,r27
	ctx.cr6.compare<int32_t>(r23.s32, r27.s32, ctx.xer);
	// beq cr6,0x821418e4
	if (ctx.cr6.eq) goto loc_821418E4;
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x82141878
	if (!ctx.cr6.eq) goto loc_82141878;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,-720
	ctx.r8.s64 = ctx.r8.s64 + -720;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x82141974
	goto loc_82141974;
loc_82141878:
	// addi r10,r26,17
	ctx.r10.s64 = r26.s64 + 17;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x821418a0
	if (!ctx.cr6.eq) goto loc_821418A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82141890:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,720
	ctx.r8.s64 = ctx.r8.s64 + 720;
	// b 0x82141970
	goto loc_82141970;
loc_821418A0:
	// addi r10,r26,18
	ctx.r10.s64 = r26.s64 + 18;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x821418c8
	if (!ctx.cr6.eq) goto loc_821418C8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821418B8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,-1280
	ctx.r8.s64 = ctx.r8.s64 + -1280;
	// b 0x82141970
	goto loc_82141970;
loc_821418C8:
	// addi r10,r26,19
	ctx.r10.s64 = r26.s64 + 19;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x82141974
	if (!ctx.cr6.eq) goto loc_82141974;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82141964
	goto loc_82141964;
loc_821418E4:
	// cmpw cr6,r23,r31
	ctx.cr6.compare<int32_t>(r23.s32, r31.s32, ctx.xer);
	// beq cr6,0x82141974
	if (ctx.cr6.eq) goto loc_82141974;
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x82141914
	if (!ctx.cr6.eq) goto loc_82141914;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,-720
	ctx.r8.s64 = ctx.r8.s64 + -720;
	// b 0x82141970
	goto loc_82141970;
loc_82141914:
	// addi r10,r26,17
	ctx.r10.s64 = r26.s64 + 17;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x82141930
	if (!ctx.cr6.eq) goto loc_82141930;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82141890
	goto loc_82141890;
loc_82141930:
	// addi r10,r26,18
	ctx.r10.s64 = r26.s64 + 18;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x8214194c
	if (!ctx.cr6.eq) goto loc_8214194C;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821418b8
	goto loc_821418B8;
loc_8214194C:
	// addi r10,r26,19
	ctx.r10.s64 = r26.s64 + 19;
	// lbzx r10,r25,r10
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x82141974
	if (!ctx.cr6.eq) goto loc_82141974;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82141964:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,1280
	ctx.r8.s64 = ctx.r8.s64 + 1280;
loc_82141970:
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82141974:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lha r6,0(r4)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 0));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lha r8,2(r4)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 2));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lhax r11,r11,r4
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32));
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bge cr6,0x821419bc
	if (!ctx.cr6.lt) goto loc_821419BC;
	// add r31,r11,r5
	r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x821419c0
	goto loc_821419C0;
loc_821419BC:
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_821419C0:
	// lha r7,0(r29)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lha r8,2(r29)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r29.u32 + 2));
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lha r9,14(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 14));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bge cr6,0x82141a04
	if (!ctx.cr6.lt) goto loc_82141A04;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82141a08
	goto loc_82141A08;
loc_82141A04:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82141A08:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r10,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// std r11,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r9,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// std r11,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r10,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// lfd f12,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// std r9,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f0,240(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// lfd f11,192(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfd f10,208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lfd f9,224(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// lfd f8,184(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// lfd f7,200(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// lfd f13,232(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_82141AE4:
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 + ctx.f13.f64));
	// lfs f11,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 + ctx.f12.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// bdnz 0x82141ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82141AE4;
	// addic r11,r16,-1
	ctx.xer.ca = r16.u32 > 0;
	ctx.r11.s64 = r16.s64 + -1;
	// lwz r8,452(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r7,3
	ctx.r7.s64 = 3;
	// subfe r9,r11,r16
	temp.u8 = (~ctx.r11.u32 + r16.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r16.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8213b0c8
	ctx.lr = 0x82141B60;
	sub_8213B0C8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82141B68:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addi r17,r17,2
	r17.s64 = r17.s64 + 2;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// blt cr6,0x821416e8
	if (ctx.cr6.lt) goto loc_821416E8;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82161088) {
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f928
	ctx.lr = 0x821610A8;
	sub_8215F928(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// stb r10,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d9620
	ctx.lr = 0x821610C8;
	sub_821D9620(ctx, base);
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

DEFINE_REX_FUNC(sub_82161908) {
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
	ctx.lr = 0x82161910;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x821619c0
	if (ctx.cr6.lt) goto loc_821619C0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x821619c0
	if (ctx.cr6.lt) goto loc_821619C0;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x821619c0
	if (!ctx.cr6.gt) goto loc_821619C0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,-12328
	r27.s64 = ctx.r10.s64 + -12328;
	// addi r26,r11,24504
	r26.s64 = ctx.r11.s64 + 24504;
loc_82161958:
	// mulli r11,r31,48
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(48));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821611c0
	ctx.lr = 0x8216196C;
	sub_821611C0(ctx, base);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// beq cr6,0x8216197c
	if (ctx.cr6.eq) goto loc_8216197C;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(r31.s32, 11, ctx.xer);
	// bne cr6,0x82161a10
	if (!ctx.cr6.eq) goto loc_82161A10;
loc_8216197C:
	// lwz r11,2888(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2888);
	// lfs f1,960(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 960);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821619d4
	if (!ctx.cr6.eq) goto loc_821619D4;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bne cr6,0x821619c8
	if (!ctx.cr6.eq) goto loc_821619C8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x821619A0;
	sub_820E1CC0(ctx, base);
loc_821619A0:
	// addi r11,r31,242
	ctx.r11.s64 = r31.s64 + 242;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r28
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
loc_821619AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e14c0
	ctx.lr = 0x821619B8;
	sub_820E14C0(ctx, base);
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// bgt cr6,0x82161958
	if (ctx.cr6.gt) goto loc_82161958;
loc_821619C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_821619C8:
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// bl 0x820e1cc0
	ctx.lr = 0x821619D0;
	sub_820E1CC0(ctx, base);
	// b 0x82161a10
	goto loc_82161A10;
loc_821619D4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82161a10
	if (ctx.cr6.eq) goto loc_82161A10;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r30,r27
	ctx.r5.u64 = r30.u64 + r27.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x821619F0;
	sub_820E1CC0(ctx, base);
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x82161A00;
	sub_820E1BA8(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82161A10;
	sub_820E1B28(ctx, base);
loc_82161A10:
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(r31.s32, 23, ctx.xer);
	// blt cr6,0x821619a0
	if (ctx.cr6.lt) goto loc_821619A0;
	// addi r11,r31,-23
	ctx.r11.s64 = r31.s64 + -23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r23
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// b 0x821619ac
	goto loc_821619AC;
}

DEFINE_REX_FUNC(sub_82169BB8) {
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
	ctx.lr = 0x82169BC0;
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
	// bl 0x82169840
	ctx.lr = 0x82169BD8;
	sub_82169840(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,512(r31)
	REX_STORE_U32(r31.u32 + 512, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,516(r31)
	REX_STORE_U32(r31.u32 + 516, r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10480
	ctx.r8.s64 = ctx.r10.s64 + -10480;
	// addi r10,r31,92
	ctx.r10.s64 = r31.s64 + 92;
	// stb r11,62(r31)
	REX_STORE_U8(r31.u32 + 62, ctx.r11.u8);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r7,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// sth r11,74(r31)
	REX_STORE_U16(r31.u32 + 74, ctx.r11.u16);
	// beq cr6,0x82169c94
	if (ctx.cr6.eq) goto loc_82169C94;
	// lfs f0,2016(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2016);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 492, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,2012(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,15944(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15944);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2360(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2360);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,17064(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17064);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-17652(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17652);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,496(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// stfs f12,500(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 500, temp.u32);
	// stfs f11,504(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 504, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// b 0x82169cf0
	goto loc_82169CF0;
loc_82169C94:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lhz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 20);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,2016(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2016);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f13,492(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 492, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 21, ctx.xer);
	// lfs f11,15944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15944);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,2392(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2392);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-31132(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -31132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// stfs f11,500(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 500, temp.u32);
	// stfs f0,504(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 504, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// bne cr6,0x82169cec
	if (!ctx.cr6.eq) goto loc_82169CEC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
loc_82169CEC:
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_82169CF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,63(r31)
	REX_STORE_U8(r31.u32 + 63, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8216E158) {
	REX_FUNC_PROLOGUE();
	// lwz r11,716(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// stw r4,716(r3)
	REX_STORE_U32(ctx.r3.u32 + 716, ctx.r4.u32);
	// ori r10,r10,9
	ctx.r10.u64 = ctx.r10.u64 | 9;
	// stw r11,720(r3)
	REX_STORE_U32(ctx.r3.u32 + 720, ctx.r11.u32);
	// stw r10,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216EA50) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x8216e100
	ctx.lr = 0x8216EA6C;
	sub_8216E100(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,704
	ctx.r5.s64 = 704;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8216EA7C;
	sub_822D4FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8216FD90) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x8216FD98;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x8216FDA0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r4,47
	ctx.r10.s64 = ctx.r4.s64 + 47;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lfs f13,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f8,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfsx f0,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f7,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f30,f12,f8
	f30.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fadds f29,f7,f11
	f29.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f31,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f0,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// fmadds f13,f9,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, ctx.f13.f64)));
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bge cr6,0x8216fe28
	if (!ctx.cr6.lt) goto loc_8216FE28;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_8216FE28:
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8216fe34
	if (!ctx.cr6.gt) goto loc_8216FE34;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8216FE34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-7484
	ctx.r3.s64 = ctx.r11.s64 + -7484;
	// bl 0x821eacb0
	ctx.lr = 0x8216FE40;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-7488
	ctx.r5.s64 = ctx.r11.s64 + -7488;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8216FE58;
	sub_821EB1A0(ctx, base);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bne cr6,0x8216fec0
	if (!ctx.cr6.eq) goto loc_8216FEC0;
	// addi r11,r29,41
	ctx.r11.s64 = r29.s64 + 41;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r29,35
	ctx.r10.s64 = r29.s64 + 35;
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-7500
	ctx.r3.s64 = ctx.r9.s64 + -7500;
	// lfsx f12,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmadds f0,f0,f31,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8216FEBC;
	sub_821EACB0(ctx, base);
	// b 0x8216ff5c
	goto loc_8216FF5C;
loc_8216FEC0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8216ff1c
	if (!ctx.cr6.eq) goto loc_8216FF1C;
	// addi r11,r29,41
	ctx.r11.s64 = r29.s64 + 41;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,35
	ctx.r10.s64 = r29.s64 + 35;
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f13,f13,f31,f28
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, f28.f64)));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r9,-7508
	ctx.r5.s64 = ctx.r9.s64 + -7508;
	// lfsx f12,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f13,f29
	ctx.f2.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x8216FF18;
	sub_821EAF80(ctx, base);
	// b 0x8216ff5c
	goto loc_8216FF5C;
loc_8216FF1C:
	// addi r11,r29,35
	ctx.r11.s64 = r29.s64 + 35;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r3,r10,-7500
	ctx.r3.s64 = ctx.r10.s64 + -7500;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmadds f0,f0,f31,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8216FF5C;
	sub_821EACB0(ctx, base);
loc_8216FF5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x8216FF68;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82177820) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lhz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// addi r8,r11,13128
	ctx.r8.s64 = ctx.r11.s64 + 13128;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// lfs f13,-5408(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -5408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1836(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r6
	ctx.r8.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// divw r4,r5,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r4,r4,r6
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// sth r5,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// divw r6,r7,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r4,r5,r11
	ctx.r4.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r8,r9,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A61C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A700) {
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
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217a8ac
	if (ctx.cr6.lt) goto loc_8217A8AC;
	// bne cr6,0x8217a8b4
	if (!ctx.cr6.eq) goto loc_8217A8B4;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,92(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f29,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8217a75c
	if (!ctx.cr6.eq) goto loc_8217A75C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// b 0x8217a8b4
	goto loc_8217A8B4;
loc_8217A75C:
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r8,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r8.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,212(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 212);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
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
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x8217A7A0;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8217A7A8;
	sub_820E22E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f1,204(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8217A7BC;
	sub_820E1CC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,212(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 212);
	// bl 0x820e1b28
	ctx.lr = 0x8217A7CC;
	sub_820E1B28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,30004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// lfs f0,19796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19796);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// ble cr6,0x8217a810
	if (!ctx.cr6.gt) goto loc_8217A810;
	// stfs f29,44(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// b 0x8217a844
	goto loc_8217A844;
loc_8217A810:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8217a824
	if (!ctx.cr6.lt) goto loc_8217A824;
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8217a840
	goto loc_8217A840;
loc_8217A824:
	// fsubs f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,200(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lfs f13,-5104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f13,f12,f13,f30
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -f30.f64)));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_8217A840:
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8217A844:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-8500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// ble cr6,0x8217a860
	if (!ctx.cr6.gt) goto loc_8217A860;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217a894
	goto loc_8217A894;
loc_8217A860:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8217a870
	if (!ctx.cr6.lt) goto loc_8217A870;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x8217a894
	goto loc_8217A894;
loc_8217A870:
	// fsubs f11,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f11,f0,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -f30.f64)));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
loc_8217A894:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f13,208(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -f30.f64)));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// b 0x8217a8b4
	goto loc_8217A8B4;
loc_8217A8AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,192(r30)
	REX_STORE_U32(r30.u32 + 192, ctx.r11.u32);
loc_8217A8B4:
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

DEFINE_REX_FUNC(sub_82181680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82181688;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r28,0
	r28.s64 = 0;
loc_821816A0:
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821816c8
	goto loc_821816C8;
loc_821816AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821816C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821816C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r29,r31
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x82182e18
	ctx.lr = 0x821816D4;
	sub_82182E18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821816ac
	if (!ctx.cr0.eq) goto loc_821816AC;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x821816a0
	if (ctx.cr6.lt) goto loc_821816A0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82182220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82182228;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// std r29,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, r29.u64);
	// std r29,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, r29.u64);
	// std r29,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, r29.u64);
	// std r29,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, r29.u64);
	// lbz r11,540(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 540);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82182264
	if (ctx.cr0.lt) goto loc_82182264;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x82182268
	if (ctx.cr6.lt) goto loc_82182268;
loc_82182264:
	// stb r29,540(r31)
	REX_STORE_U8(r31.u32 + 540, r29.u8);
loc_82182268:
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821822a8
	if (ctx.cr6.eq) goto loc_821822A8;
	// bl 0x82181638
	ctx.lr = 0x82182278;
	sub_82181638(ctx, base);
	// lbz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 540);
	// stw r3,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x82182294
	if (ctx.cr6.lt) goto loc_82182294;
	// addi r11,r11,-31
	ctx.r11.s64 = ctx.r11.s64 + -31;
loc_82182294:
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// b 0x821822e4
	goto loc_821822E4;
loc_821822A8:
	// lbz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 540);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// lbz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 540);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821822d4
	if (!ctx.cr0.lt) goto loc_821822D4;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
loc_821822D4:
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_821822E4:
	// lbz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 540);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,540(r31)
	REX_STORE_U8(r31.u32 + 540, ctx.r11.u8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x82182300
	if (ctx.cr6.lt) goto loc_82182300;
	// stb r29,540(r31)
	REX_STORE_U8(r31.u32 + 540, r29.u8);
loc_82182300:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm. r8,r11,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f12,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x82182324
	if (ctx.cr0.eq) goto loc_82182324;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182328
	goto loc_82182328;
loc_82182324:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182328:
	// stfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218233c
	if (ctx.cr0.eq) goto loc_8218233C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182340
	goto loc_82182340;
loc_8218233C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182340:
	// stfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182354
	if (ctx.cr0.eq) goto loc_82182354;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182358
	goto loc_82182358;
loc_82182354:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182358:
	// stfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218236c
	if (ctx.cr0.eq) goto loc_8218236C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182370
	goto loc_82182370;
loc_8218236C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182370:
	// stfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182384
	if (ctx.cr0.eq) goto loc_82182384;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182388
	goto loc_82182388;
loc_82182384:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182388:
	// stfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218239c
	if (ctx.cr0.eq) goto loc_8218239C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821823a0
	goto loc_821823A0;
loc_8218239C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821823A0:
	// stfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821823b4
	if (ctx.cr0.eq) goto loc_821823B4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821823b8
	goto loc_821823B8;
loc_821823B4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821823B8:
	// stfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821823cc
	if (ctx.cr0.eq) goto loc_821823CC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821823d0
	goto loc_821823D0;
loc_821823CC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821823D0:
	// stfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821823e4
	if (ctx.cr0.eq) goto loc_821823E4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821823e8
	goto loc_821823E8;
loc_821823E4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821823E8:
	// stfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821823fc
	if (ctx.cr0.eq) goto loc_821823FC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182400
	goto loc_82182400;
loc_821823FC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182400:
	// stfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182414
	if (ctx.cr0.eq) goto loc_82182414;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182418
	goto loc_82182418;
loc_82182414:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182418:
	// stfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218242c
	if (ctx.cr0.eq) goto loc_8218242C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182430
	goto loc_82182430;
loc_8218242C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182430:
	// stfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182444
	if (ctx.cr0.eq) goto loc_82182444;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182448
	goto loc_82182448;
loc_82182444:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182448:
	// stfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218245c
	if (ctx.cr0.eq) goto loc_8218245C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182460
	goto loc_82182460;
loc_8218245C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182460:
	// stfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182474
	if (ctx.cr0.eq) goto loc_82182474;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82182478
	goto loc_82182478;
loc_82182474:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82182478:
	// stfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82182488
	if (ctx.cr0.eq) goto loc_82182488;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82182488:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// li r9,26
	ctx.r9.s64 = 26;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r7,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,31792(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 31792);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// lis r4,-32163
	ctx.r4.s64 = -2107834368;
	// ld r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
loc_821824CC:
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82182500
	if (ctx.cr0.eq) goto loc_82182500;
	// add r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 + r31.u64;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stb r29,368(r8)
	REX_STORE_U8(ctx.r8.u32 + 368, r29.u8);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// b 0x82182590
	goto loc_82182590;
loc_82182500:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82182590
	if (ctx.cr0.eq) goto loc_82182590;
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + r31.u64;
	// lfd f0,31632(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 31632);
	// lbz r8,368(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 368);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r8,1
	ctx.r8.s64 = 1;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// bne 0x82182568
	if (!ctx.cr0.eq) goto loc_82182568;
	// lfs f13,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82182550
	if (!ctx.cr6.lt) goto loc_82182550;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82182550:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82182590
	if (ctx.cr0.eq) goto loc_82182590;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stb r8,368(r7)
	REX_STORE_U8(ctx.r7.u32 + 368, ctx.r8.u8);
	// b 0x82182584
	goto loc_82182584;
loc_82182568:
	// lfs f13,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82182578
	if (!ctx.cr6.lt) goto loc_82182578;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82182578:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82182590
	if (ctx.cr0.eq) goto loc_82182590;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_82182584:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
loc_82182590:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x821824cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821824CC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82193B58) {
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
	ctx.lr = 0x82193B60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lis r7,1536
	ctx.r7.s64 = 100663296;
	// lis r6,3840
	ctx.r6.s64 = 251658240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r8,r8,177
	ctx.r8.u64 = ctx.r8.u64 | 177;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// ori r6,r6,62
	ctx.r6.u64 = ctx.r6.u64 | 62;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82191f50
	ctx.lr = 0x82193B94;
	sub_82191F50(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// lis r30,-32169
	r30.s64 = -2108227584;
	// addi r29,r11,13128
	r29.s64 = ctx.r11.s64 + 13128;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82193bdc
	if (ctx.cr0.eq) goto loc_82193BDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82193BCC;
	sub_8212BC38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82188648
	ctx.lr = 0x82193BD4;
	sub_82188648(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,30856(r30)
	REX_STORE_U16(r30.u32 + 30856, ctx.r11.u16);
loc_82193BDC:
	// lbz r11,1888(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82193bf8
	if (ctx.cr0.eq) goto loc_82193BF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82188648
	ctx.lr = 0x82193BF0;
	sub_82188648(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,30856(r30)
	REX_STORE_U16(r30.u32 + 30856, ctx.r11.u16);
loc_82193BF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82197D78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8245e260
	sub_8245E260(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82197E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82197EA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82197898
	ctx.lr = 0x82197EBC;
	sub_82197898(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821979e8
	ctx.lr = 0x82197ED0;
	sub_821979E8(ctx, base);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r9,r9,16959
	ctx.r9.u64 = ctx.r9.u64 | 16959;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82197b78
	ctx.lr = 0x82197EF4;
	sub_82197B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821998F8) {
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
	// bl 0x82199598
	ctx.lr = 0x82199910;
	sub_82199598(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
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

DEFINE_REX_FUNC(sub_8219A078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mulli r10,r4,88
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// addi r10,r10,-80
	ctx.r10.s64 = ctx.r10.s64 + -80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219A0A0:
	// lwzu r11,88(r10)
	ea = 88 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8219a0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A0A0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B178) {
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
	// addi r31,r11,-32480
	r31.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219b1d4
	if (!ctx.cr6.eq) goto loc_8219B1D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219b1c8
	if (!ctx.cr6.eq) goto loc_8219B1C8;
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
	// bl 0x8219a078
	ctx.lr = 0x8219B1C8;
	sub_8219A078(ctx, base);
loc_8219B1C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_8219B1D4:
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

DEFINE_REX_FUNC(sub_8219BCD0) {
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
	ctx.lr = 0x8219BCD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r30,r10,r7
	r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r29,r11,r7
	r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8219bd4c
	if (ctx.cr6.eq) goto loc_8219BD4C;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219BD4C;
	sub_820E20B0(ctx, base);
loc_8219BD4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x8219BD5C;
	sub_820E1DF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x820e1df8
	ctx.lr = 0x8219BD6C;
	sub_820E1DF8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219bd88
	if (ctx.cr6.eq) goto loc_8219BD88;
	// bl 0x821feec8
	ctx.lr = 0x8219BD78;
	sub_821FEEC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8219BD88;
	sub_820E20B0(ctx, base);
loc_8219BD88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219F6E0) {
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
	ctx.lr = 0x8219F6E8;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
	// mulli r10,r3,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(72));
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,68(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 68);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// or r20,r11,r9
	r20.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r19,0
	r19.s64 = 0;
	// rlwinm. r11,r20,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x8219f760
	if (ctx.cr0.eq) goto loc_8219F760;
	// beq cr6,0x8219f758
	if (ctx.cr6.eq) goto loc_8219F758;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x8219f778
	goto loc_8219F778;
loc_8219F758:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8219f778
	goto loc_8219F778;
loc_8219F760:
	// beq cr6,0x8219f774
	if (ctx.cr6.eq) goto loc_8219F774;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8219f778
	goto loc_8219F778;
loc_8219F774:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8219F778:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,30520
	r29.s64 = ctx.r10.s64 + 30520;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x8219ed80
	ctx.lr = 0x8219F78C;
	sub_8219ED80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8219fa78
	if (ctx.cr0.eq) goto loc_8219FA78;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r10,6288
	r27.s64 = ctx.r10.s64 + 6288;
	// blt cr6,0x8219f7c0
	if (ctx.cr6.lt) goto loc_8219F7C0;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x8219f7c0
	if (ctx.cr6.gt) goto loc_8219F7C0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8219f7dc
	goto loc_8219F7DC;
loc_8219F7C0:
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// addi r10,r27,5264
	ctx.r10.s64 = r27.s64 + 5264;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r27,5168
	ctx.r9.s64 = r27.s64 + 5168;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r23,r10,r23
	r23.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
loc_8219F7DC:
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x8219e600
	ctx.lr = 0x8219F7F0;
	sub_8219E600(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8219fa70
	if (ctx.cr0.eq) goto loc_8219FA70;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x8219f808
	if (!ctx.cr6.lt) goto loc_8219F808;
	// lwz r25,60(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 60);
	// b 0x8219f810
	goto loc_8219F810;
loc_8219F808:
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r27
	r25.u64 = ctx.r11.u64 + r27.u64;
loc_8219F810:
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmpwi cr6,r26,26
	ctx.cr6.compare<int32_t>(r26.s32, 26, ctx.xer);
	// bgt cr6,0x8219f89c
	if (ctx.cr6.gt) goto loc_8219F89C;
	// beq cr6,0x8219f880
	if (ctx.cr6.eq) goto loc_8219F880;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(r26.s32, 17, ctx.xer);
	// blt cr6,0x8219f848
	if (ctx.cr6.lt) goto loc_8219F848;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(r26.s32, 18, ctx.xer);
	// ble cr6,0x8219fa10
	if (!ctx.cr6.gt) goto loc_8219FA10;
	// cmpwi cr6,r26,23
	ctx.cr6.compare<int32_t>(r26.s32, 23, ctx.xer);
	// beq cr6,0x8219fa20
	if (ctx.cr6.eq) goto loc_8219FA20;
	// cmpwi cr6,r26,24
	ctx.cr6.compare<int32_t>(r26.s32, 24, ctx.xer);
	// beq cr6,0x8219f880
	if (ctx.cr6.eq) goto loc_8219F880;
	// cmpwi cr6,r26,25
	ctx.cr6.compare<int32_t>(r26.s32, 25, ctx.xer);
	// beq cr6,0x8219fa30
	if (ctx.cr6.eq) goto loc_8219FA30;
loc_8219F848:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x8219f310
	ctx.lr = 0x8219F854;
	sub_8219F310(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f8d8
	if (ctx.cr0.eq) goto loc_8219F8D8;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r26,52
	ctx.cr6.compare<int32_t>(r26.s32, 52, ctx.xer);
	// bne cr6,0x8219f870
	if (!ctx.cr6.eq) goto loc_8219F870;
	// li r10,904
	ctx.r10.s64 = 904;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
loc_8219F870:
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r31.u32);
	// addi r27,r3,44
	r27.s64 = ctx.r3.s64 + 44;
	// stw r25,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r25.u32);
	// b 0x8219f8dc
	goto loc_8219F8DC;
loc_8219F880:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x821a0e68
	ctx.lr = 0x8219F88C;
	sub_821A0E68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f8d8
	if (ctx.cr0.eq) goto loc_8219F8D8;
	// stw r19,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, r19.u32);
	// b 0x8219fa4c
	goto loc_8219FA4C;
loc_8219F89C:
	// cmpwi cr6,r26,27
	ctx.cr6.compare<int32_t>(r26.s32, 27, ctx.xer);
	// beq cr6,0x8219fa30
	if (ctx.cr6.eq) goto loc_8219FA30;
	// cmpwi cr6,r26,28
	ctx.cr6.compare<int32_t>(r26.s32, 28, ctx.xer);
	// beq cr6,0x8219fa20
	if (ctx.cr6.eq) goto loc_8219FA20;
	// cmpwi cr6,r26,46
	ctx.cr6.compare<int32_t>(r26.s32, 46, ctx.xer);
	// ble cr6,0x8219f848
	if (!ctx.cr6.gt) goto loc_8219F848;
	// cmpwi cr6,r26,48
	ctx.cr6.compare<int32_t>(r26.s32, 48, ctx.xer);
	// ble cr6,0x8219fa10
	if (!ctx.cr6.gt) goto loc_8219FA10;
	// cmpwi cr6,r26,53
	ctx.cr6.compare<int32_t>(r26.s32, 53, ctx.xer);
	// bne cr6,0x8219f848
	if (!ctx.cr6.eq) goto loc_8219F848;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x821a0aa8
	ctx.lr = 0x8219F8D0;
	sub_821A0AA8(ctx, base);
loc_8219F8D0:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219fa4c
	if (!ctx.cr0.eq) goto loc_8219FA4C;
loc_8219F8D8:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8219F8DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219fa60
	if (ctx.cr6.eq) goto loc_8219FA60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8219f900
	if (ctx.cr6.eq) goto loc_8219F900;
	// lwz r10,12(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f900
	if (ctx.cr6.eq) goto loc_8219F900;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// sth r10,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
loc_8219F900:
	// stw r31,204(r30)
	REX_STORE_U32(r30.u32 + 204, r31.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stfs f31,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 188, temp.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x8219F920;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r11.u32);
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f4,40(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a1828
	ctx.lr = 0x8219F964;
	sub_821A1828(ctx, base);
	// lfs f0,44(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// lfs f0,48(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// bne cr6,0x8219f984
	if (!ctx.cr6.eq) goto loc_8219F984;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r18,r11,11740
	r18.s64 = ctx.r11.s64 + 11740;
loc_8219F984:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x8219bd90
	ctx.lr = 0x8219F994;
	sub_8219BD90(ctx, base);
	// stw r19,36(r31)
	REX_STORE_U32(r31.u32 + 36, r19.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8219f9a8
	if (!ctx.cr6.eq) goto loc_8219F9A8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r22,r11,-28716
	r22.s64 = ctx.r11.s64 + -28716;
loc_8219F9A8:
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 164, temp.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lfs f0,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 168, temp.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lfs f0,8(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f0,172(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 172, temp.u32);
	// stw r20,112(r30)
	REX_STORE_U32(r30.u32 + 112, r20.u32);
	// stw r23,196(r30)
	REX_STORE_U32(r30.u32 + 196, r23.u32);
	// stw r19,120(r30)
	REX_STORE_U32(r30.u32 + 120, r19.u32);
	// stw r21,56(r31)
	REX_STORE_U32(r31.u32 + 56, r21.u32);
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r10,56(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 56);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// bl 0x821a7a20
	ctx.lr = 0x8219F9FC;
	sub_821A7A20(ctx, base);
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,12(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// lwz r19,48(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x8219fa78
	goto loc_8219FA78;
loc_8219FA10:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x821a0650
	ctx.lr = 0x8219FA1C;
	sub_821A0650(ctx, base);
	// b 0x8219f8d0
	goto loc_8219F8D0;
loc_8219FA20:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x8219d2d0
	ctx.lr = 0x8219FA2C;
	sub_8219D2D0(ctx, base);
	// b 0x8219f8d0
	goto loc_8219F8D0;
loc_8219FA30:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x821a0e68
	ctx.lr = 0x8219FA3C;
	sub_821A0E68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f8d8
	if (ctx.cr0.eq) goto loc_8219F8D8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_8219FA4C:
	// stw r25,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r25.u32);
	// addi r27,r3,60
	r27.s64 = ctx.r3.s64 + 60;
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8219f8dc
	goto loc_8219F8DC;
loc_8219FA60:
	// lwz r3,208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 208);
	// bl 0x8218cb20
	ctx.lr = 0x8219FA68;
	sub_8218CB20(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x8219fa74
	goto loc_8219FA74;
loc_8219FA70:
	// lwz r3,208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 208);
loc_8219FA74:
	// bl 0x8218cb20
	ctx.lr = 0x8219FA78;
	sub_8218CB20(ctx, base);
loc_8219FA78:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_821AFA30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFED8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// stw r11,456(r10)
	REX_STORE_U32(ctx.r10.u32 + 456, ctx.r11.u32);
	// b 0x8212c530
	sub_8212C530(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B0900) {
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
	ctx.lr = 0x821B0908;
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
	// bl 0x82206040
	ctx.lr = 0x821B0930;
	sub_82206040(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r10,-528
	ctx.r9.s64 = ctx.r10.s64 + -528;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r8,r8,1848
	ctx.r8.s64 = ctx.r8.s64 + 1848;
	// addi r7,r7,-552
	ctx.r7.s64 = ctx.r7.s64 + -552;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821B0960;
	sub_821F7D50(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0980
	if (ctx.cr0.eq) goto loc_821B0980;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821b0984
	goto loc_821B0984;
loc_821B0980:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_821B0984:
	// lwz r10,268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r30.u32);
	// stw r28,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r28.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r29,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r29.u32);
	// stw r26,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r26.u32);
	// stw r25,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r25.u32);
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x822d55f8
	ctx.lr = 0x821B09B0;
	sub_822D55F8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x821b09c4
	if (!ctx.cr6.eq) goto loc_821B09C4;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x821b09c8
	goto loc_821B09C8;
loc_821B09C4:
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
loc_821B09C8:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r23,40(r31)
	REX_STORE_U32(r31.u32 + 40, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,48(r31)
	REX_STORE_U32(r31.u32 + 48, r24.u32);
	// stw r22,52(r31)
	REX_STORE_U32(r31.u32 + 52, r22.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x821b09e8
	if (ctx.cr6.eq) goto loc_821B09E8;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
loc_821B09E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821B3E20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821B3E28;
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
	// beq 0x821b3e80
	if (ctx.cr0.eq) goto loc_821B3E80;
	// lwz r10,-8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// addi r29,r3,-8
	r29.s64 = ctx.r3.s64 + -8;
	// mulli r11,r10,544
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(544));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x821b3e68
	if (ctx.cr0.lt) goto loc_821B3E68;
loc_821B3E54:
	// addi r30,r30,-544
	r30.s64 = r30.s64 + -544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82182208
	ctx.lr = 0x821B3E60;
	sub_82182208(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x821b3e54
	if (!ctx.cr0.lt) goto loc_821B3E54;
loc_821B3E68:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3e78
	if (ctx.cr0.eq) goto loc_821B3E78;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821B3E78;
	sub_822C80A8(ctx, base);
loc_821B3E78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821b3e9c
	goto loc_821B3E9C;
loc_821B3E80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82182208
	ctx.lr = 0x821B3E88;
	sub_82182208(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3e98
	if (ctx.cr0.eq) goto loc_821B3E98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821B3E98;
	sub_822C80A8(ctx, base);
loc_821B3E98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821B3E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821BC128) {
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
	ctx.lr = 0x821BC130;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r28,-32168
	r28.s64 = -2108162048;
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r27,-32168
	r27.s64 = -2108162048;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// addi r26,r10,-7176
	r26.s64 = ctx.r10.s64 + -7176;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r9,-7072
	r30.s64 = ctx.r9.s64 + -7072;
	// beq 0x821bc198
	if (ctx.cr0.eq) goto loc_821BC198;
	// cmpwi cr6,r11,9999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9999, ctx.xer);
	// bne cr6,0x821bc26c
	if (!ctx.cr6.eq) goto loc_821BC26C;
	// bl 0x821b19d0
	ctx.lr = 0x821BC17C;
	sub_821B19D0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,9160
	ctx.r9.u64 = ctx.r10.u64 | 9160;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,5464(r30)
	REX_STORE_U32(r30.u32 + 5464, ctx.r10.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x821bc26c
	goto loc_821BC26C;
loc_821BC198:
	// lwz r3,-9804(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -9804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc1c0
	if (ctx.cr6.eq) goto loc_821BC1C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9804(r27)
	REX_STORE_U32(r27.u32 + -9804, ctx.r11.u32);
loc_821BC1C0:
	// lis r31,-32168
	r31.s64 = -2108162048;
	// lwz r11,-9800(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -9800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc208
	if (ctx.cr6.eq) goto loc_821BC208;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bc1fc
	if (ctx.cr6.eq) goto loc_821BC1FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bc200
	goto loc_821BC200;
loc_821BC1FC:
	// bl 0x822c80a8
	ctx.lr = 0x821BC200;
	sub_822C80A8(ctx, base);
loc_821BC200:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9800(r31)
	REX_STORE_U32(r31.u32 + -9800, ctx.r11.u32);
loc_821BC208:
	// bl 0x821b1958
	ctx.lr = 0x821BC20C;
	sub_821B1958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc240
	if (ctx.cr0.eq) goto loc_821BC240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,68(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
	// bgt cr6,0x821bc26c
	if (ctx.cr6.gt) goto loc_821BC26C;
	// stw r11,88(r26)
	REX_STORE_U32(r26.u32 + 88, ctx.r11.u32);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r4,r26,88
	ctx.r4.s64 = r26.s64 + 88;
	// addi r3,r10,-4224
	ctx.r3.s64 = ctx.r10.s64 + -4224;
	// bl 0x82115ef8
	ctx.lr = 0x821BC23C;
	sub_82115EF8(ctx, base);
	// b 0x821bc26c
	goto loc_821BC26C;
loc_821BC240:
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r25,1
	r25.s64 = 1;
	// stw r10,88(r26)
	REX_STORE_U32(r26.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821bc264
	if (!ctx.cr6.eq) goto loc_821BC264;
	// bl 0x821b3d58
	ctx.lr = 0x821BC25C;
	sub_821B3D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821bc268
	goto loc_821BC268;
loc_821BC264:
	// li r11,3
	ctx.r11.s64 = 3;
loc_821BC268:
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
loc_821BC26C:
	// bl 0x821159c8
	ctx.lr = 0x821BC270;
	sub_821159C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,68(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821bc288
	if (ctx.cr6.lt) goto loc_821BC288;
	// li r3,2
	ctx.r3.s64 = 2;
loc_821BC288:
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821bc2e0
	if (!ctx.cr6.eq) goto loc_821BC2E0;
	// cmpwi cr6,r10,9999
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9999, ctx.xer);
	// bge cr6,0x821bc2e0
	if (!ctx.cr6.lt) goto loc_821BC2E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e510
	ctx.lr = 0x821BC2A4;
	sub_8218E510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e510
	ctx.lr = 0x821BC2AC;
	sub_8218E510(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821BC2B8;
	sub_8218E510(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212bf38
	ctx.lr = 0x821BC2C8;
	sub_8212BF38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212bf38
	ctx.lr = 0x821BC2D8;
	sub_8212BF38(ctx, base);
	// li r10,9998
	ctx.r10.s64 = 9998;
	// stw r10,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r10.u32);
loc_821BC2E0:
	// lwz r11,-9900(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9900);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821bc36c
	if (ctx.cr6.lt) goto loc_821BC36C;
	// beq cr6,0x821bc314
	if (ctx.cr6.eq) goto loc_821BC314;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821bc434
	if (!ctx.cr6.lt) goto loc_821BC434;
	// lwz r11,-9804(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -9804);
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bc408
	if (ctx.cr0.eq) goto loc_821BC408;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
	// b 0x821bc43c
	goto loc_821BC43C;
loc_821BC314:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc334
	if (ctx.cr6.eq) goto loc_821BC334;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212c1e0
	ctx.lr = 0x821BC32C;
	sub_8212C1E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc430
	if (ctx.cr0.eq) goto loc_821BC430;
loc_821BC334:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3780
	ctx.r11.u64 = ctx.r11.u64 | 3780;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc360
	if (ctx.cr6.eq) goto loc_821BC360;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8212c1e0
	ctx.lr = 0x821BC358;
	sub_8212C1E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc430
	if (ctx.cr0.eq) goto loc_821BC430;
loc_821BC360:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
	// b 0x821bc434
	goto loc_821BC434;
loc_821BC36C:
	// cmpwi cr6,r10,9999
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9999, ctx.xer);
	// ble cr6,0x821bc408
	if (!ctx.cr6.gt) goto loc_821BC408;
	// bl 0x821b1ae0
	ctx.lr = 0x821BC378;
	sub_821B1AE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc430
	if (ctx.cr0.eq) goto loc_821BC430;
	// lwz r10,504(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 504);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821bc418
	if (!ctx.cr6.eq) goto loc_821BC418;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bc3c0
	if (!ctx.cr6.eq) goto loc_821BC3C0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BC3A8;
	sub_821AFEF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212e440
	ctx.lr = 0x821BC3B8;
	sub_8212E440(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
loc_821BC3C0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3780
	ctx.r11.u64 = ctx.r11.u64 | 3780;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bc400
	if (!ctx.cr6.eq) goto loc_821BC400;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BC3DC;
	sub_821AFEF0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8212e440
	ctx.lr = 0x821BC3F0;
	sub_8212E440(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,3780
	ctx.r10.u64 = ctx.r10.u64 | 3780;
	// stwx r11,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r11.u32);
loc_821BC400:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BC404:
	// stw r11,-9900(r28)
	REX_STORE_U32(r28.u32 + -9900, ctx.r11.u32);
loc_821BC408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC40C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
loc_821BC418:
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821bc360
	if (!ctx.cr6.eq) goto loc_821BC360;
	// bl 0x821b3d58
	ctx.lr = 0x821BC428;
	sub_821B3D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821bc404
	goto loc_821BC404;
loc_821BC430:
	// lwz r11,-9900(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9900);
loc_821BC434:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821bc408
	if (ctx.cr6.lt) goto loc_821BC408;
loc_821BC43C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821bc44c
	if (ctx.cr6.eq) goto loc_821BC44C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821bc47c
	goto loc_821BC47C;
loc_821BC44C:
	// lfs f0,68(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821bc478
	if (!ctx.cr6.gt) goto loc_821BC478;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821BC474;
	sub_821AFA50(ctx, base);
	// b 0x821bc480
	goto loc_821BC480;
loc_821BC478:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BC47C:
	// stw r11,88(r26)
	REX_STORE_U32(r26.u32 + 88, ctx.r11.u32);
loc_821BC480:
	// lwz r11,500(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 500);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821bc498
	if (!ctx.cr6.eq) goto loc_821BC498;
	// lwz r11,516(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 516);
	// sth r11,32(r29)
	REX_STORE_U16(r29.u32 + 32, ctx.r11.u16);
	// bl 0x821b9e40
	ctx.lr = 0x821BC498;
	sub_821B9E40(ctx, base);
loc_821BC498:
	// bl 0x821d17d8
	ctx.lr = 0x821BC49C;
	sub_821D17D8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// bl 0x821b42c0
	ctx.lr = 0x821BC4A8;
	sub_821B42C0(ctx, base);
	// bl 0x821dfdf8
	ctx.lr = 0x821BC4AC;
	sub_821DFDF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bc4cc
	if (ctx.cr0.eq) goto loc_821BC4CC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x8212e800
	ctx.lr = 0x821BC4C8;
	sub_8212E800(ctx, base);
	// bl 0x821dfe08
	ctx.lr = 0x821BC4CC;
	sub_821DFE08(ctx, base);
loc_821BC4CC:
	// bl 0x821dfe08
	ctx.lr = 0x821BC4D0;
	sub_821DFE08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bc40c
	goto loc_821BC40C;
}

DEFINE_REX_FUNC(sub_821C5E70) {
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
	// stfs f0,10580(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10580, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C6518) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10568(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,10568(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C6FD8) {
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
	// lwz r8,5464(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 5464);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821c7024
	if (ctx.cr6.eq) goto loc_821C7024;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,-9828(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -9828);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,62
	ctx.r9.s64 = ctx.r9.s64 + 62;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// stw r7,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r7.u32);
loc_821C7024:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x821c7070
	if (!ctx.cr6.eq) goto loc_821C7070;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lhz r10,308(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 308);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c706c
	if (ctx.cr0.eq) goto loc_821C706C;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,-9828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9828);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,62
	ctx.r10.s64 = ctx.r10.s64 + 62;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821e6008
	ctx.lr = 0x821C706C;
	sub_821E6008(ctx, base);
loc_821C706C:
	// stfs f31,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
loc_821C7070:
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

DEFINE_REX_FUNC(sub_821C9150) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821c9174
	if (ctx.cr6.lt) goto loc_821C9174;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x821c9174
	if (ctx.cr6.gt) goto loc_821C9174;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,-17452
	ctx.r11.s64 = ctx.r11.s64 + -17452;
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_821C9174:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9720) {
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
	ctx.lr = 0x821C9728;
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// lwz r31,220(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c9764
	if (!ctx.cr0.eq) goto loc_821C9764;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821c989c
	goto loc_821C989C;
loc_821C9764:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c989c
	if (!ctx.cr0.eq) goto loc_821C989C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821C977C;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c989c
	if (ctx.cr0.eq) goto loc_821C989C;
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,64
	r29.s64 = ctx.r11.s64 + 64;
	// lfs f30,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f29,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	f29.f64 = double(temp.f32);
	// bl 0x82127d30
	ctx.lr = 0x821C97A4;
	sub_82127D30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subfe r5,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821C97C0;
	sub_821BF940(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821C97D4;
	sub_821BE318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f29,f0
	ctx.f3.f64 = double(float(f29.f64 - ctx.f0.f64));
	// fsubs f1,f30,f13
	ctx.f1.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821c7250
	ctx.lr = 0x821C97F8;
	sub_821C7250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7300
	ctx.lr = 0x821C9800;
	sub_821C7300(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-27648
	r29.s64 = ctx.r11.s64 + -27648;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 212);
	// stb r11,283(r31)
	REX_STORE_U8(r31.u32 + 283, ctx.r11.u8);
	// bl 0x82125e10
	ctx.lr = 0x821C981C;
	sub_82125E10(ctx, base);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x821c9834
	if (!ctx.cr6.eq) goto loc_821C9834;
	// lhz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 30);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x821c983c
	if (ctx.cr6.eq) goto loc_821C983C;
loc_821C9834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c45c8
	ctx.lr = 0x821C983C;
	sub_821C45C8(ctx, base);
loc_821C983C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82126498
	ctx.lr = 0x821C9848;
	sub_82126498(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,20092
	ctx.r10.s64 = ctx.r11.s64 + 20092;
	// lfs f0,20140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10532(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10532, temp.u32);
	// lfs f0,20144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10536(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10536, temp.u32);
	// lfs f0,20148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10540(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10540, temp.u32);
	// bl 0x821c4a08
	ctx.lr = 0x821C9878;
	sub_821C4A08(ctx, base);
	// lfs f0,10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 384, temp.u32);
	// lfs f0,10536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 388, temp.u32);
	// lfs f0,10540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 392, temp.u32);
	// stfs f31,416(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 416, temp.u32);
	// lfs f0,10312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 228, temp.u32);
loc_821C989C:
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

DEFINE_REX_FUNC(sub_821D1F70) {
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
	// lis r31,-32171
	r31.s64 = -2108358656;
	// lwz r3,32268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d1fb0
	if (!ctx.cr6.eq) goto loc_821D1FB0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c80d0
	ctx.lr = 0x821D1F98;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1fa8
	if (ctx.cr0.eq) goto loc_821D1FA8;
	// bl 0x820e7648
	ctx.lr = 0x821D1FA4;
	sub_820E7648(ctx, base);
	// b 0x821d1fac
	goto loc_821D1FAC;
loc_821D1FA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1FAC:
	// stw r3,32268(r31)
	REX_STORE_U32(r31.u32 + 32268, ctx.r3.u32);
loc_821D1FB0:
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
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3880) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821d8790
	ctx.lr = 0x821D38A0;
	sub_821D8790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d3920
	if (!ctx.cr0.eq) goto loc_821D3920;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x821d3914
	if (!ctx.cr6.gt) goto loc_821D3914;
	// bl 0x8210ffd0
	ctx.lr = 0x821D38B8;
	sub_8210FFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3914
	if (ctx.cr0.eq) goto loc_821D3914;
	// bl 0x8210ffc0
	ctx.lr = 0x821D38C4;
	sub_8210FFC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d38d8
	if (!ctx.cr0.eq) goto loc_821D38D8;
	// bl 0x821d1df0
	ctx.lr = 0x821D38D0;
	sub_821D1DF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d3914
	if (ctx.cr0.eq) goto loc_821D3914;
loc_821D38D8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x821d3908
	if (!ctx.cr6.eq) goto loc_821D3908;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,19420(r11)
	REX_STORE_U32(ctx.r11.u32 + 19420, ctx.r10.u32);
	// bl 0x821d3060
	ctx.lr = 0x821D3904;
	sub_821D3060(ctx, base);
	// b 0x821d3914
	goto loc_821D3914;
loc_821D3908:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821d45b0
	ctx.lr = 0x821D3914;
	sub_821D45B0(ctx, base);
loc_821D3914:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_821D3920:
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

DEFINE_REX_FUNC(sub_821D6C38) {
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
	ctx.lr = 0x821D6C40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r25,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// beq cr6,0x821d6c64
	if (ctx.cr6.eq) goto loc_821D6C64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821d6c6c
	if (!ctx.cr6.eq) goto loc_821D6C6C;
loc_821D6C64:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r10.u32);
loc_821D6C6C:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// addi r31,r10,-7072
	r31.s64 = ctx.r10.s64 + -7072;
	// addi r26,r9,432
	r26.s64 = ctx.r9.s64 + 432;
	// beq cr6,0x821d6ddc
	if (ctx.cr6.eq) goto loc_821D6DDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d6dcc
	if (ctx.cr6.eq) goto loc_821D6DCC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d6ce4
	if (ctx.cr6.eq) goto loc_821D6CE4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d6cd0
	if (ctx.cr6.eq) goto loc_821D6CD0;
	// ble cr6,0x821d6eb4
	if (!ctx.cr6.gt) goto loc_821D6EB4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x821d6eb4
	if (ctx.cr6.gt) goto loc_821D6EB4;
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x821d6eb4
	if (ctx.cr6.eq) goto loc_821D6EB4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d6910
	ctx.lr = 0x821D6CC4;
	sub_821D6910(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// b 0x821d6cd4
	goto loc_821D6CD4;
loc_821D6CD0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821D6CD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821d6910
	ctx.lr = 0x821D6CE0;
	sub_821D6910(ctx, base);
	// b 0x821d6eb4
	goto loc_821D6EB4;
loc_821D6CE4:
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821d6cfc
	if (ctx.cr6.eq) goto loc_821D6CFC;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821d6d0c
	if (!ctx.cr6.eq) goto loc_821D6D0C;
loc_821D6CFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,220(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 220);
	// bl 0x821d6ac8
	ctx.lr = 0x821D6D08;
	sub_821D6AC8(ctx, base);
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
loc_821D6D0C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821d6eb4
	if (ctx.cr6.eq) goto loc_821D6EB4;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r10,13128
	r30.s64 = ctx.r10.s64 + 13128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d6d64
	if (!ctx.cr0.eq) goto loc_821D6D64;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r10,r30,121
	ctx.r10.s64 = r30.s64 + 121;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mulli r11,r4,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d6d64
	if (!ctx.cr0.eq) goto loc_821D6D64;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6d64
	if (ctx.cr0.eq) goto loc_821D6D64;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d63e8
	ctx.lr = 0x821D6D64;
	sub_821D63E8(ctx, base);
loc_821D6D64:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d6eb4
	if (!ctx.cr0.eq) goto loc_821D6EB4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r30,121
	ctx.r10.s64 = r30.s64 + 121;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mulli r11,r4,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d6eb4
	if (!ctx.cr0.eq) goto loc_821D6EB4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3699
	ctx.r11.u64 = ctx.r11.u64 | 3699;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6eb4
	if (ctx.cr0.eq) goto loc_821D6EB4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821d63e8
	ctx.lr = 0x821D6DC8;
	sub_821D63E8(ctx, base);
	// b 0x821d6eb4
	goto loc_821D6EB4;
loc_821D6DCC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6eb4
	if (!ctx.cr6.eq) goto loc_821D6EB4;
	// b 0x821d6dfc
	goto loc_821D6DFC;
loc_821D6DDC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6eb4
	if (!ctx.cr6.eq) goto loc_821D6EB4;
	// lha r11,30(r26)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r26.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d6e1c
	if (ctx.cr6.eq) goto loc_821D6E1C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d6e1c
	if (ctx.cr6.eq) goto loc_821D6E1C;
loc_821D6DFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d6608
	ctx.lr = 0x821D6E08;
	sub_821D6608(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821d6608
	ctx.lr = 0x821D6E18;
	sub_821D6608(ctx, base);
	// b 0x821d6eb4
	goto loc_821D6EB4;
loc_821D6E1C:
	// mr r28,r31
	r28.u64 = r31.u64;
	// li r27,2
	r27.s64 = 2;
loc_821D6E24:
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6e40
	if (ctx.cr0.eq) goto loc_821D6E40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d6608
	ctx.lr = 0x821D6E3C;
	sub_821D6608(ctx, base);
	// b 0x821d6ea4
	goto loc_821D6EA4;
loc_821D6E40:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821D6E44:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6e60
	if (ctx.cr0.eq) goto loc_821D6E60;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x821d6e98
	if (ctx.cr6.eq) goto loc_821D6E98;
loc_821D6E60:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3699
	ctx.r11.u64 = ctx.r11.u64 | 3699;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6e8c
	if (ctx.cr0.eq) goto loc_821D6E8C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x821d6e98
	if (ctx.cr6.eq) goto loc_821D6E98;
loc_821D6E8C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d6970
	ctx.lr = 0x821D6E98;
	sub_821D6970(ctx, base);
loc_821D6E98:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x821d6e44
	if (ctx.cr6.lt) goto loc_821D6E44;
loc_821D6EA4:
	// addis r28,r28,1
	r28.s64 = r28.s64 + 65536;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,3696
	r28.s64 = r28.s64 + 3696;
	// bne 0x821d6e24
	if (!ctx.cr0.eq) goto loc_821D6E24;
loc_821D6EB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d6ec8
	if (!ctx.cr6.eq) goto loc_821D6EC8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// b 0x821d6ed8
	goto loc_821D6ED8;
loc_821D6EC8:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_821D6ED8:
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d6f08
	if (!ctx.cr6.eq) goto loc_821D6F08;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// ori r10,r10,3700
	ctx.r10.u64 = ctx.r10.u64 | 3700;
	// stbx r25,r31,r10
	REX_STORE_U8(r31.u32 + ctx.r10.u32, r25.u8);
	// b 0x821d6f2c
	goto loc_821D6F2C;
loc_821D6F08:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r11,r11,3701
	ctx.r11.u64 = ctx.r11.u64 | 3701;
	// ori r9,r9,3700
	ctx.r9.u64 = ctx.r9.u64 | 3700;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stbx r11,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_821D6F2C:
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ori r10,r9,3700
	ctx.r10.u64 = ctx.r9.u64 | 3700;
	// stbx r11,r31,r10
	REX_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,0(r26)
	REX_STORE_U16(r26.u32 + 0, ctx.r11.u16);
	// beq 0x821d6f60
	if (ctx.cr0.eq) goto loc_821D6F60;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// b 0x821d6f64
	goto loc_821D6F64;
loc_821D6F60:
	// stw r25,36(r29)
	REX_STORE_U32(r29.u32 + 36, r25.u32);
loc_821D6F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821E26D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e27b0
	if (!ctx.cr0.eq) goto loc_821E27B0;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e27b0
	if (!ctx.cr0.eq) goto loc_821E27B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,195
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 195, ctx.xer);
	// bgt cr6,0x821e275c
	if (ctx.cr6.gt) goto loc_821E275C;
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,145
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 145, ctx.xer);
	// bgt cr6,0x821e273c
	if (ctx.cr6.gt) goto loc_821E273C;
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,135
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 135, ctx.xer);
	// b 0x821e27a4
	goto loc_821E27A4;
loc_821E273C:
	// cmpwi cr6,r11,155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 155, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,165
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 165, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,175
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 175, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,185
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 185, ctx.xer);
	// b 0x821e27a4
	goto loc_821E27A4;
loc_821E275C:
	// cmpwi cr6,r11,245
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 245, ctx.xer);
	// bgt cr6,0x821e2788
	if (ctx.cr6.gt) goto loc_821E2788;
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,215
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 215, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,225
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 225, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,235
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 235, ctx.xer);
	// b 0x821e27a4
	goto loc_821E27A4;
loc_821E2788:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,265
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 265, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,275
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 275, ctx.xer);
	// beq cr6,0x821e27a8
	if (ctx.cr6.eq) goto loc_821E27A8;
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
loc_821E27A4:
	// bne cr6,0x821e27b0
	if (!ctx.cr6.eq) goto loc_821E27B0;
loc_821E27A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E27B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
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
	// bl 0x822d4e78
	ctx.lr = 0x821E5B08;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f0c
	ctx.lr = 0x821E5B10;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5d6c
	if (ctx.cr6.eq) goto loc_821E5D6C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821e5b3c
	if (!ctx.cr6.eq) goto loc_821E5B3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f26,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f26.f64 = double(temp.f32);
	// b 0x821e5b44
	goto loc_821E5B44;
loc_821E5B3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f26,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f26.f64 = double(temp.f32);
loc_821E5B44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-24808(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24808);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f26,f13,f12
	f31.f64 = double(float(std::fma(f26.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// bl 0x82204da8
	ctx.lr = 0x821E5B70;
	sub_82204DA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f17,16116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16116);
	f17.f64 = double(temp.f32);
	// lfs f18,16120(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16120);
	f18.f64 = double(temp.f32);
	// beq 0x821e5b90
	if (ctx.cr0.eq) goto loc_821E5B90;
	// fsubs f0,f31,f18
	ctx.f0.f64 = double(float(f31.f64 - f18.f64));
	// fmuls f31,f0,f17
	f31.f64 = double(float(ctx.f0.f64 * f17.f64));
loc_821E5B90:
	// addi r11,r27,20
	ctx.r11.s64 = r27.s64 + 20;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e5d6c
	if (!ctx.cr6.gt) goto loc_821E5D6C;
	// addi r11,r27,22
	ctx.r11.s64 = r27.s64 + 22;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f23,16200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	f23.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f22,26816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26816);
	f22.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,20480(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20480);
	f24.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f19,26620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26620);
	f19.f64 = double(temp.f32);
	// rlwinm r29,r27,3,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f20,28232(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28232);
	f20.f64 = double(temp.f32);
	// lfs f21,20496(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20496);
	f21.f64 = double(temp.f32);
	// li r24,1
	r24.s64 = 1;
	// lfs f25,26632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26632);
	f25.f64 = double(temp.f32);
	// addi r28,r29,25
	r28.s64 = r29.s64 + 25;
	// lfs f28,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f28.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_821E5C04:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e35f8
	ctx.lr = 0x821E5C14;
	sub_821E35F8(ctx, base);
	// lwzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r31.u32);
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bge cr6,0x821e5c7c
	if (!ctx.cr6.lt) goto loc_821E5C7C;
	// bl 0x821e3cf8
	ctx.lr = 0x821E5C40;
	sub_821E3CF8(ctx, base);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stfs f31,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f29,116(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,176(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f30,180(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// beq cr6,0x821e5c70
	if (ctx.cr6.eq) goto loc_821E5C70;
	// fadds f0,f29,f28
	ctx.f0.f64 = double(float(f29.f64 + f28.f64));
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,176(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
loc_821E5C70:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// b 0x821e5d00
	goto loc_821E5D00;
loc_821E5C7C:
	// bne cr6,0x821e5cc8
	if (!ctx.cr6.eq) goto loc_821E5CC8;
	// bl 0x821e3cf8
	ctx.lr = 0x821E5C84;
	sub_821E3CF8(ctx, base);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stfs f31,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f27,116(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,176(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f30,180(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// beq cr6,0x821e5cb4
	if (ctx.cr6.eq) goto loc_821E5CB4;
	// fadds f0,f27,f28
	ctx.f0.f64 = double(float(f27.f64 + f28.f64));
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,176(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
loc_821E5CB4:
	// stw r24,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r24.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821e4fe8
	ctx.lr = 0x821E5CC0;
	sub_821E4FE8(ctx, base);
	// fmadds f31,f26,f21,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(std::fma(f26.f64, f21.f64, f31.f64)));
	// b 0x821e5d0c
	goto loc_821E5D0C;
loc_821E5CC8:
	// bl 0x821e3cf8
	ctx.lr = 0x821E5CCC;
	sub_821E3CF8(ctx, base);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stfs f31,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f29,116(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,176(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f30,180(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// beq cr6,0x821e5cfc
	if (ctx.cr6.eq) goto loc_821E5CFC;
	// fadds f0,f29,f28
	ctx.f0.f64 = double(float(f29.f64 + f28.f64));
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,176(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
loc_821E5CFC:
	// stw r24,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r24.u32);
loc_821E5D00:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e4fe8
	ctx.lr = 0x821E5D08;
	sub_821E4FE8(ctx, base);
	// fmadds f31,f26,f25,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(std::fma(f26.f64, f25.f64, f31.f64)));
loc_821E5D0C:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x821e5d5c
	if (!ctx.cr6.eq) goto loc_821E5D5C;
	// lwzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821e5d5c
	if (!ctx.cr6.gt) goto loc_821E5D5C;
	// lwzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r31.u32);
	// lfs f0,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x821e5d38
	if (!ctx.cr6.lt) goto loc_821E5D38;
	// fmadds f31,f26,f20,f0
	f31.f64 = double(float(std::fma(f26.f64, f20.f64, ctx.f0.f64)));
	// b 0x821e5d3c
	goto loc_821E5D3C;
loc_821E5D38:
	// fmadds f31,f26,f19,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(std::fma(f26.f64, f19.f64, ctx.f0.f64)));
loc_821E5D3C:
	// bl 0x82204da8
	ctx.lr = 0x821E5D40;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e5d50
	if (ctx.cr0.eq) goto loc_821E5D50;
	// fsubs f0,f31,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f18.f64));
	// fmuls f31,f0,f17
	f31.f64 = double(float(ctx.f0.f64 * f17.f64));
loc_821E5D50:
	// fadds f0,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f24.f64));
	// fsubs f29,f0,f23
	f29.f64 = double(float(ctx.f0.f64 - f23.f64));
	// fsubs f27,f29,f22
	f27.f64 = double(float(f29.f64 - f22.f64));
loc_821E5D5C:
	// lwzx r11,r25,r31
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e5c04
	if (ctx.cr6.lt) goto loc_821E5C04;
loc_821E5D6C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f58
	ctx.lr = 0x821E5D78;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821F2370) {
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
	// lwz r3,2956(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// bl 0x822a58e0
	ctx.lr = 0x821F2390;
	sub_822A58E0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3120
	ctx.lr = 0x821F23A4;
	sub_822A3120(ctx, base);
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

DEFINE_REX_FUNC(sub_821F3178) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x821F3180;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f00
	ctx.lr = 0x821F3188;
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821f3c80
	if (ctx.cr6.gt) goto loc_821F3C80;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-4948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4948);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,18484(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 18484);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	ctx.f11.f64 = double(temp.f32);
	// lfs f15,19796(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19796);
	f15.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f17,2000(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2000);
	f17.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f22,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	f22.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f23,27848(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27848);
	f23.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f24,16816(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16816);
	f24.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f25,16588(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16588);
	f25.f64 = double(temp.f32);
	// lfs f29,2388(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2388);
	f29.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f26,31972(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 31972);
	f26.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f27.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f28,20484(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20484);
	f28.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f16,16200(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16200);
	f16.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f18,18480(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 18480);
	f18.f64 = double(temp.f32);
	// lfs f19,2028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2028);
	f19.f64 = double(temp.f32);
	// lfs f20,16260(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16260);
	f20.f64 = double(temp.f32);
	// lfs f21,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	f21.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821F3264:
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,18384
	ctx.r12.s64 = ctx.r12.s64 + 18384;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,12940
	ctx.r12.s64 = ctx.r12.s64 + 12940;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821F3C84;
	case 1:
		goto loc_821F328C;
	case 2:
		goto loc_821F3390;
	case 3:
		goto loc_821F33DC;
	case 4:
		goto loc_821F345C;
	case 5:
		goto loc_821F34E8;
	case 6:
		goto loc_821F35CC;
	case 7:
		goto loc_821F3628;
	case 8:
		goto loc_821F3724;
	case 9:
		goto loc_821F383C;
	case 10:
		goto loc_821F3998;
	case 11:
		goto loc_821F3AB0;
	case 12:
		goto loc_821F3B60;
	case 13:
		goto loc_821F3C60;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821F328C:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f32e0
	if (ctx.cr0.eq) goto loc_821F32E0;
	// stfs f30,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821f3c70
	if (ctx.cr0.eq) goto loc_821F3C70;
	// lwz r9,420(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 420);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_821F32B8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821f33c0
	if (!ctx.cr6.lt) goto loc_821F33C0;
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f32b8
	if (ctx.cr6.lt) goto loc_821F32B8;
	// b 0x821f3c70
	goto loc_821F3C70;
loc_821F32E0:
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821f3338
	if (ctx.cr0.eq) goto loc_821F3338;
	// lwz r9,420(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 420);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_821F3308:
	// lbzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lfsx f13,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x821f332c
	if (ctx.cr6.lt) goto loc_821F332C;
	// li r7,1
	ctx.r7.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821f332c
	if (!ctx.cr6.gt) goto loc_821F332C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821F332C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f3308
	if (ctx.cr6.lt) goto loc_821F3308;
loc_821F3338:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f33c0
	if (ctx.cr0.eq) goto loc_821F33C0;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f13,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f20,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f13.f64)));
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// lbz r11,199(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 199);
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// lfs f0,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bge cr6,0x821f3c70
	if (!ctx.cr6.lt) goto loc_821F3C70;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// b 0x821f3c70
	goto loc_821F3C70;
loc_821F3390:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r24,320
	ctx.r3.s64 = r24.s64 + 320;
	// bl 0x820e2320
	ctx.lr = 0x821F339C;
	sub_820E2320(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821f33c8
	if (ctx.cr6.lt) goto loc_821F33C8;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821f33c8
	if (ctx.cr6.gt) goto loc_821F33C8;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f33d4
	if (ctx.cr0.eq) goto loc_821F33D4;
loc_821F33C0:
	// stfs f31,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// b 0x821f3c84
	goto loc_821F3C84;
loc_821F33C8:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f33c0
	if (ctx.cr0.eq) goto loc_821F33C0;
loc_821F33D4:
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F33DC:
	// addi r4,r24,336
	ctx.r4.s64 = r24.s64 + 336;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1c28
	ctx.lr = 0x821F33E8;
	sub_820E1C28(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f33f8
	if (ctx.cr0.eq) goto loc_821F33F8;
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
loc_821F33F8:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f342c
	if (ctx.cr0.eq) goto loc_821F342C;
	// bge cr6,0x821f33c0
	if (!ctx.cr6.lt) goto loc_821F33C0;
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x821f3430
	if (ctx.cr6.lt) goto loc_821F3430;
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x821f3454
	goto loc_821F3454;
loc_821F342C:
	// blt cr6,0x821f3438
	if (ctx.cr6.lt) goto loc_821F3438;
loc_821F3430:
	// stfs f30,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// b 0x821f33d4
	goto loc_821F33D4;
loc_821F3438:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x821f33c0
	if (ctx.cr6.lt) goto loc_821F33C0;
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
loc_821F3454:
	// stfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// b 0x821f33d4
	goto loc_821F33D4;
loc_821F345C:
	// lfs f0,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x822d6500
	ctx.lr = 0x821F3478;
	sub_822D6500(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820e0778
	ctx.lr = 0x821F3488;
	sub_820E0778(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f34c8
	if (ctx.cr0.eq) goto loc_821F34C8;
	// bl 0x821fed88
	ctx.lr = 0x821F3498;
	sub_821FED88(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x821F34A8;
	sub_821FED88(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x821F34B8;
	sub_821FED88(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// b 0x821f34d4
	goto loc_821F34D4;
loc_821F34C8:
	// stfs f31,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,292(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,288(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
loc_821F34D4:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x820e0368
	ctx.lr = 0x821F34E4;
	sub_820E0368(ctx, base);
	// b 0x821f3c70
	goto loc_821F3C70;
loc_821F34E8:
	// lfs f0,48(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r24,320
	ctx.r5.s64 = r24.s64 + 320;
	// lfs f13,52(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f12,56(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x821F3514;
	sub_820E1BA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x821F3520;
	sub_820E2290(ctx, base);
	// lfs f0,196(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f12,228(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x821F354C;
	sub_820E1C50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x821F3558;
	sub_820E2290(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x821F3568;
	sub_820E1C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2290
	ctx.lr = 0x821F3574;
	sub_820E2290(ctx, base);
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
	// lfs f11,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// stfs f31,12(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 12, temp.u32);
	// stfs f31,28(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 28, temp.u32);
	// stfs f31,44(r23)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 44, temp.u32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f12,8(r23)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r23.u32 + 8, temp.u32);
	// stfs f11,16(r23)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r23.u32 + 16, temp.u32);
	// stfs f10,20(r23)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r23.u32 + 20, temp.u32);
	// stfs f9,24(r23)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r23.u32 + 24, temp.u32);
	// stfs f8,32(r23)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r23.u32 + 32, temp.u32);
	// stfs f7,36(r23)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r23.u32 + 36, temp.u32);
	// stfs f6,40(r23)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r23.u32 + 40, temp.u32);
	// b 0x821f3c70
	goto loc_821F3C70;
loc_821F35CC:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f16
	ctx.f1.f64 = double(float(ctx.f0.f64 * f16.f64));
	// bl 0x820e0028
	ctx.lr = 0x821F35D8;
	sub_820E0028(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f14,f1,f0
	f14.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F35E8;
	sub_820E0028(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f14
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f14.f64)));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821f3604
	if (!ctx.cr6.lt) goto loc_821F3604;
	// stfs f31,0(r22)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
loc_821F3604:
	// lfs f0,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x822d6500
	ctx.lr = 0x821F361C;
	sub_822D6500(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x821f3c70
	goto loc_821F3C70;
loc_821F3628:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// stfs f0,48(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 48, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 52, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 56, temp.u32);
	// stfs f30,60(r23)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r23.u32 + 60, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821f3660
	if (!ctx.cr6.lt) goto loc_821F3660;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x821f367c
	goto loc_821F367C;
loc_821F3660:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821f3680
	if (!ctx.cr6.gt) goto loc_821F3680;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_821F367C:
	// stfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
loc_821F3680:
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821f3690
	if (!ctx.cr6.lt) goto loc_821F3690;
	// stfs f31,0(r22)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
loc_821F3690:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f1,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e1cc0
	ctx.lr = 0x821F36C8;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b28
	ctx.lr = 0x821F36D8;
	sub_820E1B28(ctx, base);
	// lfs f13,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821f371c
	if (!ctx.cr6.gt) goto loc_821F371C;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r8,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r8.u32);
loc_821F371C:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F3724:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r29,r31,2
	r29.s64 = r31.s64 + 2;
	// mr r25,r31
	r25.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f3740
	if (!ctx.cr0.eq) goto loc_821F3740;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
loc_821F3740:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r10,432(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 432);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r11,976
	r31.s64 = ctx.r11.s64 + 976;
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1);
	// beq 0x821f376c
	if (ctx.cr0.eq) goto loc_821F376C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_821F3764:
	// beq 0x821f33c0
	if (ctx.cr0.eq) goto loc_821F33C0;
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F376C:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r10,3(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 3);
	// subfe r26,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r26.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821f37f4
	if (ctx.cr0.eq) goto loc_821F37F4;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f37d4
	if (ctx.cr0.eq) goto loc_821F37D4;
	// addi r27,r24,320
	r27.s64 = r24.s64 + 320;
	// addi r30,r25,16
	r30.s64 = r25.s64 + 16;
loc_821F379C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e1d28
	ctx.lr = 0x821F37AC;
	sub_820E1D28(ctx, base);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821f37d0
	if (ctx.cr6.gt) goto loc_821F37D0;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f379c
	if (ctx.cr6.lt) goto loc_821F379C;
	// b 0x821f37d4
	goto loc_821F37D4;
loc_821F37D0:
	// li r26,1
	r26.s64 = 1;
loc_821F37D4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f3c74
	if (!ctx.cr0.eq) goto loc_821F3C74;
loc_821F37DC:
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f33c0
	if (!ctx.cr0.eq) goto loc_821F33C0;
	// li r26,1
	r26.s64 = 1;
loc_821F37EC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821f3764
	goto loc_821F3764;
loc_821F37F4:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f37ec
	if (ctx.cr0.eq) goto loc_821F37EC;
	// addi r27,r24,320
	r27.s64 = r24.s64 + 320;
	// addi r30,r25,16
	r30.s64 = r25.s64 + 16;
loc_821F3808:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e1d28
	ctx.lr = 0x821F3818;
	sub_820E1D28(ctx, base);
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821f37dc
	if (ctx.cr6.lt) goto loc_821F37DC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f3808
	if (ctx.cr6.lt) goto loc_821F3808;
	// b 0x821f37ec
	goto loc_821F37EC;
loc_821F383C:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
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
	// bl 0x820e0ec8
	ctx.lr = 0x821F3850;
	sub_820E0EC8(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stfs f0,512(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,520(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f30,524(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x821F387C;
	sub_820E0368(ctx, base);
	// lfs f0,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f14,f0,f13
	f14.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821fed88
	ctx.lr = 0x821F3890;
	sub_821FED88(ctx, base);
	// fmadds f0,f1,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, f26.f64)));
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f14,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f14.f64, ctx.f13.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x821F38A4;
	sub_821FED88(ctx, base);
	// fmadds f0,f1,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f25.f64)));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f14,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f14.f64, ctx.f13.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x821F38B8;
	sub_821FED88(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmadds f0,f0,f14,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f14.f64, ctx.f13.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x821F38D0;
	sub_821FED88(ctx, base);
	// fmadds f0,f1,f24,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f24.f64, f29.f64)));
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f0,f0,f14,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f14.f64, -ctx.f13.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F38E8;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F3900;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F3918;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F3930;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821F3948;
	sub_820E0028(ctx, base);
	// fmsubs f0,f1,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, -f22.f64)));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821F3960;
	sub_820E0028(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F3974;
	sub_820E0028(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F3988;
	sub_820E0028(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x821f371c
	goto loc_821F371C;
loc_821F3998:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lfs f3,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f2,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0d78
	ctx.lr = 0x821F39B0;
	sub_820E0D78(ctx, base);
	// lfs f0,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,428(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x821f3a54
	if (!ctx.cr6.gt) goto loc_821F3A54;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f3a10
	if (ctx.cr0.eq) goto loc_821F3A10;
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x821f3a10
	if (!ctx.cr6.eq) goto loc_821F3A10;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8212b990
	ctx.lr = 0x821F3A10;
	sub_8212B990(ctx, base);
loc_821F3A10:
	// lfs f13,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f17,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f17.f64, ctx.f10.f64)));
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x821f3a54
	if (!ctx.cr6.gt) goto loc_821F3A54;
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
loc_821F3A54:
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F3A5C;
	sub_820E0028(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f30.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f1,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F3A70;
	sub_820E0028(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f30.f64)));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f1,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821F3A84;
	sub_820E0028(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f30.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6130
	ctx.lr = 0x821F3A98;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F3AB0:
	// lfs f0,428(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x822d6500
	ctx.lr = 0x821F3ACC;
	sub_822D6500(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f3,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x821F3AE8;
	sub_820E0EC8(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// bl 0x820e02d8
	ctx.lr = 0x821F3B0C;
	sub_820E02D8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f3,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x821F3B20;
	sub_820E0EC8(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x821F3B48;
	sub_820E0368(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x820e0368
	ctx.lr = 0x821F3B58;
	sub_820E0368(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F3B60:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x821f3bc4
	if (!ctx.cr6.eq) goto loc_821F3BC4;
	// lwz r11,432(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 432);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f3bb8
	if (ctx.cr0.eq) goto loc_821F3BB8;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f3bb8
	if (!ctx.cr0.eq) goto loc_821F3BB8;
	// bl 0x821fed88
	ctx.lr = 0x821F3B8C;
	sub_821FED88(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f15,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f15.f64, ctx.f0.f64)));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x821f3bc4
	goto loc_821F3BC4;
loc_821F3BB8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x821f33d4
	if (ctx.cr6.eq) goto loc_821F33D4;
loc_821F3BC4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821f3bec
	if (ctx.cr6.lt) goto loc_821F3BEC;
	// lfs f0,428(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f12,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f13.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_821F3BEC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821f3c38
	if (!ctx.cr6.lt) goto loc_821F3C38;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 * f17.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r10.u8);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// ble cr6,0x821f3c38
	if (!ctx.cr6.gt) goto loc_821F3C38;
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// stb r21,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r21.u8);
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F3C38:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// lfs f0,428(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,52(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,52(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 52, temp.u32);
	// b 0x821f3c74
	goto loc_821F3C74;
loc_821F3C60:
	// lwz r11,432(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 432);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f3c70
	if (ctx.cr0.eq) goto loc_821F3C70;
	// stfs f31,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
loc_821F3C70:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_821F3C74:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x821f3264
	if (!ctx.cr6.gt) goto loc_821F3264;
loc_821F3C80:
	// stb r21,0(r31)
	REX_STORE_U8(r31.u32 + 0, r21.u8);
loc_821F3C84:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f4c
	ctx.lr = 0x821F3C90;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8222EB30) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-5889(r10)
	REX_STORE_U8(ctx.r10.u32 + -5889, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222EC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r3,23792
	ctx.r10.s64 = ctx.r3.s64 + 23792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222EC64:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8222ec64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222EC64;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222FCD8) {
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
	ctx.lr = 0x8222FCE0;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r3,23772
	r30.s64 = ctx.r3.s64 + 23772;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222fd10
	if (ctx.cr0.eq) goto loc_8222FD10;
loc_8222FD00:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8222f888
	ctx.lr = 0x8222FD08;
	sub_8222F888(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82230038
	goto loc_82230038;
loc_8222FD10:
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6450
	ctx.lr = 0x8222FD1C;
	sub_822D6450(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222FD2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222fd2c
	if (!ctx.cr6.eq) goto loc_8222FD2C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222fd7c
	if (ctx.cr6.lt) goto loc_8222FD7C;
loc_8222FD60:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x8222fd7c
	if (ctx.cr6.eq) goto loc_8222FD7C;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222fd60
	if (!ctx.cr6.lt) goto loc_8222FD60;
loc_8222FD7C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x8222fd00
	if (!ctx.cr6.eq) goto loc_8222FD00;
	// stb r25,0(r31)
	REX_STORE_U8(r31.u32 + 0, r25.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824d417c
	ctx.lr = 0x8222FD98;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,11032
	ctx.r3.s64 = ctx.r11.s64 + 11032;
	// bl 0x824d46ec
	ctx.lr = 0x8222FDA8;
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222fd00
	if (ctx.cr0.lt) goto loc_8222FD00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-17572
	ctx.r5.s64 = ctx.r11.s64 + -17572;
	// addi r4,r10,-17580
	ctx.r4.s64 = ctx.r10.s64 + -17580;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x824d44ec
	ctx.lr = 0x8222FDCC;
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8222f0b8
	ctx.lr = 0x8222FDDC;
	sub_8222F0B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222fd00
	if (ctx.cr0.lt) goto loc_8222FD00;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6450
	ctx.lr = 0x8222FDF4;
	sub_822D6450(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222FE00:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222fe00
	if (!ctx.cr6.eq) goto loc_8222FE00;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222fe60
	if (ctx.cr6.lt) goto loc_8222FE60;
loc_8222FE38:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x8222fe60
	if (ctx.cr6.eq) goto loc_8222FE60;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8222fe60
	if (ctx.cr6.eq) goto loc_8222FE60;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222fe38
	if (!ctx.cr6.lt) goto loc_8222FE38;
loc_8222FE60:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x8222fe70
	if (ctx.cr6.eq) goto loc_8222FE70;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8222FE70:
	// lwz r10,596(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 596);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm. r10,r10,0,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,4256
	r27.s64 = ctx.r11.s64 + 4256;
	// beq 0x8222ff54
	if (ctx.cr0.eq) goto loc_8222FF54;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lis r26,-32163
	r26.s64 = -2107834368;
loc_8222FE90:
	// lbz r11,-5892(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + -5892);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222fd00
	if (!ctx.cr0.eq) goto loc_8222FD00;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d44ec
	ctx.lr = 0x8222FEBC;
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822099f8
	ctx.lr = 0x8222FEDC;
	sub_822099F8(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222fd00
	if (ctx.cr6.eq) goto loc_8222FD00;
	// lwz r11,596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 596);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222ff1c
	if (!ctx.cr6.eq) goto loc_8222FF1C;
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ff10
	if (ctx.cr6.eq) goto loc_8222FF10;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// b 0x8222ff24
	goto loc_8222FF24;
loc_8222FF10:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x8222ff24
	goto loc_8222FF24;
loc_8222FF1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r11,r11,65520
	ctx.r11.u64 = ctx.r11.u64 | 4293918720;
loc_8222FF24:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823cd720
	ctx.lr = 0x8222FF38;
	sub_823CD720(ctx, base);
	// lwzu r3,4(r28)
	ea = 4 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// bl 0x823cd678
	ctx.lr = 0x8222FF40;
	sub_823CD678(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 596);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222fe90
	if (ctx.cr6.lt) goto loc_8222FE90;
loc_8222FF54:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8222FF64:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d44ec
	ctx.lr = 0x8222FF78;
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x823cd890
	ctx.lr = 0x8222FF84;
	sub_823CD890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222ff64
	if (!ctx.cr0.eq) goto loc_8222FF64;
	// stw r25,348(r30)
	REX_STORE_U32(r30.u32 + 348, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,352(r30)
	REX_STORE_U32(r30.u32 + 352, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,356(r30)
	REX_STORE_U32(r30.u32 + 356, r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,360(r30)
	REX_STORE_U32(r30.u32 + 360, r25.u32);
	// addi r31,r30,348
	r31.s64 = r30.s64 + 348;
	// stw r25,364(r30)
	REX_STORE_U32(r30.u32 + 364, r25.u32);
	// bl 0x822095c0
	ctx.lr = 0x8222FFB4;
	sub_822095C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,364(r30)
	REX_STORE_U32(r30.u32 + 364, ctx.r3.u32);
	// beq 0x8222fd00
	if (ctx.cr0.eq) goto loc_8222FD00;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,356(r30)
	REX_STORE_U32(r30.u32 + 356, r25.u32);
	// stw r25,360(r30)
	REX_STORE_U32(r30.u32 + 360, r25.u32);
	// bl 0x822d5870
	ctx.lr = 0x8222FFD8;
	sub_822D5870(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x822098d0
	ctx.lr = 0x8222FFF0;
	sub_822098D0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 364);
	// bl 0x8220aa00
	ctx.lr = 0x8222FFFC;
	sub_8220AA00(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x824d45fc
	ctx.lr = 0x82230004;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lbz r10,600(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r30)
	REX_STORE_U32(r30.u32 + 380, ctx.r11.u32);
	// lwz r9,596(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 596);
	// stw r25,584(r30)
	REX_STORE_U32(r30.u32 + 584, r25.u32);
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r9,596(r30)
	REX_STORE_U32(r30.u32 + 596, ctx.r9.u32);
	// lbz r11,389(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 389);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwimi r10,r11,2,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,600(r30)
	REX_STORE_U8(r30.u32 + 600, ctx.r10.u8);
loc_82230038:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8223BB70) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bbd0
	if (ctx.cr6.eq) goto loc_8223BBD0;
	// ld r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
loc_8223BB90:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8223bbb0
	if (ctx.cr6.lt) goto loc_8223BBB0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223bb90
	if (!ctx.cr6.eq) goto loc_8223BB90;
loc_8223BBB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223bbf4
	if (!ctx.cr6.eq) goto loc_8223BBF4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223bbd0
	if (ctx.cr6.eq) goto loc_8223BBD0;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8223bc30
	if (ctx.cr6.eq) goto loc_8223BC30;
loc_8223BBD0:
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bbe8
	if (ctx.cr6.eq) goto loc_8223BBE8;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8223bbec
	goto loc_8223BBEC;
loc_8223BBE8:
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_8223BBEC:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8223BBF4:
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8223bc30
	if (ctx.cr6.eq) goto loc_8223BC30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8223bc20
	if (!ctx.cr6.eq) goto loc_8223BC20;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8223bbec
	goto loc_8223BBEC;
loc_8223BC20:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8223BC30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82240C78) {
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
	ctx.lr = 0x82240C80;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7872(r1)
	ea = -7872 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82240cc0
	if (ctx.cr6.lt) goto loc_82240CC0;
	// beq cr6,0x82240cb8
	if (ctx.cr6.eq) goto loc_82240CB8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82240cb0
	if (ctx.cr6.lt) goto loc_82240CB0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x822d4eb4
	return;
loc_82240CB0:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x82240cc4
	goto loc_82240CC4;
loc_82240CB8:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x82240cc4
	goto loc_82240CC4;
loc_82240CC0:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_82240CC4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,1360
	ctx.r7.s64 = ctx.r1.s64 + 1360;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,640
	ctx.r3.s64 = r30.s64 + 640;
	// bl 0x82243490
	ctx.lr = 0x82240CDC;
	sub_82243490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8224129c
	if (!ctx.cr6.eq) goto loc_8224129C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82241608
	ctx.lr = 0x82240D00;
	sub_82241608(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v58,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v56,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v54,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// vcfpsxws128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v51,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v55,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v53,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v52,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// vcfpsxws128 v38,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vcfpsxws128 v37,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vcfpsxws128 v36,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// vcfpsxws128 v35,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v48.f32)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lvx128 v45,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lvx128 v44,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v62,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// lvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v41,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v59,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v59.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// lvx128 v40,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// vcfpsxws128 v34,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// li r4,80
	ctx.r4.s64 = 80;
	// vcfpsxws128 v33,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// li r11,96
	ctx.r11.s64 = 96;
	// vcfpsxws128 v32,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// li r10,112
	ctx.r10.s64 = 112;
	// vcfpsxws128 v63,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// li r9,128
	ctx.r9.s64 = 128;
	// vcfpsxws128 v61,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// li r30,144
	r30.s64 = 144;
	// vcfpsxws128 v60,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// li r29,160
	r29.s64 = 160;
	// vcfpsxws128 v58,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// li r28,176
	r28.s64 = 176;
	// vpkswss128 v57,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// li r27,192
	r27.s64 = 192;
	// vcfpsxws128 v56,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r26,208
	r26.s64 = 208;
	// vcfpsxws128 v55,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// li r25,224
	r25.s64 = 224;
	// addi r24,r1,368
	r24.s64 = ctx.r1.s64 + 368;
	// vpkswss128 v54,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v54.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r23,r1,416
	r23.s64 = ctx.r1.s64 + 416;
	// vpkswss128 v53,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v53.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// addi r22,r1,400
	r22.s64 = ctx.r1.s64 + 400;
	// vpkswss128 v52,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v52.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// addi r21,r1,448
	r21.s64 = ctx.r1.s64 + 448;
	// vpkswss128 v51,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// addi r20,r1,432
	r20.s64 = ctx.r1.s64 + 432;
	// vpkswss128 v50,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v50.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// lvx128 v49,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,480
	r19.s64 = ctx.r1.s64 + 480;
	// lvx128 v48,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,464
	r24.s64 = ctx.r1.s64 + 464;
	// lvx128 v47,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,512
	r23.s64 = ctx.r1.s64 + 512;
	// addi r22,r1,496
	r22.s64 = ctx.r1.s64 + 496;
	// lvx128 v46,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v42,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// lvx128 v44,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v43,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// lvx128 v41,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,544
	r21.s64 = ctx.r1.s64 + 544;
	// lvx128 v39,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,528
	r20.s64 = ctx.r1.s64 + 528;
	// vcfpsxws128 v40,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v48.f32)));
	// addi r24,r1,576
	r24.s64 = ctx.r1.s64 + 576;
	// vcfpsxws128 v38,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// addi r23,r1,560
	r23.s64 = ctx.r1.s64 + 560;
	// vcfpsxws128 v33,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// addi r22,r1,608
	r22.s64 = ctx.r1.s64 + 608;
	// vcfpsxws128 v32,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// lvx128 v36,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v34,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v61,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// addi r21,r1,592
	r21.s64 = ctx.r1.s64 + 592;
	// vcfpsxws128 v60,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// addi r20,r1,640
	r20.s64 = ctx.r1.s64 + 640;
	// vcfpsxws128 v49,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vpkswss128 v46,v42,v55
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkswss128 v48,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// addi r19,r1,624
	r19.s64 = ctx.r1.s64 + 624;
	// vpkswss128 v39,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v39.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// lvx128 v47,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v43,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,240
	r24.s64 = 240;
	// lvx128 v41,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vpkswss128 v42,v38,v40
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v38.s32)));
	// lvx128 v40,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,256
	ctx.r8.s64 = 256;
	// vpkswss128 v36,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v36.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// stvx128 v57,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// vpkswss128 v35,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// stvx128 v53,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,272
	ctx.r7.s64 = 272;
	// stvx128 v62,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v33,v49,v60
	simde_mm_store_si128((simde__m128i*)ctx.v33.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// stvx128 v52,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// stvx128 v51,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,288
	ctx.r6.s64 = 288;
	// stvx128 v50,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// stvx128 v48,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,304
	ctx.r5.s64 = 304;
	// stvx128 v46,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r31,r29
	ea = (r31.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r28
	ea = (r31.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// vpkswss128 v60,v32,v34
	simde_mm_store_si128((simde__m128i*)ctx.v60.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// vcfpsxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// vpkswss128 v61,v37,v43
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stvx128 v33,r31,r25
	ea = (r31.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,736
	r30.s64 = ctx.r1.s64 + 736;
	// lvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,720
	r29.s64 = ctx.r1.s64 + 720;
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// lvx128 v56,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v55,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// lvx128 v50,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// lvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,784
	ctx.r9.s64 = ctx.r1.s64 + 784;
	// lvx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,816
	r30.s64 = ctx.r1.s64 + 816;
	// stvx128 v60,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,832
	ctx.r8.s64 = ctx.r1.s64 + 832;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// vcfpsxws128 v53,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// vcfpsxws128 v51,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v49,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v52.f32)));
	// lvx128 v44,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v48,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// lvx128 v43,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lvx128 v41,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,880
	ctx.r9.s64 = ctx.r1.s64 + 880;
	// lvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// lvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,912
	r30.s64 = ctx.r1.s64 + 912;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vpkswss128 v57,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v47,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v36,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,320
	ctx.r10.s64 = 320;
	// lvx128 v35,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,336
	ctx.r9.s64 = 336;
	// lvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v55,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// lvx128 v33,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,352
	ctx.r8.s64 = 352;
	// vpkswss128 v53,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v53.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// stvx128 v61,r31,r24
	ea = (r31.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,368
	ctx.r4.s64 = 368;
	// vcfpsxws128 v32,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// li r11,384
	ctx.r11.s64 = 384;
	// vcfpsxws128 v63,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// li r30,400
	r30.s64 = 400;
	// vcfpsxws128 v62,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// li r29,416
	r29.s64 = 416;
	// vcfpsxws128 v61,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// li r28,432
	r28.s64 = 432;
	// vcfpsxws128 v60,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// li r27,448
	r27.s64 = 448;
	// vcfpsxws128 v59,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// li r26,464
	r26.s64 = 464;
	// vcfpsxws128 v58,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r25,480
	r25.s64 = 480;
	// vcfpsxws128 v56,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpsxws128 v54,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpsxws128 v52,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpsxws128 v51,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpsxws128 v50,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v35.f32)));
	// vcfpsxws128 v49,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v48,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v33.f32)));
	// addi r24,r1,992
	r24.s64 = ctx.r1.s64 + 992;
	// vpkswss128 v46,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// addi r23,r1,976
	r23.s64 = ctx.r1.s64 + 976;
	// vpkswss128 v45,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v45.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// addi r22,r1,1024
	r22.s64 = ctx.r1.s64 + 1024;
	// vpkswss128 v44,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v44.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// addi r21,r1,1008
	r21.s64 = ctx.r1.s64 + 1008;
	// vpkswss128 v43,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// addi r20,r1,1056
	r20.s64 = ctx.r1.s64 + 1056;
	// stvx128 v57,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,1040
	r19.s64 = ctx.r1.s64 + 1040;
	// lvx128 v41,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v39,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v38,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// lvx128 v36,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v34,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v33,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v36.f32)));
	// lvx128 v32,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v62,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v32.f32)));
	// addi r24,r1,1088
	r24.s64 = ctx.r1.s64 + 1088;
	// addi r23,r1,1072
	r23.s64 = ctx.r1.s64 + 1072;
	// vpkswss128 v42,v52,v54
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// addi r22,r1,1120
	r22.s64 = ctx.r1.s64 + 1120;
	// vpkswss128 v60,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v60.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// stvx128 v47,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// vpkswss128 v61,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// lvx128 v59,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,1104
	r21.s64 = ctx.r1.s64 + 1104;
	// lvx128 v58,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,1184
	r24.s64 = ctx.r1.s64 + 1184;
	// lvx128 v57,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,1168
	r23.s64 = ctx.r1.s64 + 1168;
	// addi r22,r1,1216
	r22.s64 = ctx.r1.s64 + 1216;
	// vpkswss128 v56,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s32), simde_mm_load_si128((simde__m128i*)ctx.v37.s32)));
	// addi r20,r1,1200
	r20.s64 = ctx.r1.s64 + 1200;
	// lvx128 v51,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v52,v33,v35
	simde_mm_store_si128((simde__m128i*)ctx.v52.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// lvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v49,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vpkswss128 v48,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v47,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,496
	ctx.r7.s64 = 496;
	// lvx128 v40,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v39,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v38,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,512
	ctx.r6.s64 = 512;
	// stvx128 v55,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v53,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,528
	ctx.r5.s64 = 528;
	// stvx128 v46,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v36,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// stvx128 v45,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,544
	ctx.r10.s64 = 544;
	// stvx128 v44,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// stvx128 v43,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,560
	ctx.r9.s64 = 560;
	// stvx128 v42,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// stvx128 v61,r31,r29
	ea = (r31.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,576
	ctx.r8.s64 = 576;
	// stvx128 v60,r31,r28
	ea = (r31.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v33,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// stvx128 v56,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,592
	ctx.r4.s64 = 592;
	// stvx128 v52,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v41.f32)));
	// stvx128 v48,r31,r25
	ea = (r31.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,608
	ctx.r11.s64 = 608;
	// vcfpsxws128 v63,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v40.f32)));
	// li r30,624
	r30.s64 = 624;
	// vcfpsxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// addi r29,r1,1248
	r29.s64 = ctx.r1.s64 + 1248;
	// vpkswss128 v61,v39,v49
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v39.s32)));
	// addi r28,r1,1232
	r28.s64 = ctx.r1.s64 + 1232;
	// vpkswss128 v60,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v60.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v36.s32)));
	// addi r27,r1,1280
	r27.s64 = ctx.r1.s64 + 1280;
	// vpkswss128 v59,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v59.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s32), simde_mm_load_si128((simde__m128i*)ctx.v34.s32)));
	// addi r26,r1,1264
	r26.s64 = ctx.r1.s64 + 1264;
	// vpkswss128 v58,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v58.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// addi r25,r1,1312
	r25.s64 = ctx.r1.s64 + 1312;
	// vpkswss128 v57,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// lvx128 v56,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,1296
	r24.s64 = ctx.r1.s64 + 1296;
	// lvx128 v55,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,1344
	r29.s64 = ctx.r1.s64 + 1344;
	// addi r28,r1,1328
	r28.s64 = ctx.r1.s64 + 1328;
	// lvx128 v54,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v52,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v51,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v50,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v55.f32)));
	// lvx128 v49,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v48,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v47,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v46,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v53.f32)));
	// lvx128 v45,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v44,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v43,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v42,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// stvx128 v60,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v41,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// stvx128 v59,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v40,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v40.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vpkswss128 v39,v46,v48
	simde_mm_store_si128((simde__m128i*)ctx.v39.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vpkswss128 v38,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vpkswss128 v37,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v37.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// stvx128 v40,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8224129C:
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8227A888) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82246220
	ctx.lr = 0x8227A8A8;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227a8f4
	if (ctx.cr0.lt) goto loc_8227A8F4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227a8ec
	if (ctx.cr6.eq) goto loc_8227A8EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8227a8ec
	if (!ctx.cr6.eq) goto loc_8227A8EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8227a8e4
	if (ctx.cr6.eq) goto loc_8227A8E4;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227a778
	ctx.lr = 0x8227A8E4;
	sub_8227A778(ctx, base);
loc_8227A8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227a8f4
	goto loc_8227A8F4;
loc_8227A8EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8227A8F4:
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

DEFINE_REX_FUNC(sub_8227BAC0) {
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
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227bae8
	if (!ctx.cr0.eq) goto loc_8227BAE8;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x8227BAE8;
	sub_82255B70(ctx, base);
loc_8227BAE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8227CAB0) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8227c8e8
	ctx.lr = 0x8227CADC;
	sub_8227C8E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x8227CAE8;
	sub_82255B70(ctx, base);
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

DEFINE_REX_FUNC(sub_8227D458) {
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
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8227d398
	ctx.lr = 0x8227D474;
	sub_8227D398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227DC30) {
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
	ctx.lr = 0x8227DC38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r28.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// beq cr6,0x8227dd90
	if (ctx.cr6.eq) goto loc_8227DD90;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227dd90
	if (ctx.cr0.eq) goto loc_8227DD90;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82246118
	ctx.lr = 0x8227DC70;
	sub_82246118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227ddb4
	if (ctx.cr0.lt) goto loc_8227DDB4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227d680
	ctx.lr = 0x8227DC80;
	sub_8227D680(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227ddb4
	if (ctx.cr0.lt) goto loc_8227DDB4;
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822555b8
	ctx.lr = 0x8227DC98;
	sub_822555B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8227dcb4
	if (ctx.cr6.eq) goto loc_8227DCB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8227dcc0
	if (!ctx.cr6.eq) goto loc_8227DCC0;
loc_8227DCB4:
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,19
	r30.u64 = r30.u64 | 19;
	// b 0x8227ddb4
	goto loc_8227DDB4;
loc_8227DCC0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82255b48
	ctx.lr = 0x8227DCC8;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227dd04
	if (ctx.cr0.eq) goto loc_8227DD04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// addi r11,r11,1464
	ctx.r11.s64 = ctx.r11.s64 + 1464;
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// b 0x8227dd08
	goto loc_8227DD08;
loc_8227DD04:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8227DD08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227dd1c
	if (!ctx.cr6.eq) goto loc_8227DD1C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8227ddb4
	goto loc_8227DDB4;
loc_8227DD1C:
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DD58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227dd98
	if (ctx.cr0.lt) goto loc_8227DD98;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d5c0
	ctx.lr = 0x8227DD80;
	sub_8227D5C0(ctx, base);
	// stw r28,28(r29)
	REX_STORE_U32(r29.u32 + 28, r28.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// b 0x8227ddb4
	goto loc_8227DDB4;
loc_8227DD90:
	// lis r30,-32720
	r30.s64 = -2144337920;
	// ori r30,r30,18
	r30.u64 = r30.u64 | 18;
loc_8227DD98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227ddb4
	if (ctx.cr6.eq) goto loc_8227DDB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DDB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DDB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246088
	ctx.lr = 0x8227DDBC;
	sub_82246088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82284670) {
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
	ctx.lr = 0x82284678;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822846a4
	if (ctx.cr6.eq) goto loc_822846A4;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
loc_822846A4:
	// lwz r20,308(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x822846b4
	if (ctx.cr6.eq) goto loc_822846B4;
	// stw r30,0(r20)
	REX_STORE_U32(r20.u32 + 0, r30.u32);
loc_822846B4:
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822846cc
	if (!ctx.cr0.eq) goto loc_822846CC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82284854
	goto loc_82284854;
loc_822846CC:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x822846e0
	if (!ctx.cr6.eq) goto loc_822846E0;
	// lis r24,32767
	r24.s64 = 2147418112;
	// ori r24,r24,65535
	r24.u64 = r24.u64 | 65535;
	// b 0x822846f0
	goto loc_822846F0;
loc_822846E0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82284850
	if (ctx.cr6.lt) goto loc_82284850;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// beq cr6,0x82284850
	if (ctx.cr6.eq) goto loc_82284850;
loc_822846F0:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82280900
	ctx.lr = 0x822846FC;
	sub_82280900(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r28,r9,r10
	r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82284724
	if (ctx.cr0.eq) goto loc_82284724;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82284850
	if (ctx.cr6.gt) goto loc_82284850;
loc_82284724:
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// beq cr6,0x82284754
	if (ctx.cr6.eq) goto loc_82284754;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82284754
	if (ctx.cr6.eq) goto loc_82284754;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r3
	ctx.r7.u64 = uint32_t((ctx.r3.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r10.s32 / ctx.r3.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_82284754:
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82283938
	ctx.lr = 0x8228477C;
	sub_82283938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82284854
	if (ctx.cr0.lt) goto loc_82284854;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82284850
	if (!ctx.cr6.gt) goto loc_82284850;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x82284798;
	sub_82255B48(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x822847ac
	if (!ctx.cr0.eq) goto loc_822847AC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82284854
	goto loc_82284854;
loc_822847AC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// ble cr6,0x82284838
	if (!ctx.cr6.gt) goto loc_82284838;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_822847D0:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// subf r6,r11,r24
	ctx.r6.u64 = r24.u64 - ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82283208
	ctx.lr = 0x82284808;
	sub_82283208(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8228485c
	if (ctx.cr0.lt) goto loc_8228485C;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82284824
	if (!ctx.cr6.eq) goto loc_82284824;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_82284824:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822847d0
	if (ctx.cr6.lt) goto loc_822847D0;
loc_82284838:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82284844
	if (ctx.cr6.eq) goto loc_82284844;
	// stw r27,0(r21)
	REX_STORE_U32(r21.u32 + 0, r27.u32);
loc_82284844:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82284850
	if (ctx.cr6.eq) goto loc_82284850;
	// stw r23,0(r20)
	REX_STORE_U32(r20.u32 + 0, r23.u32);
loc_82284850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82284854:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_8228485C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82255b70
	ctx.lr = 0x82284864;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82284854
	goto loc_82284854;
}

DEFINE_REX_FUNC(sub_8228A880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8228A888;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A8B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A8CC;
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
	// bne 0x8228a8ec
	if (!ctx.cr0.eq) goto loc_8228A8EC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
loc_8228A8EC:
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8228a904
	if (!ctx.cr6.eq) goto loc_8228A904;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8228a988
	goto loc_8228A988;
loc_8228A904:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82255b48
	ctx.lr = 0x8228A90C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228a938
	if (ctx.cr0.eq) goto loc_8228A938;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8228a93c
	goto loc_8228A93C;
loc_8228A938:
	// li r30,0
	r30.s64 = 0;
loc_8228A93C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8228a958
	if (!ctx.cr6.eq) goto loc_8228A958;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8228A94C;
	sub_822D7B58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8228a994
	goto loc_8228A994;
loc_8228A958:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82284b48
	ctx.lr = 0x8228A964;
	sub_82284B48(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82222dc0
	ctx.lr = 0x8228A978;
	sub_82222DC0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_8228A988:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8228A990;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228A994:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228FAE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_8228FB14:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8228fb14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228FB14;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// addi r10,r10,12748
	ctx.r10.s64 = ctx.r10.s64 + 12748;
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f13,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f13,188(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r10,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stw r9,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
	// stw r7,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82292540) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82292548;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f2c
	ctx.lr = 0x82292550;
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// stw r27,36(r30)
	REX_STORE_U32(r30.u32 + 36, r27.u32);
	// stw r27,44(r30)
	REX_STORE_U32(r30.u32 + 44, r27.u32);
	// stw r27,48(r30)
	REX_STORE_U32(r30.u32 + 48, r27.u32);
	// stw r11,864(r1)
	REX_STORE_U32(ctx.r1.u32 + 864, ctx.r11.u32);
	// bl 0x82255b48
	ctx.lr = 0x8229258C;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822925ac
	if (ctx.cr0.eq) goto loc_822925AC;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x822951b8
	ctx.lr = 0x822925A4;
	sub_822951B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x822925b0
	goto loc_822925B0;
loc_822925AC:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_822925B0:
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292850
	if (ctx.cr6.eq) goto loc_82292850;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822925f8
	if (ctx.cr6.eq) goto loc_822925F8;
	// lwz r29,36(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822925f0
	if (ctx.cr6.eq) goto loc_822925F0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82293fc0
	ctx.lr = 0x822925E8;
	sub_82293FC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x822925F0;
	sub_82255B70(ctx, base);
loc_822925F0:
	// stw r27,36(r30)
	REX_STORE_U32(r30.u32 + 36, r27.u32);
	// b 0x82292858
	goto loc_82292858;
loc_822925F8:
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822917c8
	ctx.lr = 0x82292600;
	sub_822917C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229263c
	if (ctx.cr0.eq) goto loc_8229263C;
	// lwz r31,36(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822940b8
	ctx.lr = 0x82292618;
	sub_822940B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82292620:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822927dc
	if (!ctx.cr0.eq) goto loc_822927DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82292620
	if (ctx.cr6.lt) goto loc_82292620;
loc_8229263C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292764
	if (ctx.cr6.eq) goto loc_82292764;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x82292650;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82292670
	if (ctx.cr0.eq) goto loc_82292670;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x822951b8
	ctx.lr = 0x82292668;
	sub_822951B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82292674
	goto loc_82292674;
loc_82292670:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82292674:
	// stw r31,40(r30)
	REX_STORE_U32(r30.u32 + 40, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292850
	if (ctx.cr6.eq) goto loc_82292850;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82292744
	if (!ctx.cr6.eq) goto loc_82292744;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bl 0x822917c8
	ctx.lr = 0x82292698;
	sub_822917C8(ctx, base);
	// clrlwi r31,r3,24
	r31.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822917c8
	ctx.lr = 0x822926A4;
	sub_822917C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82292744
	if (!ctx.cr6.eq) goto loc_82292744;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822917c8
	ctx.lr = 0x822926B8;
	sub_822917C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82292764
	if (ctx.cr0.eq) goto loc_82292764;
	// lwz r31,36(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294048
	ctx.lr = 0x822926D0;
	sub_82294048(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// bne cr6,0x82292744
	if (!ctx.cr6.eq) goto loc_82292744;
	// lwz r31,40(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822940b8
	ctx.lr = 0x822926F8;
	sub_822940B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// bne cr6,0x82292744
	if (!ctx.cr6.eq) goto loc_82292744;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_8229271C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8229273c
	if (!ctx.cr0.eq) goto loc_8229273C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8229271c
	if (!ctx.cr6.eq) goto loc_8229271C;
loc_8229273C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82292764
	if (ctx.cr0.eq) goto loc_82292764;
loc_82292744:
	// lwz r31,40(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292760
	if (ctx.cr6.eq) goto loc_82292760;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82293fc0
	ctx.lr = 0x82292758;
	sub_82293FC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82292760;
	sub_82255B70(ctx, base);
loc_82292760:
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
loc_82292764:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f0,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x82255b48
	ctx.lr = 0x82292778;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822927bc
	if (ctx.cr0.eq) goto loc_822927BC;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229279c
	if (ctx.cr6.eq) goto loc_8229279C;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822927a0
	goto loc_822927A0;
loc_8229279C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822927A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82294208
	ctx.lr = 0x822927B0;
	sub_82294208(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822927c0
	goto loc_822927C0;
loc_822927BC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822927C0:
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292850
	if (ctx.cr6.eq) goto loc_82292850;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822927e8
	if (ctx.cr6.eq) goto loc_822927E8;
loc_822927DC:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x82292858
	goto loc_82292858;
loc_822927E8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822928c0
	if (ctx.cr6.eq) goto loc_822928C0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x822927FC;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82292840
	if (ctx.cr0.eq) goto loc_82292840;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292820
	if (ctx.cr6.eq) goto loc_82292820;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82292824
	goto loc_82292824;
loc_82292820:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82292824:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82294208
	ctx.lr = 0x82292834;
	sub_82294208(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x82292844
	goto loc_82292844;
loc_82292840:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82292844:
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292870
	if (!ctx.cr6.eq) goto loc_82292870;
loc_82292850:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_82292858:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82291b40
	ctx.lr = 0x82292860;
	sub_82291B40(ctx, base);
	// lwz r3,864(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x822d7b58
	ctx.lr = 0x82292868;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82292be4
	goto loc_82292BE4;
loc_82292870:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822928c0
	if (ctx.cr6.eq) goto loc_822928C0;
	// lwz r31,40(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8229289c
	if (ctx.cr6.eq) goto loc_8229289C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82293fc0
	ctx.lr = 0x82292894;
	sub_82293FC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8229289C;
	sub_82255B70(ctx, base);
loc_8229289C:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822928bc
	if (ctx.cr6.eq) goto loc_822928BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294480
	ctx.lr = 0x822928B4;
	sub_82294480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822928BC;
	sub_82255B70(ctx, base);
loc_822928BC:
	// stw r27,48(r30)
	REX_STORE_U32(r30.u32 + 48, r27.u32);
loc_822928C0:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822948e8
	ctx.lr = 0x822928D0;
	sub_822948E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822928dc
	if (ctx.cr0.eq) goto loc_822928DC;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822928DC:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fmr f25,f31
	f25.f64 = f31.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292934
	if (ctx.cr6.eq) goto loc_82292934;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822948e8
	ctx.lr = 0x822928FC;
	sub_822948E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292908
	if (ctx.cr0.eq) goto loc_82292908;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292908:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82292934
	if (ctx.cr6.gt) goto loc_82292934;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822948e8
	ctx.lr = 0x82292924;
	sub_822948E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292930
	if (ctx.cr0.eq) goto loc_82292930;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292930:
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f25.f64 = double(temp.f32);
loc_82292934:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822949a0
	ctx.lr = 0x82292944;
	sub_822949A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292950
	if (ctx.cr0.eq) goto loc_82292950;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292950:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fmr f26,f31
	f26.f64 = f31.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822929a8
	if (ctx.cr6.eq) goto loc_822929A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822949a0
	ctx.lr = 0x82292970;
	sub_822949A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8229297c
	if (ctx.cr0.eq) goto loc_8229297C;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8229297C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x822929a8
	if (ctx.cr6.gt) goto loc_822929A8;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822949a0
	ctx.lr = 0x82292998;
	sub_822949A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822929a4
	if (ctx.cr0.eq) goto loc_822929A4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822929A4:
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
loc_822929A8:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294b48
	ctx.lr = 0x822929B8;
	sub_82294B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822929c4
	if (ctx.cr0.eq) goto loc_822929C4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822929C4:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292a1c
	if (ctx.cr6.eq) goto loc_82292A1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294b48
	ctx.lr = 0x822929E4;
	sub_82294B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822929f0
	if (ctx.cr0.eq) goto loc_822929F0;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822929F0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82292a1c
	if (ctx.cr6.gt) goto loc_82292A1C;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294b48
	ctx.lr = 0x82292A0C;
	sub_82294B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292a18
	if (ctx.cr0.eq) goto loc_82292A18;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292A18:
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_82292A1C:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294c80
	ctx.lr = 0x82292A2C;
	sub_82294C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292a38
	if (ctx.cr0.eq) goto loc_82292A38;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292A38:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292a90
	if (ctx.cr6.eq) goto loc_82292A90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294c80
	ctx.lr = 0x82292A58;
	sub_82294C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292a64
	if (ctx.cr0.eq) goto loc_82292A64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292A64:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82292a90
	if (ctx.cr6.gt) goto loc_82292A90;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294c80
	ctx.lr = 0x82292A80;
	sub_82294C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292a8c
	if (ctx.cr0.eq) goto loc_82292A8C;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292A8C:
	// lfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
loc_82292A90:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294a48
	ctx.lr = 0x82292AA0;
	sub_82294A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292aac
	if (ctx.cr0.eq) goto loc_82292AAC;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292AAC:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292b00
	if (ctx.cr6.eq) goto loc_82292B00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294a48
	ctx.lr = 0x82292AC8;
	sub_82294A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292ad4
	if (ctx.cr0.eq) goto loc_82292AD4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292AD4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x82292b00
	if (ctx.cr6.gt) goto loc_82292B00;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294a48
	ctx.lr = 0x82292AF0;
	sub_82294A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292afc
	if (ctx.cr0.eq) goto loc_82292AFC;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292AFC:
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_82292B00:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294af0
	ctx.lr = 0x82292B10;
	sub_82294AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292b1c
	if (ctx.cr0.eq) goto loc_82292B1C;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292B1C:
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82292b70
	if (ctx.cr6.eq) goto loc_82292B70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294af0
	ctx.lr = 0x82292B38;
	sub_82294AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292b44
	if (ctx.cr0.eq) goto loc_82292B44;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292B44:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x82292b70
	if (ctx.cr6.gt) goto loc_82292B70;
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82294af0
	ctx.lr = 0x82292B60;
	sub_82294AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82292b6c
	if (ctx.cr0.eq) goto loc_82292B6C;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82292B6C:
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
loc_82292B70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	f31.f64 = double(temp.f32);
	// fmuls f1,f26,f31
	ctx.f1.f64 = double(float(f26.f64 * f31.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f26,f25,f31
	f26.f64 = double(float(f25.f64 * f31.f64));
	// stfs f26,8(r30)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x822d60f0
	ctx.lr = 0x82292B8C;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,12
	ctx.r11.s64 = 12;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x822d60f0
	ctx.lr = 0x82292BA4;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,16
	ctx.r11.s64 = 16;
	// fmuls f13,f27,f31
	ctx.f13.f64 = double(float(f27.f64 * f31.f64));
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(f28.f64 * f31.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(f29.f64 * f31.f64));
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(f30.f64 * f31.f64));
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f12,32(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.f0.u32);
	// lwz r3,864(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x822d7b58
	ctx.lr = 0x82292BE0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292BE4:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f78
	ctx.lr = 0x82292BF0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822B0D78) {
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
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x821f3f40
	ctx.lr = 0x822B0D9C;
	sub_821F3F40(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// beq 0x822b0db0
	if (ctx.cr0.eq) goto loc_822B0DB0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x822b0db4
	goto loc_822B0DB4;
loc_822B0DB0:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_822B0DB4:
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// beq cr6,0x822b0dd8
	if (ctx.cr6.eq) goto loc_822B0DD8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
loc_822B0DD8:
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

DEFINE_REX_FUNC(sub_822B3748) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b377c
	if (ctx.cr6.eq) goto loc_822B377C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b27e8
	ctx.lr = 0x822B3770;
	sub_822B27E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x822b37a4
	goto loc_822B37A4;
loc_822B377C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b37a4
	if (ctx.cr6.eq) goto loc_822B37A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B379C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822B37A4:
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

DEFINE_REX_FUNC(sub_822B5DF8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822b5e24
	if (ctx.cr6.lt) goto loc_822B5E24;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_822B5E24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5e40
	if (ctx.cr6.eq) goto loc_822B5E40;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5e40
	if (ctx.cr6.eq) goto loc_822B5E40;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x822b5e44
	goto loc_822B5E44;
loc_822B5E40:
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
loc_822B5E44:
	// addi r5,r11,384
	ctx.r5.s64 = ctx.r11.s64 + 384;
	// addi r4,r11,688
	ctx.r4.s64 = ctx.r11.s64 + 688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B5E54;
	sub_8229F270(ctx, base);
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

DEFINE_REX_FUNC(sub_822B86D0) {
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
	ctx.lr = 0x822B86D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b872c
	if (ctx.cr6.eq) goto loc_822B872C;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b872c
	if (ctx.cr6.eq) goto loc_822B872C;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b872c
	if (ctx.cr6.eq) goto loc_822B872C;
loc_822B8724:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b8830
	goto loc_822B8830;
loc_822B872C:
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822b8724
	if (ctx.cr6.lt) goto loc_822B8724;
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
	// bl 0x822c9130
	ctx.lr = 0x822B874C;
	sub_822C9130(ctx, base);
	// addic r11,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r11.s64 = r26.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r26
	temp.u8 = (~ctx.r11.u32 + r26.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822b877c
	if (ctx.cr6.eq) goto loc_822B877C;
	// lwz r26,0(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r26,8
	ctx.r3.s64 = r26.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822B876C;
	sub_822C9160(ctx, base);
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// bl 0x822c9160
	ctx.lr = 0x822B8774;
	sub_822C9160(ctx, base);
	// addi r3,r26,12
	ctx.r3.s64 = r26.s64 + 12;
	// bl 0x822c9160
	ctx.lr = 0x822B877C;
	sub_822C9160(ctx, base);
loc_822B877C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r30,r8
	r30.s64 = ctx.r8.s8;
	// bl 0x822c9130
	ctx.lr = 0x822B87D0;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822b882c
	if (ctx.cr6.eq) goto loc_822B882C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b882c
	if (!ctx.cr6.gt) goto loc_822B882C;
	// li r30,0
	r30.s64 = 0;
loc_822B87FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822B8808;
	sub_822C9160(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822B8814;
	sub_822C9160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b87fc
	if (ctx.cr6.lt) goto loc_822B87FC;
loc_822B882C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822B8830:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822BE038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BE040;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// stw r5,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// stw r6,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// mulli r3,r4,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x822be074
	if (!ctx.cr6.gt) goto loc_822BE074;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BE074:
	// bl 0x822c80d0
	ctx.lr = 0x822BE078;
	sub_822C80D0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822be0ac
	if (ctx.cr0.lt) goto loc_822BE0AC;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x822be0ac
	if (ctx.cr0.eq) goto loc_822BE0AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822BE0A4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822be0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BE0A4;
loc_822BE0AC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822be0e0
	if (ctx.cr6.eq) goto loc_822BE0E0;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822be0d0
	if (!ctx.cr6.gt) goto loc_822BE0D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BE0D0:
	// bl 0x822c80d0
	ctx.lr = 0x822BE0D4;
	sub_822C80D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x822be104
	goto loc_822BE104;
loc_822BE0E0:
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// mulli r3,r11,24
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822be0f8
	if (!ctx.cr6.gt) goto loc_822BE0F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BE0F8:
	// bl 0x822c80d0
	ctx.lr = 0x822BE0FC;
	sub_822C80D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mulli r5,r11,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
loc_822BE104:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bl 0x822d5870
	ctx.lr = 0x822BE110;
	sub_822D5870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C4F4C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5028) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82226af8
	ctx.lr = 0x822C505C;
	sub_82226AF8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c509c
	if (!ctx.cr6.eq) goto loc_822C509C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822125d0
	ctx.lr = 0x822C5084;
	sub_822125D0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822c5098
	if (!ctx.cr6.eq) goto loc_822C5098;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822C5098:
	// bl 0x82212778
	ctx.lr = 0x822C509C;
	sub_82212778(ctx, base);
loc_822C509C:
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

DEFINE_REX_FUNC(sub_822C5ED8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x822aac90
	ctx.lr = 0x822C5F00;
	sub_822AAC90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,32280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32280);
	f31.f64 = double(temp.f32);
	// beq 0x822c5f2c
	if (ctx.cr0.eq) goto loc_822C5F2C;
	// lbz r11,89(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 89);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x822c5f30
	goto loc_822C5F30;
loc_822C5F2C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822C5F30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aad78
	ctx.lr = 0x822C5F38;
	sub_822AAD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c5f5c
	if (ctx.cr0.eq) goto loc_822C5F5C;
	// lbz r11,89(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 89);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x822c5f60
	goto loc_822C5F60;
loc_822C5F5C:
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_822C5F60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aad18
	ctx.lr = 0x822C5F68;
	sub_822AAD18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c5f8c
	if (ctx.cr0.eq) goto loc_822C5F8C;
	// lbz r11,89(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 89);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x822c5f90
	goto loc_822C5F90;
loc_822C5F8C:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822C5F90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aada0
	ctx.lr = 0x822C5F98;
	sub_822AADA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c5fbc
	if (ctx.cr0.eq) goto loc_822C5FBC;
	// lbz r11,89(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 89);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x822c5fc0
	goto loc_822C5FC0;
loc_822C5FBC:
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_822C5FC0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,16372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
loc_822C5FCC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x822c5fcc
	if (ctx.cr6.lt) goto loc_822C5FCC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C600C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_822C9D88) {
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
	// bl 0x822c9b78
	ctx.lr = 0x822C9DA4;
	sub_822C9B78(ctx, base);
loc_822C9DA4:
	// lbz r11,77(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 77);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c9e4c
	if (!ctx.cr0.eq) goto loc_822C9E4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9bc8
	ctx.lr = 0x822C9DB8;
	sub_822C9BC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c9e4c
	if (!ctx.cr6.eq) goto loc_822C9E4C;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// addi r11,r31,52
	ctx.r11.s64 = r31.s64 + 52;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c9dfc
	if (ctx.cr6.eq) goto loc_822C9DFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_822C9DFC:
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r5,60(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c9788
	ctx.lr = 0x822C9E10;
	sub_822C9788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c9e9c
	if (ctx.cr0.eq) goto loc_822C9E9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stb r11,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r11.u8);
	// bl 0x822c9720
	ctx.lr = 0x822C9E28;
	sub_822C9720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9c30
	ctx.lr = 0x822C9E34;
	sub_822C9C30(ctx, base);
	// bl 0x822098c8
	ctx.lr = 0x822C9E38;
	sub_822098C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822c9ea0
	if (!ctx.cr0.eq) goto loc_822C9EA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r11.u8);
	// b 0x822c9e8c
	goto loc_822C9E8C;
loc_822C9E4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9b78
	ctx.lr = 0x822C9E58;
	sub_822C9B78(ctx, base);
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822c9e8c
	if (ctx.cr6.eq) goto loc_822C9E8C;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x823cd948
	ctx.lr = 0x822C9E6C;
	sub_823CD948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c9e80
	if (!ctx.cr0.eq) goto loc_822C9E80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9b78
	ctx.lr = 0x822C9E80;
	sub_822C9B78(ctx, base);
loc_822C9E80:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8220aa00
	ctx.lr = 0x822C9E8C;
	sub_8220AA00(ctx, base);
loc_822C9E8C:
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c9da4
	if (!ctx.cr6.eq) goto loc_822C9DA4;
	// b 0x822c9ea0
	goto loc_822C9EA0;
loc_822C9E9C:
	// bl 0x822098c8
	ctx.lr = 0x822C9EA0;
	sub_822098C8(ctx, base);
loc_822C9EA0:
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

DEFINE_REX_FUNC(sub_822CDE58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822CDE60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// b 0x822cde8c
	goto loc_822CDE8C;
loc_822CDE70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cde8c
	if (ctx.cr6.eq) goto loc_822CDE8C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bne 0x822cde8c
	if (!ctx.cr0.eq) goto loc_822CDE8C;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_822CDE8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cde70
	if (!ctx.cr6.eq) goto loc_822CDE70;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822cded0
	if (ctx.cr6.eq) goto loc_822CDED0;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_822CDEA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cdec8
	if (ctx.cr6.eq) goto loc_822CDEC8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822c80a8
	ctx.lr = 0x822CDEC8;
	sub_822C80A8(ctx, base);
loc_822CDEC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822cdea8
	if (!ctx.cr6.eq) goto loc_822CDEA8;
loc_822CDED0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cdee0
	if (ctx.cr6.eq) goto loc_822CDEE0;
	// bl 0x822c80a8
	ctx.lr = 0x822CDEE0;
	sub_822C80A8(ctx, base);
loc_822CDEE0:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D0C70) {
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
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r30,r3,220
	r30.s64 = ctx.r3.s64 + 220;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r31,124(r31)
	r31.u64 = REX_LOAD_U16(r31.u32 + 124);
	// bctrl 
	ctx.lr = 0x822D0CB8;
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

DEFINE_REX_FUNC(sub_822D1C50) {
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
	ctx.lr = 0x822D1C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r31,20(r31)
	r31.u64 = REX_LOAD_U16(r31.u32 + 20);
	// bctrl 
	ctx.lr = 0x822D1C98;
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

DEFINE_REX_FUNC(sub_822D2F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D2F28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2f88
	if (ctx.cr0.eq) goto loc_822D2F88;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(108));
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt 0x822d2f70
	if (ctx.cr0.lt) goto loc_822D2F70;
loc_822D2F54:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D2F60;
	sub_822D1718(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c8908
	ctx.lr = 0x822D2F68;
	sub_822C8908(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822d2f54
	if (!ctx.cr0.lt) goto loc_822D2F54;
loc_822D2F70:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2f80
	if (ctx.cr0.eq) goto loc_822D2F80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D2F80;
	sub_822C80A8(ctx, base);
loc_822D2F80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d2fac
	goto loc_822D2FAC;
loc_822D2F88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D2F90;
	sub_822D1718(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c8908
	ctx.lr = 0x822D2F98;
	sub_822C8908(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2fa8
	if (ctx.cr0.eq) goto loc_822D2FA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D2FA8;
	sub_822C80A8(ctx, base);
loc_822D2FA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D2FAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__savegprlr_31) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_18) {
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

DEFINE_REX_FUNC(__restfpr_30) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D5848) {
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
	// bl 0x822d5740
	ctx.lr = 0x822D5858;
	sub_822D5740(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
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

DEFINE_REX_FUNC(sub_822D6D28) {
	REX_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x822d6d54
	if (!ctx.cr6.eq) goto loc_822D6D54;
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d6d5c
	if (!ctx.cr0.eq) goto loc_822D6D5C;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d6d5c
	if (!ctx.cr6.eq) goto loc_822D6D5C;
loc_822D6D54:
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x822d6d64
	if (!ctx.cr6.eq) goto loc_822D6D64;
loc_822D6D5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822D6D64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D8698) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d86c4
	if (!ctx.cr6.eq) goto loc_822D86C4;
loc_822D86B8:
	// bl 0x822db6c0
	ctx.lr = 0x822D86BC;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x822d8710
	goto loc_822D8710;
loc_822D86C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822d86b8
	if (ctx.cr6.eq) goto loc_822D86B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d86b8
	if (ctx.cr6.eq) goto loc_822D86B8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-5112
	ctx.r3.s64 = ctx.r11.s64 + -5112;
	// bl 0x822d8578
	ctx.lr = 0x822D86F0;
	sub_822D8578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822d8700
	if (!ctx.cr0.lt) goto loc_822D8700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_822D8700:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822d871c
	if (!ctx.cr6.eq) goto loc_822D871C;
	// bl 0x822db6c0
	ctx.lr = 0x822D870C;
	sub_822DB6C0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_822D8710:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D8718;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822D871C:
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

DEFINE_REX_FUNC(__savevmx_84) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_105) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D9ED0) {
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
	ctx.lr = 0x822D9ED8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r28,48
	r28.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d9f1c
	if (!ctx.cr6.eq) goto loc_822D9F1C;
	// bl 0x822db6c0
	ctx.lr = 0x822D9F08;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D9F14;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822da2d8
	goto loc_822DA2D8;
loc_822D9F1C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d9f3c
	if (!ctx.cr6.eq) goto loc_822D9F3C;
	// bl 0x822db6c0
	ctx.lr = 0x822D9F28;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D9F2C:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D9F34;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822da2d8
	goto loc_822DA2D8;
loc_822D9F3C:
	// li r26,0
	r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822d9f5c
	if (ctx.cr6.gt) goto loc_822D9F5C;
	// bl 0x822db6c0
	ctx.lr = 0x822D9F54;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d9f2c
	goto loc_822D9F2C;
loc_822D9F5C:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2047, ctx.xer);
	// bne cr6,0x822da000
	if (!ctx.cr6.eq) goto loc_822DA000;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x822d9f7c
	if (!ctx.cr6.eq) goto loc_822D9F7C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x822d9f80
	goto loc_822D9F80;
loc_822D9F7C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_822D9F80:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d9de0
	ctx.lr = 0x822D9F94;
	sub_822D9DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9fa4
	if (ctx.cr0.eq) goto loc_822D9FA4;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x822da2d8
	goto loc_822DA2D8;
loc_822D9FA4:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822d9fb8
	if (!ctx.cr6.eq) goto loc_822D9FB8;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822D9FB8:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x822d7240
	ctx.lr = 0x822D9FDC;
	sub_822D7240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822da2d4
	if (ctx.cr0.eq) goto loc_822DA2D4;
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x822da2d4
	goto loc_822DA2D4;
loc_822DA000:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822da018
	if (ctx.cr6.eq) goto loc_822DA018;
	// stb r27,0(r31)
	REX_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822DA018:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r29.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// addi r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 39;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x822da084
	if (!ctx.cr6.eq) goto loc_822DA084;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822da07c
	if (!ctx.cr6.eq) goto loc_822DA07C;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x822da090
	goto loc_822DA090;
loc_822DA07C:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x822da090
	goto loc_822DA090;
loc_822DA084:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822DA090:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822da0a8
	if (!ctx.cr6.eq) goto loc_822DA0A8;
	// stb r26,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r26.u8);
	// b 0x822da0c0
	goto loc_822DA0C0;
loc_822DA0A8:
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
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_822DA0C0:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x822da1b0
	if (!ctx.cr6.gt) goto loc_822DA1B0;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_822DA0D8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822da138
	if (!ctx.cr6.gt) goto loc_822DA138;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x822da114
	if (!ctx.cr6.gt) goto loc_822DA114;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_822DA114:
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822da0d8
	if (!ctx.cr0.lt) goto loc_822DA0D8;
loc_822DA138:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822da1b0
	if (ctx.cr0.lt) goto loc_822DA1B0;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x822da1b0
	if (!ctx.cr6.gt) goto loc_822DA1B0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_822DA164:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x822da17c
	if (ctx.cr6.eq) goto loc_822DA17C;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x822da188
	if (!ctx.cr6.eq) goto loc_822DA188;
loc_822DA17C:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x822da164
	goto loc_822DA164;
loc_822DA188:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822da1a4
	if (ctx.cr6.eq) goto loc_822DA1A4;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x822da1a8
	if (!ctx.cr6.eq) goto loc_822DA1A8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// b 0x822da1ac
	goto loc_822DA1AC;
loc_822DA1A4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_822DA1A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822DA1AC:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_822DA1B0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822da1d8
	if (!ctx.cr6.gt) goto loc_822DA1D8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x822da1d4
	if (ctx.cr0.eq) goto loc_822DA1D4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822DA1CC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822da1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DA1CC;
loc_822DA1D4:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_822DA1D8:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822da1e8
	if (!ctx.cr0.eq) goto loc_822DA1E8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_822DA1E8:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x822da220
	if (ctx.cr6.lt) goto loc_822DA220;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x822da228
	goto loc_822DA228;
loc_822DA220:
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_822DA228:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x822da268
	if (ctx.cr6.lt) goto loc_822DA268;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1000));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822da270
	if (!ctx.cr6.eq) goto loc_822DA270;
loc_822DA268:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x822da294
	if (ctx.cr6.lt) goto loc_822DA294;
loc_822DA270:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822DA294:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822da2a4
	if (!ctx.cr6.eq) goto loc_822DA2A4;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x822da2c8
	if (ctx.cr6.lt) goto loc_822DA2C8;
loc_822DA2A4:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822DA2C8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_822DA2D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DA2D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822F25E8) {
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
	ctx.lr = 0x822F25F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822f278c
	if (ctx.cr6.gt) goto loc_822F278C;
	// li r27,4
	r27.s64 = 4;
	// li r30,0
	r30.s64 = 0;
	// li r24,3
	r24.s64 = 3;
	// li r28,7
	r28.s64 = 7;
	// li r25,5
	r25.s64 = 5;
	// li r26,8
	r26.s64 = 8;
	// li r29,1
	r29.s64 = 1;
loc_822F2624:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822f269c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822F269C;
	// bdzf 4*cr6+eq,0x822f2700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822F2700;
	// bdzf 4*cr6+eq,0x822f278c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822F278C;
	// bdzf 4*cr6+eq,0x822f2754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822F2754;
	// bne cr6,0x822f2768
	if (!ctx.cr6.eq) goto loc_822F2768;
	// ld r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 48);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x822f2798
	if (ctx.cr6.gt) goto loc_822F2798;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// bl 0x822fe818
	ctx.lr = 0x822F2668;
	sub_822FE818(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x822f27a4
	if (ctx.cr6.eq) goto loc_822F27A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f27b8
	if (!ctx.cr6.eq) goto loc_822F27B8;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f2690
	if (ctx.cr6.eq) goto loc_822F2690;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f277c
	if (!ctx.cr6.eq) goto loc_822F277C;
loc_822F2690:
	// stw r27,392(r31)
	REX_STORE_U32(r31.u32 + 392, r27.u32);
	// stw r30,540(r31)
	REX_STORE_U32(r31.u32 + 540, r30.u32);
	// b 0x822f277c
	goto loc_822F277C;
loc_822F269C:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822f26b4
	if (ctx.cr6.lt) goto loc_822F26B4;
	// stw r24,392(r31)
	REX_STORE_U32(r31.u32 + 392, r24.u32);
	// b 0x822f277c
	goto loc_822F277C;
loc_822F26B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fee40
	ctx.lr = 0x822F26BC;
	sub_822FEE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f2778
	if (!ctx.cr6.eq) goto loc_822F2778;
	// lhz r11,518(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lhz r9,498(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 498);
	// lhz r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 496);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lbz r8,516(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 516);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// sth r7,544(r31)
	REX_STORE_U16(r31.u32 + 544, ctx.r7.u16);
	// beq cr6,0x822f26f4
	if (ctx.cr6.eq) goto loc_822F26F4;
	// stw r25,392(r31)
	REX_STORE_U32(r31.u32 + 392, r25.u32);
	// stb r30,525(r31)
	REX_STORE_U8(r31.u32 + 525, r30.u8);
	// b 0x822f277c
	goto loc_822F277C;
loc_822F26F4:
	// stw r26,392(r31)
	REX_STORE_U32(r31.u32 + 392, r26.u32);
	// stb r29,525(r31)
	REX_STORE_U8(r31.u32 + 525, r29.u8);
	// b 0x822f277c
	goto loc_822F277C;
loc_822F2700:
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f2778
	if (!ctx.cr6.eq) goto loc_822F2778;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lhz r8,518(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lhz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 544);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r5,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r5.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r4,408(r31)
	REX_STORE_U64(r31.u32 + 408, ctx.r4.u64);
loc_822F273C:
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// stw r29,416(r31)
	REX_STORE_U32(r31.u32 + 416, r29.u32);
	// beq cr6,0x822f27c4
	if (ctx.cr6.eq) goto loc_822F27C4;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F2754:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// stw r27,392(r31)
	REX_STORE_U32(r31.u32 + 392, r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// b 0x822f277c
	goto loc_822F277C;
loc_822F2768:
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f27d8
	if (ctx.cr6.eq) goto loc_822F27D8;
loc_822F2778:
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
loc_822F277C:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x822f2624
	if (!ctx.cr6.gt) goto loc_822F2624;
loc_822F278C:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F2798:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F27A4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F27B8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F27C4:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822F27D8:
	// lhz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 544);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r8,548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 548);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r30,520(r31)
	REX_STORE_U16(r31.u32 + 520, r30.u16);
	// std r7,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r7.u64);
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// b 0x822f273c
	goto loc_822F273C;
}

DEFINE_REX_FUNC(sub_822FC060) {
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
	ctx.lr = 0x822FC068;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bne cr6,0x822fc08c
	if (!ctx.cr6.eq) goto loc_822FC08C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_822FC08C:
	// addi r25,r4,-24
	r25.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r25,54
	ctx.cr6.compare<uint32_t>(r25.u32, 54, ctx.xer);
	// bge cr6,0x822fc0a4
	if (!ctx.cr6.lt) goto loc_822FC0A4;
loc_822FC098:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_822FC0A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FC0B8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,54
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 54, ctx.xer);
	// bne cr6,0x822fc098
	if (!ctx.cr6.eq) goto loc_822FC098;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,54
	r26.s64 = 54;
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r4,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r30,1(r11)
	ea = 1 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r29,1(r11)
	ea = 1 + ctx.r11.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r23,1(r11)
	ea = 1 + ctx.r11.u32;
	r23.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	r22.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stb r5,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r5.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stb r4,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r4.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r30,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, r30.u8);
	// stb r29,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, r29.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r24,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, r24.u8);
	// stb r27,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r27.u8);
	// stb r23,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, r23.u8);
	// stb r22,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, r22.u8);
	// stb r7,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// sth r8,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,-25400
	ctx.r10.s64 = ctx.r10.s64 + -25400;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r10,16
	r30.s64 = ctx.r10.s64 + 16;
	// sth r4,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r29,1(r11)
	ea = 1 + ctx.r11.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// stb r4,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r4.u8);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r29,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, r29.u8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stb r27,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, r27.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r24,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, r24.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r11,r7
	r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
loc_822FC2E4:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fc304
	if (!ctx.cr0.eq) goto loc_822FC304;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bne cr6,0x822fc2e4
	if (!ctx.cr6.eq) goto loc_822FC2E4;
loc_822FC304:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822fc8c4
	if (!ctx.cr6.eq) goto loc_822FC8C4;
	// lhz r11,238(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 238);
	// lhz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 236);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,238(r31)
	REX_STORE_U16(r31.u32 + 238, ctx.r7.u16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822fc8c4
	if (!ctx.cr6.eq) goto loc_822FC8C4;
	// clrlwi r11,r9,25
	ctx.r11.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// sth r11,228(r31)
	REX_STORE_U16(r31.u32 + 228, ctx.r11.u16);
	// beq cr6,0x822fc62c
	if (ctx.cr6.eq) goto loc_822FC62C;
	// addi r11,r29,54
	ctx.r11.s64 = r29.s64 + 54;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x822fc098
	if (ctx.cr6.gt) goto loc_822FC098;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,54
	ctx.r4.s64 = ctx.r11.s64 + 54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FC35C;
	sub_822EC1E8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fc098
	if (!ctx.cr6.eq) goto loc_822FC098;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r3,54
	r26.s64 = ctx.r3.s64 + 54;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r10,-352
	ctx.r9.s64 = ctx.r10.s64 + -352;
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x822fc788
	if (ctx.cr6.gt) goto loc_822FC788;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fc690
	if (ctx.cr6.eq) goto loc_822FC690;
	// bdz 0x822fc50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822FC50C;
	// bdz 0x822fc3a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822FC3A4;
loc_822FC3A4:
	// cmplwi cr6,r29,36
	ctx.cr6.compare<uint32_t>(r29.u32, 36, ctx.xer);
	// blt cr6,0x822fc788
	if (ctx.cr6.lt) goto loc_822FC788;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,-2
	ctx.r6.s64 = -2;
	// sth r10,60(r31)
	REX_STORE_U16(r31.u32 + 60, ctx.r10.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// li r3,128
	ctx.r3.s64 = 128;
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// li r30,170
	r30.s64 = 170;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lbz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r8,9(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r10,11(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lbz r8,13(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r6.u16);
	// sth r7,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r7.u16);
	// lbz r10,15(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// sth r10,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r10.u16);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r10,r6,3,16,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFF8;
	// sth r10,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r10.u16);
	// lbz r7,22(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,23(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// li r6,155
	ctx.r6.s64 = 155;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,33(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,84(r31)
	REX_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// li r7,56
	ctx.r7.s64 = 56;
	// lbz r10,35(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,34(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// sth r28,104(r31)
	REX_STORE_U16(r31.u32 + 104, r28.u16);
	// sth r9,86(r31)
	REX_STORE_U16(r31.u32 + 86, ctx.r9.u16);
	// sth r4,106(r31)
	REX_STORE_U16(r31.u32 + 106, ctx.r4.u16);
	// stb r3,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r3.u8);
	// stb r28,109(r31)
	REX_STORE_U8(r31.u32 + 109, r28.u8);
	// stb r28,110(r31)
	REX_STORE_U8(r31.u32 + 110, r28.u8);
	// li r5,113
	ctx.r5.s64 = 113;
	// stb r30,111(r31)
	REX_STORE_U8(r31.u32 + 111, r30.u8);
	// stb r28,112(r31)
	REX_STORE_U8(r31.u32 + 112, r28.u8);
	// stb r7,113(r31)
	REX_STORE_U8(r31.u32 + 113, ctx.r7.u8);
	// stb r6,114(r31)
	REX_STORE_U8(r31.u32 + 114, ctx.r6.u8);
	// stb r5,115(r31)
	REX_STORE_U8(r31.u32 + 115, ctx.r5.u8);
	// b 0x822fc62c
	goto loc_822FC62C;
loc_822FC50C:
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x822fc788
	if (ctx.cr6.lt) goto loc_822FC788;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r10,60(r31)
	REX_STORE_U16(r31.u32 + 60, ctx.r10.u16);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,7(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lbz r8,9(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,11(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r8,13(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r6.u16);
	// sth r3,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r3.u16);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lbz r9,15(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r7.u16);
	// sth r7,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r7.u16);
	// sth r7,116(r31)
	REX_STORE_U16(r31.u32 + 116, ctx.r7.u16);
	// lbz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r7,19(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r6,21(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,18(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lbz r9,23(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,22(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r8,84(r31)
	REX_STORE_U16(r31.u32 + 84, ctx.r8.u16);
	// beq cr6,0x822fc688
	if (ctx.cr6.eq) goto loc_822FC688;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822fc680
	if (ctx.cr6.eq) goto loc_822FC680;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x822fc788
	if (!ctx.cr6.eq) goto loc_822FC788;
	// li r11,63
	ctx.r11.s64 = 63;
loc_822FC628:
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_822FC62C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822fc8c4
	if (ctx.cr6.eq) goto loc_822FC8C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-25416
	r29.s64 = ctx.r11.s64 + -25416;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r8,r29,16
	ctx.r8.s64 = r29.s64 + 16;
loc_822FC648:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fc668
	if (!ctx.cr0.eq) goto loc_822FC668;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc648
	if (!ctx.cr6.eq) goto loc_822FC648;
loc_822FC668:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r11,-25432
	r28.s64 = ctx.r11.s64 + -25432;
	// bne cr6,0x822fc794
	if (!ctx.cr6.eq) goto loc_822FC794;
	// li r30,9
	r30.s64 = 9;
	// b 0x822fc7cc
	goto loc_822FC7CC;
loc_822FC680:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822fc628
	goto loc_822FC628;
loc_822FC688:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822fc628
	goto loc_822FC628;
loc_822FC690:
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(r29.u32, 22, ctx.xer);
	// blt cr6,0x822fc788
	if (ctx.cr6.lt) goto loc_822FC788;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r6,60(r31)
	REX_STORE_U16(r31.u32 + 60, ctx.r6.u16);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// lbz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,11(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,9(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r5,13(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r9,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r9.u16);
	// lbz r7,21(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r5,84(r31)
	REX_STORE_U16(r31.u32 + 84, ctx.r5.u16);
	// lbz r3,19(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// rotlwi r9,r3,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lbz r8,18(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r6,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r6.u16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// lbz r7,15(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r5.u16);
	// sth r5,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r5.u16);
	// sth r5,116(r31)
	REX_STORE_U16(r31.u32 + 116, ctx.r5.u16);
	// beq cr6,0x822fc688
	if (ctx.cr6.eq) goto loc_822FC688;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822fc680
	if (ctx.cr6.eq) goto loc_822FC680;
loc_822FC788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_822FC794:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = r28.s64 + 16;
loc_822FC7A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fc7c0
	if (!ctx.cr0.eq) goto loc_822FC7C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc7a0
	if (!ctx.cr6.eq) goto loc_822FC7A0;
loc_822FC7C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fc788
	if (!ctx.cr6.eq) goto loc_822FC788;
	// li r30,8
	r30.s64 = 8;
loc_822FC7CC:
	// add r11,r26,r30
	ctx.r11.u64 = r26.u64 + r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x822fc098
	if (ctx.cr6.gt) goto loc_822FC098;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FC7F4;
	sub_822EC1E8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x822fc098
	if (!ctx.cr6.eq) goto loc_822FC098;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,16
	ctx.r8.s64 = r29.s64 + 16;
loc_822FC808:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fc828
	if (!ctx.cr0.eq) goto loc_822FC828;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc808
	if (!ctx.cr6.eq) goto loc_822FC808;
loc_822FC828:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fc860
	if (!ctx.cr6.eq) goto loc_822FC860;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// lbz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 24);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// b 0x822fc8c4
	goto loc_822FC8C4;
loc_822FC860:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = r28.s64 + 16;
loc_822FC86C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fc88c
	if (!ctx.cr0.eq) goto loc_822FC88C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fc86c
	if (!ctx.cr6.eq) goto loc_822FC86C;
loc_822FC88C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fc788
	if (!ctx.cr6.eq) goto loc_822FC788;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r4,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x822fc788
	if (ctx.cr6.gt) goto loc_822FC788;
loc_822FC8C4:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82327178) {
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
	ctx.lr = 0x82327180;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,28(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r23,36(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// add r20,r10,r11
	r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82327378
	if (!ctx.cr6.gt) goto loc_82327378;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// subf r19,r5,r6
	r19.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_823271B0:
	// lwzx r10,r21,r19
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823271d4
	if (!ctx.cr6.eq) goto loc_823271D4;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82327360
	goto loc_82327360;
loc_823271D4:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// li r25,0
	r25.s64 = 0;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r26.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x82327264
	if (ctx.cr6.lt) goto loc_82327264;
	// addi r27,r26,-1
	r27.s64 = r26.s64 + -1;
	// addi r10,r20,-8
	ctx.r10.s64 = r20.s64 + -8;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
loc_82327208:
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r29,10(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r30,4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// lhzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r17,r29
	r17.s64 = r29.s16;
	// lwz r18,12(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lwz r16,8(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r15,r8
	r15.s64 = ctx.r8.s16;
	// lwz r14,20(r10)
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r29,r28,r18
	r29.s64 = int64_t(r28.s32) * int64_t(r18.s32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r30,r30,r16
	r30.s64 = int64_t(r30.s32) * int64_t(r16.s32);
	// mullw r28,r17,r14
	r28.s64 = int64_t(r17.s32) * int64_t(r14.s32);
	// mullw r8,r15,r8
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(ctx.r8.s32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// blt cr6,0x82327208
	if (ctx.cr6.lt) goto loc_82327208;
loc_82327264:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// bge cr6,0x823272a0
	if (!ctx.cr6.lt) goto loc_823272A0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823272A0:
	// add r11,r31,r6
	ctx.r11.u64 = r31.u64 + ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r27,r11,r25
	r27.u64 = ctx.r11.u64 + r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// blt cr6,0x823272fc
	if (ctx.cr6.lt) goto loc_823272FC;
	// addi r28,r22,-1
	r28.s64 = r22.s64 + -1;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r23,-2
	ctx.r10.s64 = r23.s64 + -2;
loc_823272C8:
	// lhz r30,2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r26,r30
	r26.s64 = r30.s16;
	// lwzu r30,8(r9)
	ea = 8 + ctx.r9.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r29,r26,r29
	r29.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// mullw r31,r31,r30
	r31.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r8,r29,r8
	ctx.r8.u64 = r29.u64 + ctx.r8.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// blt cr6,0x823272c8
	if (ctx.cr6.lt) goto loc_823272C8;
loc_823272FC:
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82327320
	if (!ctx.cr6.lt) goto loc_82327320;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r10,r23
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r23.u32);
	// lwzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
loc_82327320:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// sraw r11,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stwx r11,r21,r19
	REX_STORE_U32(r21.u32 + r19.u32, ctx.r11.u32);
	// beq cr6,0x82327350
	if (ctx.cr6.eq) goto loc_82327350;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
loc_82327350:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
loc_82327360:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r23,r10,r23
	r23.u64 = ctx.r10.u64 + r23.u64;
	// add r24,r9,r24
	r24.u64 = ctx.r9.u64 + r24.u64;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823271b0
	if (ctx.cr6.lt) goto loc_823271B0;
loc_82327378:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82332310) {
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
	// li r30,1
	r30.s64 = 1;
loc_8233232C:
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// addi r11,r11,5152
	ctx.r11.s64 = ctx.r11.s64 + 5152;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// ble cr6,0x823323c4
	if (!ctx.cr6.gt) goto loc_823323C4;
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r9,r11,5152
	ctx.r9.s64 = ctx.r11.s64 + 5152;
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r7,r11,2571
	ctx.r7.s64 = ctx.r11.s64 + 2571;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwzx r3,r6,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// ldx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + r31.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r8,r10,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r10.s64 / ctx.r9.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// andc r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// tdlgei r6,-1
	if (ctx.r6.s64 == -1ll || ctx.r6.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x823323c4
	if (ctx.cr6.lt) goto loc_823323C4;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x823323c4
	if (ctx.cr6.lt) goto loc_823323C4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r5,r11,r10
	ctx.r5.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r30,6
	ctx.r3.s64 = r30.s64 + 6;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x822034d8
	ctx.lr = 0x823323C4;
	sub_822034D8(ctx, base);
loc_823323C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// ble cr6,0x8233232c
	if (!ctx.cr6.gt) goto loc_8233232C;
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

DEFINE_REX_FUNC(sub_82338210) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82338218;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r6,1
	r30.s64 = ctx.r6.s64 + 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,15387
	ctx.r5.s64 = ctx.r11.s64 + 15387;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8233823C;
	sub_8233FEB8(ctx, base);
	// stw r3,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338258
	if (!ctx.cr6.eq) goto loc_82338258;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82338258:
	// addic. r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82338290
	if (!ctx.cr0.gt) goto loc_82338290;
	// subf r9,r31,r29
	ctx.r9.u64 = r29.u64 - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82338268:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82338268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338268;
loc_82338290:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8233D448) {
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
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x823cd118
	ctx.lr = 0x8233D464;
	sub_823CD118(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d4ac
	if (ctx.cr6.eq) goto loc_8233D4AC;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x823cd270
	ctx.lr = 0x8233D47C;
	sub_823CD270(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233d4a8
	if (ctx.cr6.eq) goto loc_8233D4A8;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r7,r11,-30204
	ctx.r7.s64 = ctx.r11.s64 + -30204;
loc_8233D48C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8233d48c
	if (!ctx.cr0.eq) goto loc_8233D48C;
loc_8233D4A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8233D4AC:
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

DEFINE_REX_FUNC(sub_8233FDF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8233FDF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8233fea8
	if (!ctx.cr6.eq) goto loc_8233FEA8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8233fea8
	if (!ctx.cr6.lt) goto loc_8233FEA8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x824d438c
	ctx.lr = 0x8233FE34;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8233fe58
	if (ctx.cr6.lt) goto loc_8233FE58;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// bl 0x824d437c
	ctx.lr = 0x8233FE4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8233FE58:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233d448
	ctx.lr = 0x8233FE64;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fe94
	if (ctx.cr6.eq) goto loc_8233FE94;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233FE7C;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233fe94
	if (ctx.cr6.eq) goto loc_8233FE94;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824d438c
	ctx.lr = 0x8233FE8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233FE94;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233FE94:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233FE9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8233FEA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82347EE0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3724(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3724);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82347ef8
	if (!ctx.cr6.eq) goto loc_82347EF8;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82347EF8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// stw r10,3420(r11)
	REX_STORE_U32(ctx.r11.u32 + 3420, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82348C08) {
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
	ctx.lr = 0x82348C10;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r4,3788(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// addi r15,r9,1
	r15.s64 = ctx.r9.s64 + 1;
	// lwz r3,3792(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// lwz r30,3796(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r7,3776(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// add r14,r6,r11
	r14.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r8,15536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// add r26,r10,r7
	r26.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r28,272(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r27,268(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// lwz r21,1896(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 1896);
	// lwz r20,1900(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r14.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// beq cr6,0x82348cac
	if (ctx.cr6.eq) goto loc_82348CAC;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x82348cac
	if (!ctx.cr6.lt) goto loc_82348CAC;
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2948);
	// lwz r10,2960(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2960);
	// stw r11,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r11.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r10.u32);
	// b 0x82348d40
	goto loc_82348D40;
loc_82348CAC:
	// lwz r11,2964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2964);
	// lwz r9,2092(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2092);
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// lwz r10,2040(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2040);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,263
	ctx.r6.s64 = ctx.r9.s64 + 263;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,504
	ctx.r8.s64 = ctx.r10.s64 + 504;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r6,r10,253
	ctx.r6.s64 = ctx.r10.s64 + 253;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r3.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r6,2920(r31)
	REX_STORE_U32(r31.u32 + 2920, ctx.r6.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r11,2924(r31)
	REX_STORE_U32(r31.u32 + 2924, ctx.r11.u32);
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r10,2936(r31)
	REX_STORE_U32(r31.u32 + 2936, ctx.r10.u32);
	// stw r10,2932(r31)
	REX_STORE_U32(r31.u32 + 2932, ctx.r10.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r10.u32);
	// lwzx r6,r4,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// stw r6,2096(r31)
	REX_STORE_U32(r31.u32 + 2096, ctx.r6.u32);
	// lwz r5,2108(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 2108);
	// stw r5,2100(r31)
	REX_STORE_U32(r31.u32 + 2100, ctx.r5.u32);
	// lwzx r4,r9,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r4,1988(r31)
	REX_STORE_U32(r31.u32 + 1988, ctx.r4.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r11,1980(r31)
	REX_STORE_U32(r31.u32 + 1980, ctx.r11.u32);
	// lwz r10,2028(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2028);
	// stw r10,1984(r31)
	REX_STORE_U32(r31.u32 + 1984, ctx.r10.u32);
loc_82348D40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r11,r31,248
	ctx.r11.s64 = r31.s64 + 248;
	// bl 0x82340178
	ctx.lr = 0x82348D50;
	sub_82340178(ctx, base);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// li r22,0
	r22.s64 = 0;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// mr r18,r22
	r18.u64 = r22.u64;
	// stw r10,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82349448
	if (!ctx.cr6.gt) goto loc_82349448;
	// mr r17,r22
	r17.u64 = r22.u64;
loc_82348D88:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r4,15532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15532);
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// beq cr6,0x823494a8
	if (ctx.cr6.eq) goto loc_823494A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823904a8
	ctx.lr = 0x82348DA8;
	sub_823904A8(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// stw r10,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r10.u32);
	// subfe r16,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	r16.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82348dd4
	if (!ctx.cr6.eq) goto loc_82348DD4;
	// lwz r21,1896(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 1896);
	// lwz r20,1900(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// lwz r27,268(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 268);
loc_82348DD4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348dec
	if (!ctx.cr6.eq) goto loc_82348DEC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82348dec
	if (ctx.cr6.eq) goto loc_82348DEC;
	// li r16,1
	r16.s64 = 1;
loc_82348DEC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r24,r22
	r24.u64 = r22.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823493e4
	if (!ctx.cr6.gt) goto loc_823493E4;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r14
	r30.u64 = r14.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r19,r22
	r19.u64 = r22.u64;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r8,r14,r11
	ctx.r8.u64 = ctx.r11.u64 - r14.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r29,r28,15
	r29.s64 = r28.s64 + 15;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// subf r25,r14,r9
	r25.u64 = ctx.r9.u64 - r14.u64;
loc_82348E2C:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348e60
	if (!ctx.cr6.eq) goto loc_82348E60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f3e8
	ctx.lr = 0x82348E40;
	sub_8234F3E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82348e60
	if (ctx.cr6.eq) goto loc_82348E60;
	// addi r4,r31,248
	ctx.r4.s64 = r31.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f478
	ctx.lr = 0x82348E54;
	sub_8234F478(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823494a0
	if (!ctx.cr6.eq) goto loc_823494A0;
	// mr r15,r22
	r15.u64 = r22.u64;
loc_82348E60:
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// stw r15,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r15.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823903f8
	ctx.lr = 0x82348E7C;
	sub_823903F8(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// lwz r11,3112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3112);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823494a0
	if (!ctx.cr6.eq) goto loc_823494A0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234900c
	if (!ctx.cr6.eq) goto loc_8234900C;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823490b0
	if (!ctx.cr6.eq) goto loc_823490B0;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82348f78
	if (!ctx.cr6.lt) goto loc_82348F78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82348f78
	if (ctx.cr6.eq) goto loc_82348F78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82348f44
	if (ctx.cr6.eq) goto loc_82348F44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82348f44
	if (ctx.cr6.eq) goto loc_82348F44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348fc0
	if (!ctx.cr6.eq) goto loc_82348FC0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x82348f04
	if (ctx.cr6.eq) goto loc_82348F04;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82348f08
	if (!ctx.cr6.lt) goto loc_82348F08;
loc_82348F04:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82348F08:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82348f1c
	if (ctx.cr6.eq) goto loc_82348F1C;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// bne cr6,0x82348f20
	if (!ctx.cr6.eq) goto loc_82348F20;
loc_82348F1C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82348F20:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82352e38
	ctx.lr = 0x82348F40;
	sub_82352E38(ctx, base);
	// b 0x82348fb8
	goto loc_82348FB8;
loc_82348F44:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cntlzw r10,r16
	ctx.r10.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// cntlzw r9,r23
	ctx.r9.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// subf r7,r23,r11
	ctx.r7.u64 = ctx.r11.u64 - r23.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r7,r5,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352e38
	ctx.lr = 0x82348F74;
	sub_82352E38(ctx, base);
	// b 0x82348fb8
	goto loc_82348FB8;
loc_82348F78:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cntlzw r4,r23
	ctx.r4.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// lwz r5,1984(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1984);
	// cntlzw r9,r16
	ctx.r9.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// subf r3,r23,r11
	ctx.r3.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,1980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1980);
	// rlwinm r6,r4,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r9,1988(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1988);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ff78
	ctx.lr = 0x82348FB8;
	sub_8238FF78(ctx, base);
loc_82348FB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823494a0
	if (!ctx.cr6.eq) goto loc_823494A0;
loc_82348FC0:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348fdc
	if (!ctx.cr6.eq) goto loc_82348FDC;
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348fe0
	if (ctx.cr6.eq) goto loc_82348FE0;
loc_82348FDC:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82348FE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82349050
	if (ctx.cr6.eq) goto loc_82349050;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82349050
	if (ctx.cr6.eq) goto loc_82349050;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8234900C:
	// stb r22,1(r27)
	REX_STORE_U8(r27.u32 + 1, r22.u8);
	// add r5,r25,r30
	ctx.r5.u64 = r25.u64 + r30.u64;
	// stb r22,0(r27)
	REX_STORE_U8(r27.u32 + 0, r22.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,3156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r24,r6
	ctx.r6.u64 = r24.u64 + ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234904C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82349388
	goto loc_82349388;
loc_82349050:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 0);
	// lbz r9,1(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 1);
	// add r7,r25,r30
	ctx.r7.u64 = r25.u64 + r30.u64;
	// lwz r4,3096(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3096);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + r19.u64;
	// lwz r11,-28024(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28024);
	// add r9,r5,r17
	ctx.r9.u64 = ctx.r5.u64 + r17.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// add r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 + r18.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x823490AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82349380
	goto loc_82349380;
loc_823490B0:
	// stb r22,1(r27)
	REX_STORE_U8(r27.u32 + 1, r22.u8);
	// stb r22,0(r27)
	REX_STORE_U8(r27.u32 + 0, r22.u8);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82349274
	if (ctx.cr6.lt) goto loc_82349274;
	// addic r11,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	ctx.r11.s64 = r23.s64 + -1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// subfe r10,r11,r23
	temp.u8 = (~ctx.r11.u32 + r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x823490e4
	if (ctx.cr6.eq) goto loc_823490E4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823490e8
	if (!ctx.cr6.eq) goto loc_823490E8;
loc_823490E4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823490E8:
	// lwz r9,404(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82349184
	if (ctx.cr6.eq) goto loc_82349184;
	// lbz r8,1(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 1);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lbz r6,-1(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,3(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r15,0(r29)
	r15.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lbz r7,2(r29)
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + 2);
	// stb r8,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stb r6,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r5,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stb r15,3(r29)
	REX_STORE_U8(r29.u32 + 3, r15.u8);
	// stb r7,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// add r7,r25,r30
	ctx.r7.u64 = r25.u64 + r30.u64;
	// lbz r15,112(r1)
	r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// stb r15,1(r29)
	REX_STORE_U8(r29.u32 + 1, r15.u8);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r15,156(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// lbz r15,113(r1)
	r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r14,4(r29)
	r14.u64 = REX_LOAD_U8(r29.u32 + 4);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r15,2(r29)
	REX_STORE_U8(r29.u32 + 2, r15.u8);
	// lbz r15,114(r1)
	r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// stb r14,-1(r29)
	REX_STORE_U8(r29.u32 + -1, r14.u8);
	// stb r15,4(r29)
	REX_STORE_U8(r29.u32 + 4, r15.u8);
	// lbz r15,115(r1)
	r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// stb r15,0(r29)
	REX_STORE_U8(r29.u32 + 0, r15.u8);
	// bl 0x8239d870
	ctx.lr = 0x82349178;
	sub_8239D870(ctx, base);
	// lwz r15,160(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r14,140(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82349380
	goto loc_82349380;
loc_82349184:
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r8,-1(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + -1);
	// lbz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lbz r6,3(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r5,1(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 1);
	// lbz r4,2(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 2);
	// stb r8,4(r29)
	REX_STORE_U8(r29.u32 + 4, ctx.r8.u8);
	// stb r7,-1(r29)
	REX_STORE_U8(r29.u32 + -1, ctx.r7.u8);
	// stb r6,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r6.u8);
	// stb r9,3(r29)
	REX_STORE_U8(r29.u32 + 3, ctx.r9.u8);
	// stb r4,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r4.u8);
	// stb r5,2(r29)
	REX_STORE_U8(r29.u32 + 2, ctx.r5.u8);
	// beq cr6,0x823491e8
	if (ctx.cr6.eq) goto loc_823491E8;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r28
	ctx.r8.u64 = r28.u64 - ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r6,r7,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823491ec
	if (ctx.cr6.eq) goto loc_823491EC;
loc_823491E8:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_823491EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349220
	if (ctx.cr6.eq) goto loc_82349220;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r7,r9,r28
	ctx.r7.u64 = r28.u64 - ctx.r9.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82349224
	if (ctx.cr6.eq) goto loc_82349224;
loc_82349220:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82349224:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82349240
	if (ctx.cr6.eq) goto loc_82349240;
	// lwz r10,-39(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -39);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82349244
	if (ctx.cr6.eq) goto loc_82349244;
loc_82349240:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82349244:
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r7,r25,r30
	ctx.r7.u64 = r25.u64 + r30.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c6f8
	ctx.lr = 0x82349270;
	sub_8239C6F8(ctx, base);
	// b 0x82349380
	goto loc_82349380;
loc_82349274:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// lbz r10,-1(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + -1);
	// lbz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lbz r8,3(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r7,1(r29)
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + 1);
	// lbz r6,2(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 2);
	// stb r10,4(r29)
	REX_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// stb r9,-1(r29)
	REX_STORE_U8(r29.u32 + -1, ctx.r9.u8);
	// stb r8,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r8.u8);
	// stb r11,3(r29)
	REX_STORE_U8(r29.u32 + 3, ctx.r11.u8);
	// stb r6,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r6.u8);
	// stb r7,2(r29)
	REX_STORE_U8(r29.u32 + 2, ctx.r7.u8);
	// beq cr6,0x823492c8
	if (ctx.cr6.eq) goto loc_823492C8;
	// lwz r11,-39(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -39);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823492c8
	if (!ctx.cr6.eq) goto loc_823492C8;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x823492cc
	if (ctx.cr6.gt) goto loc_823492CC;
loc_823492C8:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823492CC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x82349304
	if (ctx.cr6.eq) goto loc_82349304;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r8,r28
	ctx.r7.u64 = r28.u64 - ctx.r8.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82349304
	if (!ctx.cr6.eq) goto loc_82349304;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bgt cr6,0x82349308
	if (ctx.cr6.gt) goto loc_82349308;
loc_82349304:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_82349308:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82349350
	if (ctx.cr6.eq) goto loc_82349350;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x82349350
	if (ctx.cr6.eq) goto loc_82349350;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r28
	ctx.r6.u64 = r28.u64 - ctx.r8.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,0,14,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82349350
	if (!ctx.cr6.eq) goto loc_82349350;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82349354
	if (ctx.cr6.gt) goto loc_82349354;
loc_82349350:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82349354:
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// add r7,r25,r30
	ctx.r7.u64 = r25.u64 + r30.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352938
	ctx.lr = 0x82349380;
	sub_82352938(ctx, base);
loc_82349380:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823494a0
	if (!ctx.cr6.eq) goto loc_823494A0;
loc_82349388:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823493a8
	if (!ctx.cr6.eq) goto loc_823493A8;
	// sth r22,160(r21)
	REX_STORE_U16(r21.u32 + 160, r22.u16);
	// sth r22,128(r21)
	REX_STORE_U16(r21.u32 + 128, r22.u16);
	// sth r22,0(r21)
	REX_STORE_U16(r21.u32 + 0, r22.u16);
loc_823493A8:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r21,r21,192
	r21.s64 = r21.s64 + 192;
	// addi r20,r20,144
	r20.s64 = r20.s64 + 144;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r19,r19,32
	r19.s64 = r19.s64 + 32;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348e2c
	if (ctx.cr6.lt) goto loc_82348E2C;
	// lwz r26,144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r30,136(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_823493E4:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r18,r18,16
	r18.s64 = r18.s64 + 16;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r14,r11,r14
	r14.u64 = ctx.r11.u64 + r14.u64;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r14.u32);
	// addi r17,r17,32
	r17.s64 = r17.s64 + 32;
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// blt cr6,0x82348d88
	if (ctx.cr6.lt) goto loc_82348D88;
loc_82349448:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234949c
	if (ctx.cr6.eq) goto loc_8234949C;
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,3780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,220(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r30,3776(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x82386e00
	ctx.lr = 0x8234949C;
	sub_82386E00(ctx, base);
loc_8234949C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823494A0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
loc_823494A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8236EE60) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8236EE90:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236eec0
	if (ctx.cr6.eq) goto loc_8236EEC0;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// ble cr6,0x8236eeb8
	if (!ctx.cr6.gt) goto loc_8236EEB8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x8236eec0
	goto loc_8236EEC0;
loc_8236EEB8:
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_8236EEC0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8236ee90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EE90;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82372670) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82372678;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82372834
	if (!ctx.cr6.eq) goto loc_82372834;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// mulli r9,r5,3811
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3811));
	// lhz r16,2(r3)
	r16.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r4,6(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r31,48(r3)
	r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 48);
	// lhz r27,22(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// lhz r30,8(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r29,64(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lhz r28,20(r3)
	r28.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r25,34(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r24,50(r3)
	r24.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mulli r26,r5,487
	r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(487));
	// lhz r23,10(r3)
	r23.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r22,80(r3)
	r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// lhz r21,12(r3)
	r21.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r20,96(r3)
	r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 96);
	// lhz r19,26(r3)
	r19.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// lhz r18,82(r3)
	r18.u64 = REX_LOAD_U16(ctx.r3.u32 + 82);
	// lhz r17,14(r3)
	r17.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r15,112(r3)
	r15.u64 = REX_LOAD_U16(ctx.r3.u32 + 112);
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// lhz r14,24(r3)
	r14.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// add r9,r26,r11
	ctx.r9.u64 = r26.u64 + ctx.r11.u64;
	// subf r16,r10,r16
	r16.u64 = r16.u64 - ctx.r10.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mulli r26,r5,506
	r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(506));
	// sth r16,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, r16.u16);
	// stw r10,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r6,r26,r11
	ctx.r6.u64 = r26.u64 + ctx.r11.u64;
	// subf r26,r10,r8
	r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// mulli r9,r5,135
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(135));
	// sth r26,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// sth r7,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r31
	ctx.r4.u64 = r31.u64 - ctx.r10.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// sth r6,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// mulli r7,r5,173
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(173));
	// sth r4,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r4.u16);
	// add r8,r27,r10
	ctx.r8.u64 = r27.u64 + ctx.r10.u64;
	// lwz r27,-160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// sth r8,22(r3)
	REX_STORE_U16(ctx.r3.u32 + 22, ctx.r8.u16);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r29,r28,r10
	r29.u64 = r28.u64 + ctx.r10.u64;
	// mulli r7,r5,61
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(61));
	// sth r27,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, r27.u16);
	// sth r29,20(r3)
	REX_STORE_U16(ctx.r3.u32 + 20, r29.u16);
	// lhz r29,18(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// add r4,r25,r10
	ctx.r4.u64 = r25.u64 + ctx.r10.u64;
	// sth r31,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, r31.u16);
	// add r28,r24,r10
	r28.u64 = r24.u64 + ctx.r10.u64;
	// sth r30,64(r3)
	REX_STORE_U16(ctx.r3.u32 + 64, r30.u16);
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// lhz r31,72(r3)
	r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r30,66(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 66);
	// mulli r27,r5,42
	r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(42));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mulli r5,r5,1084
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1084));
	// subf r26,r10,r23
	r26.u64 = r23.u64 - ctx.r10.u64;
	// subf r25,r10,r22
	r25.u64 = r22.u64 - ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// add r7,r27,r7
	ctx.r7.u64 = r27.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r19,r11
	r27.u64 = r19.u64 + ctx.r11.u64;
	// sth r4,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r4.u16);
	// add r23,r18,r11
	r23.u64 = r18.u64 + ctx.r11.u64;
	// sth r28,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, r28.u16);
	// subf r22,r11,r21
	r22.u64 = r21.u64 - ctx.r11.u64;
	// sth r26,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, r26.u16);
	// subf r24,r11,r20
	r24.u64 = r20.u64 - ctx.r11.u64;
	// sth r25,80(r3)
	REX_STORE_U16(ctx.r3.u32 + 80, r25.u16);
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// sth r22,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, r22.u16);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// sth r24,96(r3)
	REX_STORE_U16(ctx.r3.u32 + 96, r24.u16);
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// sth r27,26(r3)
	REX_STORE_U16(ctx.r3.u32 + 26, r27.u16);
	// subf r5,r11,r17
	ctx.r5.u64 = r17.u64 - ctx.r11.u64;
	// sth r23,82(r3)
	REX_STORE_U16(ctx.r3.u32 + 82, r23.u16);
	// subf r31,r11,r15
	r31.u64 = r15.u64 - ctx.r11.u64;
	// add r6,r14,r11
	ctx.r6.u64 = r14.u64 + ctx.r11.u64;
	// sth r5,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r31,112(r3)
	REX_STORE_U16(ctx.r3.u32 + 112, r31.u16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// sth r6,24(r3)
	REX_STORE_U16(ctx.r3.u32 + 24, ctx.r6.u16);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r7,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r7.u16);
	// sth r11,66(r3)
	REX_STORE_U16(ctx.r3.u32 + 66, ctx.r11.u16);
	// sth r10,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// b 0x822d4ea0
	return;
loc_82372834:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// ori r11,r4,32768
	ctx.r11.u64 = ctx.r4.u64 | 32768;
	// lwz r10,-30200(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -30200);
	// li r8,3
	ctx.r8.s64 = 3;
	// mulli r9,r5,6269
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(6269));
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// mulli r31,r5,708
	r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(708));
	// slw r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lhzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + ctx.r11.u64;
	// li r31,5
	r31.s64 = 5;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// slw r4,r31,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r7.u8 & 0x3F));
	// sthx r6,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u16);
	// mulli r6,r5,172
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(172));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// mulli r5,r5,73
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(73));
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lhzx r6,r10,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// sthx r11,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// subf r7,r4,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// sthx r7,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u16);
	// lhzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// subf r11,r8,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r8.u64;
	// sthx r11,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8237D2C0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bge cr6,0x8237d2e4
	if (!ctx.cr6.lt) goto loc_8237D2E4;
	// addi r11,r3,2468
	ctx.r11.s64 = ctx.r3.s64 + 2468;
	// addi r10,r3,2484
	ctx.r10.s64 = ctx.r3.s64 + 2484;
	// addi r9,r3,2524
	ctx.r9.s64 = ctx.r3.s64 + 2524;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
loc_8237D2E4:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x8237d308
	if (!ctx.cr6.lt) goto loc_8237D308;
	// addi r11,r3,2456
	ctx.r11.s64 = ctx.r3.s64 + 2456;
	// addi r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 + 2496;
	// addi r9,r3,2536
	ctx.r9.s64 = ctx.r3.s64 + 2536;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
loc_8237D308:
	// addi r11,r3,2444
	ctx.r11.s64 = ctx.r3.s64 + 2444;
	// addi r10,r3,2508
	ctx.r10.s64 = ctx.r3.s64 + 2508;
	// addi r9,r3,2548
	ctx.r9.s64 = ctx.r3.s64 + 2548;
	// stw r11,2480(r3)
	REX_STORE_U32(ctx.r3.u32 + 2480, ctx.r11.u32);
	// stw r10,2520(r3)
	REX_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r3)
	REX_STORE_U32(ctx.r3.u32 + 2560, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8237D850) {
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
	ctx.lr = 0x8237D858;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r10,288(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8237d8a0
	if (!ctx.cr6.eq) goto loc_8237D8A0;
	// lwz r10,20684(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237d8b4
	if (ctx.cr6.eq) goto loc_8237D8B4;
loc_8237D8A0:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8237d934
	if (!ctx.cr6.eq) goto loc_8237D934;
loc_8237D8B4:
	// li r30,8
	r30.s64 = 8;
loc_8237D8B8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x8237D8C8;
	sub_822D5870(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x822d5870
	ctx.lr = 0x8237D8DC;
	sub_822D5870(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_8237D8F8:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8237d8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237D8F8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8237D910:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8237d910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237D910;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne 0x8237d8b8
	if (!ctx.cr0.eq) goto loc_8237D8B8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8237D934:
	// lwz r10,1776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// lwz r7,15536(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8237d980
	if (!ctx.cr6.eq) goto loc_8237D980;
	// bl 0x823a3d60
	ctx.lr = 0x8237D97C;
	sub_823A3D60(ctx, base);
	// b 0x8237d984
	goto loc_8237D984;
loc_8237D980:
	// bl 0x823a3c98
	ctx.lr = 0x8237D984;
	sub_823A3C98(ctx, base);
loc_8237D984:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,204(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,3812(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237d6d0
	ctx.lr = 0x8237D9D8;
	sub_8237D6D0(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r7,1784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// mullw r11,r29,r8
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// lwz r6,1788(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// lwz r5,15536(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r7,r4
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8237da40
	if (!ctx.cr6.eq) goto loc_8237DA40;
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8237da3c
	if (ctx.cr6.eq) goto loc_8237DA3C;
	// bl 0x823a4b90
	ctx.lr = 0x8237DA38;
	sub_823A4B90(ctx, base);
	// b 0x8237da40
	goto loc_8237DA40;
loc_8237DA3C:
	// bl 0x823a4c80
	ctx.lr = 0x8237DA40;
	sub_823A4C80(ctx, base);
loc_8237DA40:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20404);
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,30
	ctx.r9.u64 = ctx.r5.u32 & 0x3;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237DAA0;
	sub_823A4D50(ctx, base);
	// lwz r11,3796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// bl 0x823a4d50
	ctx.lr = 0x8237DAD0;
	sub_823A4D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823894A0) {
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
	ctx.lr = 0x823894A8;
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r6,r23,1
	ctx.r6.s64 = r23.s64 + 1;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r22,r6,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r23.u32);
	// add r3,r22,r7
	ctx.r3.u64 = r22.u64 + ctx.r7.u64;
	// stw r22,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, r22.u32);
	// add r4,r22,r4
	ctx.r4.u64 = r22.u64 + ctx.r4.u64;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// beq cr6,0x8238987c
	if (ctx.cr6.eq) goto loc_8238987C;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi. r11,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r11.s64 = r23.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ble 0x823896c8
	if (!ctx.cr0.gt) goto loc_823896C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823894FC:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r11,9(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,8(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r29,3(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// lbz r27,13(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lbz r26,18(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// extsb r24,r30
	r24.s64 = r30.s8;
	// lbz r25,19(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// lbz r22,21(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// lbz r21,20(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// srawi r28,r28,6
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	r28.s64 = r28.s32 >> 6;
	// lbz r18,15(r10)
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lbz r19,2(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// lbz r17,0(r10)
	r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r24,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r24.s64 = r24.s32 >> 4;
	// lbz r15,14(r10)
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// lbz r16,12(r10)
	r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r27,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r27.s64 = r27.s32 >> 2;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// rlwimi r4,r6,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r25
	r25.s64 = r25.s8;
	// rlwimi r28,r24,0,28,29
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r6,r22
	ctx.r6.s64 = r22.s8;
	// rlwimi r27,r26,0,28,29
	r27.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r24,r21
	r24.s64 = r21.s8;
	// srawi r26,r25,6
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3F) != 0);
	r26.s64 = r25.s32 >> 6;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// srawi r25,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r25.s64 = r24.s32 >> 4;
	// rlwimi r4,r5,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r6,r25,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r18
	r25.s64 = r18.s8;
	// rlwimi r29,r19,2,22,27
	r29.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwimi r4,r17,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// srawi r5,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	ctx.r5.s64 = r25.s32 >> 2;
	// lbz r25,4(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r29,r29,2,24,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// stb r4,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// rlwimi r6,r5,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r11,r29,r11
	ctx.r11.u64 = r29.u64 | ctx.r11.u64;
	// lbz r29,22(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r28,r20,0,26,27
	r28.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r30,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// rlwimi r27,r26,0,30,31
	r27.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x3) | (r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// lbz r26,23(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwimi r6,r15,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwimi r28,r19,0,24,25
	r28.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lbz r5,10(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// rlwimi r27,r16,0,24,25
	r27.u64 = (__builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xC0) | (r27.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// rlwinm r6,r22,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC;
	// lbz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// stbu r27,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r7.u32 = ea;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r28,11(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r27,17(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r30,r15
	r30.u64 = r15.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r24,5(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r11,r27
	ctx.r11.s64 = r27.s8;
	// srawi r29,r29,6
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3F) != 0);
	r29.s64 = r29.s32 >> 6;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// rlwimi r5,r4,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsb r4,r26
	ctx.r4.s64 = r26.s8;
	// rlwimi r18,r15,2,22,27
	r18.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x3F0) | (r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r28,r11,0,28,29
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// rlwinm r4,r18,2,24,27
	ctx.r4.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF0;
	// rlwimi r28,r11,0,30,31
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3) | (r28.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r5,r29,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r6,r21,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwimi r5,r25,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r28,r24,0,24,25
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r28,24
	ctx.r6.u64 = r28.u32 & 0xFF;
	// stbu r4,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	r31.u32 = ea;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r6,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x823894fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823894FC;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
loc_823896C8:
	// clrlwi r6,r23,30
	ctx.r6.u64 = r23.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82389868
	if (ctx.cr6.eq) goto loc_82389868;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r23,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r29,r4
	r29.s64 = ctx.r4.s8;
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lbz r27,4(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r26,r30
	r26.u64 = r30.u64;
	// lbz r25,5(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r29,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r29.s64 = r29.s32 >> 2;
	// rlwimi r11,r28,0,24,25
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r4,r30,2,22,27
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3F0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r26,r29,0,26,27
	r26.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x30) | (r26.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r11,0,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r4,2,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xF0;
	// rlwinm r29,r26,0,24,27
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xF0;
	// rlwinm r11,r27,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r4,r25,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x823897b8
	if (!ctx.cr6.eq) goto loc_823897B8;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r26,0(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r25,2(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r27,3(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// extsb r20,r25
	r20.s64 = r25.s8;
	// lbz r21,4(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r24,r27,0,28,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	// lbz r19,5(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// srawi r20,r20,4
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xF) != 0);
	r20.s64 = r20.s32 >> 4;
	// srawi r27,r27,6
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3F) != 0);
	r27.s64 = r27.s32 >> 6;
	// extsb r21,r21
	r21.s64 = r21.s8;
	// extsb r19,r19
	r19.s64 = r19.s8;
	// srawi r24,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	r24.s64 = r24.s32 >> 2;
	// rlwimi r20,r27,0,30,31
	r20.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3) | (r20.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r5,r26,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r21,r21,2
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x3) != 0);
	r21.s64 = r21.s32 >> 2;
	// rlwinm r27,r25,0,28,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	// srawi r26,r19,2
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x3) != 0);
	r26.s64 = r19.s32 >> 2;
	// or r27,r24,r27
	r27.u64 = r24.u64 | r27.u64;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// clrlwi r25,r20,28
	r25.u64 = r20.u32 & 0xF;
	// rlwinm r24,r21,0,26,27
	r24.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,0,26,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x30;
	// or r30,r5,r30
	r30.u64 = ctx.r5.u64 | r30.u64;
	// or r29,r25,r29
	r29.u64 = r25.u64 | r29.u64;
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// or r11,r24,r11
	ctx.r11.u64 = r24.u64 | ctx.r11.u64;
	// or r4,r26,r4
	ctx.r4.u64 = r26.u64 | ctx.r4.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_823897B8:
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r30,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r30.u8);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// bne cr6,0x82389858
	if (!ctx.cr6.eq) goto loc_82389858;
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,4(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r28,r5
	r28.s64 = ctx.r5.s8;
	// lbz r25,0(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r26,5(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r5,r30,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r27,r30
	r27.u64 = r30.u64;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwimi r6,r25,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// extsb r27,r26
	r27.s64 = r26.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// rlwimi r30,r28,0,26,27
	r30.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30) | (r30.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// srawi r28,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r28.s64 = r27.s32 >> 4;
	// rlwinm r5,r30,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// rlwinm r30,r29,0,28,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC;
	// rlwinm r7,r28,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r11,r30,r11
	ctx.r11.u64 = r30.u64 | ctx.r11.u64;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82389858:
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82389868:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r4,r22,r31
	ctx.r4.u64 = r22.u64 + r31.u64;
	// add r3,r22,r3
	ctx.r3.u64 = r22.u64 + ctx.r3.u64;
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
loc_8238987C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82389e30
	if (!ctx.cr6.lt) goto loc_82389E30;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r30,36(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,44(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// srawi r6,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r6.s64 = r23.s32 >> 2;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// stw r11,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r26,r5,-1
	r26.s64 = ctx.r5.s64 + -1;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// addi r25,r8,-1
	r25.s64 = ctx.r8.s64 + -1;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
	// b 0x823898d0
	goto loc_823898D0;
loc_823898CC:
	// lwz r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_823898D0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82389bac
	if (!ctx.cr6.gt) goto loc_82389BAC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823898DC:
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r31,9(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r30,r8
	r30.s64 = ctx.r8.s8;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// lbz r26,19(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r28,r5
	r28.s64 = ctx.r5.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r27,20(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r24,r31
	r24.s64 = r31.s8;
	// lbz r22,3(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// lbz r25,14(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// lbz r23,1(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r28,r28,6
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	r28.s64 = r28.s32 >> 6;
	// stb r26,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, r26.u8);
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r21,13(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lbz r16,22(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// srawi r24,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r24.s64 = r24.s32 >> 4;
	// lwz r19,-220(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwimi r6,r4,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r17,21(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// lbz r18,16(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r14,r27
	r14.s64 = r27.s8;
	// lbz r15,15(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// extsb r26,r26
	r26.s64 = r26.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// rlwimi r6,r30,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r14,r14,6
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3F) != 0);
	r14.s64 = r14.s32 >> 6;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// rlwimi r28,r24,0,28,29
	r28.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r29,r22,2,22,27
	r29.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r4,r25
	ctx.r4.s64 = r25.s8;
	// mr r30,r23
	r30.u64 = r23.u64;
	// rlwimi r6,r23,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r8,r23,2,22,27
	ctx.r8.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stb r6,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// rlwimi r14,r26,0,28,29
	r14.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xC) | (r14.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r28,r20,0,26,27
	r28.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r29,2,24,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// lbz r29,5(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r8,r8,2,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xF0;
	// or r6,r30,r5
	ctx.r6.u64 = r30.u64 | ctx.r5.u64;
	// lbz r30,11(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwimi r14,r4,0,26,27
	r14.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30) | (r14.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r22,0,24,25
	r28.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC0) | (r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r5,r31,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// lbz r31,24(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lbz r28,17(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// rlwimi r14,r21,0,24,25
	r14.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC0) | (r14.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stbu r14,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, r14.u8);
	ctx.r7.u32 = ea;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsb r5,r16
	ctx.r5.s64 = r16.s8;
	// extsb r10,r17
	ctx.r10.s64 = r17.s8;
	// stb r4,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r4.u8);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lbz r4,23(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// rlwinm r20,r27,0,28,29
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	// lbz r27,6(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r14,r16,0,28,29
	r14.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xC;
	// extsb r26,r18
	r26.s64 = r18.s8;
	// lwz r22,-216(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// rlwimi r5,r10,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r24,12(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r23,r4,0,28,29
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r6,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// rotlwi r10,r19,0
	ctx.r10.u64 = __builtin_rotateleft32(r19.u32, 0);
	// lbz r19,18(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r25,r21,2,22,27
	r25.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (r25.u64 & 0xFFFFFFFFFFFFFC0F);
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stb r3,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r3.u8);
	// mr r22,r30
	r22.u64 = r30.u64;
	// srawi r3,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r3.s64 = r26.s32 >> 2;
	// stb r27,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, r27.u8);
	// mr r21,r27
	r21.u64 = r27.u64;
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwimi r22,r29,2,22,27
	r22.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3F0) | (r22.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// srawi r14,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	r14.s64 = r14.s32 >> 2;
	// mr r23,r29
	r23.u64 = r29.u64;
	// rlwinm r16,r31,0,28,29
	r16.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r23,r22,2,24,27
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xF0;
	// lbz r22,-224(r1)
	r22.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// rlwimi r11,r21,2,22,27
	ctx.r11.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r5,r3,0,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// extsb r27,r28
	r27.s64 = r28.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// or r6,r23,r6
	ctx.r6.u64 = r23.u64 | ctx.r6.u64;
	// srawi r3,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	ctx.r3.s64 = r16.s32 >> 2;
	// rlwinm r21,r11,2,24,27
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r28,0,28,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// rlwimi r5,r15,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r26,r15
	r26.u64 = r15.u64;
	// or r3,r21,r3
	ctx.r3.u64 = r21.u64 | ctx.r3.u64;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// rlwinm r26,r25,2,24,27
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xF0;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | r28.u64;
	// rlwinm r23,r19,0,28,29
	r23.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// stb r6,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// or r5,r3,r23
	ctx.r5.u64 = ctx.r3.u64 | r23.u64;
	// or r26,r26,r20
	r26.u64 = r26.u64 | r20.u64;
	// rlwinm r22,r22,0,28,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xC;
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// rlwimi r4,r27,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// stb r5,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// extsb r3,r31
	ctx.r3.s64 = r31.s8;
	// extsb r31,r19
	r31.s64 = r19.s8;
	// or r26,r26,r22
	r26.u64 = r26.u64 | r22.u64;
	// rlwimi r4,r30,0,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// stbu r26,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r10.u32 = ea;
	// rlwimi r18,r15,2,22,27
	r18.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x3F0) | (r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// extsb r30,r24
	r30.s64 = r24.s8;
	// rlwinm r25,r18,2,24,27
	r25.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xF0;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// rlwimi r3,r31,0,28,29
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lwz r10,60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// or r27,r25,r14
	r27.u64 = r25.u64 | r14.u64;
	// rlwimi r3,r5,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r5,-223(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -223);
	// rlwinm r25,r17,0,28,29
	r25.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xC;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// rlwimi r4,r29,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r27,r27,r25
	r27.u64 = r27.u64 | r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// addi r25,r10,1
	r25.s64 = ctx.r10.s64 + 1;
	// lwz r10,68(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// stbu r27,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r8.u32 = ea;
	// rlwimi r30,r5,0,24,25
	r30.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0) | (r30.u64 & 0xFFFFFFFFFFFFFF3F);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r27,r7,1
	r27.s64 = ctx.r7.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r7,-192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r26,r6,1
	r26.s64 = ctx.r6.s64 + 1;
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
	// bdnz 0x823898dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823898DC;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-184(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_82389BAC:
	// clrlwi r10,r23,30
	ctx.r10.u64 = r23.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389e04
	if (ctx.cr6.eq) goto loc_82389E04;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r21,r23,0,30,30
	r21.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r20,5(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbz r19,6(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// rlwimi r29,r8,0,26,27
	r29.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30) | (r29.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r30,0,26,27
	r28.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x30) | (r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r10,r6,2,22,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r9,r5,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r5,r29,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r28,0,24,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0;
	// rlwinm r30,r10,2,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r9,2,24,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// rlwinm r10,r20,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r9,r19,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r8,r20,4,24,25
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xC0;
	// rlwinm r6,r19,4,24,25
	ctx.r6.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xC0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// bne cr6,0x82389d20
	if (!ctx.cr6.eq) goto loc_82389D20;
	// lbz r21,1(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r25,2(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r23,r21
	r23.s64 = r21.s8;
	// std r7,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// rlwinm r16,r25,0,28,29
	r16.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	// std r4,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// extsb r18,r25
	r18.s64 = r25.s8;
	// std r31,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, r31.u64);
	// srawi r25,r23,4
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0xF) != 0);
	r25.s64 = r23.s32 >> 4;
	// std r3,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lbz r19,3(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r18,r18,6
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x3F) != 0);
	r18.s64 = r18.s32 >> 6;
	// stb r25,-224(r1)
	REX_STORE_U8(ctx.r1.u32 + -224, r25.u8);
	// srawi r16,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	r16.s64 = r16.s32 >> 2;
	// lbz r20,4(r11)
	r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r19,24
	ctx.r7.u64 = r19.u32 & 0xFF;
	// lbz r17,5(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r21,r21,0,28,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwinm r14,r20,0,28,29
	r14.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xC;
	// lbz r15,6(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r20,r20
	r20.s64 = r20.s8;
	// stb r19,-223(r1)
	REX_STORE_U8(ctx.r1.u32 + -223, r19.u8);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// lwz r24,68(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// srawi r20,r20,6
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3F) != 0);
	r20.s64 = r20.s32 >> 6;
	// lwz r25,60(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// extsb r4,r17
	ctx.r4.s64 = r17.s8;
	// lwz r22,-200(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// extsb r3,r15
	ctx.r3.s64 = r15.s8;
	// lwz r23,-184(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r7,r20,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r14,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	r14.s64 = r14.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwinm r20,r19,0,28,29
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// srawi r19,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r19.s64 = ctx.r3.s32 >> 2;
	// or r21,r16,r21
	r21.u64 = r16.u64 | r21.u64;
	// or r20,r14,r20
	r20.u64 = r14.u64 | r20.u64;
	// clrlwi r16,r7,28
	r16.u64 = ctx.r7.u32 & 0xF;
	// ld r7,-168(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// rlwinm r14,r4,0,26,27
	r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// ld r4,-192(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// rlwinm r19,r19,0,26,27
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x30;
	// ld r3,-208(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// or r30,r21,r30
	r30.u64 = r21.u64 | r30.u64;
	// lbz r31,-224(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// or r29,r16,r29
	r29.u64 = r16.u64 | r29.u64;
	// or r28,r20,r28
	r28.u64 = r20.u64 | r28.u64;
	// rlwimi r31,r18,0,30,31
	r31.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x3) | (r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r18,r17,2,26,27
	r18.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x30;
	// rlwinm r17,r15,2,26,27
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x30;
	// clrlwi r15,r31,28
	r15.u64 = r31.u32 & 0xF;
	// ld r31,-216(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// or r8,r18,r8
	ctx.r8.u64 = r18.u64 | ctx.r8.u64;
	// or r6,r17,r6
	ctx.r6.u64 = r17.u64 | ctx.r6.u64;
	// or r5,r15,r5
	ctx.r5.u64 = r15.u64 | ctx.r5.u64;
	// or r10,r14,r10
	ctx.r10.u64 = r14.u64 | ctx.r10.u64;
	// or r9,r19,r9
	ctx.r9.u64 = r19.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_82389D20:
	// stb r5,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r23,30
	ctx.r5.u64 = r23.u32 & 0x3;
	// stb r30,0(r31)
	REX_STORE_U8(r31.u32 + 0, r30.u8);
	// stb r29,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stb r28,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x82389de4
	if (!ctx.cr6.eq) goto loc_82389DE4;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r30,r8,24
	r30.u64 = ctx.r8.u32 & 0xFF;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r21,3(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r20,r29
	r20.s64 = r29.s8;
	// srawi r18,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r18.s64 = ctx.r8.s32 >> 2;
	// lbz r19,5(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r17,r28
	r17.u64 = r28.u64;
	// lbzu r8,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r20,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r20.s64 = r20.s32 >> 2;
	// mr r16,r21
	r16.u64 = r21.u64;
	// rlwimi r17,r18,0,26,27
	r17.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x30) | (r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r5,r28,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r16,r20,0,26,27
	r16.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x30) | (r16.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r20,r17,0,24,27
	r20.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xF0;
	// rlwimi r29,r21,2,22,27
	r29.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3F0) | (r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r15,r19
	r15.s64 = r19.s8;
	// stb r20,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, r20.u8);
	// extsb r14,r8
	r14.s64 = ctx.r8.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// srawi r28,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	r28.s64 = r15.s32 >> 4;
	// rlwinm r7,r29,2,24,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xF0;
	// stb r5,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r5.u8);
	// srawi r21,r14,4
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xF) != 0);
	r21.s64 = r14.s32 >> 4;
	// rlwinm r5,r8,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stb r7,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// rlwinm r8,r28,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// rlwinm r18,r16,0,24,27
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xF0;
	// rlwinm r7,r21,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xC;
	// rlwinm r31,r19,0,28,29
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xC;
	// stb r18,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r18.u8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r31,r30
	ctx.r8.u64 = r31.u64 | r30.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82389DE4:
	// stbu r8,1(r27)
	ea = 1 + r27.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	r27.u32 = ea;
	// stbu r6,1(r26)
	ea = 1 + r26.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	r26.u32 = ea;
	// stbu r10,1(r25)
	ea = 1 + r25.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r25.u32 = ea;
	// stbu r9,1(r24)
	ea = 1 + r24.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	r24.u32 = ea;
	// stw r27,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r27.u32);
	// stw r26,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r26.u32);
	// stw r25,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r25.u32);
	// stw r24,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r24.u32);
loc_82389E04:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r4,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r3,r22,r3
	ctx.r3.u64 = r22.u64 + ctx.r3.u64;
	// add r4,r22,r4
	ctx.r4.u64 = r22.u64 + ctx.r4.u64;
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r3,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// bne 0x823898cc
	if (!ctx.cr0.eq) goto loc_823898CC;
loc_82389E30:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823BA7D8) {
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
	ctx.lr = 0x823BA7E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r11,-9296
	ctx.r5.s64 = ctx.r11.s64 + -9296;
	// stw r5,-572(r1)
	REX_STORE_U32(ctx.r1.u32 + -572, ctx.r5.u32);
	// beq cr6,0x823bade0
	if (ctx.cr6.eq) goto loc_823BADE0;
	// addi r11,r1,-560
	ctx.r11.s64 = ctx.r1.s64 + -560;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lvx128 v1,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// vspltish v17,1
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,2
	ctx.r10.s64 = 2;
	// vspltish v21,2
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x2)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v22,v13,1
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r31,r6,r8
	r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vaddshs v13,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// subf r30,r8,r3
	r30.u64 = ctx.r3.u64 - ctx.r8.u64;
	// vspltish v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x3)));
	// add r29,r31,r8
	r29.u64 = r31.u64 + ctx.r8.u64;
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// subf r28,r8,r30
	r28.u64 = r30.u64 - ctx.r8.u64;
	// vspltish v16,5
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_set1_epi16(short(0x5)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v19,8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_set1_epi16(short(0x8)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vspltish v18,15
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_set1_epi16(short(0xF)));
	// add r24,r29,r8
	r24.u64 = r29.u64 + ctx.r8.u64;
	// vspltisw v15,4
	simde_mm_store_si128((simde__m128i*)v15.u32, simde_mm_set1_epi32(int(0x4)));
	// subf r23,r8,r28
	r23.u64 = r28.u64 - ctx.r8.u64;
	// vupkhsh v14,v13
	simde_mm_store_si128((simde__m128i*)v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
loc_823BA86C:
	// lvlx v13,r11,r23
	temp.u32 = ctx.r11.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvlx v12,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v0,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v2,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v31,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v10,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v27,r11,r24
	temp.u32 = ctx.r11.u32 + r24.u32;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v6,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v3,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx v28,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v2,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v23,v5,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v25,v0,v27
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v13,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmrghb v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v11,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v13,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v31,v6,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v24,v10,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v30,v4,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v26,v12,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v3,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v62,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v61,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vsubshs v13,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vor128 v60,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vor128 v58,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v9,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v8,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vcmpgtuh v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v2,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmaxsh v30,v12,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v13,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmaxsh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v11,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v7,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vcmpgtuh v20,v7,v13
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v30,v7,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vcmpgtuh v13,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v26,v7,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpgtuh v28,v7,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v12,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v20,v3,v16
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v20.u16), 0xFFFF);
	// mfocrf r27,2
	r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// vor128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vor128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v9,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v8,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// beq cr6,0x823bace0
	if (ctx.cr6.eq) goto loc_823BACE0;
	// vminsh v30,v12,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vminsh v28,v11,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v26,v8,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v56,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v55,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v2,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v54,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v28,v26,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vminsh v2,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v26,v12,v0
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v30,v22,v22
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vminsh v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v28,v0,v26
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh. v30,v30,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v30.u16), 0xFFFF);
	// vupkhsh v26,v2
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v14,v26
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v14.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// vand128 v63,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v2
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v2,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v14.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r25,2
	r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v15
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v15.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// mfocrf r26,2
	r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v3
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v3,v26,v15
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v15.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), 0xF);
	// mfocrf r22,2
	r22.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r21,r26,0,26,26
	r21.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// mr r26,r22
	r26.u64 = r22.u64;
	// vor128 v12,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(r21.s32, 32, ctx.xer);
	// vor128 v13,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v11,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// beq cr6,0x823baa6c
	if (ctx.cr6.eq) goto loc_823BAA6C;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x823baa84
	if (!ctx.cr6.eq) goto loc_823BAA84;
loc_823BAA6C:
	// rlwinm r10,r26,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x823bace0
	if (ctx.cr6.eq) goto loc_823BACE0;
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x823bace0
	if (ctx.cr6.eq) goto loc_823BACE0;
loc_823BAA84:
	// vsubshs v30,v8,v29
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// addi r26,r1,-464
	r26.s64 = ctx.r1.s64 + -464;
	// vsubshs v28,v0,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r25,r1,-416
	r25.s64 = ctx.r1.s64 + -416;
	// vor128 v53,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r21,r1,-384
	r21.s64 = ctx.r1.s64 + -384;
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r20,r1,-352
	r20.s64 = ctx.r1.s64 + -352;
	// vsubshs v26,v0,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r22,r1,-288
	r22.s64 = ctx.r1.s64 + -288;
	// vmaxsh v28,v28,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vaddshs v31,v10,v4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v2,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsh v30,v22,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// vaddshs v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsh v28,v22,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vand128 v49,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vandc128 v48,v8,v30
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vand128 v51,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vandc128 v50,v6,v28
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v31,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vxor128 v31,v49,v48
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vor128 v52,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vaddshs v26,v2,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// stvx128 v28,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v28,v31,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v2,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v47,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vaddshs v5,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v2,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vor128 v45,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// lvx128 v27,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v30,v51,v50
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// addi r25,r1,-448
	r25.s64 = ctx.r1.s64 + -448;
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v5,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v13,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v29,v6,v30
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v5,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// lvx128 v7,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-256
	r26.s64 = ctx.r1.s64 + -256;
	// vaddshs v25,v29,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v31,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v46,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v27,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vandc128 v44,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vandc128 v43,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v42,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v0,v19
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v0,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v0,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v5,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v5,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v41,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v40,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v26,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v2,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v39,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v28,v4,v4
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v29,v31,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vand128 v36,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v2,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v30,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v3,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v31,v30,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v30,v28,v26
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsrah v29,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v37,v40,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vsrah v28,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v32,v36,v47
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vsrah v25,v30,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v33,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vpkshus128 v34,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vand128 v59,v29,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v38,v41,v43
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vpkshus128 v60,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16)));
	// vsrah v26,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v61,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vand128 v58,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v5,v39,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vpkshus128 v35,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v38.s16)));
	// vandc128 v57,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvewx128 v34,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vand128 v56,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v34,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v4,v59,v33
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// stvewx128 v60,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// vandc128 v55,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v62,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v54,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v60,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v51,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vxor128 v50,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vpkshus128 v49,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvewx128 v35,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v0,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vxor128 v48,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvewx128 v35,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v47,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16)));
	// vor128 v7,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vpkshus128 v44,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v50.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// stvewx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v1,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vpkshus128 v43,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v48.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16)));
	// vor128 v27,v45,v45
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// stvewx128 v49,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x823bace8
	goto loc_823BACE8;
loc_823BACE0:
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
loc_823BACE8:
	// rlwinm r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x823badd8
	if (ctx.cr6.eq) goto loc_823BADD8;
	// vsubshs v8,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vsubshs v6,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v23,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v3,v23
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v28,v2,v24
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v24,v31,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v30,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v11,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v3,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v8,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v6,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v2,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v29,v27,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v30,v0,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v11,v27,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v28,v8,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmaxsh v27,v6,v30
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v26,v0,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v25,v10,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v27,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v13,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vxor128 v42,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsrah v8,v29,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v12,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsrah v13,v13,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v41,v42,v20
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vsubshs v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vcmpgtsh v6,v22,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtsh v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v2,v10,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v40,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vaddshs v31,v2,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v31,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v39,v30,v40
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vand128 v38,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vand128 v29,v38,v41
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vminsh v28,v8,v29
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vxor v27,v28,v11
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v5,v13
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v25,v4,v13
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v37,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus128 v36,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvewx128 v37,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
loc_823BADD8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823ba86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA86C;
loc_823BADE0:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// addi r26,r1,-560
	r26.s64 = ctx.r1.s64 + -560;
	// vspltisw128 v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x4)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v1,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,2
	ctx.r10.s64 = 2;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r6,r8,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r8.u64;
	// vspltish v17,1
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x1)));
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vspltish v21,2
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x2)));
	// lvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v24,v13,1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// subf r31,r8,r6
	r31.u64 = ctx.r6.u64 - ctx.r8.u64;
	// vaddshs v13,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// add r30,r3,r8
	r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// subf r29,r8,r31
	r29.u64 = r31.u64 - ctx.r8.u64;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// add r28,r30,r8
	r28.u64 = r30.u64 + ctx.r8.u64;
	// vspltish v15,5
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r27,r8,r29
	r27.u64 = r29.u64 - ctx.r8.u64;
	// vspltish v19,8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v18,15
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_set1_epi16(short(0xF)));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r23,r28,r8
	r23.u64 = r28.u64 + ctx.r8.u64;
	// subf r22,r8,r27
	r22.u64 = r27.u64 - ctx.r8.u64;
	// vor128 v16,v62,v62
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vupkhsh v14,v13
	simde_mm_store_si128((simde__m128i*)v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
loc_823BAE5C:
	// lvlx v13,r11,r22
	temp.u32 = ctx.r11.u32 + r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvlx v12,r11,r27
	temp.u32 = ctx.r11.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v0,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v2,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v31,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v10,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v27,r11,r23
	temp.u32 = ctx.r11.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v6,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v3,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvlx v28,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v35,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v5,v11
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v25,v0,v27
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v13,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmrghb v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v11,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v13,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v31,v6,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v23,v10,v4
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v30,v4,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v26,v12,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v3,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v34,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v33,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vsubshs v13,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vor128 v32,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vor128 v61,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v7,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vcmpgtuh v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v2,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmaxsh v30,v12,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v13,v13,v23
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmaxsh v28,v8,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v11,v7,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vcmpgtuh v20,v9,v13
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v12,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v20,v3,v15
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v20.u16), 0xFFFF);
	// mfocrf r26,2
	r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r10,r26,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// vor128 v13,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vor128 v12,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// vor128 v11,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v10,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v7,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// beq cr6,0x823bb2d0
	if (ctx.cr6.eq) goto loc_823BB2D0;
	// vminsh v30,v12,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vminsh v28,v11,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v26,v7,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v59,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v58,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v2,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v57,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v28,v26,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vminsh v2,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v26,v12,v0
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v30,v24,v24
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vminsh v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v28,v0,v26
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh. v30,v30,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v30.u16), 0xFFFF);
	// vupkhsh v26,v2
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v14,v26
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v14.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// vand128 v63,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v2
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v2,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v14.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r24,2
	r24.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v16
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// mfocrf r25,2
	r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v3
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), 0xF);
	// mfocrf r21,2
	r21.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r20,r25,0,26,26
	r20.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// vor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// mr r25,r21
	r25.u64 = r21.u64;
	// vor128 v12,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// cmpwi cr6,r20,32
	ctx.cr6.compare<int32_t>(r20.s32, 32, ctx.xer);
	// vor128 v13,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vor128 v11,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// beq cr6,0x823bb05c
	if (ctx.cr6.eq) goto loc_823BB05C;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x823bb074
	if (!ctx.cr6.eq) goto loc_823BB074;
loc_823BB05C:
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x823bb2d0
	if (ctx.cr6.eq) goto loc_823BB2D0;
	// rlwinm r10,r24,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x823bb2d0
	if (ctx.cr6.eq) goto loc_823BB2D0;
loc_823BB074:
	// vsubshs v30,v7,v29
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// addi r25,r1,-320
	r25.s64 = ctx.r1.s64 + -320;
	// vsubshs v28,v0,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r24,r1,-480
	r24.s64 = ctx.r1.s64 + -480;
	// vor128 v56,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r20,r1,-512
	r20.s64 = ctx.r1.s64 + -512;
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r19,r1,-544
	r19.s64 = ctx.r1.s64 + -544;
	// vsubshs v26,v0,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r21,r1,-496
	r21.s64 = ctx.r1.s64 + -496;
	// vmaxsh v28,v28,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vaddshs v31,v10,v4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v2,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsh v30,v24,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// addi r25,r1,-528
	r25.s64 = ctx.r1.s64 + -528;
	// vaddshs v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsh v28,v24,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vand128 v52,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vandc128 v51,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vand128 v54,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vandc128 v53,v6,v28
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v31,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vxor128 v31,v52,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v55,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v26,v2,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// stvx128 v28,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v28,v31,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v2,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v50,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vaddshs v5,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v2,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vor128 v48,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// lvx128 v27,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v30,v54,v53
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// addi r24,r1,-560
	r24.s64 = ctx.r1.s64 + -560;
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v9,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v5,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v13,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v29,v6,v30
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v5,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// lvx128 v9,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,-192
	r25.s64 = ctx.r1.s64 + -192;
	// vaddshs v25,v29,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v31,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v49,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v27,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vandc128 v47,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v46,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v45,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v0,v19
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v0,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v0,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v5,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v5,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v44,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v43,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v26,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v2,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v42,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v28,v4,v4
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v31,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vand128 v39,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v2,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v30,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v3,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v31,v30,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v30,v28,v26
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsrah v29,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v40,v43,v47
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vsrah v28,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v35,v39,v50
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsrah v25,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v36,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vpkshus128 v37,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vand128 v61,v29,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v41,v44,v46
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vpkshus128 v32,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vsrah v26,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v33,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vand128 v60,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v5,v42,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vpkshus128 v38,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vandc128 v59,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvewx128 v37,r27,r11
	ea = (r27.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// vand128 v58,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v37,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v4,v61,v36
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// stvewx128 v32,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// vandc128 v57,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v34,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v54,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v32,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v53,v60,v33
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vxor128 v52,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vpkshus128 v51,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvewx128 v38,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v0,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vxor128 v50,v54,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvewx128 v38,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v47,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vor128 v9,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vpkshus128 v46,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// stvewx128 v34,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v1,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vpkshus128 v45,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v50.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// vor128 v27,v48,v48
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// stvewx128 v51,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x823bb2d8
	goto loc_823BB2D8;
loc_823BB2D0:
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
loc_823BB2D8:
	// rlwinm r10,r26,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x823bb3c8
	if (ctx.cr6.eq) goto loc_823BB3C8;
	// vsubshs v7,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vsubshs v6,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v22,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v23,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v7,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v29,v3,v22
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v28,v2,v23
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v23,v31,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v22,v30,v28
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v11,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v3,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v7,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v2,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v29,v27,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v0,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v30,v0,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v11,v27,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v28,v7,v31
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmaxsh v27,v6,v30
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v26,v0,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v25,v10,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v28,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v13,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vxor128 v44,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsrah v7,v29,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v12,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v43,v44,v20
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vsubshs v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vcmpgtsh v6,v24,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtsh v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v2,v10,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v42,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vaddshs v31,v2,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v41,v30,v42
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vand128 v40,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vand128 v29,v40,v43
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vminsh v28,v7,v29
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vxor v27,v28,v11
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v5,v13
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v25,v4,v13
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v39,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus128 v38,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvewx128 v39,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
loc_823BB3C8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823bae5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BAE5C;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r1,-528
	ctx.r11.s64 = ctx.r1.s64 + -528;
	// addi r3,r1,-480
	ctx.r3.s64 = ctx.r1.s64 + -480;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// addi r6,r1,-560
	ctx.r6.s64 = ctx.r1.s64 + -560;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r4,3
	r25.s64 = ctx.r4.s64 + 3;
	// vspltish v14,2
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r10,r1,-496
	ctx.r10.s64 = ctx.r1.s64 + -496;
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_set1_epi16(short(0x8)));
	// add r24,r25,r8
	r24.u64 = r25.u64 + ctx.r8.u64;
	// vspltish v1,5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x5)));
	// addi r31,r1,-512
	r31.s64 = ctx.r1.s64 + -512;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// add r23,r24,r8
	r23.u64 = r24.u64 + ctx.r8.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r22,r23,r8
	r22.u64 = r23.u64 + ctx.r8.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r21,r22,r8
	r21.u64 = r22.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r20,r21,r8
	r20.u64 = r21.u64 + ctx.r8.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v17,v13,1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vaddshs v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// add r19,r20,r8
	r19.u64 = r20.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// add r18,r19,r8
	r18.u64 = r19.u64 + ctx.r8.u64;
	// vupkhsh v21,v13
	simde_mm_store_si128((simde__m128i*)v21.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// stvx128 v21,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823bb460
	goto loc_823BB460;
loc_823BB458:
	// addi r9,r1,-512
	ctx.r9.s64 = ctx.r1.s64 + -512;
	// lvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823BB460:
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + r25.u64;
	// lvlx128 v37,r10,r25
	temp.u32 = ctx.r10.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r10,r21
	r30.u64 = ctx.r10.u64 + r21.u64;
	// lvlx128 v36,r10,r21
	temp.u32 = ctx.r10.u32 + r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// lvlx128 v35,r10,r24
	temp.u32 = ctx.r10.u32 + r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r29,r10,r20
	r29.u64 = ctx.r10.u64 + r20.u64;
	// lvlx128 v34,r10,r20
	temp.u32 = ctx.r10.u32 + r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// lvlx128 v33,r10,r23
	temp.u32 = ctx.r10.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r10,r19
	r28.u64 = ctx.r10.u64 + r19.u64;
	// lvrx128 v32,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v63,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r10,r22
	r31.u64 = ctx.r10.u64 + r22.u64;
	// add r27,r10,r18
	r27.u64 = ctx.r10.u64 + r18.u64;
	// lvrx128 v61,r26,r6
	temp.u32 = r26.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v13,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v59,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v58,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v34,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v57,r10,r19
	temp.u32 = ctx.r10.u32 + r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v35,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v56,r10,r22
	temp.u32 = ctx.r10.u32 + r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v33,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v54,r11,r27
	temp.u32 = ctx.r11.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v53,r10,r18
	temp.u32 = ctx.r10.u32 + r18.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v4,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor128 v10,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v6,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v5,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v4,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v7,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v3,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v31,v13,v11
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v30,v12,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v12,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v10,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v29,v3,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v19,v5,v13
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v23,v31,v30
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vsubshs v18,v12,v4
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v22,v31,v30
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vsubshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v30,v7,v5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v25,v4,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v3,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v28,v13,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v10,v12
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v15,v0,v30
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v27,v11,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v13,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v12,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r26,r1,-496
	r26.s64 = ctx.r1.s64 + -496;
	// vmaxsh v30,v15,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v31,v0,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vor128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v49,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v48,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v15,v0,v18
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v11,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v8,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vcmpgtuh v20,v9,v20
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vmaxsh v31,v31,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v25,v12,v25
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vmaxsh v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v15,v15,v18
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vmaxsh v28,v10,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v26,v11,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmaxsh v12,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v20,v20,v30
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtuh v30,v9,v13
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vcmpgtuh v25,v9,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vcmpgtuh v15,v9,v15
	simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v20,v30,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v15,v15,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v30,v13,v28
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vor128 v47,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v7,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v15,v20
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v26,v30,v31
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v25,v26,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v31,v0,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vperm v31,v31,v31,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcmpgtsh. v15,v31,v1
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v15.u16), 0xFFFF);
	// mfocrf r26,2
	r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r17,r26,0,26,26
	r17.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// vor128 v13,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v12,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(r17.s32, 32, ctx.xer);
	// vor128 v11,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v10,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v8,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// beq cr6,0x823bb9e4
	if (ctx.cr6.eq) goto loc_823BB9E4;
	// vminsh v26,v13,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v25,v7,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v46,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vminsh v28,v10,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmaxsh v20,v4,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v0,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vminsh v30,v4,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor128 v45,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v44,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaxsh v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v12,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v26,v25,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vminsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v25,v0,v20
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmaxsh v20,v12,v13
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v28,v17,v17
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vminsh v30,v26,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v26,v20,v25
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v30,v26,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsh. v20,v28,v30
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v20.u16), 0xFFFF);
	// vupkhsh v25,v30
	simde_mm_store_si128((simde__m128i*)v25.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16))));
	// vcmpgtsw. v28,v21,v25
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// vand128 v63,v20,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// mfocrf r17,2
	r17.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v30
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsw. v25,v21,v26
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v25.u32)), 0xF);
	// mfocrf r15,2
	r15.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v21,v31
	simde_mm_store_si128((simde__m128i*)v21.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16))));
	// vor128 v30,v62,v62
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vcmpgtsw. v20,v21,v30
	simde_mm_store_si128((simde__m128i*)v20.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v20.u32)), 0xF);
	// mfocrf r16,2
	r16.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v31,v31
	simde_mm_store_si128((simde__m128i*)v31.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsw. v30,v31,v30
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v30.u32)), 0xF);
	// mfocrf r14,2
	r14.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r16,r16,0,26,26
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x20;
	// vor128 v0,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vor128 v13,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// stw r16,-576(r1)
	REX_STORE_U32(ctx.r1.u32 + -576, r16.u32);
	// mr r16,r14
	r16.u64 = r14.u64;
	// lwz r14,-576(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -576);
	// cmpwi cr6,r14,32
	ctx.cr6.compare<int32_t>(r14.s32, 32, ctx.xer);
	// vor128 v12,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// beq cr6,0x823bb724
	if (ctx.cr6.eq) goto loc_823BB724;
	// rlwinm r17,r17,0,26,26
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(r17.s32, 32, ctx.xer);
	// bne cr6,0x823bb73c
	if (!ctx.cr6.eq) goto loc_823BB73C;
loc_823BB724:
	// rlwinm r17,r16,0,26,26
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(r17.s32, 32, ctx.xer);
	// beq cr6,0x823bb9e4
	if (ctx.cr6.eq) goto loc_823BB9E4;
	// rlwinm r17,r15,0,26,26
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(r17.s32, 32, ctx.xer);
	// beq cr6,0x823bb9e4
	if (ctx.cr6.eq) goto loc_823BB9E4;
loc_823BB73C:
	// vsubshs v28,v7,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r5,r1,-400
	ctx.r5.s64 = ctx.r1.s64 + -400;
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r17,r1,-368
	r17.s64 = ctx.r1.s64 + -368;
	// vor128 v43,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsubshs v30,v0,v28
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v26,v31,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v5,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmaxsh v25,v30,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vcmpgtsh v21,v17,v26
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v31,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsh v28,v17,v25
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vand128 v41,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vandc128 v40,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v25,v31,v26
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vand128 v39,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vaddshs v2,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vxor128 v29,v41,v40
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vandc128 v38,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v30,v12,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v2,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v31,v29,v29
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vxor128 v2,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vaddshs v28,v6,v29
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v31,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v30,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v2,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v28,v28
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v29,v11,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v37,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddshs v26,v26,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v36,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v20,v2,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v26,v16
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v0,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vandc128 v34,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v33,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v25,v26
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v1,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r7,r1,-336
	ctx.r7.s64 = ctx.r1.s64 + -336;
	// vaddshs v29,v20,v16
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v3,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vandc128 v32,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v9,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// lvx128 v21,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// lvx128 v21,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v20,v25,v28
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v29,v9,v21
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v31,v3,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v20,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v2,v29
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v20,v31,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v31,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vand128 v61,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v60,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v59,v21,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v0,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vxor128 v20,v61,v33
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vxor128 v58,v60,v32
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vxor128 v21,v59,v34
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v2,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v2,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v31,v21,v20
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkshus128 v2,v42,v58
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vaddshs v0,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lwz r5,-572(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -572);
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v28,v29,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v29,v31,v23
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v31,v31,v23
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vaddshs v25,v25,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v26,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsrah v3,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v23,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v57,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vandc128 v56,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vand128 v54,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v53,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v50,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v48,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v55,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vandc128 v51,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vandc128 v49,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v46,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vaddshs v0,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// vxor128 v47,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vxor128 v44,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vxor128 v42,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vsrah v28,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v5,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vpkshus128 v3,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v52,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v30,v5,v24
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor128 v45,v52,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrglb v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v25,v26,v29
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vpkshus128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// vmrglb v29,v26,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrghb v26,v3,v31
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v3,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v28,v4,v22
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v2,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrglb v30,v30,v28
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrghb v28,v5,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v4,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v25.u8)));
	// vmrghb v31,v29,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrglb v30,v29,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrghb v29,v26,v28
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrghb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v28,v26,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrglb v2,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v25.u8)));
	// vmrghb v23,v4,v29
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v22,v4,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vmrghb v3,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v29,v31,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvlx v23,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// vmrglb v28,v31,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvrx v23,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v23.u8[i]);
	// vmrghb v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// stvlx v22,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// vmrglb v25,v30,v4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// stvrx v22,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v22.u8[i]);
	// stvlx v3,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// stvlx v2,0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// stvlx v29,0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvrx v29,r30,r11
	ea = r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v29.u8[i]);
	// stvlx v28,0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvrx v28,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v28.u8[i]);
	// stvlx v26,0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// vor128 v0,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// stvrx v26,r28,r11
	ea = r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v26.u8[i]);
	// vor128 v9,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// stvlx v25,0,r27
	ea = r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// vor128 v1,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx v25,r27,r11
	ea = r27.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v25.u8[i]);
	// b 0x823bb9ec
	goto loc_823BB9EC;
loc_823BB9E4:
	// vor v20,v10,v10
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v21,v11,v11
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_823BB9EC:
	// rlwinm r9,r26,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// beq cr6,0x823bbb38
	if (ctx.cr6.eq) goto loc_823BBB38;
	// vsubshs v7,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r6,r1,-480
	ctx.r6.s64 = ctx.r1.s64 + -480;
	// vsubshs v6,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r3,r1,-528
	ctx.r3.s64 = ctx.r1.s64 + -528;
	// vslh v4,v19,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,-544
	r31.s64 = ctx.r1.s64 + -544;
	// vslh v3,v18,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-560
	r30.s64 = ctx.r1.s64 + -560;
	// vsubshs v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// vaddshs v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v19
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// lvx128 v30,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v3,v18
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v31,v6,v6
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v13,v13
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v31,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v19,v10,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsrah v13,v27,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v11,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v12,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v4,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vmaxsh v3,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v29,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v26,v12,v31
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vxor128 v41,v29,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v11,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsrah v12,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v40,v41,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vsubshs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vcmpgtsh v24,v12,v11
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vcmpgtsh v23,v17,v12
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v22,v10,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v39,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// vaddshs v19,v22,v10
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v18,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v38,v18,v39
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v37,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v15,v37,v40
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vminsh v12,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vxor v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v12,v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrglh v10,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v7,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vpkshus v13,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v6,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v6,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-536(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -536);
	// lwz r31,-532(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -532);
	// stvx128 v5,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-560(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -560);
	// lwz r29,-556(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -556);
	// lwz r27,-548(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -548);
	// lwz r6,-540(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -540);
	// lwz r28,-544(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -544);
	// sthx r28,r9,r25
	REX_STORE_U16(ctx.r9.u32 + r25.u32, r28.u16);
	// lwz r28,-552(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -552);
	// sthx r6,r9,r24
	REX_STORE_U16(ctx.r9.u32 + r24.u32, ctx.r6.u16);
	// sthx r3,r9,r23
	REX_STORE_U16(ctx.r9.u32 + r23.u32, ctx.r3.u16);
	// sthx r31,r9,r22
	REX_STORE_U16(ctx.r9.u32 + r22.u32, r31.u16);
	// sthx r30,r9,r21
	REX_STORE_U16(ctx.r9.u32 + r21.u32, r30.u16);
	// sthx r29,r9,r20
	REX_STORE_U16(ctx.r9.u32 + r20.u32, r29.u16);
	// sthx r28,r9,r19
	REX_STORE_U16(ctx.r9.u32 + r19.u32, r28.u16);
	// sthx r27,r9,r18
	REX_STORE_U16(ctx.r9.u32 + r18.u32, r27.u16);
loc_823BBB38:
	// rlwinm r17,r8,3,0,28
	r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// add r10,r17,r10
	ctx.r10.u64 = r17.u64 + ctx.r10.u64;
	// bdnz 0x823bb458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB458;
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823bc2e0
	if (ctx.cr6.eq) goto loc_823BC2E0;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// addi r6,r1,-528
	ctx.r6.s64 = ctx.r1.s64 + -528;
	// stw r7,-528(r1)
	REX_STORE_U32(ctx.r1.u32 + -528, ctx.r7.u32);
	// addi r7,r1,-512
	ctx.r7.s64 = ctx.r1.s64 + -512;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r4,-5
	r29.s64 = ctx.r4.s64 + -5;
	// vor128 v21,v62,v62
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r10,r1,-496
	ctx.r10.s64 = ctx.r1.s64 + -496;
	// vspltish v14,2
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0x2)));
	// add r28,r29,r8
	r28.u64 = r29.u64 + ctx.r8.u64;
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r4,r1,-480
	ctx.r4.s64 = ctx.r1.s64 + -480;
	// vspltish v1,5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x5)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// add r27,r28,r8
	r27.u64 = r28.u64 + ctx.r8.u64;
	// addi r5,r1,-528
	ctx.r5.s64 = ctx.r1.s64 + -528;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r27,r8
	r26.u64 = r27.u64 + ctx.r8.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r25,r26,r8
	r25.u64 = r26.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r24,r25,r8
	r24.u64 = r25.u64 + ctx.r8.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v17,v13,1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vaddshs v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// add r23,r24,r8
	r23.u64 = r24.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r22,r23,r8
	r22.u64 = r23.u64 + ctx.r8.u64;
	// vupkhsh v20,v13
	simde_mm_store_si128((simde__m128i*)v20.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823bbbf4
	goto loc_823BBBF4;
loc_823BBBE4:
	// addi r9,r1,-480
	ctx.r9.s64 = ctx.r1.s64 + -480;
	// addi r8,r1,-528
	ctx.r8.s64 = ctx.r1.s64 + -528;
	// lvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823BBBF4:
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// lvlx128 v36,r10,r29
	temp.u32 = ctx.r10.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + r25.u64;
	// lvlx128 v35,r10,r25
	temp.u32 = ctx.r10.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// lvlx128 v34,r10,r28
	temp.u32 = ctx.r10.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + r24.u64;
	// lvlx128 v33,r10,r24
	temp.u32 = ctx.r10.u32 + r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// lvlx128 v32,r10,r27
	temp.u32 = ctx.r10.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// lvrx128 v63,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v62,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + r26.u64;
	// add r31,r10,r22
	r31.u64 = ctx.r10.u64 + r22.u64;
	// lvrx128 v61,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v35,v62
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vor128 v13,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v59,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v33,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v57,r10,r23
	temp.u32 = ctx.r10.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v34,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v56,r10,r26
	temp.u32 = ctx.r10.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v32,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v54,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v53,r10,r22
	temp.u32 = ctx.r10.u32 + r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v4,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor128 v10,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v6,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r30,r1,-304
	r30.s64 = ctx.r1.s64 + -304;
	// vmrglb v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v5,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v4,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v7,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v30,v12,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v3,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v31,v13,v11
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v12,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v10,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v29,v3,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v23,v31,v30
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v22,v31,v30
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vsubshs v30,v7,v5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v12,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v19,v5,v13
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrghb v6,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v0,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v15,v0,v31
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v18,v12,v4
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v25,v4,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v3,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v28,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v28,v13,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v10,v12
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v27,v11,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v13,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vor128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v15,v15,v31
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r30,r1,-496
	r30.s64 = ctx.r1.s64 + -496;
	// vmaxsh v30,v11,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v12,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vor128 v49,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vor128 v48,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor128 v47,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v31,v0,v18
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vcmpgtuh v15,v9,v15
	simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmaxsh v25,v12,v25
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vmaxsh v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmaxsh v31,v31,v18
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vmaxsh v28,v8,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v11,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v15,v15,v30
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtuh v30,v9,v13
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vcmpgtuh v25,v9,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v12,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v15,v30,v15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v31,v31,v25
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vor128 v46,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v6,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v31,v15
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v25,v28,v30
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v15,v25,v26
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v31,v0,v15
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vperm v31,v31,v31,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcmpgtsh. v15,v31,v1
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v15.u16), 0xFFFF);
	// mfocrf r30,2
	r30.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r21,r30,0,26,26
	r21.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	// vor128 v13,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v12,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(r21.s32, 32, ctx.xer);
	// vor128 v11,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v10,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v8,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vor128 v6,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// beq cr6,0x823bc180
	if (ctx.cr6.eq) goto loc_823BC180;
	// vminsh v28,v10,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vminsh v26,v13,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v25,v7,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v45,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v44,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v30,v4,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vor128 v42,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v26,v25,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vminsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v25,v12,v0
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v28,v17,v17
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vminsh v30,v26,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v26,v0,v25
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v30,v26,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsh. v28,v28,v30
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v28.u16), 0xFFFF);
	// vupkhsh v25,v30
	simde_mm_store_si128((simde__m128i*)v25.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16))));
	// vcmpgtsw. v26,v20,v25
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v20.u32), simde_mm_load_si128((simde__m128i*)v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v26.u32)), 0xF);
	// vand128 v63,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// mfocrf r21,2
	r21.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v25,v30
	simde_mm_store_si128((simde__m128i*)v25.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsw. v20,v20,v25
	simde_mm_store_si128((simde__m128i*)v20.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v20.u32), simde_mm_load_si128((simde__m128i*)v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v20.u32)), 0xF);
	// mfocrf r19,2
	r19.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v31
	simde_mm_store_si128((simde__m128i*)v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16))));
	// vcmpgtsw. v28,v30,v21
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v21.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// mfocrf r20,2
	r20.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v31
	simde_mm_store_si128((simde__m128i*)v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsw. v25,v26,v21
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v21.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v25.u32)), 0xF);
	// mfocrf r18,2
	r18.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r16,r20,0,26,26
	r16.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x20;
	// vor128 v0,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// mr r20,r18
	r20.u64 = r18.u64;
	// vor128 v12,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// cmpwi cr6,r16,32
	ctx.cr6.compare<int32_t>(r16.s32, 32, ctx.xer);
	// vor128 v13,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v11,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// beq cr6,0x823bbec8
	if (ctx.cr6.eq) goto loc_823BBEC8;
	// rlwinm r21,r21,0,26,26
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(r21.s32, 32, ctx.xer);
	// bne cr6,0x823bbee0
	if (!ctx.cr6.eq) goto loc_823BBEE0;
loc_823BBEC8:
	// rlwinm r21,r20,0,26,26
	r21.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(r21.s32, 32, ctx.xer);
	// beq cr6,0x823bc180
	if (ctx.cr6.eq) goto loc_823BC180;
	// rlwinm r21,r19,0,26,26
	r21.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(r21.s32, 32, ctx.xer);
	// beq cr6,0x823bc180
	if (ctx.cr6.eq) goto loc_823BC180;
loc_823BBEE0:
	// vsubshs v28,v7,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r21,r1,-272
	r21.s64 = ctx.r1.s64 + -272;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r20,r1,-240
	r20.s64 = ctx.r1.s64 + -240;
	// vor128 v40,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r19,r1,-208
	r19.s64 = ctx.r1.s64 + -208;
	// vor128 v41,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsubshs v30,v0,v28
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v26,v31,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v5,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmaxsh v25,v30,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vcmpgtsh v21,v17,v26
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v31,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcmpgtsh v28,v17,v25
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vand128 v39,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vandc128 v38,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v25,v31,v26
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vand128 v37,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vaddshs v2,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vxor128 v29,v39,v38
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vandc128 v36,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v30,v12,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v2,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v31,v29,v29
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vxor128 v2,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vaddshs v28,v6,v29
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v31,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v30,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v2,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v28,v28
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v29,v11,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v35,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddshs v26,v26,v30
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v34,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v20,v2,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v26,v16
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v0,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vandc128 v32,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v62,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v1,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v25,v26
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v1,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r21,r1,-176
	r21.s64 = ctx.r1.s64 + -176;
	// vaddshs v29,v20,v16
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v3,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vandc128 v61,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v9,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// lvx128 v21,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// lvx128 v21,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v20,v25,v28
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v29,v9,v21
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v31,v3,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v20,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v2,v29
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v20,v31,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v31,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vand128 v60,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v59,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v58,v21,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v0,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vxor128 v20,v60,v62
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v57,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vxor128 v21,v58,v32
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v2,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v2,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v31,v21,v20
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkshus128 v2,v40,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vaddshs v0,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v28,v29,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v29,v31,v23
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v31,v31,v23
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vaddshs v25,v25,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v26,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsrah v3,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v23,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v56,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vandc128 v55,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vand128 v53,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v52,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v49,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v47,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v54,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vandc128 v50,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vandc128 v48,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v9,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v45,v52,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vaddshs v0,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vxor128 v46,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vxor128 v43,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vxor128 v42,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vsrah v28,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v5,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// vpkshus128 v3,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v51,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v30,v5,v24
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor128 v44,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v25,v26,v29
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vpkshus128 v4,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// vmrglb v29,v26,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrghb v26,v3,v31
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v3,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v28,v4,v22
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v2,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrglb v30,v30,v28
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrghb v28,v5,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v4,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v25.u8)));
	// vmrghb v31,v29,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrglb v30,v29,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrghb v29,v26,v28
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrghb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v28,v26,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vmrglb v2,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v25.u8)));
	// vmrghb v23,v4,v29
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v22,v4,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vmrghb v3,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v29,v31,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvlx v23,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// vmrglb v28,v31,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvrx v23,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v23.u8[i]);
	// vmrghb v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// stvlx v22,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// vmrglb v25,v30,v4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// stvrx v22,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v22.u8[i]);
	// stvlx v3,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// stvlx v2,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// stvlx v29,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvrx v29,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v29.u8[i]);
	// stvlx v28,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvrx v28,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v28.u8[i]);
	// stvlx v26,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvrx v26,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v26.u8[i]);
	// stvlx v25,0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// vor128 v0,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx v25,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v25.u8[i]);
	// vor128 v9,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vor128 v1,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// b 0x823bc188
	goto loc_823BC188;
loc_823BC180:
	// vor v20,v10,v10
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v21,v11,v11
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_823BC188:
	// rlwinm r9,r30,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// beq cr6,0x823bc2d4
	if (ctx.cr6.eq) goto loc_823BC2D4;
	// vsubshs v7,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r8,r1,-512
	ctx.r8.s64 = ctx.r1.s64 + -512;
	// vsubshs v6,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// vslh v4,v19,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,-560
	ctx.r6.s64 = ctx.r1.s64 + -560;
	// vslh v3,v18,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r5,r1,-544
	ctx.r5.s64 = ctx.r1.s64 + -544;
	// vsubshs v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// vaddshs v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v19
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v3,v18
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v31,v6,v6
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v13,v13
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v31,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v19,v10,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsrah v13,v27,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v11,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v12,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v4,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vmaxsh v3,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v29,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v26,v12,v31
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vxor128 v41,v29,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v11,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsrah v12,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v40,v41,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vsubshs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vcmpgtsh v24,v12,v11
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vcmpgtsh v23,v17,v12
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v22,v10,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v39,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// vaddshs v19,v22,v10
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v18,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v38,v18,v39
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v37,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v15,v37,v40
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vminsh v12,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vxor v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v12,v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrglh v10,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v7,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vpkshus v13,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v6,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v6,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-552(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -552);
	// stvx128 v5,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-548(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -548);
	// lwz r8,-544(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -544);
	// lwz r31,-532(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -532);
	// lwz r5,-560(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -560);
	// sthx r5,r29,r9
	REX_STORE_U16(r29.u32 + ctx.r9.u32, ctx.r5.u16);
	// lwz r4,-556(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -556);
	// lwz r7,-540(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -540);
	// lwz r5,-536(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -536);
	// sthx r4,r28,r9
	REX_STORE_U16(r28.u32 + ctx.r9.u32, ctx.r4.u16);
	// sthx r3,r27,r9
	REX_STORE_U16(r27.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r6,r26,r9
	REX_STORE_U16(r26.u32 + ctx.r9.u32, ctx.r6.u16);
	// sthx r8,r25,r9
	REX_STORE_U16(r25.u32 + ctx.r9.u32, ctx.r8.u16);
	// sthx r7,r24,r9
	REX_STORE_U16(r24.u32 + ctx.r9.u32, ctx.r7.u16);
	// sthx r5,r23,r9
	REX_STORE_U16(r23.u32 + ctx.r9.u32, ctx.r5.u16);
	// sthx r31,r22,r9
	REX_STORE_U16(r22.u32 + ctx.r9.u32, r31.u16);
loc_823BC2D4:
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bdnz 0x823bbbe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BBBE4;
loc_823BC2E0:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824D42B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f0
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4430) {
	REX_FUNC_PROLOGUE();
	// .long 0x201013f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4730) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000045
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000219
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A30) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010166
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BB0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100c2
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

