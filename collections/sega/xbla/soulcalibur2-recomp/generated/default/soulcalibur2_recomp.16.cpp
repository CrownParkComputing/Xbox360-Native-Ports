#include "soulcalibur2_funcs.16.h"

DEFINE_REX_FUNC(sub_820E0810) {
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
	ctx.lr = 0x820E0874;
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
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
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

DEFINE_REX_FUNC(sub_820EA210) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,1215
	ctx.r11.s64 = ctx.r4.s64 + 1215;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EB8A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EC518) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r9,r11,32336
	ctx.r9.s64 = ctx.r11.s64 + 32336;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-28256(r10)
	REX_STORE_U32(ctx.r10.u32 + -28256, ctx.r11.u32);
	// lwz r11,4892(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4892);
	// stw r8,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820ECF80) {
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
	ctx.lr = 0x820ECF88;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820ECFA0;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ed074
	if (!ctx.cr0.eq) goto loc_820ED074;
	// lis r31,-32170
	r31.s64 = -2108293120;
	// lis r30,-32165
	r30.s64 = -2107965440;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r29,1
	r29.s64 = 1;
	// addi r10,r11,32336
	ctx.r10.s64 = ctx.r11.s64 + 32336;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r27,r11,80
	r27.s64 = ctx.r11.s64 + 80;
	// lwz r28,4892(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4892);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ecfe0
	if (!ctx.cr6.eq) goto loc_820ECFE0;
	// stw r29,124(r28)
	REX_STORE_U32(r28.u32 + 124, r29.u32);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
loc_820ECFE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,124(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 124);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// bne cr6,0x820ed01c
	if (!ctx.cr6.eq) goto loc_820ED01C;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x820ED000;
	sub_82202560(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202560
	ctx.lr = 0x820ED014;
	sub_82202560(ctx, base);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// sth r29,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r29.u16);
loc_820ED01C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ed058
	if (!ctx.cr6.lt) goto loc_820ED058;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ea3b8
	ctx.lr = 0x820ED050;
	sub_820EA3B8(ctx, base);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// sth r29,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r29.u16);
loc_820ED058:
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820ED060;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ed074
	if (!ctx.cr0.eq) goto loc_820ED074;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_820ED074:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_820F3610) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820f363c
	if (!ctx.cr6.eq) goto loc_820F363C;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_820F363C:
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// stw r30,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, r30.u32);
	// stw r11,9356(r31)
	REX_STORE_U32(r31.u32 + 9356, ctx.r11.u32);
	// stw r11,9360(r31)
	REX_STORE_U32(r31.u32 + 9360, ctx.r11.u32);
	// stw r11,9364(r31)
	REX_STORE_U32(r31.u32 + 9364, ctx.r11.u32);
	// lhz r11,30(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f3734
	if (!ctx.cr6.eq) goto loc_820F3734;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x820f3734
	if (ctx.cr6.gt) goto loc_820F3734;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,19720
	ctx.r12.s64 = ctx.r12.s64 + 19720;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// nop 
	// addi r12,r12,13988
	ctx.r12.s64 = ctx.r12.s64 + 13988;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820F36A4;
	case 1:
		goto loc_820F36BC;
	case 2:
		goto loc_820F36D0;
	case 3:
		goto loc_820F36D0;
	case 4:
		goto loc_820F3700;
	case 5:
		goto loc_820F3708;
	case 6:
		goto loc_820F3714;
	case 7:
		goto loc_820F36E4;
	case 8:
		goto loc_820F36EC;
	case 9:
		goto loc_820F36F8;
	case 10:
		goto loc_820F371C;
	case 11:
		goto loc_820F3724;
	case 12:
		goto loc_820F372C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820F36A4:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0f8
	ctx.lr = 0x820F36B0;
	sub_820FA0F8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
loc_820F36B4:
	// stw r11,8344(r31)
	REX_STORE_U32(r31.u32 + 8344, ctx.r11.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F36BC:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0f8
	ctx.lr = 0x820F36C8;
	sub_820FA0F8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x820f36b4
	goto loc_820F36B4;
loc_820F36D0:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0f8
	ctx.lr = 0x820F36DC;
	sub_820FA0F8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x820f36b4
	goto loc_820F36B4;
loc_820F36E4:
	// stw r10,9360(r31)
	REX_STORE_U32(r31.u32 + 9360, ctx.r10.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F36EC:
	// li r11,7
	ctx.r11.s64 = 7;
loc_820F36F0:
	// stw r11,9360(r31)
	REX_STORE_U32(r31.u32 + 9360, ctx.r11.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F36F8:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x820f36f0
	goto loc_820F36F0;
loc_820F3700:
	// stw r10,9356(r31)
	REX_STORE_U32(r31.u32 + 9356, ctx.r10.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F3708:
	// li r11,5
	ctx.r11.s64 = 5;
loc_820F370C:
	// stw r11,9356(r31)
	REX_STORE_U32(r31.u32 + 9356, ctx.r11.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F3714:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820f370c
	goto loc_820F370C;
loc_820F371C:
	// stw r10,9364(r31)
	REX_STORE_U32(r31.u32 + 9364, ctx.r10.u32);
	// b 0x820f3734
	goto loc_820F3734;
loc_820F3724:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820f3730
	goto loc_820F3730;
loc_820F372C:
	// li r11,8
	ctx.r11.s64 = 8;
loc_820F3730:
	// stw r11,9364(r31)
	REX_STORE_U32(r31.u32 + 9364, ctx.r11.u32);
loc_820F3734:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x820fe770
	ctx.lr = 0x820F3744;
	sub_820FE770(ctx, base);
	// stw r30,8352(r31)
	REX_STORE_U32(r31.u32 + 8352, r30.u32);
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

DEFINE_REX_FUNC(sub_820FBF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,8732
	ctx.r9.s64 = ctx.r11.s64 + 8732;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,-84
	ctx.r11.s64 = ctx.r9.s64 + -84;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FBF8C:
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
	// bdnz 0x820fbf8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FBF8C;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FBFE0:
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
	// bdnz 0x820fbfe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FBFE0;
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

DEFINE_REX_FUNC(sub_820FE4E8) {
	REX_FUNC_PROLOGUE();
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r5,10304
	ctx.r5.s64 = 10304;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x820f8d58
	sub_820F8D58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FEF30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,16336(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16336);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820fef58
	if (ctx.cr6.gt) goto loc_820FEF58;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820FEF58:
	// lfs f13,20148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,6160(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 6160, temp.u32);
	// stfs f0,6164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 6164, temp.u32);
	// stfs f13,6168(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 6168, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFBD0) {
	REX_FUNC_PROLOGUE();
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFE98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82102840
	ctx.lr = 0x820FFEB4;
	sub_82102840(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// bl 0x821eacb0
	ctx.lr = 0x820FFECC;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,193
	ctx.r3.u64 = ctx.r3.u64 | 193;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x820FFEE4;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,21804
	ctx.r5.s64 = ctx.r11.s64 + 21804;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x820FFEFC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lfs f13,20480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20480);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r3,193
	ctx.r3.u64 = ctx.r3.u64 | 193;
	// lfs f11,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsel f30,f13,f13,f11
	f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x820e68b8
	ctx.lr = 0x820FFF48;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r10,21852
	ctx.r3.s64 = ctx.r10.s64 + 21852;
	// lfs f0,21860(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x820FFF78;
	sub_821EACB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_821072D0) {
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
	ctx.lr = 0x821072E4;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107300;
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
	ctx.lr = 0x82107314;
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

DEFINE_REX_FUNC(sub_82107B58) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x82107d3c
	if (ctx.cr6.gt) goto loc_82107D3C;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27184
	ctx.r12.s64 = ctx.r12.s64 + 27184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// nop 
	// addi r12,r12,31640
	ctx.r12.s64 = ctx.r12.s64 + 31640;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82107B98;
	case 1:
		goto loc_82107BA4;
	case 2:
		goto loc_82107BAC;
	case 3:
		goto loc_82107BB4;
	case 4:
		goto loc_82107BBC;
	case 5:
		goto loc_82107BC4;
	case 6:
		goto loc_82107BCC;
	case 7:
		goto loc_82107BD4;
	case 8:
		goto loc_82107BDC;
	case 9:
		goto loc_82107BE4;
	case 10:
		goto loc_82107BEC;
	case 11:
		goto loc_82107BF4;
	case 12:
		goto loc_82107BFC;
	case 13:
		goto loc_82107C04;
	case 14:
		goto loc_82107C0C;
	case 15:
		goto loc_82107C14;
	case 16:
		goto loc_82107C1C;
	case 17:
		goto loc_82107C24;
	case 18:
		goto loc_82107C2C;
	case 19:
		goto loc_82107C34;
	case 20:
		goto loc_82107C3C;
	case 21:
		goto loc_82107D3C;
	case 22:
		goto loc_82107C44;
	case 23:
		goto loc_82107C4C;
	case 24:
		goto loc_82107C4C;
	case 25:
		goto loc_82107C4C;
	case 26:
		goto loc_82107C54;
	case 27:
		goto loc_82107C5C;
	case 28:
		goto loc_82107C88;
	case 29:
		goto loc_82107CCC;
	case 30:
		goto loc_82107CF8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82107B98:
	// li r4,5
	ctx.r4.s64 = 5;
loc_82107B9C:
	// bl 0x82106c48
	ctx.lr = 0x82107BA0;
	sub_82106C48(ctx, base);
	// b 0x82107d3c
	goto loc_82107D3C;
loc_82107BA4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BAC:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BB4:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BBC:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BC4:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BCC:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BD4:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BDC:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BE4:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BEC:
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BF4:
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107BFC:
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C04:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C0C:
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C14:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C1C:
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C24:
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C2C:
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C34:
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C3C:
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C44:
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C4C:
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C54:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82107b9c
	goto loc_82107B9C;
loc_82107C5C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,121(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107d3c
	if (!ctx.cr6.eq) goto loc_82107D3C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107C80;
	sub_82106C48(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82107d20
	goto loc_82107D20;
loc_82107C88:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,257(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 257);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107d3c
	if (!ctx.cr6.eq) goto loc_82107D3C;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107CAC;
	sub_82106C48(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// b 0x82107d3c
	goto loc_82107D3C;
loc_82107CCC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 393);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107d3c
	if (!ctx.cr6.eq) goto loc_82107D3C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107CF0;
	sub_82106C48(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82107d20
	goto loc_82107D20;
loc_82107CF8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,529(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 529);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107d3c
	if (!ctx.cr6.eq) goto loc_82107D3C;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107D1C;
	sub_82106C48(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
loc_82107D20:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_82107D3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82112450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8211248c
	if (ctx.cr6.gt) goto loc_8211248C;
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211248c
	if (!ctx.cr6.gt) goto loc_8211248C;
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
loc_8211248C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821124bc
	if (ctx.cr6.gt) goto loc_821124BC;
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821124bc
	if (!ctx.cr6.lt) goto loc_821124BC;
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
loc_821124BC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114C40) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bgt cr6,0x82114c5c
	if (ctx.cr6.gt) goto loc_82114C5C;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82114C5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82115A00) {
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
	ctx.lr = 0x82115A08;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f20
	ctx.lr = 0x82115A10;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82115a3c
	if (ctx.cr6.eq) goto loc_82115A3C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82115a40
	if (!ctx.cr6.eq) goto loc_82115A40;
loc_82115A3C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82115A40:
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -999, ctx.xer);
	// beq cr6,0x82115be8
	if (ctx.cr6.eq) goto loc_82115BE8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82115be8
	if (ctx.cr6.eq) goto loc_82115BE8;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82115be8
	if (ctx.cr6.eq) goto loc_82115BE8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82115be8
	if (ctx.cr6.eq) goto loc_82115BE8;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82115a8c
	if (!ctx.cr6.gt) goto loc_82115A8C;
	// lwz r8,296(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82115be8
	if (ctx.cr6.eq) goto loc_82115BE8;
loc_82115A8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82115a9c
	if (ctx.cr6.eq) goto loc_82115A9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
loc_82115A9C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115b08
	if (!ctx.cr6.eq) goto loc_82115B08;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82115acc
	if (!ctx.cr6.eq) goto loc_82115ACC;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82115bf4
	if (!ctx.cr6.gt) goto loc_82115BF4;
loc_82115ACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115b08
	if (!ctx.cr6.eq) goto loc_82115B08;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115ae8
	if (!ctx.cr6.eq) goto loc_82115AE8;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82115aec
	goto loc_82115AEC;
loc_82115AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115AEC:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stb r11,1824(r10)
	REX_STORE_U8(ctx.r10.u32 + 1824, ctx.r11.u8);
	// stw r28,296(r31)
	REX_STORE_U32(r31.u32 + 296, r28.u32);
	// b 0x82115bf4
	goto loc_82115BF4;
loc_82115B08:
	// lhz r9,42(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 42);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82115bf4
	if (!ctx.cr0.eq) goto loc_82115BF4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82115b34
	if (!ctx.cr6.eq) goto loc_82115B34;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// ble cr6,0x82115b34
	if (!ctx.cr6.gt) goto loc_82115B34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,11
	ctx.r3.s64 = 11;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82115B34;
	sub_8212BC38(ctx, base);
loc_82115B34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,31344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31344);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// lfs f29,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f29.f64 = double(temp.f32);
	// li r29,20
	r29.s64 = 20;
	// lfs f28,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	f28.f64 = double(temp.f32);
	// lfs f26,16600(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16600);
	f26.f64 = double(temp.f32);
	// lfs f27,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f27.f64 = double(temp.f32);
loc_82115B74:
	// lfs f25,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	f25.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f24,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	f24.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x82115B84;
	sub_820E0028(ctx, base);
	// lfs f23,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f23.f64 = double(temp.f32);
	// fadds f22,f1,f29
	f22.f64 = double(float(ctx.f1.f64 + f29.f64));
	// bl 0x821fedc8
	ctx.lr = 0x82115B90;
	sub_821FEDC8(ctx, base);
	// fmadds f0,f1,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f28.f64, f27.f64)));
	// fadds f31,f31,f26
	f31.f64 = double(float(f31.f64 + f26.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// fmadds f0,f0,f24,f23
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, f23.f64)));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x82115bb4
	if (!ctx.cr6.gt) goto loc_82115BB4;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_82115BB4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82115b74
	if (!ctx.cr0.eq) goto loc_82115B74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,29700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x82115bf4
	if (!ctx.cr6.gt) goto loc_82115BF4;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115be8
	if (!ctx.cr6.eq) goto loc_82115BE8;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82115BE8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r28,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r28.u16);
loc_82115BF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f6c
	ctx.lr = 0x82115C00;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8211CA40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
	// stw r11,360(r3)
	REX_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stw r11,364(r3)
	REX_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// stw r11,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// stw r11,372(r3)
	REX_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211D9F0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x8211D9F8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f34
	ctx.lr = 0x8211DA00;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r31,r3,136
	r31.s64 = ctx.r3.s64 + 136;
	// lwz r30,284(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 284);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8211da8c
	if (ctx.cr0.eq) goto loc_8211DA8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ff600
	ctx.lr = 0x8211DA34;
	sub_821FF600(ctx, base);
	// mulli r11,r3,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f31,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	f31.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// bl 0x821ff618
	ctx.lr = 0x8211DA68;
	sub_821FF618(ctx, base);
	// mulli r11,r3,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
loc_8211DA8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8211db74
	if (!ctx.cr6.eq) goto loc_8211DB74;
	// lwz r11,1872(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1872);
	// addi r8,r31,116
	ctx.r8.s64 = r31.s64 + 116;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,124(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 128);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lfs f0,29404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29404);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// fadds f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 + ctx.f0.f64));
	// beq 0x8211db28
	if (ctx.cr0.eq) goto loc_8211DB28;
	// lfs f6,376(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f5,372(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 372);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,364(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 364);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r10,-30472
	ctx.r5.s64 = ctx.r10.s64 + -30472;
	// lfs f4,368(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 368);
	ctx.f4.f64 = double(temp.f32);
	// stfd f6,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f6.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f5,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f5.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfs f28,28(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821ec6b0
	ctx.lr = 0x8211DB24;
	sub_821EC6B0(ctx, base);
	// b 0x8211db74
	goto loc_8211DB74;
loc_8211DB28:
	// lfs f6,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f3,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// stfd f6,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f6.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f4,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r10,-30500
	ctx.r5.s64 = ctx.r10.s64 + -30500;
	// lfs f5,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfd f5,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f5.u64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821ec6b0
	ctx.lr = 0x8211DB74;
	sub_821EC6B0(ctx, base);
loc_8211DB74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	f27.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f27
	ctx.f12.u64 = f27.u64 ^ 0x8000000000000000;
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r29,300
	r30.s64 = r29.s64 + 300;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x8211DBFC;
	sub_820E1DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x8211DC0C;
	sub_820E1DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x8211DC1C;
	sub_820E1DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1df8
	ctx.lr = 0x8211DC2C;
	sub_820E1DF8(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r6,r6,65376
	ctx.r6.u64 = ctx.r6.u64 | 65376;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8850
	ctx.lr = 0x8211DC4C;
	sub_821E8850(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r6,r6,65376
	ctx.r6.u64 = ctx.r6.u64 | 65376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8850
	ctx.lr = 0x8211DC6C;
	sub_821E8850(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x8211DCB8;
	sub_820E1DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x8211DCC8;
	sub_820E1DF8(ctx, base);
	// lis r6,16448
	ctx.r6.s64 = 1077936128;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r6,r6,65376
	ctx.r6.u64 = ctx.r6.u64 | 65376;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8850
	ctx.lr = 0x8211DCE8;
	sub_821E8850(ctx, base);
	// lis r6,16448
	ctx.r6.s64 = 1077936128;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r6,r6,65376
	ctx.r6.u64 = ctx.r6.u64 | 65376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e8850
	ctx.lr = 0x8211DD08;
	sub_821E8850(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8211DD18;
	sub_822D4FA0(ctx, base);
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x820e0d78
	ctx.lr = 0x8211DD30;
	sub_820E0D78(ctx, base);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r4,r4,96
	ctx.r4.u64 = ctx.r4.u64 | 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821e8878
	ctx.lr = 0x8211DD48;
	sub_821E8878(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f5,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f4,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r10,-30544
	ctx.r5.s64 = ctx.r10.s64 + -30544;
	// lfs f3,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	f31.f64 = double(temp.f32);
	// fadds f28,f28,f31
	f28.f64 = double(float(f28.f64 + f31.f64));
	// stfd f6,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f6.u64);
	// stfd f5,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f5.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfs f28,28(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x821ec6b0
	ctx.lr = 0x8211DDA8;
	sub_821EC6B0(ctx, base);
	// lfs f5,292(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 292);
	ctx.f5.f64 = double(temp.f32);
	// fadds f28,f28,f31
	f28.f64 = double(float(f28.f64 + f31.f64));
	// fcmpu cr6,f5,f30
	ctx.cr6.compare(ctx.f5.f64, f30.f64);
	// ble cr6,0x8211ddc0
	if (!ctx.cr6.gt) goto loc_8211DDC0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8211ddc8
	goto loc_8211DDC8;
loc_8211DDC0:
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
loc_8211DDC8:
	// lfs f4,288(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f4,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfs f28,28(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lfs f3,284(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 284);
	ctx.f3.f64 = double(temp.f32);
	// li r6,18
	ctx.r6.s64 = 18;
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r7,r11,-30616
	ctx.r7.s64 = ctx.r11.s64 + -30616;
	// stfd f5,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821ec650
	ctx.lr = 0x8211DE10;
	sub_821EC650(ctx, base);
	// lfs f6,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f28,f31
	ctx.f2.f64 = double(float(f28.f64 + f31.f64));
	// lfs f4,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfd f6,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f6.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f5,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f5.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// addi r5,r11,-30656
	ctx.r5.s64 = ctx.r11.s64 + -30656;
	// bl 0x821ec6b0
	ctx.lr = 0x8211DE64;
	sub_821EC6B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82246ca8
	ctx.lr = 0x8211DE78;
	sub_82246CA8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f80
	ctx.lr = 0x8211DE84;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8212D4D0) {
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
	// li r30,-1
	r30.s64 = -1;
	// bl 0x8212a8e0
	ctx.lr = 0x8212D4F0;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212d544
	if (ctx.cr0.eq) goto loc_8212D544;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8212d520
	if (ctx.cr6.eq) goto loc_8212D520;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8212d530
	goto loc_8212D530;
loc_8212D520:
	// bl 0x8212bbf0
	ctx.lr = 0x8212D524;
	sub_8212BBF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8212D530:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212b520
	ctx.lr = 0x8212D540;
	sub_8212B520(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8212D544:
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

DEFINE_REX_FUNC(sub_8212FE78) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x8212FE90;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r10,-25152
	ctx.r3.s64 = ctx.r10.s64 + -25152;
	// lfd f31,28816(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 28816);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8212FEB4;
	sub_821EACB0(ctx, base);
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,-25140
	ctx.r3.s64 = ctx.r11.s64 + -25140;
	// bl 0x821f96b8
	ctx.lr = 0x8212FED0;
	sub_821F96B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,29340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f8c30
	ctx.lr = 0x8212FEDC;
	sub_821F8C30(ctx, base);
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

DEFINE_REX_FUNC(sub_82130DB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// ori r10,r10,8696
	ctx.r10.u64 = ctx.r10.u64 | 8696;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stbx r4,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821317E0) {
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
	ctx.lr = 0x821317E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mulli r11,r3,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(24));
	// addi r10,r10,14448
	ctx.r10.s64 = ctx.r10.s64 + 14448;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r25,-1
	r25.s64 = -1;
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// addi r28,r11,-8304
	r28.s64 = ctx.r11.s64 + -8304;
	// ori r27,r10,41994
	r27.u64 = ctx.r10.u64 | 41994;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
loc_8213181C:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x8213182c
	if (!ctx.cr6.eq) goto loc_8213182C;
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82131834
	goto loc_82131834;
loc_8213182C:
	// lbzx r10,r25,r24
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + r24.u32);
	// extsb r29,r10
	r29.s64 = ctx.r10.s8;
loc_82131834:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x82131948
	if (ctx.cr6.eq) goto loc_82131948;
	// addis r8,r11,85
	ctx.r8.s64 = ctx.r11.s64 + 5570560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,8312
	ctx.r8.s64 = ctx.r8.s64 + 8312;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8213184C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r29.s32, ctx.xer);
	// beq cr6,0x8213186c
	if (ctx.cr6.eq) goto loc_8213186C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8213184c
	if (ctx.cr6.lt) goto loc_8213184C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8213186C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82131948
	if (!ctx.cr6.eq) goto loc_82131948;
	// li r31,0
	r31.s64 = 0;
loc_82131878:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821318c4
	if (ctx.cr6.eq) goto loc_821318C4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82131888:
	// lbzx r7,r10,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r24.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821318b0
	if (ctx.cr6.eq) goto loc_821318B0;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// beq cr6,0x821318b0
	if (ctx.cr6.eq) goto loc_821318B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82131888
	if (ctx.cr6.lt) goto loc_82131888;
	// b 0x821318c4
	goto loc_821318C4;
loc_821318B0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// blt cr6,0x82131878
	if (ctx.cr6.lt) goto loc_82131878;
	// li r31,0
	r31.s64 = 0;
loc_821318C4:
	// addis r10,r31,21
	ctx.r10.s64 = r31.s64 + 1376256;
	// addi r10,r10,18462
	ctx.r10.s64 = ctx.r10.s64 + 18462;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8213190c
	if (ctx.cr6.eq) goto loc_8213190C;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,8200
	ctx.r9.u64 = ctx.r9.u64 | 8200;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213190c
	if (!ctx.cr6.eq) goto loc_8213190C;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821f7908
	ctx.lr = 0x82131908;
	sub_821F7908(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
loc_8213190C:
	// addis r9,r31,5
	ctx.r9.s64 = r31.s64 + 327680;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// addi r9,r9,20992
	ctx.r9.s64 = ctx.r9.s64 + 20992;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0xFFF80000;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r29,208
	ctx.r3.s64 = r29.s64 + 208;
	// bl 0x82130818
	ctx.lr = 0x8213193C;
	sub_82130818(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
loc_82131948:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x8213181c
	if (ctx.cr6.lt) goto loc_8213181C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821365B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821366C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x821301e0
	sub_821301E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821372B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821372f8
	if (ctx.cr6.eq) goto loc_821372F8;
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
	// b 0x821372fc
	goto loc_821372FC;
loc_821372F8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821372FC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213D2A8) {
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
	ctx.lr = 0x8213D2B0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82137568
	ctx.lr = 0x8213D2C8;
	sub_82137568(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8213d2e8
	if (!ctx.cr6.lt) goto loc_8213D2E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x8213d814
	goto loc_8213D814;
loc_8213D2E8:
	// lwz r28,20(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8212fe30
	ctx.lr = 0x8213D2F0;
	sub_8212FE30(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// li r29,0
	r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,20484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	f31.f64 = double(temp.f32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d378
	if (!ctx.cr6.eq) goto loc_8213D378;
	// lfs f0,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8213d378
	if (!ctx.cr6.eq) goto loc_8213D378;
	// bl 0x821307d0
	ctx.lr = 0x8213D338;
	sub_821307D0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213d374
	if (!ctx.cr6.eq) goto loc_8213D374;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d374
	if (ctx.cr6.eq) goto loc_8213D374;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r30,12
	ctx.r10.s64 = r30.s64 + 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8213d378
	goto loc_8213D378;
loc_8213D374:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8213D378:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r27,r9,22648
	r27.s64 = ctx.r9.s64 + 22648;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,516(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// lfs f2,29404(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 29404);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821345e0
	ctx.lr = 0x8213D3A4;
	sub_821345E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,516(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// bl 0x82134ac0
	ctx.lr = 0x8213D3C0;
	sub_82134AC0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8213d3d8
	if (ctx.cr6.lt) goto loc_8213D3D8;
	// cmpwi cr6,r4,288
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 288, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8213d3dc
	if (ctx.cr6.lt) goto loc_8213D3DC;
loc_8213D3D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8213D3DC:
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,10000
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10000, ctx.xer);
	// beq cr6,0x8213d78c
	if (ctx.cr6.eq) goto loc_8213D78C;
	// cmpwi cr6,r9,10001
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10001, ctx.xer);
	// beq cr6,0x8213d720
	if (ctx.cr6.eq) goto loc_8213D720;
	// cmpwi cr6,r9,10002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10002, ctx.xer);
	// beq cr6,0x8213d5a0
	if (ctx.cr6.eq) goto loc_8213D5A0;
	// cmpwi cr6,r9,10003
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10003, ctx.xer);
	// beq cr6,0x8213d4fc
	if (ctx.cr6.eq) goto loc_8213D4FC;
	// cmpwi cr6,r9,10004
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10004, ctx.xer);
	// beq cr6,0x8213d484
	if (ctx.cr6.eq) goto loc_8213D484;
	// andi. r11,r29,32832
	ctx.r11.u64 = r29.u64 & 32832;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d454
	if (ctx.cr0.eq) goto loc_8213D454;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213d444
	if (ctx.cr6.eq) goto loc_8213D444;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213d444
	if (ctx.cr6.eq) goto loc_8213D444;
	// li r11,10000
	ctx.r11.s64 = 10000;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
loc_8213D438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8213d714
	goto loc_8213D714;
loc_8213D444:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,22
	ctx.r3.s64 = 22;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8213d718
	goto loc_8213D718;
loc_8213D454:
	// andi. r11,r29,16416
	ctx.r11.u64 = r29.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d7fc
	if (ctx.cr0.eq) goto loc_8213D7FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,27
	ctx.r3.s64 = 27;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213D470;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D484:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8213d4c0
	if (!ctx.cr6.gt) goto loc_8213D4C0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-8496(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D4C0:
	// lfs f13,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f13,-24016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24016);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D4FC:
	// bl 0x821ddbb8
	ctx.lr = 0x8213D500;
	sub_821DDBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213d564
	if (ctx.cr0.eq) goto loc_8213D564;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24020(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8496);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8213d530
	if (!ctx.cr6.gt) goto loc_8213D530;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8213D530:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8213d548
	if (!ctx.cr6.gt) goto loc_8213D548;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8213D548:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8213d7fc
	if (!ctx.cr6.gt) goto loc_8213D7FC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x8213d784
	goto loc_8213D784;
loc_8213D564:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r11,10004
	ctx.r11.s64 = 10004;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,-24024(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82130660
	ctx.lr = 0x8213D59C;
	sub_82130660(ctx, base);
	// b 0x8213d438
	goto loc_8213D438;
loc_8213D5A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213d704
	if (ctx.cr6.eq) goto loc_8213D704;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213d704
	if (ctx.cr6.eq) goto loc_8213D704;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821320b0
	ctx.lr = 0x8213D5BC;
	sub_821320B0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d5d0
	if (!ctx.cr6.eq) goto loc_8213D5D0;
	// bl 0x821307d0
	ctx.lr = 0x8213D5CC;
	sub_821307D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8213D5D0:
	// andi. r11,r29,32832
	ctx.r11.u64 = r29.u64 & 32832;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d6c0
	if (ctx.cr0.eq) goto loc_8213D6C0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213d6c0
	if (!ctx.cr6.eq) goto loc_8213D6C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213D5F8;
	sub_8212BC38(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213d638
	if (ctx.cr6.eq) goto loc_8213D638;
	// lwz r11,516(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 516);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8213d620
	if (!ctx.cr0.lt) goto loc_8213D620;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213d634
	goto loc_8213D634;
loc_8213D620:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57500
	ctx.r10.u64 = ctx.r10.u64 | 57500;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8213d634
	if (!ctx.cr6.gt) goto loc_8213D634;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8213D634:
	// stw r11,516(r9)
	REX_STORE_U32(ctx.r9.u32 + 516, ctx.r11.u32);
loc_8213D638:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821dde50
	ctx.lr = 0x8213D644;
	sub_821DDE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2a70
	ctx.lr = 0x8213D64C;
	sub_821E2A70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x8213D658;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-25168
	ctx.r11.s64 = ctx.r11.s64 + -25168;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x8213D66C;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e29e0
	ctx.lr = 0x8213D674;
	sub_821E29E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e34e0
	ctx.lr = 0x8213D680;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x8213D694;
	sub_821E2FD0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,832(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 832);
	// bl 0x821c55b0
	ctx.lr = 0x8213D6A8;
	sub_821C55B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821df570
	ctx.lr = 0x8213D6B4;
	sub_821DF570(ctx, base);
	// li r11,10003
	ctx.r11.s64 = 10003;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x8213d80c
	goto loc_8213D80C;
loc_8213D6C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d6d0
	if (ctx.cr6.eq) goto loc_8213D6D0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8213d704
	if (ctx.cr6.eq) goto loc_8213D704;
loc_8213D6D0:
	// andi. r11,r29,16416
	ctx.r11.u64 = r29.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213d704
	if (!ctx.cr0.eq) goto loc_8213D704;
	// rlwinm. r11,r29,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213d7fc
	if (ctx.cr0.eq) goto loc_8213D7FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8213D6F4;
	sub_8212BC38(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D704:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,10001
	ctx.r11.s64 = 10001;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_8213D714:
	// li r3,14
	ctx.r3.s64 = 14;
loc_8213D718:
	// bl 0x8212bc38
	ctx.lr = 0x8213D71C;
	sub_8212BC38(ctx, base);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D720:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213d75c
	if (!ctx.cr6.lt) goto loc_8213D75C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-8496(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8213d784
	goto loc_8213D784;
loc_8213D75C:
	// lfs f0,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f0,-24016(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24016);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
loc_8213D784:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8213d7fc
	goto loc_8213D7FC;
loc_8213D78C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,28564(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28564);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8213d7d8
	if (ctx.cr6.eq) goto loc_8213D7D8;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8213d7d8
	if (!ctx.cr6.gt) goto loc_8213D7D8;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8213d7e4
	goto loc_8213D7E4;
loc_8213D7D8:
	// li r9,10002
	ctx.r9.s64 = 10002;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
loc_8213D7E4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213d7fc
	if (ctx.cr6.eq) goto loc_8213D7FC;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821320b0
	ctx.lr = 0x8213D7FC;
	sub_821320B0(ctx, base);
loc_8213D7FC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r3,19
	ctx.r3.s64 = 19;
	// cmpwi cr6,r11,10002
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10002, ctx.xer);
	// beq cr6,0x8213d810
	if (ctx.cr6.eq) goto loc_8213D810;
loc_8213D80C:
	// li r3,11
	ctx.r3.s64 = 11;
loc_8213D810:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8213D814:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821379b0
	ctx.lr = 0x8213D820;
	sub_821379B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8215D530) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821dd680
	ctx.lr = 0x8215D554;
	sub_821DD680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x8215d63c
	if (ctx.cr6.eq) goto loc_8215D63C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821dd680
	ctx.lr = 0x8215D574;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d584
	if (!ctx.cr6.eq) goto loc_8215D584;
loc_8215D57C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d63c
	goto loc_8215D63C;
loc_8215D584:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d590
	if (!ctx.cr6.eq) goto loc_8215D590;
	// li r31,2
	r31.s64 = 2;
loc_8215D590:
	// bl 0x8215d2c0
	ctx.lr = 0x8215D594;
	sub_8215D2C0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d57c
	if (ctx.cr6.eq) goto loc_8215D57C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d5a8
	if (!ctx.cr6.eq) goto loc_8215D5A8;
	// li r31,2
	r31.s64 = 2;
loc_8215D5A8:
	// bl 0x8215d448
	ctx.lr = 0x8215D5AC;
	sub_8215D448(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d57c
	if (ctx.cr6.eq) goto loc_8215D57C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d5c0
	if (!ctx.cr6.eq) goto loc_8215D5C0;
	// li r31,2
	r31.s64 = 2;
loc_8215D5C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821dd680
	ctx.lr = 0x8215D5D4;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d57c
	if (ctx.cr6.eq) goto loc_8215D57C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d5e8
	if (!ctx.cr6.eq) goto loc_8215D5E8;
	// li r31,2
	r31.s64 = 2;
loc_8215D5E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821dd680
	ctx.lr = 0x8215D5FC;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d57c
	if (ctx.cr6.eq) goto loc_8215D57C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d610
	if (!ctx.cr6.eq) goto loc_8215D610;
	// li r31,2
	r31.s64 = 2;
loc_8215D610:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821dd680
	ctx.lr = 0x8215D624;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d57c
	if (ctx.cr6.eq) goto loc_8215D57C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d638
	if (!ctx.cr6.eq) goto loc_8215D638;
	// li r31,2
	r31.s64 = 2;
loc_8215D638:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215D63C:
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

DEFINE_REX_FUNC(sub_82162068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x821620cc
	if (ctx.cr6.eq) goto loc_821620CC;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x821620c4
	if (ctx.cr6.eq) goto loc_821620C4;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x821620bc
	if (ctx.cr6.eq) goto loc_821620BC;
	// cmpwi cr6,r4,17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 17, ctx.xer);
	// beq cr6,0x821620b4
	if (ctx.cr6.eq) goto loc_821620B4;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// beq cr6,0x821620ac
	if (ctx.cr6.eq) goto loc_821620AC;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x821620a4
	if (ctx.cr6.eq) goto loc_821620A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620A4:
	// lfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620AC:
	// lfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620B4:
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620BC:
	// lfs f1,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620C4:
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821620CC:
	// lfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821679D8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,24536
	ctx.r8.s64 = ctx.r9.s64 + 24536;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,24536(r9)
	REX_STORE_U16(ctx.r9.u32 + 24536, ctx.r10.u16);
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167A38) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r8,r9,24536
	ctx.r8.s64 = ctx.r9.s64 + 24536;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r10,24536(r9)
	REX_STORE_U16(ctx.r9.u32 + 24536, ctx.r10.u16);
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169478) {
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
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821694b0
	if (!ctx.cr0.lt) goto loc_821694B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x821692c0
	ctx.lr = 0x821694AC;
	sub_821692C0(ctx, base);
	// b 0x821694dc
	goto loc_821694DC;
loc_821694B0:
	// mulli r11,r11,76
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(76));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
loc_821694DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x821694EC;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x821694F4;
	sub_820E2290(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82169500;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8216950C;
	sub_820E1B28(ctx, base);
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

DEFINE_REX_FUNC(sub_8216B998) {
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
	ctx.lr = 0x8216B9A0;
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r22,0
	r22.s64 = 0;
	// addi r10,r1,74
	ctx.r10.s64 = ctx.r1.s64 + 74;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r22,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r22.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_8216B9CC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r22,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, r22.u16);
	// sthu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8216b9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216B9CC;
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r22,0(r24)
	REX_STORE_U32(r24.u32 + 0, r22.u32);
	// mr r21,r22
	r21.u64 = r22.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8216bb6c
	if (!ctx.cr6.gt) goto loc_8216BB6C;
	// addi r30,r26,62
	r30.s64 = r26.s64 + 62;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
loc_8216B9F8:
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8216ba94
	if (ctx.cr6.eq) goto loc_8216BA94;
	// ble cr6,0x8216bb60
	if (!ctx.cr6.gt) goto loc_8216BB60;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8216bb60
	if (ctx.cr6.gt) goto loc_8216BB60;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// beq cr6,0x8216ba3c
	if (ctx.cr6.eq) goto loc_8216BA3C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r30,-62
	ctx.r4.s64 = r30.s64 + -62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82169dd0
	ctx.lr = 0x8216BA34;
	sub_82169DD0(ctx, base);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// b 0x8216ba40
	goto loc_8216BA40;
loc_8216BA3C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8216BA40:
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r28,r3,204
	r28.s64 = ctx.r3.s64 + 204;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// bne cr6,0x8216ba70
	if (!ctx.cr6.eq) goto loc_8216BA70;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// b 0x8216ba8c
	goto loc_8216BA8C;
loc_8216BA70:
	// stw r3,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ba88
	if (ctx.cr6.eq) goto loc_8216BA88;
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - r27.u64;
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// b 0x8216ba8c
	goto loc_8216BA8C;
loc_8216BA88:
	// stw r22,28(r27)
	REX_STORE_U32(r27.u32 + 28, r22.u32);
loc_8216BA8C:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8216bb60
	goto loc_8216BB60;
loc_8216BA94:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// beq cr6,0x8216bab4
	if (ctx.cr6.eq) goto loc_8216BAB4;
	// addi r4,r30,-62
	ctx.r4.s64 = r30.s64 + -62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82169840
	ctx.lr = 0x8216BAB0;
	sub_82169840(ctx, base);
	// b 0x8216bab8
	goto loc_8216BAB8;
loc_8216BAB4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8216BAB8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r28,r3,512
	r28.s64 = ctx.r3.s64 + 512;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// sthx r7,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lha r9,72(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8216bb18
	if (!ctx.cr0.gt) goto loc_8216BB18;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_8216BAE8:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r9,124
	ctx.r6.s64 = ctx.r9.s64 + 124;
	// lwz r6,124(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// stw r6,124(r9)
	REX_STORE_U32(ctx.r9.u32 + 124, ctx.r6.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lha r9,72(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 72));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8216bae8
	if (ctx.cr6.lt) goto loc_8216BAE8;
loc_8216BB18:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lha r9,74(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 74));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8216bb60
	if (!ctx.cr0.gt) goto loc_8216BB60;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_8216BB30:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r7,84
	ctx.r7.s64 = ctx.r7.s64 + 84;
	// addi r6,r9,236
	ctx.r6.s64 = ctx.r9.s64 + 236;
	// lwz r6,236(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 236);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// stw r6,236(r9)
	REX_STORE_U32(ctx.r9.u32 + 236, ctx.r6.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lha r9,74(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 74));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8216bb30
	if (ctx.cr6.lt) goto loc_8216BB30;
loc_8216BB60:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x8216b9f8
	if (!ctx.cr0.eq) goto loc_8216B9F8;
loc_8216BB6C:
	// mr r23,r22
	r23.u64 = r22.u64;
	// addi r31,r1,84
	r31.s64 = ctx.r1.s64 + 84;
	// li r30,256
	r30.s64 = 256;
loc_8216BB78:
	// lhz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -4);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8216bc64
	if (!ctx.cr6.eq) goto loc_8216BC64;
	// lha r11,-2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + -2));
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216bb9c
	if (ctx.cr0.lt) goto loc_8216BB9C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8216bc24
	goto loc_8216BC24;
loc_8216BB9C:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lha r11,22(r8)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 22));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x8216bbc8
	if (!ctx.cr6.eq) goto loc_8216BBC8;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8216bce4
	if (!ctx.cr0.lt) goto loc_8216BCE4;
loc_8216BBC8:
	// lha r11,72(r8)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 72));
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8216bc18
	if (!ctx.cr0.gt) goto loc_8216BC18;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8216BBDC:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x8216bc00
	if (!ctx.cr6.lt) goto loc_8216BC00;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lhax r11,r11,r7
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8216bce4
	if (!ctx.cr0.lt) goto loc_8216BCE4;
loc_8216BC00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lha r11,72(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216bbdc
	if (ctx.cr6.lt) goto loc_8216BBDC;
loc_8216BC18:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// sth r11,-2(r31)
	REX_STORE_U16(r31.u32 + -2, ctx.r11.u16);
loc_8216BC24:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BC3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lha r10,22(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 22));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bne cr6,0x8216bc64
	if (!ctx.cr6.eq) goto loc_8216BC64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8216BC64:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x8216bb78
	if (!ctx.cr0.eq) goto loc_8216BB78;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8216be00
	if (!ctx.cr6.gt) goto loc_8216BE00;
	// stw r28,4(r24)
	REX_STORE_U32(r24.u32 + 4, r28.u32);
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// extsh r27,r21
	r27.s64 = r21.s16;
loc_8216BC8C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// sth r22,72(r6)
	REX_STORE_U16(ctx.r6.u32 + 72, r22.u16);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,68(r6)
	REX_STORE_U32(ctx.r6.u32 + 68, r22.u32);
	// addi r29,r1,82
	r29.s64 = ctx.r1.s64 + 82;
	// sth r27,74(r6)
	REX_STORE_U16(ctx.r6.u32 + 74, r27.u16);
	// li r28,256
	r28.s64 = 256;
loc_8216BCA8:
	// lhz r11,-2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + -2);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8216bdc4
	if (!ctx.cr6.eq) goto loc_8216BDC4;
	// lha r11,0(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x8216bdc4
	if (!ctx.cr6.eq) goto loc_8216BDC4;
	// lwz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216bcf8
	if (ctx.cr6.eq) goto loc_8216BCF8;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216bcf0
	if (ctx.cr6.eq) goto loc_8216BCF0;
	// subf r11,r3,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x8216bcfc
	goto loc_8216BCFC;
loc_8216BCE4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r11,-2(r31)
	REX_STORE_U16(r31.u32 + -2, ctx.r11.u16);
	// b 0x8216bc24
	goto loc_8216BC24;
loc_8216BCF0:
	// stw r22,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r22.u32);
	// b 0x8216bcfc
	goto loc_8216BCFC;
loc_8216BCF8:
	// stw r9,68(r6)
	REX_STORE_U32(ctx.r6.u32 + 68, ctx.r9.u32);
loc_8216BCFC:
	// stw r22,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r22.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r22,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r22.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sth r11,60(r9)
	REX_STORE_U16(ctx.r9.u32 + 60, ctx.r11.u16);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// lhz r11,72(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,72(r6)
	REX_STORE_U16(ctx.r6.u32 + 72, ctx.r11.u16);
	// lha r11,72(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 72));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8216bdc4
	if (!ctx.cr0.gt) goto loc_8216BDC4;
	// addi r4,r9,124
	ctx.r4.s64 = ctx.r9.s64 + 124;
loc_8216BD34:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lha r10,72(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8216bdb0
	if (!ctx.cr0.gt) goto loc_8216BDB0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
loc_8216BD50:
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8216bd98
	if (!ctx.cr6.eq) goto loc_8216BD98;
	// lha r5,72(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8216bd80
	if (!ctx.cr6.lt) goto loc_8216BD80;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r24,116(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// lwz r5,120(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 120);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8216BD80:
	// lhz r5,72(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// sth r5,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r5.u16);
loc_8216BD98:
	// lha r5,72(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8216bd50
	if (ctx.cr6.lt) goto loc_8216BD50;
loc_8216BDB0:
	// lha r11,72(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 72));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216bd34
	if (ctx.cr6.lt) goto loc_8216BD34;
loc_8216BDC4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8216bca8
	if (!ctx.cr0.eq) goto loc_8216BCA8;
	// lha r11,72(r6)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 72));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8216bde8
	if (!ctx.cr0.gt) goto loc_8216BDE8;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r6,r6,76
	ctx.r6.s64 = ctx.r6.s64 + 76;
	// stw r6,64(r25)
	REX_STORE_U32(r25.u32 + 64, ctx.r6.u32);
loc_8216BDE8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// blt cr6,0x8216bc8c
	if (ctx.cr6.lt) goto loc_8216BC8C;
	// addi r11,r6,15
	ctx.r11.s64 = ctx.r6.s64 + 15;
	// stw r22,64(r25)
	REX_STORE_U32(r25.u32 + 64, r22.u32);
	// rlwinm r28,r11,0,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_8216BE00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82178F28) {
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
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,92(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r5,r3,208
	ctx.r5.s64 = ctx.r3.s64 + 208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82178F64;
	sub_820E1B28(ctx, base);
	// lfs f12,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,60(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f13,44(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f13,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82178fac
	if (!ctx.cr6.lt) goto loc_82178FAC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82178FAC:
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

DEFINE_REX_FUNC(sub_8217AFB8) {
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
	// bl 0x820e01b0
	ctx.lr = 0x8217AFD8;
	sub_820E01B0(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
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

DEFINE_REX_FUNC(sub_8217CD28) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8217CD30;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f34
	ctx.lr = 0x8217CD38;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stfs f6,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f7,220(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// li r30,0
	r30.s64 = 0;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// addi r10,r10,-4892
	ctx.r10.s64 = ctx.r10.s64 + -4892;
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stb r9,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r9.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, r30.u32);
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// stw r30,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r30.u32);
	// fmr f27,f5
	f27.f64 = ctx.f5.f64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,30
	ctx.r8.s64 = 30;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8217cda4
	if (!ctx.cr6.eq) goto loc_8217CDA4;
	// stw r8,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r8.u32);
	// b 0x8217cdac
	goto loc_8217CDAC;
loc_8217CDA4:
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r10,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r10.u32);
loc_8217CDAC:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lhz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8217cddc
	if (ctx.cr6.eq) goto loc_8217CDDC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8217cdd4
	if (!ctx.cr6.eq) goto loc_8217CDD4;
	// stw r8,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r8.u32);
	// b 0x8217cdf0
	goto loc_8217CDF0;
loc_8217CDD4:
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x8217cdec
	goto loc_8217CDEC;
loc_8217CDDC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,90
	ctx.r11.s64 = 90;
	// beq cr6,0x8217cdec
	if (ctx.cr6.eq) goto loc_8217CDEC;
	// li r11,80
	ctx.r11.s64 = 80;
loc_8217CDEC:
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
loc_8217CDF0:
	// addic. r11,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r11.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// sth r9,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r9.u16);
	// stb r9,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r9.u8);
	// beq 0x8217ce0c
	if (ctx.cr0.eq) goto loc_8217CE0C;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x8217ce10
	goto loc_8217CE10;
loc_8217CE0C:
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_8217CE10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lfs f4,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r6,r7,7808
	ctx.r6.s64 = ctx.r7.s64 + 7808;
	// lfs f5,2376(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2376);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,-27856
	ctx.r10.s64 = ctx.r10.s64 + -27856;
	// lfs f31,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f31.f64 = double(temp.f32);
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// lfs f0,1996(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,7808(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 7808, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f4,12(r6)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x8210ded0
	ctx.lr = 0x8217CE98;
	sub_8210DED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f30,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// stfs f30,172(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// bl 0x821e7888
	ctx.lr = 0x8217CEB4;
	sub_821E7888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82179498
	ctx.lr = 0x8217CEBC;
	sub_82179498(ctx, base);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lfs f1,-8492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217b018
	ctx.lr = 0x8217CED8;
	sub_8217B018(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,232
	ctx.r10.s64 = 232;
	// addi r9,r11,13128
	ctx.r9.s64 = ctx.r11.s64 + 13128;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,-4896(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4896);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,1827(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1827);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.f0.u32);
	// lfs f0,1836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,1836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f0,1836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// lbz r11,1827(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1827);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,236(r31)
	REX_STORE_U16(r31.u32 + 236, ctx.r11.u16);
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
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// lbz r11,1827(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1827);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// sth r11,238(r31)
	REX_STORE_U16(r31.u32 + 238, ctx.r11.u16);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x8217CFD4;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821846E0) {
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
	ctx.lr = 0x82184704;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82184720
	if (ctx.cr0.eq) goto loc_82184720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821841e0
	ctx.lr = 0x82184718;
	sub_821841E0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82184728
	goto loc_82184728;
loc_82184720:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82184728:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822ad9c0
	ctx.lr = 0x82184734;
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

DEFINE_REX_FUNC(sub_82186240) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82186248;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82185c60
	ctx.lr = 0x82186254;
	sub_82185C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82185e30
	ctx.lr = 0x8218625C;
	sub_82185E30(ctx, base);
	// bl 0x822094c8
	ctx.lr = 0x82186260;
	sub_822094C8(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 480);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x82186308
	if (!ctx.cr6.gt) goto loc_82186308;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x82186280;
	sub_82184A00(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186304
	if (ctx.cr0.eq) goto loc_82186304;
	// li r30,0
	r30.s64 = 0;
loc_821862A0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821862e0
	if (!ctx.cr0.eq) goto loc_821862E0;
	// lbz r10,45(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821862e0
	if (!ctx.cr0.eq) goto loc_821862E0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821855a0
	ctx.lr = 0x821862E0;
	sub_821855A0(ctx, base);
loc_821862E0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821862a0
	if (ctx.cr6.lt) goto loc_821862A0;
loc_82186304:
	// stw r28,480(r31)
	REX_STORE_U32(r31.u32 + 480, r28.u32);
loc_82186308:
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,10000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10000, ctx.xer);
	// ble cr6,0x8218632c
	if (!ctx.cr6.gt) goto loc_8218632C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x82187d00
	ctx.lr = 0x8218632C;
	sub_82187D00(ctx, base);
loc_8218632C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821891F8) {
	REX_FUNC_PROLOGUE();
	// b 0x82189170
	sub_82189170(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82189470) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x8218948C;
	sub_82188300(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// bl 0x822346e0
	ctx.lr = 0x821894A0;
	sub_822346E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821894dc
	if (!ctx.cr0.eq) goto loc_821894DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c80d0
	ctx.lr = 0x821894B0;
	sub_822C80D0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,196
	ctx.r11.s64 = 196;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r11,r5,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// stw r10,844(r31)
	REX_STORE_U32(r31.u32 + 844, ctx.r10.u32);
	// addi r6,r31,848
	ctx.r6.s64 = r31.s64 + 848;
	// stw r11,848(r31)
	REX_STORE_U32(r31.u32 + 848, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82209740
	ctx.lr = 0x821894DC;
	sub_82209740(ctx, base);
loc_821894DC:
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

DEFINE_REX_FUNC(sub_8218ABE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8218ABE8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_8218AC00:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// beq cr6,0x8218ac24
	if (ctx.cr6.eq) goto loc_8218AC24;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8218ac24
	if (ctx.cr6.eq) goto loc_8218AC24;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8218ac00
	goto loc_8218AC00;
loc_8218AC24:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218ac50
	if (ctx.cr6.eq) goto loc_8218AC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab50
	ctx.lr = 0x8218AC48;
	sub_8218AB50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8218ac58
	if (!ctx.cr0.eq) goto loc_8218AC58;
loc_8218AC50:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8218ac00
	if (!ctx.cr6.eq) goto loc_8218AC00;
loc_8218AC58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218DFE8) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8218E00C:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8218e00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E00C;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,30488
	ctx.r6.s64 = ctx.r9.s64 + 30488;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// std r8,30488(r9)
	REX_STORE_U64(ctx.r9.u32 + 30488, ctx.r8.u64);
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// std r8,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// std r8,16(r6)
	REX_STORE_U64(ctx.r6.u32 + 16, ctx.r8.u64);
	// std r8,24(r6)
	REX_STORE_U64(ctx.r6.u32 + 24, ctx.r8.u64);
	// bl 0x8219d398
	ctx.lr = 0x8218E044;
	sub_8219D398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,32064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32064);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed9d0
	ctx.lr = 0x8218E050;
	sub_821ED9D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F838) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// ble cr6,0x8218f884
	if (!ctx.cr6.gt) goto loc_8218F884;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8218F864:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8218f864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F864;
loc_8218F884:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821913F0) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8229a710
	ctx.lr = 0x8219140C;
	sub_8229A710(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822caf80
	ctx.lr = 0x82191414;
	sub_822CAF80(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82191448
	if (ctx.cr6.lt) goto loc_82191448;
	// bne cr6,0x82191450
	if (!ctx.cr6.eq) goto loc_82191450;
	// lbz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82191450
	if (ctx.cr0.eq) goto loc_82191450;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822cb430
	ctx.lr = 0x82191434;
	sub_822CB430(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82191450
	if (ctx.cr0.eq) goto loc_82191450;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r31)
	REX_STORE_U8(r31.u32 + 84, ctx.r11.u8);
	// b 0x82191450
	goto loc_82191450;
loc_82191448:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
loc_82191450:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822cb488
	ctx.lr = 0x82191458;
	sub_822CB488(ctx, base);
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

DEFINE_REX_FUNC(sub_82193C38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82193C78;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82193c88
	if (ctx.cr0.eq) goto loc_82193C88;
	// bl 0x82199820
	ctx.lr = 0x82193C84;
	sub_82199820(ctx, base);
	// b 0x82193c8c
	goto loc_82193C8C;
loc_82193C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82193C8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stb r11,92(r31)
	REX_STORE_U8(r31.u32 + 92, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82188448
	ctx.lr = 0x82193CA8;
	sub_82188448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82193cbc
	if (!ctx.cr0.eq) goto loc_82193CBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82187d00
	ctx.lr = 0x82193CBC;
	sub_82187D00(ctx, base);
loc_82193CBC:
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

DEFINE_REX_FUNC(sub_82197B78) {
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
	ctx.lr = 0x82197B80;
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
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f12,248(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,84(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r4,55
	ctx.r11.s64 = ctx.r4.s64 + 55;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fadds f30,f9,f11
	f30.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfsx f0,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f13.f64)));
	// fsubs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bge cr6,0x82197c00
	if (!ctx.cr6.lt) goto loc_82197C00;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_82197C00:
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82197c0c
	if (!ctx.cr6.gt) goto loc_82197C0C;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_82197C0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-7484
	ctx.r3.s64 = ctx.r11.s64 + -7484;
	// bl 0x821eacb0
	ctx.lr = 0x82197C18;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r27,r11,-7488
	r27.s64 = ctx.r11.s64 + -7488;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82197C34;
	sub_821EB1A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x82197C44;
	sub_822D55F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// lfs f4,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,280
	ctx.r11.s64 = r30.s64 + 280;
	// lwz r3,280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 280);
	// lfs f3,26856(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820e7428
	ctx.lr = 0x82197C78;
	sub_820E7428(ctx, base);
	// addi r11,r29,49
	ctx.r11.s64 = r29.s64 + 49;
	// lwz r3,280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 280);
	// addi r10,r29,43
	ctx.r10.s64 = r29.s64 + 43;
	// lfs f11,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfsx f0,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,-24948(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f11,f31,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f29.f64)));
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 + f30.f64));
	// bl 0x820e7380
	ctx.lr = 0x82197CCC;
	sub_820E7380(ctx, base);
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

DEFINE_REX_FUNC(sub_8219CEF8) {
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
	// lhz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8219cf38
	if (!ctx.cr6.gt) goto loc_8219CF38;
	// bl 0x821fecf8
	ctx.lr = 0x8219CF1C;
	sub_821FECF8(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// divwu r10,r3,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8219cf3c
	goto loc_8219CF3C;
loc_8219CF38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219CF3C:
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

DEFINE_REX_FUNC(sub_8219E600) {
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
	ctx.lr = 0x8219E608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r5,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e628
	if (ctx.cr0.eq) goto loc_8219E628;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r8,r11,-8608
	ctx.r8.s64 = ctx.r11.s64 + -8608;
	// b 0x8219e630
	goto loc_8219E630;
loc_8219E628:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r8,r11,-9976
	ctx.r8.s64 = ctx.r11.s64 + -9976;
loc_8219E630:
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r6,r7,6404
	ctx.r6.s64 = ctx.r7.s64 + 6404;
	// addi r9,r11,-9000
	ctx.r9.s64 = ctx.r11.s64 + -9000;
	// addi r7,r10,-10000
	ctx.r7.s64 = ctx.r10.s64 + -10000;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,896
	ctx.r4.s64 = 896;
	// bl 0x821f7d50
	ctx.lr = 0x8219E654;
	sub_821F7D50(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219e674
	if (ctx.cr0.eq) goto loc_8219E674;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8219e678
	goto loc_8219E678;
loc_8219E674:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8219E678:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8219e688
	if (!ctx.cr6.eq) goto loc_8219E688;
loc_8219E680:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219e6e8
	goto loc_8219E6E8;
loc_8219E688:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r28,272
	ctx.r4.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(272));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// bl 0x82190558
	ctx.lr = 0x8219E6A4;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219e6b8
	if (!ctx.cr0.eq) goto loc_8219E6B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x8219E6B4;
	sub_8218CB20(ctx, base);
	// b 0x8219e680
	goto loc_8219E680;
loc_8219E6B8:
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// li r5,272
	ctx.r5.s64 = 272;
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// bl 0x8218f838
	ctx.lr = 0x8219E6D8;
	sub_8218F838(ctx, base);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_8219E6E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A1C60) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x821A1C68;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f34
	ctx.lr = 0x821A1C70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f30,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f30.f64 = double(temp.f32);
	// lfs f29,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f29.f64 = double(temp.f32);
	// bl 0x821eb2c0
	ctx.lr = 0x821A1C8C;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28388
	ctx.r3.s64 = ctx.r11.s64 + 28388;
	// bl 0x821eacb0
	ctx.lr = 0x821A1C9C;
	sub_821EACB0(ctx, base);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,6848
	ctx.r3.s64 = ctx.r11.s64 + 6848;
	// bl 0x821eacb0
	ctx.lr = 0x821A1CB4;
	sub_821EACB0(ctx, base);
	// stfd f29,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// addi r3,r11,-23788
	ctx.r3.s64 = ctx.r11.s64 + -23788;
	// bl 0x821eacb0
	ctx.lr = 0x821A1CCC;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r28,4
	r28.s64 = 4;
	// lfs f0,-5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f30,f0
	f30.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f0,6792(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6792);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f31,f0
	f27.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fmr f29,f30
	f29.f64 = f30.f64;
	// lwz r11,11888(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11888);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,20472(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20472);
	f31.f64 = double(temp.f32);
	// addi r29,r11,27676
	r29.s64 = ctx.r11.s64 + 27676;
loc_821A1D08:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = f27.f64;
	// li r31,11
	r31.s64 = 11;
loc_821A1D10:
	// stfs f29,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f28,20(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821A1D38;
	sub_821EAF80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fadds f28,f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 + f31.f64));
	// bne 0x821a1d10
	if (!ctx.cr0.eq) goto loc_821A1D10;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// fadds f29,f29,f31
	f29.f64 = double(float(f29.f64 + f31.f64));
	// bne 0x821a1d08
	if (!ctx.cr0.eq) goto loc_821A1D08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,6820
	ctx.r3.s64 = ctx.r9.s64 + 6820;
	// lfd f2,26664(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// lfd f3,6840(r10)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r10.u32 + 6840);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f2,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821A1D88;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r5,r10,6056
	ctx.r5.s64 = ctx.r10.s64 + 6056;
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f28,f0
	f29.f64 = double(float(f28.f64 + ctx.f0.f64));
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821A1DB8;
	sub_821EAF80(ctx, base);
	// fadds f27,f30,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f30.f64 + f31.f64));
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f27,28(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// addi r5,r11,6040
	ctx.r5.s64 = ctx.r11.s64 + 6040;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821A1DE0;
	sub_821EAF80(ctx, base);
	// fadds f13,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,20(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r9,6816
	ctx.r5.s64 = ctx.r9.s64 + 6816;
	// lfs f29,28552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28552);
	f29.f64 = double(temp.f32);
	// lfs f0,6788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6788);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821A1E1C;
	sub_821EAF80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,6812
	ctx.r3.s64 = ctx.r11.s64 + 6812;
	// bl 0x821eacb0
	ctx.lr = 0x821A1E28;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,6804
	ctx.r3.s64 = ctx.r10.s64 + 6804;
	// lfd f1,-24880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -24880);
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
	ctx.lr = 0x821A1E50;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,93
	ctx.r3.u64 = ctx.r3.u64 | 93;
	// lfs f0,-24932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24932);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f28,f0
	f28.f64 = double(float(f28.f64 + ctx.f0.f64));
	// bl 0x82190770
	ctx.lr = 0x821A1E68;
	sub_82190770(ctx, base);
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stfs f28,20(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r31,r11,21804
	r31.s64 = ctx.r11.s64 + 21804;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x821eaf80
	ctx.lr = 0x821A1E94;
	sub_821EAF80(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// fadds f30,f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f31.f64));
	// ori r3,r3,94
	ctx.r3.u64 = ctx.r3.u64 | 94;
	// bl 0x82190770
	ctx.lr = 0x821A1EA4;
	sub_82190770(ctx, base);
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f28,20(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821A1EC8;
	sub_821EAF80(ctx, base);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f31.f64));
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,95
	ctx.r3.u64 = ctx.r3.u64 | 95;
	// fadds f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 + f29.f64));
	// bl 0x82190770
	ctx.lr = 0x821A1EDC;
	sub_82190770(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f28,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfs f0,6800(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6800);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821A1F08;
	sub_821EAF80(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,96
	ctx.r3.u64 = ctx.r3.u64 | 96;
	// bl 0x82190770
	ctx.lr = 0x821A1F14;
	sub_82190770(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f28,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfs f0,6796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6796);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821A1F40;
	sub_821EAF80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f80
	ctx.lr = 0x821A1F4C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821AD928) {
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
	ctx.lr = 0x821AD930;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f30
	ctx.lr = 0x821AD938;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r26,r11,-11088
	r26.s64 = ctx.r11.s64 + -11088;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AD954;
	sub_822D5870(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821AD968;
	sub_822D5870(ctx, base);
	// bl 0x821ad308
	ctx.lr = 0x821AD96C;
	sub_821AD308(ctx, base);
	// lis r28,-32168
	r28.s64 = -2108162048;
	// lis r25,-32168
	r25.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,-10940(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -10940);
	// lwz r10,-10944(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + -10944);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821ad990
	if (!ctx.cr6.lt) goto loc_821AD990;
	// stw r10,-10960(r9)
	REX_STORE_U32(ctx.r9.u32 + -10960, ctx.r10.u32);
	// b 0x821ad994
	goto loc_821AD994;
loc_821AD990:
	// stw r11,-10960(r9)
	REX_STORE_U32(ctx.r9.u32 + -10960, ctx.r11.u32);
loc_821AD994:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,-24904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24904);
	f30.f64 = double(temp.f32);
	// addi r27,r9,432
	r27.s64 = ctx.r9.s64 + 432;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// ble cr6,0x821ada5c
	if (!ctx.cr6.gt) goto loc_821ADA5C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-10552
	ctx.r11.s64 = ctx.r11.s64 + -10552;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,8552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8552);
	f29.f64 = double(temp.f32);
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
	// fmr f26,f29
	f26.f64 = f29.f64;
	// lfs f28,8252(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8252);
	f28.f64 = double(temp.f32);
	// lfs f27,8548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8548);
	f27.f64 = double(temp.f32);
loc_821AD9E4:
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82152228
	ctx.lr = 0x821AD9F0;
	sub_82152228(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821ada04
	if (!ctx.cr6.eq) goto loc_821ADA04;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152228
	ctx.lr = 0x821ADA04;
	sub_82152228(ctx, base);
loc_821ADA04:
	// stfs f27,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,448(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 448);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821ab148
	ctx.lr = 0x821ADA3C;
	sub_821AB148(ctx, base);
	// lwz r11,-10940(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -10940);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ad9e4
	if (ctx.cr6.lt) goto loc_821AD9E4;
	// lwz r10,-10944(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + -10944);
	// b 0x821ada64
	goto loc_821ADA64;
loc_821ADA5C:
	// lfs f26,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f26.f64 = double(temp.f32);
	// lfs f28,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f28.f64 = double(temp.f32);
loc_821ADA64:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821adaf8
	if (!ctx.cr6.gt) goto loc_821ADAF8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r26,60
	r29.s64 = r26.s64 + 60;
	// addi r11,r11,-10936
	ctx.r11.s64 = ctx.r11.s64 + -10936;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-24176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24176);
	f29.f64 = double(temp.f32);
loc_821ADA88:
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82152228
	ctx.lr = 0x821ADA94;
	sub_82152228(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821adaa8
	if (!ctx.cr6.eq) goto loc_821ADAA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152228
	ctx.lr = 0x821ADAA8;
	sub_82152228(ctx, base);
loc_821ADAA8:
	// stfs f29,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f26,116(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,448(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 448);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821ab148
	ctx.lr = 0x821ADAE0;
	sub_821AB148(ctx, base);
	// lwz r11,-10944(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -10944);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ada88
	if (ctx.cr6.lt) goto loc_821ADA88;
loc_821ADAF8:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-11224(r10)
	REX_STORE_U8(ctx.r10.u32 + -11224, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f7c
	ctx.lr = 0x821ADB10;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821BD6F0) {
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
	ctx.lr = 0x821BD6F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r25,r11,13128
	r25.s64 = ctx.r11.s64 + 13128;
	// lwz r24,-32480(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lbz r11,1888(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821bd728
	if (!ctx.cr6.eq) goto loc_821BD728;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d48f0
	ctx.lr = 0x821BD720;
	sub_821D48F0(ctx, base);
	// bl 0x821d4958
	ctx.lr = 0x821BD724;
	sub_821D4958(ctx, base);
	// b 0x821bdeb0
	goto loc_821BDEB0;
loc_821BD728:
	// bl 0x821b4108
	ctx.lr = 0x821BD72C;
	sub_821B4108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bdeb0
	if (ctx.cr0.eq) goto loc_821BDEB0;
	// bl 0x821bb738
	ctx.lr = 0x821BD738;
	sub_821BB738(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bdeb0
	if (ctx.cr0.eq) goto loc_821BDEB0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821bd78c
	if (!ctx.cr6.eq) goto loc_821BD78C;
	// lbz r11,2968(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2968);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bd78c
	if (ctx.cr0.eq) goto loc_821BD78C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x821bd78c
	if (ctx.cr6.eq) goto loc_821BD78C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd784
	if (ctx.cr6.eq) goto loc_821BD784;
	// bl 0x821dde20
	ctx.lr = 0x821BD784;
	sub_821DDE20(ctx, base);
loc_821BD784:
	// bl 0x821b23a0
	ctx.lr = 0x821BD788;
	sub_821B23A0(ctx, base);
	// b 0x821bdeb0
	goto loc_821BDEB0;
loc_821BD78C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6b90
	ctx.lr = 0x821BD798;
	sub_821D6B90(ctx, base);
	// lis r29,-32168
	r29.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lwz r11,-9804(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -9804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd8b0
	if (ctx.cr6.eq) goto loc_821BD8B0;
	// bl 0x82187b58
	ctx.lr = 0x821BD7B4;
	sub_82187B58(ctx, base);
	// bl 0x82187c00
	ctx.lr = 0x821BD7B8;
	sub_82187C00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,-9804(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -9804);
	// bne 0x821bd810
	if (!ctx.cr0.eq) goto loc_821BD810;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd7e8
	if (ctx.cr6.eq) goto loc_821BD7E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD7E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9804(r29)
	REX_STORE_U32(r29.u32 + -9804, ctx.r11.u32);
loc_821BD7E8:
	// li r29,0
	r29.s64 = 0;
	// lis r28,-32168
	r28.s64 = -2108162048;
loc_821BD7F0:
	// lwz r11,-9800(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9800);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x82182218
	ctx.lr = 0x821BD800;
	sub_82182218(ctx, base);
	// addi r29,r29,544
	r29.s64 = r29.s64 + 544;
	// cmpwi cr6,r29,2176
	ctx.cr6.compare<int32_t>(r29.s32, 2176, ctx.xer);
	// blt cr6,0x821bd7f0
	if (ctx.cr6.lt) goto loc_821BD7F0;
	// b 0x821bd8f0
	goto loc_821BD8F0;
loc_821BD810:
	// bl 0x82181b20
	ctx.lr = 0x821BD814;
	sub_82181B20(ctx, base);
	// lbz r4,22(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,-9804(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -9804);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// addi r9,r30,2
	ctx.r9.s64 = r30.s64 + 2;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82181878
	ctx.lr = 0x821BD858;
	sub_82181878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdeb0
	if (ctx.cr0.eq) goto loc_821BDEB0;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-9804(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -9804);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82181948
	ctx.lr = 0x821BD870;
	sub_82181948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdeb0
	if (ctx.cr0.eq) goto loc_821BDEB0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
	// lis r26,-32168
	r26.s64 = -2108162048;
loc_821BD888:
	// lwz r11,-9800(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -9800);
	// lwzu r4,4(r27)
	ea = 4 + r27.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x82182220
	ctx.lr = 0x821BD898;
	sub_82182220(ctx, base);
	// addi r28,r28,544
	r28.s64 = r28.s64 + 544;
	// cmpwi cr6,r28,1088
	ctx.cr6.compare<int32_t>(r28.s32, 1088, ctx.xer);
	// blt cr6,0x821bd888
	if (ctx.cr6.lt) goto loc_821BD888;
	// lwz r3,-9804(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -9804);
	// bl 0x82181a20
	ctx.lr = 0x821BD8AC;
	sub_82181A20(ctx, base);
	// b 0x821bd8f0
	goto loc_821BD8F0;
loc_821BD8B0:
	// lis r27,-32168
	r27.s64 = -2108162048;
	// lwz r11,-9800(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -9800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd8f0
	if (ctx.cr6.eq) goto loc_821BD8F0;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r28,0
	r28.s64 = 0;
	// b 0x821bd8d0
	goto loc_821BD8D0;
loc_821BD8CC:
	// lwz r11,-9800(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -9800);
loc_821BD8D0:
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82182220
	ctx.lr = 0x821BD8DC;
	sub_82182220(ctx, base);
	// addi r29,r29,136
	r29.s64 = r29.s64 + 136;
	// addi r11,r25,544
	ctx.r11.s64 = r25.s64 + 544;
	// addi r28,r28,544
	r28.s64 = r28.s64 + 544;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821bd8cc
	if (ctx.cr6.lt) goto loc_821BD8CC;
loc_821BD8F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6b90
	ctx.lr = 0x821BD8FC;
	sub_821D6B90(ctx, base);
	// bl 0x821b43c8
	ctx.lr = 0x821BD900;
	sub_821B43C8(ctx, base);
	// bl 0x821d9a00
	ctx.lr = 0x821BD904;
	sub_821D9A00(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821bdeb0
	if (!ctx.cr6.eq) goto loc_821BDEB0;
	// bl 0x821b34f0
	ctx.lr = 0x821BD918;
	sub_821B34F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r29,308(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 308));
	// bl 0x821e0d68
	ctx.lr = 0x821BD924;
	sub_821E0D68(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821e0d68
	ctx.lr = 0x821BD930;
	sub_821E0D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0708
	ctx.lr = 0x821BD938;
	sub_821C0708(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c0708
	ctx.lr = 0x821BD944;
	sub_821C0708(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd958
	if (!ctx.cr0.eq) goto loc_821BD958;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0228
	ctx.lr = 0x821BD958;
	sub_821C0228(ctx, base);
loc_821BD958:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3700
	ctx.r11.u64 = ctx.r11.u64 | 3700;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd978
	if (!ctx.cr0.eq) goto loc_821BD978;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c0228
	ctx.lr = 0x821BD978;
	sub_821C0228(ctx, base);
loc_821BD978:
	// lis r28,-32168
	r28.s64 = -2108162048;
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// subfe r10,r11,r29
	temp.u8 = (~ctx.r11.u32 + r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,-9828(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9828);
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821bd9bc
	if (!ctx.cr6.eq) goto loc_821BD9BC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821bd9bc
	if (ctx.cr6.eq) goto loc_821BD9BC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821bd9b8
	if (!ctx.cr6.eq) goto loc_821BD9B8;
	// bl 0x82135998
	ctx.lr = 0x821BD9B0;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bd9bc
	if (!ctx.cr0.eq) goto loc_821BD9BC;
loc_821BD9B8:
	// bl 0x82141290
	ctx.lr = 0x821BD9BC;
	sub_82141290(ctx, base);
loc_821BD9BC:
	// lhz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 144);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// beq 0x821bdb90
	if (ctx.cr0.eq) goto loc_821BDB90;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821bdb90
	if (ctx.cr6.eq) goto loc_821BDB90;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x821bdb90
	if (ctx.cr6.eq) goto loc_821BDB90;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x821bdb90
	if (ctx.cr6.eq) goto loc_821BDB90;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821bdb44
	if (!ctx.cr0.eq) goto loc_821BDB44;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r25,1088
	ctx.r3.s64 = r25.s64 + 1088;
	// bl 0x821af958
	ctx.lr = 0x821BDA00;
	sub_821AF958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bda5c
	if (ctx.cr0.eq) goto loc_821BDA5C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,3780
	ctx.r9.u64 = ctx.r10.u64 | 3780;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x821d6210
	ctx.lr = 0x821BDA2C;
	sub_821D6210(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,1088(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1088);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,504(r31)
	REX_STORE_U32(r31.u32 + 504, r29.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne 0x821bda54
	if (!ctx.cr0.eq) goto loc_821BDA54;
	// li r11,7
	ctx.r11.s64 = 7;
loc_821BDA54:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x821bdb90
	goto loc_821BDB90;
loc_821BDA5C:
	// lwz r11,1092(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1092);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bda98
	if (ctx.cr0.eq) goto loc_821BDA98;
	// addi r10,r31,384
	ctx.r10.s64 = r31.s64 + 384;
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r9,r31,400
	ctx.r9.s64 = r31.s64 + 400;
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r8,396(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// stw r10,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// stw r9,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r9.u32);
	// stw r8,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r8.u32);
	// bl 0x821b9dc8
	ctx.lr = 0x821BDA94;
	sub_821B9DC8(ctx, base);
	// lwz r11,1092(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1092);
loc_821BDA98:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdb8c
	if (ctx.cr0.eq) goto loc_821BDB8C;
	// lwz r10,10484(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10484);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,10488(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 10488);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// lwz r6,10492(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 10492);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,10496(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 10496);
	// addi r3,r11,14180
	ctx.r3.s64 = ctx.r11.s64 + 14180;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// lfs f0,10312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// addi r9,r11,14180
	ctx.r9.s64 = ctx.r11.s64 + 14180;
	// ori r11,r10,14008
	ctx.r11.u64 = ctx.r10.u64 | 14008;
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r30,10484
	ctx.r5.s64 = r30.s64 + 10484;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// ori r8,r4,14008
	ctx.r8.u64 = ctx.r4.u64 | 14008;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r4,r30,10484
	ctx.r4.s64 = r30.s64 + 10484;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,8(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfsx f13,r30,r8
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f13,10312(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 10312, temp.u32);
	// stfsx f0,r30,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// stw r4,10484(r30)
	REX_STORE_U32(r30.u32 + 10484, ctx.r4.u32);
	// stw r27,10492(r30)
	REX_STORE_U32(r30.u32 + 10492, r27.u32);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r8,10488(r30)
	REX_STORE_U32(r30.u32 + 10488, ctx.r8.u32);
	// stw r3,10496(r30)
	REX_STORE_U32(r30.u32 + 10496, ctx.r3.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r5,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x821bdb8c
	goto loc_821BDB8C;
loc_821BDB44:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821bdb90
	if (!ctx.cr6.eq) goto loc_821BDB90;
	// lwz r10,1092(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 1092);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bdb90
	if (ctx.cr0.eq) goto loc_821BDB90;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r29,504(r31)
	REX_STORE_U32(r31.u32 + 504, r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lfs f1,16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821BDB8C;
	sub_821EB660(ctx, base);
loc_821BDB8C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_821BDB90:
	// lhz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821bdc08
	if (ctx.cr6.eq) goto loc_821BDC08;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821bdea0
	if (!ctx.cr0.eq) goto loc_821BDEA0;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x821bdea0
	if (!ctx.cr6.eq) goto loc_821BDEA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bdea0
	if (!ctx.cr6.eq) goto loc_821BDEA0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bdea0
	if (ctx.cr0.eq) goto loc_821BDEA0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d61f0
	ctx.lr = 0x821BDBE8;
	sub_821D61F0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821BDBF4;
	sub_821D6210(ctx, base);
	// lwz r11,-9828(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9828);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,336(r11)
	REX_STORE_U8(ctx.r11.u32 + 336, ctx.r10.u8);
	// bl 0x821b8b30
	ctx.lr = 0x821BDC04;
	sub_821B8B30(ctx, base);
	// b 0x821bdea0
	goto loc_821BDEA0;
loc_821BDC08:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821bde24
	if (ctx.cr6.eq) goto loc_821BDE24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821bdc84
	if (ctx.cr6.eq) goto loc_821BDC84;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821bde3c
	if (!ctx.cr6.eq) goto loc_821BDE3C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f13,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bdc54
	if (!ctx.cr6.eq) goto loc_821BDC54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821BDC4C:
	// bl 0x821e1510
	ctx.lr = 0x821BDC50;
	sub_821E1510(ctx, base);
	// b 0x821bde3c
	goto loc_821BDE3C;
loc_821BDC54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f0,10248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10248);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bde3c
	if (!ctx.cr6.eq) goto loc_821BDE3C;
	// li r11,2400
	ctx.r11.s64 = 2400;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x821bde3c
	goto loc_821BDE3C;
loc_821BDC84:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bdd44
	if (ctx.cr6.eq) goto loc_821BDD44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f12,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f13,-8500(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8500);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bdce0
	if (!ctx.cr6.eq) goto loc_821BDCE0;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r29,r11,-27144
	r29.s64 = ctx.r11.s64 + -27144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821BDCD8;
	sub_820F34A8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821bdd68
	goto loc_821BDD68;
loc_821BDCE0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f13,-23604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23604);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bdd20
	if (!ctx.cr6.eq) goto loc_821BDD20;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r11,4
	ctx.r11.s64 = 4;
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r10,3696
	ctx.r3.s64 = ctx.r10.s64 + 3696;
	// stw r11,-9812(r9)
	REX_STORE_U32(ctx.r9.u32 + -9812, ctx.r11.u32);
	// b 0x821bdc4c
	goto loc_821BDC4C;
loc_821BDD20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f13,16032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bdd84
	if (!ctx.cr6.eq) goto loc_821BDD84;
loc_821BDD44:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r29,r9,-27144
	r29.s64 = ctx.r9.s64 + -27144;
	// stw r11,-9812(r10)
	REX_STORE_U32(ctx.r10.u32 + -9812, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821BDD64;
	sub_820F34A8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
loc_821BDD68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f3560
	ctx.lr = 0x821BDD70;
	sub_820F3560(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r29,9504
	ctx.r3.s64 = r29.s64 + 9504;
	// bl 0x820f34a8
	ctx.lr = 0x821BDD7C;
	sub_820F34A8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x821bdde4
	goto loc_821BDDE4;
loc_821BDD84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f13,10244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bddf0
	if (!ctx.cr6.eq) goto loc_821BDDF0;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r29,r9,-27144
	r29.s64 = ctx.r9.s64 + -27144;
	// stw r11,-9812(r10)
	REX_STORE_U32(ctx.r10.u32 + -9812, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821BDDC8;
	sub_820F34A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x820f3560
	ctx.lr = 0x821BDDD4;
	sub_820F3560(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,9504
	ctx.r3.s64 = r29.s64 + 9504;
	// bl 0x820f34a8
	ctx.lr = 0x821BDDE0;
	sub_820F34A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
loc_821BDDE4:
	// addi r3,r29,9504
	ctx.r3.s64 = r29.s64 + 9504;
	// bl 0x820f3560
	ctx.lr = 0x821BDDEC;
	sub_820F3560(ctx, base);
	// b 0x821bde3c
	goto loc_821BDE3C;
loc_821BDDF0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f13,-10732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10732);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821bde3c
	if (!ctx.cr6.eq) goto loc_821BDE3C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,9164
	ctx.r11.u64 = ctx.r11.u64 | 9164;
	// stfsx f12,r30,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// b 0x821bde3c
	goto loc_821BDE3C;
loc_821BDE24:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bde3c
	if (!ctx.cr6.eq) goto loc_821BDE3C;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-9812(r10)
	REX_STORE_U32(ctx.r10.u32 + -9812, ctx.r11.u32);
loc_821BDE3C:
	// lbz r11,211(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 211);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bde70
	if (!ctx.cr0.eq) goto loc_821BDE70;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f0,10240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10240);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821bdea0
	if (ctx.cr6.lt) goto loc_821BDEA0;
loc_821BDE70:
	// lbz r11,2970(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bde94
	if (ctx.cr0.eq) goto loc_821BDE94;
	// bl 0x821d2f78
	ctx.lr = 0x821BDE80;
	sub_821D2F78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,60
	ctx.r3.s64 = 60;
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// bl 0x821d4528
	ctx.lr = 0x821BDE90;
	sub_821D4528(ctx, base);
	// b 0x821bdea0
	goto loc_821BDEA0;
loc_821BDE94:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821d0fc0
	ctx.lr = 0x821BDEA0;
	sub_821D0FC0(ctx, base);
loc_821BDEA0:
	// bl 0x821d3938
	ctx.lr = 0x821BDEA4;
	sub_821D3938(ctx, base);
	// lwz r11,68(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r24)
	REX_STORE_U32(r24.u32 + 68, ctx.r11.u32);
loc_821BDEB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821D8DE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d8e04
	if (!ctx.cr6.eq) goto loc_821D8E04;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821D8E04:
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7280
	ctx.r9.s64 = ctx.r9.s64 + -7280;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,-3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DAD90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dae00
	if (ctx.cr6.eq) goto loc_821DAE00;
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x821dadd4
	if (!ctx.cr6.eq) goto loc_821DADD4;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821dae00
	if (!ctx.cr6.eq) goto loc_821DAE00;
loc_821DADD4:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x821dadfc
	if (ctx.cr6.eq) goto loc_821DADFC;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x821dae04
	if (!ctx.cr6.eq) goto loc_821DAE04;
	// li r5,1
	ctx.r5.s64 = 1;
	// lha r3,90(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821d7648
	ctx.lr = 0x821DADF8;
	sub_821D7648(ctx, base);
	// b 0x821dae00
	goto loc_821DAE00;
loc_821DADFC:
	// bl 0x821d94f0
	ctx.lr = 0x821DAE00;
	sub_821D94F0(ctx, base);
loc_821DAE00:
	// sth r3,140(r31)
	REX_STORE_U16(r31.u32 + 140, ctx.r3.u16);
loc_821DAE04:
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

DEFINE_REX_FUNC(sub_821DD228) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// ble cr6,0x821dd238
	if (!ctx.cr6.gt) goto loc_821DD238;
	// li r11,33
	ctx.r11.s64 = 33;
loc_821DD238:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-5784
	ctx.r10.s64 = ctx.r10.s64 + -5784;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821dd258
	if (!ctx.cr6.eq) goto loc_821DD258;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821DD258:
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DEC08) {
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
	ctx.lr = 0x821DEC10;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x821dd490
	ctx.lr = 0x821DEC30;
	sub_821DD490(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-64
	ctx.r8.s64 = -4194304;
	// lfs f0,-24948(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24948);
	ctx.f0.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r8,r8,65440
	ctx.r8.u64 = ctx.r8.u64 | 65440;
	// lfs f5,15628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f3,29356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29356);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 + ctx.f0.f64));
	// bl 0x821e8688
	ctx.lr = 0x821DEC6C;
	sub_821E8688(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,15632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f29.f64 = double(temp.f32);
	// lwz r30,-32480(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821decd0
	if (ctx.cr6.eq) goto loc_821DECD0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,15220
	ctx.r3.s64 = ctx.r11.s64 + 15220;
	// bl 0x821eacb0
	ctx.lr = 0x821DEC94;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 + f29.f64));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r7,14
	ctx.r7.s64 = 14;
	// lfs f0,26832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,15208
	ctx.r5.s64 = ctx.r9.s64 + 15208;
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,984(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 984);
	// bl 0x821eaf80
	ctx.lr = 0x821DECD0;
	sub_821EAF80(ctx, base);
loc_821DECD0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fadds f30,f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4680
	ctx.r9.s64 = ctx.r11.s64 + 4680;
	// lfs f0,28664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28664);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f30,4(r9)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f2,4680(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 4680, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821c5850
	ctx.lr = 0x821DECF8;
	sub_821C5850(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ded18
	if (ctx.cr0.eq) goto loc_821DED18;
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
loc_821DED18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-25152
	ctx.r3.s64 = ctx.r10.s64 + -25152;
	// lfd f1,4040(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4040);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821DED34;
	sub_821EACB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 88);
	// bl 0x821dd7f0
	ctx.lr = 0x821DED44;
	sub_821DD7F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f0,-24308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24308);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x821DED6C;
	sub_820E6E20(ctx, base);
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

DEFINE_REX_FUNC(sub_821E37B8) {
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
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e3830
	if (!ctx.cr6.eq) goto loc_821E3830;
	// lfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821E37E4;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2360(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2360);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f1,196(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821E381C;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// b 0x821e3844
	goto loc_821E3844;
loc_821E3830:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
loc_821E3844:
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

DEFINE_REX_FUNC(sub_821E7D98) {
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
	ctx.lr = 0x821E7DA0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e7edc
	if (!ctx.cr0.eq) goto loc_821E7EDC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x821e7edc
	if (ctx.cr6.lt) goto loc_821E7EDC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r27,r11,-32032
	r27.s64 = ctx.r11.s64 + -32032;
	// addi r3,r27,332
	ctx.r3.s64 = r27.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821E7DEC;
	sub_821F1818(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x821e7e68
	if (!ctx.cr6.eq) goto loc_821E7E68;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821e7eb8
	if (!ctx.cr6.gt) goto loc_821E7EB8;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_821E7E2C:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821e7e2c
	if (!ctx.cr0.eq) goto loc_821E7E2C;
	// b 0x821e7eb8
	goto loc_821E7EB8;
loc_821E7E68:
	// fdivs f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 / f31.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821e7eb8
	if (!ctx.cr6.gt) goto loc_821E7EB8;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_821E7E88:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bdnz 0x821e7e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E7E88;
loc_821E7EB8:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r27,332
	ctx.r3.s64 = r27.s64 + 332;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x821f1840
	ctx.lr = 0x821E7EDC;
	sub_821F1840(ctx, base);
loc_821E7EDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821ECEA0) {
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
	ctx.lr = 0x821ECEA8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821ECECC;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821ECEE0;
	sub_821F2908(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r31,r29,160
	r31.s64 = r29.s64 + 160;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ecfe0
	if (!ctx.cr6.gt) goto loc_821ECFE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,-13044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13044);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_821ECF04:
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x821ecfd0
	if (ctx.cr6.lt) goto loc_821ECFD0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2bf0
	ctx.lr = 0x821ECF20;
	sub_821F2BF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821ecfa0
	if (!ctx.cr6.gt) goto loc_821ECFA0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_821ECF2C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_821ECF5C:
	// lbzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821ecf5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ECF5C;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne 0x821ecf2c
	if (!ctx.cr0.eq) goto loc_821ECF2C;
loc_821ECFA0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mulli r10,r10,144
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(144));
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f2c50
	ctx.lr = 0x821ECFD0;
	sub_821F2C50(ctx, base);
loc_821ECFD0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ecf04
	if (ctx.cr6.lt) goto loc_821ECF04;
loc_821ECFE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F2970) {
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
	ctx.lr = 0x821F2978;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r4,88
	r31.s64 = ctx.r4.s64 + 88;
	// lfs f30,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f30.f64 = double(temp.f32);
loc_821F29A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822a9c48
	ctx.lr = 0x821F29B0;
	sub_822A9C48(ctx, base);
	// lfs f0,-72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f12,-64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822aa6f0
	ctx.lr = 0x821F29E4;
	sub_822AA6F0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfsu f12,16(r31)
	ea = 16 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r31.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a9cd0
	ctx.lr = 0x821F2A0C;
	sub_822A9CD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x821f29a0
	if (ctx.cr6.lt) goto loc_821F29A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,120
	r29.s64 = r28.s64 + 120;
	// lfs f29,18356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18356);
	f29.f64 = double(temp.f32);
	// lfs f31,-30084(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30084);
	f31.f64 = double(temp.f32);
loc_821F2A30:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a9d18
	ctx.lr = 0x821F2A40;
	sub_822A9D18(ctx, base);
	// lfs f0,-72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f12,-64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822aa798
	ctx.lr = 0x821F2A74;
	sub_822AA798(ctx, base);
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822a9d50
	ctx.lr = 0x821F2AA8;
	sub_822A9D50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822aa1e8
	ctx.lr = 0x821F2AB8;
	sub_822AA1E8(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfsu f12,16(r29)
	ea = 16 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r29.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a9e28
	ctx.lr = 0x821F2AE0;
	sub_822A9E28(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x821f2a30
	if (ctx.cr6.lt) goto loc_821F2A30;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,164(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,2880(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 2880, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2884(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2884, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2888(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2888, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821FE738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821FE740;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fe79c
	if (!ctx.cr6.gt) goto loc_821FE79C;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
loc_821FE75C:
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821fe788
	if (!ctx.cr6.lt) goto loc_821FE788;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lfs f1,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lfs f2,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// ld r7,-16(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + -16);
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x821fe670
	ctx.lr = 0x821FE788;
	sub_821FE670(ctx, base);
loc_821FE788:
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fe75c
	if (ctx.cr6.lt) goto loc_821FE75C;
loc_821FE79C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821FF86C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF880) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82209e60
	ctx.lr = 0x821FF89C;
	sub_82209E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,100
	ctx.r11.s64 = 100;
	// lhz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// stb r10,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// lhz r8,90(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r5,82(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// stb r8,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r8.u8);
	// stb r7,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r7.u8);
	// stb r6,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r6.u8);
	// stb r5,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r5.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// divw r11,r10,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822009B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stfs f2,340(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f3,356(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200F80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f1,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f12,16184(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16204(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16204);
	ctx.f11.f64 = double(temp.f32);
	// stw r4,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// lfs f31,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r31,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, r31.u32);
	// lfs f10,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,388(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f13,372(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stfs f12,376(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f1,76(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f1,220(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f1,224(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f1,228(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f31,104(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f31,112(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f31,108(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f1,240(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f1,248(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f3,16188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16188);
	ctx.f3.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x82201050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x8220106C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,320(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 320, temp.u32);
	// stw r31,316(r30)
	REX_STORE_U32(r30.u32 + 316, r31.u32);
	// stw r31,404(r30)
	REX_STORE_U32(r30.u32 + 404, r31.u32);
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

DEFINE_REX_FUNC(sub_82207E30) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c80d0
	ctx.lr = 0x82207E4C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82207e68
	if (ctx.cr0.eq) goto loc_82207E68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x82207e6c
	goto loc_82207E6C;
loc_82207E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82207E6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82208A58) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822089a0
	sub_822089A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208BE0) {
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
	ctx.lr = 0x82208BE8;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8220a898
	ctx.lr = 0x82208C0C;
	sub_8220A898(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82208c38
	if (!ctx.cr0.eq) goto loc_82208C38;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d3f2c
	ctx.lr = 0x82208C38;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82208C38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82209D80) {
	REX_FUNC_PROLOGUE();
	// b 0x824d407c
	__imp__XamUserContentRestrictionCheckAccess(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209EF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x824d415c
	ctx.lr = 0x82209F24;
	__imp__ExGetXConfigSetting(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82209f48
	if (ctx.cr6.eq) goto loc_82209F48;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// ble cr6,0x82209f74
	if (!ctx.cr6.gt) goto loc_82209F74;
loc_82209F48:
	// bl 0x824d3ebc
	ctx.lr = 0x82209F4C;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82209f70
	if (!ctx.cr6.eq) goto loc_82209F70;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// bne cr6,0x82209f68
	if (!ctx.cr6.eq) goto loc_82209F68;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82209f74
	goto loc_82209F74;
loc_82209F68:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82209f74
	goto loc_82209F74;
loc_82209F70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82209F74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220CFB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8220CFC0;
	// lbz r31,4(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x8220d0d4
	goto loc_8220D0D4;
loc_8220CFEC:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// ble cr6,0x8220d010
	if (!ctx.cr6.gt) goto loc_8220D010;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61441, ctx.xer);
	// bne cr6,0x8220d004
	if (!ctx.cr6.eq) goto loc_8220D004;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_8220D004:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// b 0x8220d018
	goto loc_8220D018;
loc_8220D010:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_8220D018:
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, r31.u8);
	// sth r6,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// bge cr6,0x8220d07c
	if (!ctx.cr6.lt) goto loc_8220D07C;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d0a0
	if (!ctx.cr6.eq) goto loc_8220D0A0;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x8220d0a0
	goto loc_8220D0A0;
loc_8220D07C:
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x8220d098
	goto loc_8220D098;
loc_8220D088:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220d0a0
	if (!ctx.cr6.gt) goto loc_8220D0A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220D098:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d088
	if (!ctx.cr6.eq) goto loc_8220D088;
loc_8220D0A0:
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r28,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8220d0e8
	if (!ctx.cr6.lt) goto loc_8220D0E8;
loc_8220D0D4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220cfec
	if (!ctx.cr6.eq) goto loc_8220CFEC;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220d0e8
	if (!ctx.cr0.eq) goto loc_8220D0E8;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_8220D0E8:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82211330) {
	REX_FUNC_PROLOGUE();
	// lhz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822113E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211858) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822119A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82211C10;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lbz r9,10864(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,27432
	ctx.r8.s64 = ctx.r8.s64 + 27432;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x400) | (r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x180000) | (r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82215D60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82215d7c
	if (!ctx.cr6.eq) goto loc_82215D7C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82215da0
	goto loc_82215DA0;
loc_82215D7C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82215d9c
	if (!ctx.cr6.eq) goto loc_82215D9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215da0
	if (!ctx.cr0.eq) goto loc_82215DA0;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82215da0
	goto loc_82215DA0;
loc_82215D9C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_82215DA0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82217938) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1022
	ctx.r11.s64 = ctx.r3.s64 + 1022;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82217948:
	// li r9,255
	ctx.r9.s64 = 255;
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82217948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82217948;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822175f8
	sub_822175F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82218970) {
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
	ctx.lr = 0x82218978;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r21,20(r3)
	r21.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm. r11,r21,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822189a4
	if (!ctx.cr0.eq) goto loc_822189A4;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82218d24
	goto loc_82218D24;
loc_822189A4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82218bb4
	if (!ctx.cr6.eq) goto loc_82218BB4;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218a10
	if (ctx.cr6.eq) goto loc_82218A10;
	// lwz r10,11024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82218a10
	if (!ctx.cr6.lt) goto loc_82218A10;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822189e8
	if (!ctx.cr6.eq) goto loc_822189E8;
	// bl 0x82215008
	ctx.lr = 0x822189E8;
	sub_82215008(ctx, base);
loc_822189E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r22,16
	ctx.cr6.compare<uint32_t>(r22.u32, 16, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82218a08
	if (ctx.cr6.lt) goto loc_82218A08;
	// li r24,0
	r24.s64 = 0;
loc_822189FC:
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82218A08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82218d24
	goto loc_82218D24;
loc_82218A10:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r22,16
	ctx.cr6.compare<uint32_t>(r22.u32, 16, ctx.xer);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// blt cr6,0x82218a2c
	if (ctx.cr6.lt) goto loc_82218A2C;
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
loc_82218A2C:
	// lwz r23,148(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 148);
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r27,r26,28
	r27.s64 = r26.s64 + 28;
loc_82218A38:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// dcbf r0,r11
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r10,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r8.u32));
	// rlwimi r4,r10,24,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r7.u32));
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwimi r4,r10,8,8,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwimi r4,r10,24,0,7
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r4.u64 & 0xFFFFFFFF00FFFFFF);
	// cmplwi cr6,r22,16
	ctx.cr6.compare<uint32_t>(r22.u32, 16, ctx.xer);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82218b5c
	if (ctx.cr6.lt) goto loc_82218B5C;
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// lwbrx r8,0,r11
	ctx.r8.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r11.u32));
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r11,44
	r28.s64 = ctx.r11.s64 + 44;
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r18,r11,12
	r18.s64 = ctx.r11.s64 + 12;
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r7.u32));
	// addi r20,r11,60
	r20.s64 = ctx.r11.s64 + 60;
	// lwbrx r17,0,r30
	r17.u64 = __builtin_bswap32(REX_LOAD_U32(r30.u32));
	// addi r19,r11,36
	r19.s64 = ctx.r11.s64 + 36;
	// lwbrx r5,0,r5
	ctx.r5.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r5.u32));
	// addi r30,r11,28
	r30.s64 = ctx.r11.s64 + 28;
	// addi r16,r11,4
	r16.s64 = ctx.r11.s64 + 4;
	// lwbrx r15,0,r28
	r15.u64 = __builtin_bswap32(REX_LOAD_U32(r28.u32));
	// addi r14,r11,8
	r14.s64 = ctx.r11.s64 + 8;
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwbrx r7,0,r18
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(r18.u32));
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwbrx r20,0,r20
	r20.u64 = __builtin_bswap32(REX_LOAD_U32(r20.u32));
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwbrx r19,0,r19
	r19.u64 = __builtin_bswap32(REX_LOAD_U32(r19.u32));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r5,r15,r6
	ctx.r5.u64 = ctx.r6.u64 - r15.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r18,r17,r29
	r18.u64 = r29.u64 - r17.u64;
	// lwbrx r30,0,r30
	r30.u64 = __builtin_bswap32(REX_LOAD_U32(r30.u32));
	// subf r29,r20,r4
	r29.u64 = ctx.r4.u64 - r20.u64;
	// lwbrx r28,0,r16
	r28.u64 = __builtin_bswap32(REX_LOAD_U32(r16.u32));
	// subf r11,r19,r18
	ctx.r11.u64 = r18.u64 - r19.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwbrx r4,0,r14
	ctx.r4.u64 = __builtin_bswap32(REX_LOAD_U32(r14.u32));
	// add r7,r29,r30
	ctx.r7.u64 = r29.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r6.u32));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82218B5C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// blt cr6,0x82218a38
	if (ctx.cr6.lt) goto loc_82218A38;
	// lbz r8,11069(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11069);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82218b88
	if (ctx.cr0.eq) goto loc_82218B88;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82218B88:
	// cmpwi cr6,r10,-275
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -275, ctx.xer);
	// bne cr6,0x82218ba8
	if (!ctx.cr6.eq) goto loc_82218BA8;
	// cmpwi cr6,r9,-275
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -275, ctx.xer);
	// bne cr6,0x82218ba8
	if (!ctx.cr6.eq) goto loc_82218BA8;
	// cmplwi cr6,r22,16
	ctx.cr6.compare<uint32_t>(r22.u32, 16, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82218a08
	if (ctx.cr6.lt) goto loc_82218A08;
	// b 0x822189fc
	goto loc_822189FC;
loc_82218BA8:
	// rlwimi r21,r11,7,0,24
	r21.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80) | (r21.u64 & 0xFFFFFFFF0000007F);
	// stb r21,20(r26)
	REX_STORE_U8(r26.u32 + 20, r21.u8);
	// b 0x82218d20
	goto loc_82218D20;
loc_82218BB4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82218cf0
	if (!ctx.cr6.eq) goto loc_82218CF0;
	// lbz r11,11069(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218bdc
	if (ctx.cr0.eq) goto loc_82218BDC;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82218BD8;
	sub_822D5870(ctx, base);
	// b 0x82218d20
	goto loc_82218D20;
loc_82218BDC:
	// lwz r10,11024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82218c10
	if (!ctx.cr6.lt) goto loc_82218C10;
loc_82218BFC:
	// lwz r10,11036(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82218a08
	if (!ctx.cr6.eq) goto loc_82218A08;
	// bl 0x82215008
	ctx.lr = 0x82218C0C;
	sub_82215008(ctx, base);
	// b 0x82218a08
	goto loc_82218A08;
loc_82218C10:
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r30,r11,-16384
	r30.s64 = ctx.r11.s64 + -1073741824;
	// dcbf r0,r30
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lhz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,10376(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 10376);
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82218ca8
	if (!ctx.cr6.eq) goto loc_82218CA8;
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// rlwinm r3,r11,21,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFFFFFE0;
	// bl 0x82217a00
	ctx.lr = 0x82218C8C;
	sub_82217A00(ctx, base);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// rlwinm r3,r11,21,0,10
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// bl 0x82217a00
	ctx.lr = 0x82218CA4;
	sub_82217A00(ctx, base);
	// b 0x82218d20
	goto loc_82218D20;
loc_82218CA8:
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lhz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r10,13
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
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
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x82218d20
	goto loc_82218D20;
loc_82218CF0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82218d20
	if (!ctx.cr6.eq) goto loc_82218D20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,11024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218bfc
	if (ctx.cr6.lt) goto loc_82218BFC;
loc_82218D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82218D24:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82229E70) {
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
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82215248
	ctx.lr = 0x82229E8C;
	sub_82215248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82229e98
	if (ctx.cr0.eq) goto loc_82229E98;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82229E98:
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

DEFINE_REX_FUNC(sub_8222BD40) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222bd8c
	if (!ctx.cr6.eq) goto loc_8222BD8C;
	// stw r11,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r11,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// b 0x8222bd98
	goto loc_8222BD98;
loc_8222BD8C:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_8222BD98:
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r11,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// stw r11,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// stw r11,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// stw r11,52(r5)
	REX_STORE_U32(ctx.r5.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222DC68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
loc_8222DC6C:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8222DC88:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x8222dcac
	if (!ctx.cr6.eq) goto loc_8222DCAC;
	// stdcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8222dc88
	if (!ctx.cr0.eq) goto loc_8222DC88;
	// b 0x8222dcb4
	goto loc_8222DCB4;
loc_8222DCAC:
	// stdcx. r8,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8222DCB4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x8222dc6c
	if (!ctx.cr6.eq) goto loc_8222DC6C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82230C78) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82230C80;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,1
	r30.s64 = 1;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,32
	r29.s64 = 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82230d68
	if (ctx.cr6.eq) goto loc_82230D68;
	// rlwinm r9,r4,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,-64
	ctx.r6.s64 = -64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82230CE4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r11,r7,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82230d58
	if (!ctx.cr0.gt) goto loc_82230D58;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x82230d58
	if (!ctx.cr6.lt) goto loc_82230D58;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82230d18
	if (ctx.cr6.gt) goto loc_82230D18;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82230D18:
	// cmpwi cr6,r9,254
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 254, ctx.xer);
	// bge cr6,0x82230d30
	if (!ctx.cr6.lt) goto loc_82230D30;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82230d34
	if (ctx.cr6.gt) goto loc_82230D34;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82230d34
	goto loc_82230D34;
loc_82230D30:
	// li r11,254
	ctx.r11.s64 = 254;
loc_82230D34:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r7,r7,0,9,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stvx128 v127,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r11,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82230D58:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82230ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230CE4;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82230D68:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(r31.u32, 15, ctx.xer);
	// bgt cr6,0x822310c8
	if (ctx.cr6.gt) goto loc_822310C8;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-17456
	ctx.r12.s64 = ctx.r12.s64 + -17456;
	// lbzx r0,r12,r31
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r31.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// nop 
	// addi r12,r12,3480
	ctx.r12.s64 = ctx.r12.s64 + 3480;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r31.u32) {
	case 0:
		goto loc_82230DA4;
	case 1:
		goto loc_82230D98;
	case 2:
		goto loc_82230DA4;
	case 3:
		goto loc_82230F48;
	case 4:
		goto loc_82230E88;
	case 5:
		goto loc_82230E88;
	case 6:
		goto loc_82231044;
	case 7:
		goto loc_82231068;
	case 8:
		goto loc_822310C8;
	case 9:
		goto loc_822310C8;
	case 10:
		goto loc_82230DA4;
	case 11:
		goto loc_822310C8;
	case 12:
		goto loc_82230F48;
	case 13:
		goto loc_822310C8;
	case 14:
		goto loc_822310AC;
	case 15:
		goto loc_822310B8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82230D98:
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x82230a48
	ctx.lr = 0x82230DA0;
	sub_82230A48(ctx, base);
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
loc_82230DA4:
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(r31.u32, 10, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82230db4
	if (ctx.cr6.eq) goto loc_82230DB4;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82230DB4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-17324
	ctx.r10.s64 = ctx.r10.s64 + -17324;
	// addi r9,r9,-17328
	ctx.r9.s64 = ctx.r9.s64 + -17328;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f0,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mulli r8,r11,3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vminfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrfin128 v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_82230E80:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822310cc
	goto loc_822310CC;
loc_82230E88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,16220
	ctx.r11.s64 = ctx.r11.s64 + 16220;
	// addi r10,r10,2024
	ctx.r10.s64 = ctx.r10.s64 + 2024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,1992
	ctx.r9.s64 = ctx.r9.s64 + 1992;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r8,-17344
	ctx.r10.s64 = ctx.r8.s64 + -17344;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r11,24464
	ctx.r11.s64 = ctx.r11.s64 + 24464;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,-17360
	ctx.r8.s64 = ctx.r8.s64 + -17360;
	// vmulfp128 v60,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(r31.u32, 5, ctx.xer);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v12,v61,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vxor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x82230f3c
	if (!ctx.cr6.eq) goto loc_82230F3C;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x822310cc
	goto loc_822310CC;
loc_82230F3C:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82230e80
	goto loc_82230E80;
loc_82230F48:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_82230F5C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,-124
	ctx.r4.s64 = -124;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7658
	ctx.lr = 0x82230F6C;
	sub_822D7658(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82230fa4
	if (ctx.cr0.eq) goto loc_82230FA4;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1023
	ctx.r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82230fa8
	if (ctx.cr6.lt) goto loc_82230FA8;
	// li r11,511
	ctx.r11.s64 = 511;
	// b 0x82230fa8
	goto loc_82230FA8;
loc_82230FA4:
	// rlwinm r11,r11,16,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
loc_82230FA8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(r31.u32, 12, ctx.xer);
	// blt cr6,0x82230f5c
	if (ctx.cr6.lt) goto loc_82230F5C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,16172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82230fe4
	if (!ctx.cr6.gt) goto loc_82230FE4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82230fe8
	goto loc_82230FE8;
loc_82230FE4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82230FE8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82231000
	if (!ctx.cr6.lt) goto loc_82231000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82231004
	if (ctx.cr6.gt) goto loc_82231004;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x82231004
	goto loc_82231004;
loc_82231000:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82231004:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x82230e80
	goto loc_82230E80;
loc_82231044:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v127,3,1,3
	ctx.fpscr.enableFlushMode();
	temp.u32 = (v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((v127.u32[3]&0x80000000)>>16);
	temp.u32 = (v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((v127.u32[2]&0x80000000)>>16);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82230e80
	goto loc_82230E80;
loc_82231068:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r29,64
	r29.s64 = 64;
	// vpkd3d128 v63,v127,5,2,2
	ctx.fpscr.enableFlushMode();
	temp.u32 = (v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((v127.u32[3]&0x80000000)>>16);
	temp.u32 = (v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((v127.u32[2]&0x80000000)>>16);
	temp.u32 = (v127.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((v127.u32[1]&0x80000000)>>16);
	temp.u32 = (v127.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((v127.u32[0]&0x80000000)>>16);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822310cc
	goto loc_822310CC;
loc_822310AC:
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x822310cc
	goto loc_822310CC;
loc_822310B8:
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// li r29,64
	r29.s64 = 64;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// b 0x822310cc
	goto loc_822310CC;
loc_822310C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822310CC:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8224A9E0) {
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
	// beq cr6,0x8224aa08
	if (ctx.cr6.eq) goto loc_8224AA08;
	// bl 0x82245c00
	ctx.lr = 0x8224AA00;
	sub_82245C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224AA08;
	sub_82255B70(ctx, base);
loc_8224AA08:
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

DEFINE_REX_FUNC(sub_8224B658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224B660;
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
	// addi r31,r11,25384
	r31.s64 = ctx.r11.s64 + 25384;
	// lwz r11,25480(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25480);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224b740
	if (!ctx.cr0.eq) goto loc_8224B740;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4356
	ctx.r9.s64 = ctx.r10.s64 + -4356;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,25480(r8)
	REX_STORE_U32(ctx.r8.u32 + 25480, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
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
	// bl 0x8224b590
	ctx.lr = 0x8224B6BC;
	sub_8224B590(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,22976
	ctx.r9.s64 = ctx.r9.s64 + 22976;
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
	// addi r9,r11,-4380
	ctx.r9.s64 = ctx.r11.s64 + -4380;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
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
	// bl 0x8224b520
	ctx.lr = 0x8224B718;
	sub_8224B520(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r9,23040
	ctx.r9.s64 = ctx.r9.s64 + 23040;
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
loc_8224B740:
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

DEFINE_REX_FUNC(sub_8224E9F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bge cr6,0x8224ea40
	if (!ctx.cr6.lt) goto loc_8224EA40;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_8224EA40:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8224ea4c
	if (!ctx.cr6.lt) goto loc_8224EA4C;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_8224EA4C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224eaa4
	if (ctx.cr6.eq) goto loc_8224EAA4;
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8224eaa4
	if (!ctx.cr6.eq) goto loc_8224EAA4;
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// andi. r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x8224ea88
	if (!ctx.cr6.eq) goto loc_8224EA88;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 * f30.f64));
loc_8224EA88:
	// andi. r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8224eaa4
	if (!ctx.cr6.eq) goto loc_8224EAA4;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_8224EAA4:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// rlwinm r30,r11,28,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r9,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r9.u32);
	// beq cr6,0x8224eac4
	if (ctx.cr6.eq) goto loc_8224EAC4;
	// lfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f30.f64 = double(temp.f32);
loc_8224EAC4:
	// rlwinm r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8224ead4
	if (ctx.cr6.eq) goto loc_8224EAD4;
	// lfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f31.f64 = double(temp.f32);
loc_8224EAD4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x82246f68
	ctx.lr = 0x8224EAF0;
	sub_82246F68(ctx, base);
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822469c0
	ctx.lr = 0x8224EB04;
	sub_822469C0(ctx, base);
	// bl 0x8224da00
	ctx.lr = 0x8224EB08;
	sub_8224DA00(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8224eb1c
	if (!ctx.cr6.eq) goto loc_8224EB1C;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
loc_8224EB1C:
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224eb54
	if (ctx.cr6.eq) goto loc_8224EB54;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x82246ef8
	ctx.lr = 0x8224EB44;
	sub_82246EF8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822469c0
	ctx.lr = 0x8224EB50;
	sub_822469C0(ctx, base);
	// bl 0x8224da00
	ctx.lr = 0x8224EB54;
	sub_8224DA00(ctx, base);
loc_8224EB54:
	// li r4,2061
	ctx.r4.s64 = 2061;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x8224EB60;
	sub_8225DA70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822469c0
	ctx.lr = 0x8224EB6C;
	sub_822469C0(ctx, base);
	// bl 0x8224da00
	ctx.lr = 0x8224EB70;
	sub_8224DA00(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8224EB78;
	sub_822D7B58(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_82256578) {
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
	// lwz r4,23572(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23572);
	// bl 0x82255c88
	ctx.lr = 0x82256590;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225659c
	if (ctx.cr0.eq) goto loc_8225659C;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8225659C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256DF0) {
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
	ctx.lr = 0x82256E10;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256e24
	if (!ctx.cr0.eq) goto loc_82256E24;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256e2c
	goto loc_82256E2C;
loc_82256E24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82260290
	ctx.lr = 0x82256E2C;
	sub_82260290(ctx, base);
loc_82256E2C:
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

DEFINE_REX_FUNC(sub_82257A70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82257A78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8225da70
	ctx.lr = 0x82257A94;
	sub_8225DA70(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82257AA0;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82259018) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259084
	if (ctx.cr6.eq) goto loc_82259084;
	// bl 0x82246ab8
	ctx.lr = 0x82259040;
	sub_82246AB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82259084
	if (ctx.cr0.eq) goto loc_82259084;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82249fd0
	ctx.lr = 0x8225905C;
	sub_82249FD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259084
	if (ctx.cr6.eq) goto loc_82259084;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82258d00
	ctx.lr = 0x82259070;
	sub_82258D00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8229a710
	ctx.lr = 0x82259078;
	sub_8229A710(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x82259084;
	sub_82255B70(ctx, base);
loc_82259084:
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

DEFINE_REX_FUNC(sub_8225C4A0) {
	REX_FUNC_PROLOGUE();
	// stw r4,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225CA00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225CAF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822586e0
	ctx.lr = 0x8225CB20;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225cc54
	if (ctx.cr6.eq) goto loc_8225CC54;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225cb40
	if (ctx.cr6.eq) goto loc_8225CB40;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8225cb48
	goto loc_8225CB48;
loc_8225CB40:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82258590
	ctx.lr = 0x8225CB48;
	sub_82258590(ctx, base);
loc_8225CB48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225cbf0
	if (ctx.cr6.eq) goto loc_8225CBF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225cbac
	if (ctx.cr6.eq) goto loc_8225CBAC;
	// bl 0x82255fb0
	ctx.lr = 0x8225CB60;
	sub_82255FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225cbac
	if (ctx.cr0.eq) goto loc_8225CBAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225cb98
	if (!ctx.cr6.eq) goto loc_8225CB98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1436
	ctx.r5.s64 = ctx.r11.s64 + -1436;
	// addi r4,r10,-1408
	ctx.r4.s64 = ctx.r10.s64 + -1408;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CB98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1512
	ctx.r5.s64 = ctx.r11.s64 + -1512;
	// addi r4,r10,-1472
	ctx.r4.s64 = ctx.r10.s64 + -1472;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CBAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225cbdc
	if (!ctx.cr6.eq) goto loc_8225CBDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-416
	ctx.r5.s64 = ctx.r11.s64 + -416;
	// addi r4,r10,-396
	ctx.r4.s64 = ctx.r10.s64 + -396;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CBDC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-560
	ctx.r5.s64 = ctx.r11.s64 + -560;
	// addi r4,r10,-528
	ctx.r4.s64 = ctx.r10.s64 + -528;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CBF0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225cc40
	if (!ctx.cr6.eq) goto loc_8225CC40;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225cc2c
	if (ctx.cr6.eq) goto loc_8225CC2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1764
	ctx.r5.s64 = ctx.r11.s64 + -1764;
	// addi r4,r10,-436
	ctx.r4.s64 = ctx.r10.s64 + -436;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CC2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-384
	ctx.r5.s64 = ctx.r11.s64 + -384;
	// addi r4,r10,-364
	ctx.r4.s64 = ctx.r10.s64 + -364;
	// b 0x8225cc50
	goto loc_8225CC50;
loc_8225CC40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-500
	ctx.r5.s64 = ctx.r11.s64 + -500;
	// addi r4,r10,-464
	ctx.r4.s64 = ctx.r10.s64 + -464;
loc_8225CC50:
	// bl 0x822588e0
	ctx.lr = 0x8225CC54;
	sub_822588E0(ctx, base);
loc_8225CC54:
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

DEFINE_REX_FUNC(sub_822635F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822635F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82276990
	ctx.lr = 0x82263610;
	sub_82276990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82263628
	if (ctx.cr0.eq) goto loc_82263628;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82246a38
	ctx.lr = 0x82263624;
	sub_82246A38(ctx, base);
	// b 0x82263654
	goto loc_82263654;
loc_82263628:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8226363c
	if (!ctx.cr6.eq) goto loc_8226363C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8225a0d8
	ctx.lr = 0x82263638;
	sub_8225A0D8(ctx, base);
	// b 0x82263644
	goto loc_82263644;
loc_8226363C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225e930
	ctx.lr = 0x82263644;
	sub_8225E930(ctx, base);
loc_82263644:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276a38
	ctx.lr = 0x82263654;
	sub_82276A38(ctx, base);
loc_82263654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82265140) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82265310) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82265318;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822635f0
	ctx.lr = 0x82265338;
	sub_822635F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82265348
	if (!ctx.cr0.lt) goto loc_82265348;
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// b 0x822653d8
	goto loc_822653D8;
loc_82265348:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d6a10
	ctx.lr = 0x82265350;
	sub_822D6A10(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x822653ac
	if (!ctx.cr6.gt) goto loc_822653AC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// li r5,3
	ctx.r5.s64 = 3;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d7e58
	ctx.lr = 0x82265378;
	sub_822D7E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822653ac
	if (!ctx.cr0.eq) goto loc_822653AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82254670
	ctx.lr = 0x82265390;
	sub_82254670(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x822653c8
	if (ctx.cr0.lt) goto loc_822653C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d4d8
	ctx.lr = 0x822653A8;
	sub_8225D4D8(ctx, base);
	// b 0x822653c8
	goto loc_822653C8;
loc_822653AC:
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8228ab40
	ctx.lr = 0x822653B8;
	sub_8228AB40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x822653c8
	if (ctx.cr0.lt) goto loc_822653C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_822653C8:
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x822653D4;
	sub_82255B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822653D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82268708) {
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
	ctx.lr = 0x82268710;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x82256df0
	ctx.lr = 0x8226872C;
	sub_82256DF0(ctx, base);
	// lwz r25,8(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// blt cr6,0x8226890c
	if (ctx.cr6.lt) goto loc_8226890C;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// li r26,-1
	r26.s64 = -1;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r25,12
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x82268754
	if (!ctx.cr6.gt) goto loc_82268754;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82268754:
	// li r28,-5
	r28.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// ble cr6,0x82268768
	if (!ctx.cr6.gt) goto loc_82268768;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82268768:
	// bl 0x82255b48
	ctx.lr = 0x8226876C;
	sub_82255B48(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822687a4
	if (ctx.cr0.eq) goto loc_822687A4;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// addic. r31,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r31.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// blt 0x822687a8
	if (ctx.cr0.lt) goto loc_822687A8;
loc_8226878C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9880
	ctx.lr = 0x82268794;
	sub_822A9880(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bge 0x8226878c
	if (!ctx.cr0.lt) goto loc_8226878C;
	// b 0x822687a8
	goto loc_822687A8;
loc_822687A4:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_822687A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r29,16(r27)
	REX_STORE_U32(r27.u32 + 16, r29.u32);
	// beq cr6,0x82268838
	if (ctx.cr6.eq) goto loc_82268838;
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x822687BC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r3.u32);
	// beq 0x82268838
	if (ctx.cr0.eq) goto loc_82268838;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r25,20
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(20));
	// ble cr6,0x822687e0
	if (!ctx.cr6.gt) goto loc_822687E0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822687E0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x822687f0
	if (!ctx.cr6.gt) goto loc_822687F0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822687F0:
	// bl 0x82255b48
	ctx.lr = 0x822687F4;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82268828
	if (ctx.cr0.eq) goto loc_82268828;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// addic. r31,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r31.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// blt 0x8226882c
	if (ctx.cr0.lt) goto loc_8226882C;
loc_82268810:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227acf8
	ctx.lr = 0x82268818;
	sub_8227ACF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bge 0x82268810
	if (!ctx.cr0.lt) goto loc_82268810;
	// b 0x8226882c
	goto loc_8226882C;
loc_82268828:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8226882C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r29,24(r27)
	REX_STORE_U32(r27.u32 + 24, r29.u32);
	// bne cr6,0x82268884
	if (!ctx.cr6.eq) goto loc_82268884;
loc_82268838:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_82268840:
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268854
	if (ctx.cr6.eq) goto loc_82268854;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82247ba0
	ctx.lr = 0x82268854;
	sub_82247BA0(ctx, base);
loc_82268854:
	// stw r23,16(r27)
	REX_STORE_U32(r27.u32 + 16, r23.u32);
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 20);
	// bl 0x82255b70
	ctx.lr = 0x82268860;
	sub_82255B70(ctx, base);
	// lwz r3,24(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 24);
	// stw r23,20(r27)
	REX_STORE_U32(r27.u32 + 20, r23.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268878
	if (ctx.cr6.eq) goto loc_82268878;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82247c28
	ctx.lr = 0x82268878;
	sub_82247C28(ctx, base);
loc_82268878:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r23,24(r27)
	REX_STORE_U32(r27.u32 + 24, r23.u32);
	// b 0x82268910
	goto loc_82268910;
loc_82268884:
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82268908
	if (!ctx.cr6.gt) goto loc_82268908;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8226889C:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x8227bb10
	ctx.lr = 0x822688B0;
	sub_8227BB10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82268840
	if (ctx.cr0.lt) goto loc_82268840;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// lwzx r5,r9,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// bl 0x82268610
	ctx.lr = 0x822688E8;
	sub_82268610(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82268840
	if (ctx.cr0.lt) goto loc_82268840;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x8226889c
	if (ctx.cr6.lt) goto loc_8226889C;
loc_82268908:
	// stw r25,12(r27)
	REX_STORE_U32(r27.u32 + 12, r25.u32);
loc_8226890C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82268910:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82275B50) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82270d60
	ctx.lr = 0x82275B80;
	sub_82270D60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82255b70
	ctx.lr = 0x82275B8C;
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

DEFINE_REX_FUNC(sub_822768C8) {
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
	ctx.lr = 0x822768D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82276900
	if (!ctx.cr6.eq) goto loc_82276900;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
	// b 0x82276980
	goto loc_82276980;
loc_82276900:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227691C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82276980
	if (ctx.cr0.lt) goto loc_82276980;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82255b48
	ctx.lr = 0x82276940;
	sub_82255B48(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82276954
	if (!ctx.cr0.eq) goto loc_82276954;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82276980
	goto loc_82276980;
loc_82276954:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822767a0
	ctx.lr = 0x82276968;
	sub_822767A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82276978
	if (ctx.cr0.lt) goto loc_82276978;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// b 0x82276980
	goto loc_82276980;
loc_82276978:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82276980;
	sub_82255B70(ctx, base);
loc_82276980:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82278050) {
	REX_FUNC_PROLOGUE();
	// b 0x82277e30
	sub_82277E30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822783A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822783A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82278410
	if (!ctx.cr6.eq) goto loc_82278410;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822783d4
	if (!ctx.cr6.eq) goto loc_822783D4;
	// li r30,1
	r30.s64 = 1;
	// b 0x822783ec
	goto loc_822783EC;
loc_822783D4:
	// rlwinm. r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82278400
	if (!ctx.cr0.gt) goto loc_82278400;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82278400
	if (!ctx.cr6.lt) goto loc_82278400;
loc_822783EC:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x822783F8;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82278408
	if (!ctx.cr0.eq) goto loc_82278408;
loc_82278400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227843c
	goto loc_8227843C;
loc_82278408:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82278410:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227842c
	if (ctx.cr0.eq) goto loc_8227842C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8227842C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8227843C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227A950) {
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
	// bl 0x8227a848
	ctx.lr = 0x8227A96C;
	sub_8227A848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227a980
	if (ctx.cr0.lt) goto loc_8227A980;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8227A980:
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

DEFINE_REX_FUNC(sub_8227B300) {
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
	// bl 0x8227ad60
	ctx.lr = 0x8227B320;
	sub_8227AD60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
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

DEFINE_REX_FUNC(sub_8227C8E8) {
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
	ctx.lr = 0x8227C8F0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82246370
	ctx.lr = 0x8227C910;
	sub_82246370(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82246190
	ctx.lr = 0x8227C918;
	sub_82246190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,-5920
	ctx.r4.s64 = ctx.r11.s64 + -5920;
	// bl 0x822d7938
	ctx.lr = 0x8227C928;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227c9a8
	if (ctx.cr0.eq) goto loc_8227C9A8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256e40
	ctx.lr = 0x8227C93C;
	sub_82256E40(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1444
	ctx.r4.s64 = ctx.r11.s64 + 1444;
	// bne cr6,0x8227c958
	if (!ctx.cr6.eq) goto loc_8227C958;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8227C958:
	// bl 0x822703f8
	ctx.lr = 0x8227C95C;
	sub_822703F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,-1
	r29.s64 = -1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227c988
	if (ctx.cr6.eq) goto loc_8227C988;
loc_8227C970:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x822462c8
	ctx.lr = 0x8227C97C;
	sub_822462C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227c970
	if (!ctx.cr6.eq) goto loc_8227C970;
loc_8227C988:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227c7c0
	ctx.lr = 0x8227C9A0;
	sub_8227C7C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227ca84
	if (ctx.cr0.lt) goto loc_8227CA84;
loc_8227C9A8:
	// li r29,0
	r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256990
	ctx.lr = 0x8227C9BC;
	sub_82256990(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227ca80
	if (ctx.cr6.eq) goto loc_8227CA80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,-5768
	r26.s64 = ctx.r11.s64 + -5768;
loc_8227C9D0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82246fd8
	ctx.lr = 0x8227C9DC;
	sub_82246FD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8227C9E8;
	sub_8224DA00(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227ca68
	if (!ctx.cr6.eq) goto loc_8227CA68;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82246370
	ctx.lr = 0x8227C9FC;
	sub_82246370(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82246190
	ctx.lr = 0x8227CA04;
	sub_82246190(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8227ca20
	if (!ctx.cr6.eq) goto loc_8227CA20;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822d7938
	ctx.lr = 0x8227CA18;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227ca68
	if (ctx.cr0.eq) goto loc_8227CA68;
loc_8227CA20:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227c8e8
	ctx.lr = 0x8227CA3C;
	sub_8227C8E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227ca8c
	if (ctx.cr0.lt) goto loc_8227CA8C;
	// blt cr6,0x8227ca68
	if (ctx.cr6.lt) goto loc_8227CA68;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227ca68
	if (!ctx.cr6.lt) goto loc_8227CA68;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r29.u16);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
loc_8227CA68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256a80
	ctx.lr = 0x8227CA74;
	sub_82256A80(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227c9d0
	if (!ctx.cr6.eq) goto loc_8227C9D0;
loc_8227CA80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227CA84:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ecc
	return;
loc_8227CA8C:
	// blt cr6,0x8227ca84
	if (ctx.cr6.lt) goto loc_8227CA84;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227ca84
	if (!ctx.cr6.lt) goto loc_8227CA84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r29.u16);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x8227ca84
	goto loc_8227CA84;
}

DEFINE_REX_FUNC(sub_82281E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82281E08;
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
	// beq cr6,0x82281e64
	if (ctx.cr6.eq) goto loc_82281E64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82281e4c
	if (!ctx.cr6.gt) goto loc_82281E4C;
loc_82281E30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82281d78
	ctx.lr = 0x82281E3C;
	sub_82281D78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82281e30
	if (ctx.cr6.lt) goto loc_82281E30;
loc_82281E4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b50
	ctx.lr = 0x82281E54;
	sub_82255B50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x82281E5C;
	sub_82255B70(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_82281E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82285170) {
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
	ctx.lr = 0x82285178;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82285190:
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x822851d4
	if (ctx.cr6.eq) goto loc_822851D4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x822851d4
	if (ctx.cr6.eq) goto loc_822851D4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x822851d4
	if (ctx.cr6.eq) goto loc_822851D4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x822851d4
	if (ctx.cr6.eq) goto loc_822851D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 4);
	// ld r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 4);
	// ld r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U64(r29.u32 + 4);
	// ld r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 4);
	// bl 0x82284f98
	ctx.lr = 0x822851CC;
	sub_82284F98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822851ec
	if (!ctx.cr0.eq) goto loc_822851EC;
loc_822851D4:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bne cr6,0x82285190
	if (!ctx.cr6.eq) goto loc_82285190;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822851E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822851EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822851e4
	goto loc_822851E4;
}

DEFINE_REX_FUNC(sub_82286468) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822864a0
	if (ctx.cr6.eq) goto loc_822864A0;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822864a0
	if (!ctx.cr6.gt) goto loc_822864A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822864A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822864A0:
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

DEFINE_REX_FUNC(sub_82287320) {
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
	// bl 0x82285e50
	ctx.lr = 0x82287338;
	sub_82285E50(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287358;
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

DEFINE_REX_FUNC(sub_82287A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82288590) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31372);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822885B0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822885c4
	if (!ctx.cr6.eq) goto loc_822885C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822885C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288C78) {
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
	// bne cr6,0x82288c98
	if (!ctx.cr6.eq) goto loc_82288C98;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82288cac
	goto loc_82288CAC;
loc_82288C98:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288CAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289670) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289AF0) {
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
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82289B10:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82289b24
	if (!ctx.cr6.lt) goto loc_82289B24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82289B24:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82289b10
	if (!ctx.cr6.eq) goto loc_82289B10;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bne cr6,0x82289b44
	if (!ctx.cr6.eq) goto loc_82289B44;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82289B44:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82289b64
	if (ctx.cr6.eq) goto loc_82289B64;
	// ld r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 4);
	// ld r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 4);
	// b 0x82289b6c
	goto loc_82289B6C;
loc_82289B64:
	// ld r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 4);
	// ld r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 4);
loc_82289B6C:
	// bl 0x82284d28
	ctx.lr = 0x82289B70;
	sub_82284D28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82289b80
	if (ctx.cr6.gt) goto loc_82289B80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82289B80:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
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

DEFINE_REX_FUNC(sub_8228C510) {
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
	ctx.lr = 0x8228C518;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228c700
	if (ctx.cr6.eq) goto loc_8228C700;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8228c700
	if (ctx.cr6.eq) goto loc_8228C700;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8228c700
	if (ctx.cr6.eq) goto loc_8228C700;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// ble cr6,0x8228c584
	if (!ctx.cr6.gt) goto loc_8228C584;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8228C564:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// bdnz 0x8228c564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228C564;
loc_8228C584:
	// addi r24,r31,100
	r24.s64 = r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228C590;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b620
	ctx.lr = 0x8228C5A4;
	sub_8228B620(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c5cc
	if (ctx.cr0.eq) goto loc_8228C5CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// bl 0x824d437c
	ctx.lr = 0x8228C5C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228c708
	goto loc_8228C708;
loc_8228C5CC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r28,88(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c620
	if (ctx.cr6.eq) goto loc_8228C620;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8228c5f4
	if (ctx.cr6.lt) goto loc_8228C5F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228c3a8
	ctx.lr = 0x8228C5F4;
	sub_8228C3A8(ctx, base);
loc_8228C5F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8228c620
	if (!ctx.cr6.gt) goto loc_8228C620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228C620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228C620:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r3,76
	ctx.r3.s64 = 76;
	// divwu r11,r29,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r29.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,17
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(17));
	// subf r25,r11,r29
	r25.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82255b48
	ctx.lr = 0x8228C638;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228c648
	if (ctx.cr0.eq) goto loc_8228C648;
	// bl 0x8228b238
	ctx.lr = 0x8228C644;
	sub_8228B238(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8228C648:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8228c65c
	if (!ctx.cr6.eq) goto loc_8228C65C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8228c6f0
	goto loc_8228C6F0;
loc_8228C65C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b308
	ctx.lr = 0x8228C678;
	sub_8228B308(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8228c694
	if (!ctx.cr0.lt) goto loc_8228C694;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b2b0
	ctx.lr = 0x8228C688;
	sub_8228B2B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C690;
	sub_82255B70(ctx, base);
	// b 0x8228c6f0
	goto loc_8228C6F0;
loc_8228C694:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c6b4
	if (ctx.cr6.eq) goto loc_8228C6B4;
	// stw r30,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, r30.u32);
loc_8228C6B4:
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228C6D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r22)
	REX_STORE_U32(r22.u32 + 0, r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_8228C6F0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228C6F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8228c708
	goto loc_8228C708;
loc_8228C700:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8228C708:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82294A48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82294A50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294a70
	if (!ctx.cr6.eq) goto loc_82294A70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x82294ae8
	goto loc_82294AE8;
loc_82294A70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r30,664(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 664);
	// beq 0x82294aa8
	if (ctx.cr0.eq) goto loc_82294AA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d60f0
	ctx.lr = 0x82294A98;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82294AA8:
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lha r11,660(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_82294AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82298C08) {
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
	ctx.lr = 0x82298C10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r21,0
	r21.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x82298c3c
	if (ctx.cr6.gt) goto loc_82298C3C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x82298e08
	goto loc_82298E08;
loc_82298C3C:
	// lwz r29,32(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addic. r22,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	r22.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// li r20,1
	r20.s64 = 1;
	// blt 0x82298e00
	if (ctx.cr0.lt) goto loc_82298E00;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r24,r11,16384
	r24.u64 = ctx.r11.u64 | 16384;
loc_82298C54:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r25,r26
	r25.u64 = r26.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// srawi r26,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r26.s64 = ctx.r11.s32 >> 4;
	// srawi r28,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r28.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// bge cr6,0x82298c84
	if (!ctx.cr6.lt) goto loc_82298C84;
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x82298c90
	goto loc_82298C90;
loc_82298C84:
	// cmpwi cr6,r26,16384
	ctx.cr6.compare<int32_t>(r26.s32, 16384, ctx.xer);
	// ble cr6,0x82298c90
	if (!ctx.cr6.gt) goto loc_82298C90;
	// li r26,16384
	r26.s64 = 16384;
loc_82298C90:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// bge cr6,0x82298ca0
	if (!ctx.cr6.lt) goto loc_82298CA0;
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x82298cac
	goto loc_82298CAC;
loc_82298CA0:
	// cmpwi cr6,r28,16384
	ctx.cr6.compare<int32_t>(r28.s32, 16384, ctx.xer);
	// ble cr6,0x82298cac
	if (!ctx.cr6.gt) goto loc_82298CAC;
	// li r28,16384
	r28.s64 = 16384;
loc_82298CAC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82298cbc
	if (ctx.cr6.eq) goto loc_82298CBC;
	// li r20,0
	r20.s64 = 0;
	// b 0x82298dec
	goto loc_82298DEC;
loc_82298CBC:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// beq cr6,0x82298dec
	if (ctx.cr6.eq) goto loc_82298DEC;
	// lha r11,6(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// bge cr6,0x82298ce4
	if (!ctx.cr6.lt) goto loc_82298CE4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82298dec
	if (!ctx.cr6.gt) goto loc_82298DEC;
	// lha r11,10(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82298cf8
	if (ctx.cr6.lt) goto loc_82298CF8;
	// b 0x82298dec
	goto loc_82298DEC;
loc_82298CE4:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82298dec
	if (!ctx.cr6.gt) goto loc_82298DEC;
	// lha r11,10(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 10));
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82298dec
	if (!ctx.cr6.lt) goto loc_82298DEC;
loc_82298CF8:
	// lha r11,8(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(r25.s32, r26.s32, ctx.xer);
	// bgt cr6,0x82298d0c
	if (ctx.cr6.gt) goto loc_82298D0C;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// b 0x82298d10
	goto loc_82298D10;
loc_82298D0C:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
loc_82298D10:
	// bge cr6,0x82298dec
	if (!ctx.cr6.lt) goto loc_82298DEC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r29
	ctx.xer.ca = r29.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// subfze. r30,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r30.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82298d74
	if (!ctx.cr0.eq) goto loc_82298D74;
	// lha r8,44(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 44));
	// srawi r10,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r28.s32 >> 31;
	// rlwinm r9,r27,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// subfc r11,r27,r28
	ctx.xer.ca = r28.u32 >= r27.u32;
	ctx.r11.u64 = r28.u64 - r27.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// orc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 | ~ctx.r7.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82298d74
	if (ctx.cr6.eq) goto loc_82298D74;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82298d74
	if (ctx.cr6.eq) goto loc_82298D74;
	// lha r11,-4(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + -4));
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82298d74
	if (!ctx.cr6.eq) goto loc_82298D74;
	// lha r11,-2(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + -2));
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82298de0
	if (ctx.cr6.eq) goto loc_82298DE0;
loc_82298D74:
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822988c8
	ctx.lr = 0x82298D80;
	sub_822988C8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// blt 0x82298e00
	if (ctx.cr0.lt) goto loc_82298E00;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82298dc0
	if (ctx.cr6.eq) goto loc_82298DC0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82298440
	ctx.lr = 0x82298DA0;
	sub_82298440(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82298dfc
	if (ctx.cr0.eq) goto loc_82298DFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82298440
	ctx.lr = 0x82298DB8;
	sub_82298440(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
loc_82298DC0:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82298dd0
	if (ctx.cr6.lt) goto loc_82298DD0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82298DD0:
	// sth r11,44(r31)
	REX_STORE_U16(r31.u32 + 44, ctx.r11.u16);
	// sth r25,0(r29)
	REX_STORE_U16(r29.u32 + 0, r25.u16);
	// sth r27,2(r29)
	REX_STORE_U16(r29.u32 + 2, r27.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82298DE0:
	// sth r26,0(r29)
	REX_STORE_U16(r29.u32 + 0, r26.u16);
	// sth r28,2(r29)
	REX_STORE_U16(r29.u32 + 2, r28.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82298DEC:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// bge 0x82298c54
	if (!ctx.cr0.lt) goto loc_82298C54;
	// b 0x82298e00
	goto loc_82298E00;
loc_82298DFC:
	// li r21,-8
	r21.s64 = -8;
loc_82298E00:
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_82298E08:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_822A15FC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A1C08) {
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
	ctx.lr = 0x822A1C10;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x822a1c34
	if (ctx.cr6.eq) goto loc_822A1C34;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822a1c70
	if (!ctx.cr6.eq) goto loc_822A1C70;
loc_822A1C34:
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x8229d670
	ctx.lr = 0x822A1C3C;
	sub_8229D670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82232580
	ctx.lr = 0x822A1C70;
	sub_82232580(ctx, base);
loc_822A1C70:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x822a1c80
	if (ctx.cr6.eq) goto loc_822A1C80;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x822a1cbc
	if (!ctx.cr6.eq) goto loc_822A1CBC;
loc_822A1C80:
	// lfs f31,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	f31.f64 = double(temp.f32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x8229d670
	ctx.lr = 0x822A1C8C;
	sub_8229D670(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82232580
	ctx.lr = 0x822A1CBC;
	sub_82232580(ctx, base);
loc_822A1CBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A5628) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a5668
	if (ctx.cr6.eq) goto loc_822A5668;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
loc_822A5668:
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a568c
	if (ctx.cr6.eq) goto loc_822A568C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_822A568C:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_822A80A0) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a80f0
	if (ctx.cr6.eq) goto loc_822A80F0;
	// bl 0x822a7b10
	ctx.lr = 0x822A80C8;
	sub_822A7B10(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822A80F0:
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

DEFINE_REX_FUNC(sub_822A99F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// beq cr6,0x822a9a50
	if (ctx.cr6.eq) goto loc_822A9A50;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x822a9a38
	if (ctx.cr6.eq) goto loc_822A9A38;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822a9a6c
	if (!ctx.cr6.eq) goto loc_822A9A6C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1539(r11)
	REX_STORE_U8(ctx.r11.u32 + 1539, ctx.r10.u8);
	// b 0x822a9a6c
	goto loc_822A9A6C;
loc_822A9A38:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1537(r11)
	REX_STORE_U8(ctx.r11.u32 + 1537, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x822a9a68
	goto loc_822A9A68;
loc_822A9A50:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
loc_822A9A68:
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822A9A6C:
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// bl 0x821f3f40
	ctx.lr = 0x822A9A80;
	sub_821F3F40(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,944(r11)
	REX_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_822AB128) {
	REX_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b9f08
	sub_822B9F08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AB5E0) {
	REX_FUNC_PROLOGUE();
	// lbz r10,257(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 257);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,257(r3)
	REX_STORE_U8(ctx.r3.u32 + 257, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC220) {
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
	ctx.lr = 0x822AC228;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// li r28,0
	r28.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ac28c
	if (ctx.cr0.eq) goto loc_822AC28C;
	// li r30,0
	r30.s64 = 0;
loc_822AC250:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r29,r30,r11
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x822d9950
	ctx.lr = 0x822AC264;
	sub_822D9950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ac298
	if (ctx.cr0.eq) goto loc_822AC298;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ac250
	if (ctx.cr6.lt) goto loc_822AC250;
loc_822AC28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AC290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822AC298:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822ac290
	goto loc_822AC290;
}

DEFINE_REX_FUNC(sub_822AE238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822AE240;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,32
	r29.s64 = ctx.r3.s64 + 32;
	// b 0x822ae278
	goto loc_822AE278;
loc_822AE254:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ae274
	if (ctx.cr6.eq) goto loc_822AE274;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AE274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE274:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE278:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae254
	if (!ctx.cr6.eq) goto loc_822AE254;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE298;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B0710) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b073c
	if (ctx.cr6.eq) goto loc_822B073C;
	// bl 0x822c80a8
	ctx.lr = 0x822B073C;
	sub_822C80A8(ctx, base);
loc_822B073C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// beq 0x822b075c
	if (ctx.cr0.eq) goto loc_822B075C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B075C;
	sub_822C80A8(ctx, base);
loc_822B075C:
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

DEFINE_REX_FUNC(sub_822B25C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B2880) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b28e4
	if (ctx.cr0.eq) goto loc_822B28E4;
loc_822B28B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ac210
	ctx.lr = 0x822B28BC;
	sub_822AC210(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x822b2900
	if (ctx.cr6.eq) goto loc_822B2900;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b28b4
	if (ctx.cr6.lt) goto loc_822B28B4;
loc_822B28E4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822B28E8:
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
loc_822B2900:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822b28e8
	goto loc_822B28E8;
}

DEFINE_REX_FUNC(sub_822B66D0) {
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
	ctx.lr = 0x822B66D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// addze. r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x822b672c
	if (!ctx.cr0.gt) goto loc_822B672C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822B6700:
	// lwzu r11,-4(r29)
	ea = -4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5d40
	ctx.lr = 0x822B6724;
	sub_822B5D40(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822b6700
	if (ctx.cr6.gt) goto loc_822B6700;
loc_822B672C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822B8BF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bne cr6,0x822b8c40
	if (!ctx.cr6.eq) goto loc_822B8C40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B8C18:
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stb r8,72(r9)
	REX_STORE_U8(ctx.r9.u32 + 72, ctx.r8.u8);
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822b8c18
	if (ctx.cr6.lt) goto loc_822B8C18;
	// blr 
	return;
loc_822B8C40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B8C4C:
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stb r8,72(r9)
	REX_STORE_U8(ctx.r9.u32 + 72, ctx.r8.u8);
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822b8c4c
	if (ctx.cr6.lt) goto loc_822B8C4C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B9A48;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b9ab0
	if (ctx.cr6.eq) goto loc_822B9AB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822c5ac0
	ctx.lr = 0x822B9A68;
	sub_822C5AC0(ctx, base);
	// lhz r4,80(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 80);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + r31.u64;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// srad r10,r8,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r10.s64 = ctx.r8.s64 >> temp.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// srd r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82226380
	ctx.lr = 0x822B9AB0;
	sub_82226380(ctx, base);
loc_822B9AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822BAA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BAA88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x822d6450
	ctx.lr = 0x822BAAA8;
	sub_822D6450(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// bl 0x822b8668
	ctx.lr = 0x822BAAF4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bab18
	if (ctx.cr0.eq) goto loc_822BAB18;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822bab4c
	if (ctx.cr6.lt) goto loc_822BAB4C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822ac2b0
	ctx.lr = 0x822BAB10;
	sub_822AC2B0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// b 0x822bab4c
	goto loc_822BAB4C;
loc_822BAB18:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8668
	ctx.lr = 0x822BAB2C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bab4c
	if (ctx.cr0.eq) goto loc_822BAB4C;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822bab4c
	if (ctx.cr6.lt) goto loc_822BAB4C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822ac180
	ctx.lr = 0x822BAB48;
	sub_822AC180(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_822BAB4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C1EE0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1f30
	if (!ctx.cr6.eq) goto loc_822C1F30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
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
	// b 0x822c2064
	goto loc_822C2064;
loc_822C1F30:
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,408(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f9,436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f8,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,444(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822bbef0
	ctx.lr = 0x822C1FBC;
	sub_822BBEF0(ctx, base);
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f31.f64 = double(temp.f32);
	// fsubs f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 - f31.f64));
	// lfs f30,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f30.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f10,f30
	ctx.f13.f64 = double(float(ctx.f10.f64 - f30.f64));
	// lfs f29,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f29.f64 = double(temp.f32);
	// fsubs f12,f9,f29
	ctx.f12.f64 = double(float(ctx.f9.f64 - f29.f64));
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
	// fnmsubs f0,f7,f7,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f7.f64, -ctx.f0.f64)));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x822c2028
	if (!ctx.cr6.lt) goto loc_822C2028;
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
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
	// b 0x822c2068
	goto loc_822C2068;
loc_822C2028:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f4c50
	ctx.lr = 0x822C2034;
	sub_821F4C50(ctx, base);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_822C2064:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_822C2068:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_822C9148) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C9598;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8256);
	// addi r30,r3,8256
	r30.s64 = ctx.r3.s64 + 8256;
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
	ctx.lr = 0x822C95BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8208);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lwz r9,8212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8212);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822c95d8
	if (!ctx.cr6.eq) goto loc_822C95D8;
	// li r31,0
	r31.s64 = 0;
	// b 0x822c95fc
	goto loc_822C95FC;
loc_822C95D8:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,1
	r31.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r9,8200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8200);
	// lwz r10,8192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,8192(r11)
	REX_STORE_U32(ctx.r11.u32 + 8192, ctx.r10.u32);
loc_822C95FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CB068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cb080
	if (!ctx.cr6.eq) goto loc_822CB080;
	// stw r11,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822CB080:
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822cb090
	if (!ctx.cr6.eq) goto loc_822CB090;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822CB090:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x822cb0a0
	if (!ctx.cr6.eq) goto loc_822CB0A0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822CB0A0:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// beq 0x822cb0bc
	if (ctx.cr0.eq) goto loc_822CB0BC;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cb0bc
	if (ctx.cr0.eq) goto loc_822CB0BC;
	// stw r10,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
loc_822CB0BC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r9,284(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r8,288(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x822cb104
	if (!ctx.cr6.eq) goto loc_822CB104;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,264(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r8,268(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
loc_822CB104:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822cb11c
	if (!ctx.cr6.eq) goto loc_822CB11C;
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,276(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
loc_822CB11C:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 280);
	// lbz r10,281(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 281);
	// lbz r9,282(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 282);
	// lbz r8,283(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 283);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE5C0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce5f4
	if (ctx.cr6.eq) goto loc_822CE5F4;
	// bl 0x82208848
	ctx.lr = 0x822CE5E4;
	sub_82208848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_822CE5F4:
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

DEFINE_REX_FUNC(sub_822CFE30) {
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
	ctx.lr = 0x822CFE38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822cfe60
	if (ctx.cr6.lt) goto loc_822CFE60;
loc_822CFE58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cff28
	goto loc_822CFF28;
loc_822CFE60:
	// lhz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 220);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cfe58
	if (!ctx.cr6.lt) goto loc_822CFE58;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFE84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mulli r30,r30,100
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(100));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// mulli r10,r27,52
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(52));
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r6,216(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// add r5,r30,r9
	ctx.r5.u64 = r30.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ccef8
	ctx.lr = 0x822CFEC4;
	sub_823CCEF8(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cff10
	if (!ctx.cr6.eq) goto loc_822CFF10;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822cff10
	if (!ctx.cr6.gt) goto loc_822CFF10;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x822CFF10;
	sub_822D5870(ctx, base);
loc_822CFF10:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CFF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822CFF28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822D3538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D3540;
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
	// beq 0x822d35a0
	if (ctx.cr0.eq) goto loc_822D35A0;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,148
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(148));
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt 0x822d3588
	if (ctx.cr0.lt) goto loc_822D3588;
loc_822D356C:
	// addi r31,r31,-148
	r31.s64 = r31.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ac0
	ctx.lr = 0x822D3578;
	sub_822D2AC0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c8908
	ctx.lr = 0x822D3580;
	sub_822C8908(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822d356c
	if (!ctx.cr0.lt) goto loc_822D356C;
loc_822D3588:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3598
	if (ctx.cr0.eq) goto loc_822D3598;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D3598;
	sub_822C80A8(ctx, base);
loc_822D3598:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d35c4
	goto loc_822D35C4;
loc_822D35A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ac0
	ctx.lr = 0x822D35A8;
	sub_822D2AC0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c8908
	ctx.lr = 0x822D35B0;
	sub_822C8908(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d35c0
	if (ctx.cr0.eq) goto loc_822D35C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D35C0;
	sub_822C80A8(ctx, base);
loc_822D35C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D35C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__restgprlr_19) {
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

DEFINE_REX_FUNC(__restfpr_26) {
	REX_FUNC_PROLOGUE();
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
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

DEFINE_REX_FUNC(sub_822D6178) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x822dbd80
	sub_822DBD80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6410) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d6228
	sub_822D6228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6830) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822d6670
	sub_822D6670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D6A40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822d6a60
	if (!ctx.cr6.eq) goto loc_822D6A60;
loc_822D6A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d6a7c
	goto loc_822D6A7C;
loc_822D6A60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d6a84
	if (!ctx.cr6.eq) goto loc_822D6A84;
	// bl 0x822db6c0
	ctx.lr = 0x822D6A6C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6A78;
	sub_822D6910(ctx, base);
loc_822D6A78:
	// li r3,22
	ctx.r3.s64 = 22;
loc_822D6A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_822D6A84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822d6aa4
	if (ctx.cr6.eq) goto loc_822D6AA4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822d6aa4
	if (ctx.cr6.lt) goto loc_822D6AA4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D6AA0;
	sub_822D4FA0(ctx, base);
	// b 0x822d6a58
	goto loc_822D6A58;
loc_822D6AA4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822D6AB0;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822d6ad0
	if (!ctx.cr6.eq) goto loc_822D6AD0;
	// bl 0x822db6c0
	ctx.lr = 0x822D6ABC;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D6AC0:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6AC8;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d6a7c
	goto loc_822D6A7C;
loc_822D6AD0:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bge cr6,0x822d6a78
	if (!ctx.cr6.lt) goto loc_822D6A78;
	// bl 0x822db6c0
	ctx.lr = 0x822D6ADC;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d6ac0
	goto loc_822D6AC0;
}

DEFINE_REX_FUNC(__savevmx_67) {
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
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_125) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_822D8F98) {
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
	// addi r11,r11,27080
	ctx.r11.s64 = ctx.r11.s64 + 27080;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822df758
	ctx.lr = 0x822D8FC4;
	sub_822DF758(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8fd4
	if (ctx.cr0.eq) goto loc_822D8FD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D8FD4;
	sub_822C80A8(ctx, base);
loc_822D8FD4:
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

DEFINE_REX_FUNC(sub_822D9950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_822D9958:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr7,r6,0
	ctx.cr7.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf. r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr7,0x822d99a0
	if (ctx.cr7.eq) goto loc_822D99A0;
	// beq 0x822d9958
	if (ctx.cr0.eq) goto loc_822D9958;
	// cmpwi cr5,r6,65
	ctx.cr5.compare<int32_t>(ctx.r6.s32, 65, ctx.xer);
	// cmpwi cr6,r6,90
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 90, ctx.xer);
	// blt cr5,0x822d9984
	if (ctx.cr5.lt) goto loc_822D9984;
	// bgt cr6,0x822d9984
	if (ctx.cr6.gt) goto loc_822D9984;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_822D9984:
	// cmpwi r5,65
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// cmpwi cr1,r5,90
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 90, ctx.xer);
	// blt 0x822d9998
	if (ctx.cr0.lt) goto loc_822D9998;
	// bgt cr1,0x822d9998
	if (ctx.cr1.gt) goto loc_822D9998;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
loc_822D9998:
	// subf. r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d9958
	if (ctx.cr0.eq) goto loc_822D9958;
loc_822D99A0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DB888) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x822db810
	ctx.lr = 0x822DB89C;
	sub_822DB810(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822db8a8
	if (ctx.cr0.eq) goto loc_822DB8A8;
	// bl 0x823ce240
	ctx.lr = 0x822DB8A8;
	sub_823CE240(ctx, base);
loc_822DB8A8:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x822db810
	ctx.lr = 0x822DB8B0;
	sub_822DB810(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822db8bc
	if (ctx.cr0.eq) goto loc_822DB8BC;
	// bl 0x823ce240
	ctx.lr = 0x822DB8BC;
	sub_823CE240(ctx, base);
loc_822DB8BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC9D0) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DD488) {
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
	ctx.lr = 0x822DD490;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// stw r3,1044(r1)
	REX_STORE_U32(ctx.r1.u32 + 1044, ctx.r3.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r4,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, ctx.r4.u32);
	// li r10,350
	ctx.r10.s64 = 350;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r21.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// bne cr6,0x822dd4e4
	if (!ctx.cr6.eq) goto loc_822DD4E4;
	// bl 0x822db6c0
	ctx.lr = 0x822DD4D0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DD4DC;
	sub_822D6910(ctx, base);
loc_822DD4DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822de650
	goto loc_822DE650;
loc_822DD4E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822dd508
	if (!ctx.cr6.eq) goto loc_822DD508;
	// bl 0x822db6c0
	ctx.lr = 0x822DD4F0;
	sub_822DB6C0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_822DD4F4:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DD500;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822de650
	goto loc_822DE650;
loc_822DD508:
	// lhz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r15,r21
	r15.u64 = r21.u64;
	// stb r21,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r21.u8);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822de598
	if (ctx.cr0.eq) goto loc_822DE598;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// addi r10,r10,-2112
	ctx.r10.s64 = ctx.r10.s64 + -2112;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_822DD538:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822de878
	ctx.lr = 0x822DD540;
	sub_822DE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dd5b0
	if (ctx.cr0.eq) goto loc_822DD5B0;
	// lwz r29,1044(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
loc_822DD550:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DD55C;
	sub_822E2160(ctx, base);
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// beq cr6,0x822dd590
	if (ctx.cr6.eq) goto loc_822DD590;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822de878
	ctx.lr = 0x822DD574;
	sub_822DE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dd550
	if (!ctx.cr0.eq) goto loc_822DD550;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// beq cr6,0x822dd590
	if (ctx.cr6.eq) goto loc_822DD590;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e23d8
	ctx.lr = 0x822DD590;
	sub_822E23D8(ctx, base);
loc_822DD590:
	// lwz r31,1052(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
loc_822DD594:
	// li r4,8
	ctx.r4.s64 = 8;
	// lhzu r3,2(r31)
	ea = 2 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// bl 0x822de878
	ctx.lr = 0x822DD5A0;
	sub_822DE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dd594
	if (!ctx.cr0.eq) goto loc_822DD594;
	// stw r31,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, r31.u32);
	// b 0x822de544
	goto loc_822DE544;
loc_822DD5B0:
	// lwz r18,1052(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x822de4f0
	if (!ctx.cr6.eq) goto loc_822DE4F0;
	// lhz r10,2(r18)
	ctx.r10.u64 = REX_LOAD_U16(r18.u32 + 2);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x822de4d4
	if (ctx.cr6.eq) goto loc_822DE4D4;
	// li r26,0
	r26.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r17,0
	r17.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r14,1
	r14.s64 = 1;
	// li r20,0
	r20.s64 = 0;
loc_822DD608:
	// lhzu r31,2(r18)
	ea = 2 + r18.u32;
	r31.u64 = REX_LOAD_U16(ea);
	r18.u32 = ea;
	// rlwinm. r11,r31,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dd638
	if (!ctx.cr0.eq) goto loc_822DD638;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DD61C;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dd638
	if (ctx.cr0.eq) goto loc_822DD638;
	// mulli r11,r26,10
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r26,r11,-48
	r26.s64 = ctx.r11.s64 + -48;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD638:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(r31.s32, 78, ctx.xer);
	// bgt cr6,0x822dd6fc
	if (ctx.cr6.gt) goto loc_822DD6FC;
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(r31.s32, 42, ctx.xer);
	// beq cr6,0x822dd6ec
	if (ctx.cr6.eq) goto loc_822DD6EC;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(r31.s32, 70, ctx.xer);
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(r31.s32, 73, ctx.xer);
	// beq cr6,0x822dd670
	if (ctx.cr6.eq) goto loc_822DD670;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(r31.s32, 76, ctx.xer);
	// bne cr6,0x822dd714
	if (!ctx.cr6.eq) goto loc_822DD714;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822dd764
	goto loc_822DD764;
loc_822DD670:
	// lhz r10,2(r18)
	ctx.r10.u64 = REX_LOAD_U16(r18.u32 + 2);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x822dd6a0
	if (!ctx.cr6.eq) goto loc_822DD6A0;
	// lhz r9,4(r18)
	ctx.r9.u64 = REX_LOAD_U16(r18.u32 + 4);
	// addi r11,r18,4
	ctx.r11.s64 = r18.s64 + 4;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x822dd6a0
	if (!ctx.cr6.eq) goto loc_822DD6A0;
loc_822DD68C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD6A0:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x822dd6c0
	if (!ctx.cr6.eq) goto loc_822DD6C0;
	// lhz r9,4(r18)
	ctx.r9.u64 = REX_LOAD_U16(r18.u32 + 4);
	// addi r11,r18,4
	ctx.r11.s64 = r18.s64 + 4;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// bne cr6,0x822dd6c0
	if (!ctx.cr6.eq) goto loc_822DD6C0;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD6C0:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x822dd768
	if (ctx.cr6.eq) goto loc_822DD768;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x822dd714
	if (!ctx.cr6.eq) goto loc_822DD714;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD6EC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD6FC:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(r31.s32, 104, ctx.xer);
	// beq cr6,0x822dd750
	if (ctx.cr6.eq) goto loc_822DD750;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(r31.s32, 108, ctx.xer);
	// beq cr6,0x822dd724
	if (ctx.cr6.eq) goto loc_822DD724;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(r31.s32, 119, ctx.xer);
	// beq cr6,0x822dd740
	if (ctx.cr6.eq) goto loc_822DD740;
loc_822DD714:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD724:
	// lhz r10,2(r18)
	ctx.r10.u64 = REX_LOAD_U16(r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x822dd68c
	if (ctx.cr6.eq) goto loc_822DD68C;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r14,r11
	r14.s64 = ctx.r11.s8;
loc_822DD740:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// b 0x822dd768
	goto loc_822DD768;
loc_822DD750:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_822DD764:
	// extsb r14,r11
	r14.s64 = ctx.r11.s8;
loc_822DD768:
	// extsb. r11,r30
	ctx.r11.s64 = r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dd608
	if (ctx.cr0.eq) goto loc_822DD608;
	// extsb. r11,r29
	ctx.r11.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r18,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, r18.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x822dd7a4
	if (!ctx.cr0.eq) goto loc_822DD7A4;
	// lwz r11,1068(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x822dd7a8
	goto loc_822DD7A8;
loc_822DD7A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DD7A8:
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// bne 0x822dd7d4
	if (!ctx.cr0.eq) goto loc_822DD7D4;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x822dd7d0
	if (ctx.cr6.eq) goto loc_822DD7D0;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,1
	r28.s64 = 1;
	// bne cr6,0x822dd7d4
	if (!ctx.cr6.eq) goto loc_822DD7D4;
loc_822DD7D0:
	// li r28,-1
	r28.s64 = -1;
loc_822DD7D4:
	// lwz r9,1052(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// ori r18,r11,32
	r18.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r18,110
	ctx.cr6.compare<int32_t>(r18.s32, 110, ctx.xer);
	// beq cr6,0x822dd84c
	if (ctx.cr6.eq) goto loc_822DD84C;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x822dd82c
	if (ctx.cr6.eq) goto loc_822DD82C;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// beq cr6,0x822dd82c
	if (ctx.cr6.eq) goto loc_822DD82C;
loc_822DD7F8:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DD804;
	sub_822E2160(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822dd824
	if (ctx.cr6.eq) goto loc_822DD824;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822de878
	ctx.lr = 0x822DD81C;
	sub_822DE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dd7f8
	if (!ctx.cr0.eq) goto loc_822DD7F8;
loc_822DD824:
	// mr r21,r31
	r21.u64 = r31.u64;
	// b 0x822dd83c
	goto loc_822DD83C;
loc_822DD82C:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DD838;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_822DD83C:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// lwz r9,1052(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
loc_822DD84C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822dd860
	if (ctx.cr6.eq) goto loc_822DD860;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822de558
	if (ctx.cr6.eq) goto loc_822DE558;
loc_822DD860:
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822dd8d0
	if (!ctx.cr6.eq) goto loc_822DD8D0;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x822dd884
	if (ctx.cr6.eq) goto loc_822DD884;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(r18.s32, 115, ctx.xer);
	// beq cr6,0x822dd884
	if (ctx.cr6.eq) goto loc_822DD884;
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x822dd8d0
	if (!ctx.cr6.eq) goto loc_822DD8D0;
loc_822DD884:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r25,-4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// bge cr6,0x822dd8d4
	if (!ctx.cr6.lt) goto loc_822DD8D4;
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822de5c0
	if (!ctx.cr0.gt) goto loc_822DE5C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// b 0x822de5c8
	goto loc_822DE5C8;
loc_822DD8D0:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822DD8D4:
	// addi r11,r18,-99
	ctx.r11.s64 = r18.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x822de48c
	if (ctx.cr6.gt) goto loc_822DE48C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,30992
	ctx.r12.s64 = ctx.r12.s64 + 30992;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// addi r12,r12,-9976
	ctx.r12.s64 = ctx.r12.s64 + -9976;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DD908;
	case 1:
		goto loc_822DDD6C;
	case 2:
		goto loc_822DE0A8;
	case 3:
		goto loc_822DE0A8;
	case 4:
		goto loc_822DE0A8;
	case 5:
		goto loc_822DE48C;
	case 6:
		goto loc_822DDC48;
	case 7:
		goto loc_822DE48C;
	case 8:
		goto loc_822DE48C;
	case 9:
		goto loc_822DE48C;
	case 10:
		goto loc_822DE48C;
	case 11:
		goto loc_822DE05C;
	case 12:
		goto loc_822DDD6C;
	case 13:
		goto loc_822DDD68;
	case 14:
		goto loc_822DE48C;
	case 15:
		goto loc_822DE48C;
	case 16:
		goto loc_822DD920;
	case 17:
		goto loc_822DE48C;
	case 18:
		goto loc_822DDD6C;
	case 19:
		goto loc_822DE48C;
	case 20:
		goto loc_822DE48C;
	case 21:
		goto loc_822DDC4C;
	case 22:
		goto loc_822DE48C;
	case 23:
		goto loc_822DE48C;
	case 24:
		goto loc_822DD930;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822DD908:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x822dd920
	if (!ctx.cr6.eq) goto loc_822DD920;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r16,1
	r16.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822DD920:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822ddab0
	if (!ctx.cr0.gt) goto loc_822DDAB0;
	// li r23,1
	r23.s64 = 1;
	// b 0x822ddab0
	goto loc_822DDAB0;
loc_822DD930:
	// extsb. r11,r28
	ctx.r11.s64 = r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,1
	r29.s64 = 1;
	// ble 0x822dd940
	if (!ctx.cr0.gt) goto loc_822DD940;
	// mr r23,r29
	r23.u64 = r29.u64;
loc_822DD940:
	// addi r31,r9,2
	r31.s64 = ctx.r9.s64 + 2;
	// stw r31,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x822dd95c
	if (!ctx.cr6.eq) goto loc_822DD95C;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// li r24,-1
	r24.s64 = -1;
loc_822DD95C:
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822dd988
	if (!ctx.cr6.eq) goto loc_822DD988;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x822d9828
	ctx.lr = 0x822DD970;
	sub_822D9828(ctx, base);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// li r29,1
	r29.s64 = 1;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
loc_822DD988:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x822DD998;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x822dda84
	if (!ctx.cr6.eq) goto loc_822DDA84;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822dda84
	if (!ctx.cr6.eq) goto loc_822DDA84;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// stb r11,11(r30)
	REX_STORE_U8(r30.u32 + 11, ctx.r11.u8);
	// b 0x822dda84
	goto loc_822DDA84;
loc_822DD9C0:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplwi cr6,r9,45
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 45, ctx.xer);
	// bne cr6,0x822dda68
	if (!ctx.cr6.eq) goto loc_822DDA68;
	// clrlwi. r8,r27,16
	ctx.r8.u64 = r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822dda68
	if (ctx.cr0.eq) goto loc_822DDA68;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x822dda68
	if (ctx.cr6.eq) goto loc_822DDA68;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822dd9fc
	if (!ctx.cr6.lt) goto loc_822DD9FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822dda04
	goto loc_822DDA04;
loc_822DD9FC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_822DDA04:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dda44
	if (!ctx.cr6.lt) goto loc_822DDA44;
loc_822DDA14:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r7,r9,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stbx r8,r9,r30
	REX_STORE_U8(ctx.r9.u32 + r30.u32, ctx.r8.u8);
	// blt cr6,0x822dda14
	if (ctx.cr6.lt) goto loc_822DDA14;
loc_822DDA44:
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// li r27,0
	r27.s64 = 0;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
	// b 0x822dda84
	goto loc_822DDA84;
loc_822DDA68:
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// slw r11,r29,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stbx r11,r10,r30
	REX_STORE_U8(ctx.r10.u32 + r30.u32, ctx.r11.u8);
loc_822DDA84:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822dd9c0
	if (!ctx.cr6.eq) goto loc_822DD9C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bne cr6,0x822ddab0
	if (!ctx.cr6.eq) goto loc_822DDAB0;
	// stw r31,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, r31.u32);
loc_822DDAB0:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// lwz r26,1044(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822ddad4
	if (ctx.cr6.eq) goto loc_822DDAD4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822e23d8
	ctx.lr = 0x822DDAD4;
	sub_822E23D8(ctx, base);
loc_822DDAD4:
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x822ddae0
	if (ctx.cr6.eq) goto loc_822DDAE0;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_822DDAE0:
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r28,0
	r28.s64 = 0;
loc_822DDAE8:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822ddb04
	if (ctx.cr6.eq) goto loc_822DDB04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x822ddbfc
	if (ctx.cr6.eq) goto loc_822DDBFC;
loc_822DDB04:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDB10;
	sub_822E2160(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822ddbe4
	if (ctx.cr6.eq) goto loc_822DDBE4;
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// beq cr6,0x822ddb78
	if (ctx.cr6.eq) goto loc_822DDB78;
	// cmpwi cr6,r18,115
	ctx.cr6.compare<int32_t>(r18.s32, 115, ctx.xer);
	// bne cr6,0x822ddb48
	if (!ctx.cr6.eq) goto loc_822DDB48;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x822ddb40
	if (ctx.cr6.lt) goto loc_822DDB40;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x822ddbe4
	if (!ctx.cr6.gt) goto loc_822DDBE4;
loc_822DDB40:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822ddb78
	if (!ctx.cr6.eq) goto loc_822DDB78;
loc_822DDB48:
	// cmpwi cr6,r18,123
	ctx.cr6.compare<int32_t>(r18.s32, 123, ctx.xer);
	// bne cr6,0x822ddbe4
	if (!ctx.cr6.eq) goto loc_822DDBE4;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// extsb r8,r24
	ctx.r8.s64 = r24.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ddbe4
	if (ctx.cr0.eq) goto loc_822DDBE4;
loc_822DDB78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822ddbdc
	if (!ctx.cr6.eq) goto loc_822DDBDC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822de5d8
	if (ctx.cr6.eq) goto loc_822DE5D8;
	// extsb. r11,r23
	ctx.r11.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddba0
	if (ctx.cr0.eq) goto loc_822DDBA0;
	// sth r21,0(r30)
	REX_STORE_U16(r30.u32 + 0, r21.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// b 0x822ddbd4
	goto loc_822DDBD4;
loc_822DDBA0:
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x822e17d8
	ctx.lr = 0x822DDBB8;
	sub_822E17D8(ctx, base);
	// cmpwi cr6,r3,34
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 34, ctx.xer);
	// beq cr6,0x822de5d8
	if (ctx.cr6.eq) goto loc_822DE5D8;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ddae8
	if (!ctx.cr6.gt) goto loc_822DDAE8;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// subf r25,r11,r25
	r25.u64 = r25.u64 - ctx.r11.u64;
loc_822DDBD4:
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x822ddae8
	goto loc_822DDAE8;
loc_822DDBDC:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x822ddae8
	goto loc_822DDAE8;
loc_822DDBE4:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822ddbfc
	if (ctx.cr6.eq) goto loc_822DDBFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e23d8
	ctx.lr = 0x822DDBFC;
	sub_822E23D8(ctx, base);
loc_822DDBFC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de4b8
	if (!ctx.cr6.eq) goto loc_822DE4B8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r18,99
	ctx.cr6.compare<int32_t>(r18.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x822de4b8
	if (ctx.cr6.eq) goto loc_822DE4B8;
	// extsb. r11,r23
	ctx.r11.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x822ddc3c
	if (ctx.cr0.eq) goto loc_822DDC3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DDC3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DDC48:
	// li r18,100
	r18.s64 = 100;
loc_822DDC4C:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822ddc60
	if (!ctx.cr6.eq) goto loc_822DDC60;
	// li r19,1
	r19.s64 = 1;
	// b 0x822ddc68
	goto loc_822DDC68;
loc_822DDC60:
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x822ddc84
	if (!ctx.cr6.eq) goto loc_822DDC84;
loc_822DDC68:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822ddcf0
	if (!ctx.cr0.eq) goto loc_822DDCF0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822ddcf0
	if (ctx.cr6.eq) goto loc_822DDCF0;
	// li r26,1
	r26.s64 = 1;
loc_822DDC84:
	// lwz r31,1044(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
loc_822DDC88:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x822dddb8
	if (!ctx.cr6.eq) goto loc_822DDDB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDCA0;
	sub_822E2160(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x822ddd28
	if (ctx.cr6.eq) goto loc_822DDD28;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x822ddd28
	if (ctx.cr6.eq) goto loc_822DDD28;
	// li r17,1
	r17.s64 = 1;
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x822ddd08
	if (ctx.cr6.eq) goto loc_822DDD08;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822ddce8
	if (ctx.cr6.eq) goto loc_822DDCE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822ddce8
	if (!ctx.cr0.eq) goto loc_822DDCE8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
loc_822DDCE8:
	// li r18,111
	r18.s64 = 111;
	// b 0x822dddb8
	goto loc_822DDDB8;
loc_822DDCF0:
	// lwz r31,1044(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e2160
	ctx.lr = 0x822DDD00;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x822ddc88
	goto loc_822DDC88;
loc_822DDD08:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822ddd20
	if (ctx.cr6.eq) goto loc_822DDD20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e23d8
	ctx.lr = 0x822DDD20;
	sub_822E23D8(ctx, base);
loc_822DDD20:
	// li r21,48
	r21.s64 = 48;
	// b 0x822dddb8
	goto loc_822DDDB8;
loc_822DDD28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDD34;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822ddd60
	if (ctx.cr6.eq) goto loc_822DDD60;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822ddd60
	if (!ctx.cr6.lt) goto loc_822DDD60;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
loc_822DDD60:
	// li r18,120
	r18.s64 = 120;
	// b 0x822dddb8
	goto loc_822DDDB8;
loc_822DDD68:
	// li r14,1
	r14.s64 = 1;
loc_822DDD6C:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822ddd80
	if (!ctx.cr6.eq) goto loc_822DDD80;
	// li r19,1
	r19.s64 = 1;
	// b 0x822ddd88
	goto loc_822DDD88;
loc_822DDD80:
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x822dddb8
	if (!ctx.cr6.eq) goto loc_822DDDB8;
loc_822DDD88:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822ddda8
	if (!ctx.cr0.eq) goto loc_822DDDA8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822ddda8
	if (ctx.cr6.eq) goto loc_822DDDA8;
	// li r26,1
	r26.s64 = 1;
	// b 0x822dddb8
	goto loc_822DDDB8;
loc_822DDDA8:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDDB4;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_822DDDB8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// extsb. r29,r26
	r29.s64 = r26.s8;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822ddf0c
	if (ctx.cr6.eq) goto loc_822DDF0C;
	// bne 0x822ddef4
	if (!ctx.cr0.eq) goto loc_822DDEF4;
loc_822DDDC8:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x822dde20
	if (ctx.cr6.eq) goto loc_822DDE20;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(r18.s32, 112, ctx.xer);
	// beq cr6,0x822dde20
	if (ctx.cr6.eq) goto loc_822DDE20;
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r21,16
	r31.u64 = r21.u32 & 0xFFFF;
	// bne 0x822dde74
	if (!ctx.cr0.eq) goto loc_822DDE74;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DDDEC;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dde74
	if (ctx.cr0.eq) goto loc_822DDE74;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(r18.s32, 111, ctx.xer);
	// bne cr6,0x822dde14
	if (!ctx.cr6.eq) goto loc_822DDE14;
	// cmplwi cr6,r31,56
	ctx.cr6.compare<uint32_t>(r31.u32, 56, ctx.xer);
	// bge cr6,0x822dde74
	if (!ctx.cr6.lt) goto loc_822DDE74;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_822DDE0C:
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x822dde7c
	goto loc_822DDE7C;
loc_822DDE14:
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// b 0x822dde0c
	goto loc_822DDE0C;
loc_822DDE20:
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r21,16
	r31.u64 = r21.u32 & 0xFFFF;
	// bne 0x822dde74
	if (!ctx.cr0.eq) goto loc_822DDE74;
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dca98
	ctx.lr = 0x822DDE38;
	sub_822DCA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dde74
	if (ctx.cr0.eq) goto loc_822DDE74;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x822dca78
	ctx.lr = 0x822DDE54;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dde64
	if (ctx.cr0.eq) goto loc_822DDE64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822dde6c
	goto loc_822DDE6C;
loc_822DDE64:
	// rlwinm r11,r31,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
loc_822DDE6C:
	// clrlwi r21,r11,16
	r21.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822dde7c
	goto loc_822DDE7C;
loc_822DDE74:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
loc_822DDE7C:
	// extsb. r11,r26
	ctx.r11.s64 = r26.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// bne 0x822dded4
	if (!ctx.cr0.eq) goto loc_822DDED4;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x822ddec0
	if (ctx.cr6.eq) goto loc_822DDEC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822ddec0
	if (!ctx.cr0.eq) goto loc_822DDEC0;
	// li r26,1
	r26.s64 = 1;
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDEC0:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDECC;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x822ddeec
	goto loc_822DDEEC;
loc_822DDED4:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822ddeec
	if (ctx.cr6.eq) goto loc_822DDEEC;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,1044(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// bl 0x822e23d8
	ctx.lr = 0x822DDEEC;
	sub_822E23D8(ctx, base);
loc_822DDEEC:
	// extsb. r29,r26
	r29.s64 = r26.s8;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822dddc8
	if (ctx.cr0.eq) goto loc_822DDDC8;
loc_822DDEF4:
	// extsb. r11,r19
	ctx.r11.s64 = r19.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de028
	if (ctx.cr0.eq) goto loc_822DE028;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x822de028
	goto loc_822DE028;
loc_822DDF0C:
	// bne 0x822de01c
	if (!ctx.cr0.eq) goto loc_822DE01C;
loc_822DDF10:
	// cmpwi cr6,r18,120
	ctx.cr6.compare<int32_t>(r18.s32, 120, ctx.xer);
	// beq cr6,0x822ddf5c
	if (ctx.cr6.eq) goto loc_822DDF5C;
	// cmpwi cr6,r18,112
	ctx.cr6.compare<int32_t>(r18.s32, 112, ctx.xer);
	// beq cr6,0x822ddf5c
	if (ctx.cr6.eq) goto loc_822DDF5C;
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r21,16
	r31.u64 = r21.u32 & 0xFFFF;
	// bne 0x822ddfa8
	if (!ctx.cr0.eq) goto loc_822DDFA8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DDF34;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ddfa8
	if (ctx.cr0.eq) goto loc_822DDFA8;
	// cmpwi cr6,r18,111
	ctx.cr6.compare<int32_t>(r18.s32, 111, ctx.xer);
	// bne cr6,0x822ddf54
	if (!ctx.cr6.eq) goto loc_822DDF54;
	// cmplwi cr6,r31,56
	ctx.cr6.compare<uint32_t>(r31.u32, 56, ctx.xer);
	// bge cr6,0x822ddfa8
	if (!ctx.cr6.lt) goto loc_822DDFA8;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x822ddfb0
	goto loc_822DDFB0;
loc_822DDF54:
	// mulli r22,r22,10
	r22.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(10));
	// b 0x822ddfb0
	goto loc_822DDFB0;
loc_822DDF5C:
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r21,16
	r31.u64 = r21.u32 & 0xFFFF;
	// bne 0x822ddfa8
	if (!ctx.cr0.eq) goto loc_822DDFA8;
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dca98
	ctx.lr = 0x822DDF74;
	sub_822DCA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ddfa8
	if (ctx.cr0.eq) goto loc_822DDFA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r22,4,0,27
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822dca78
	ctx.lr = 0x822DDF88;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ddf98
	if (ctx.cr0.eq) goto loc_822DDF98;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x822ddfa0
	goto loc_822DDFA0;
loc_822DDF98:
	// rlwinm r11,r31,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
loc_822DDFA0:
	// clrlwi r21,r11,16
	r21.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822ddfb0
	goto loc_822DDFB0;
loc_822DDFA8:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
loc_822DDFB0:
	// extsb. r11,r26
	ctx.r11.s64 = r26.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// bne 0x822ddffc
	if (!ctx.cr0.eq) goto loc_822DDFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// addi r22,r11,-48
	r22.s64 = ctx.r11.s64 + -48;
	// beq cr6,0x822ddfe8
	if (ctx.cr6.eq) goto loc_822DDFE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x822ddfe8
	if (!ctx.cr0.eq) goto loc_822DDFE8;
	// li r26,1
	r26.s64 = 1;
	// b 0x822de014
	goto loc_822DE014;
loc_822DDFE8:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DDFF4;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x822de014
	goto loc_822DE014;
loc_822DDFFC:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822de014
	if (ctx.cr6.eq) goto loc_822DE014;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,1044(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// bl 0x822e23d8
	ctx.lr = 0x822DE014;
	sub_822E23D8(ctx, base);
loc_822DE014:
	// extsb. r29,r26
	r29.s64 = r26.s8;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ddf10
	if (ctx.cr0.eq) goto loc_822DDF10;
loc_822DE01C:
	// extsb. r11,r19
	ctx.r11.s64 = r19.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de028
	if (ctx.cr0.eq) goto loc_822DE028;
	// neg r22,r22
	r22.s64 = static_cast<int64_t>(-r22.u64);
loc_822DE028:
	// addi r11,r18,-70
	ctx.r11.s64 = r18.s64 + -70;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de4b8
	if (!ctx.cr6.eq) goto loc_822DE4B8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x822de074
	goto loc_822DE074;
loc_822DE05C:
	// mr r22,r15
	r22.u64 = r15.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822de4b8
	if (!ctx.cr6.eq) goto loc_822DE4B8;
	// bl 0x822d6e70
	ctx.lr = 0x822DE06C;
	sub_822D6E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de4b8
	if (ctx.cr0.eq) goto loc_822DE4B8;
loc_822DE074:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x822de08c
	if (ctx.cr6.eq) goto loc_822DE08C;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DE08C:
	// extsb. r11,r14
	ctx.r11.s64 = r14.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x822de0a0
	if (ctx.cr0.eq) goto loc_822DE0A0;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DE0A0:
	// sth r22,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r22.u16);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DE0A8:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822de0cc
	if (!ctx.cr6.eq) goto loc_822DE0CC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r31,1
	r31.s64 = 1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x822de0d4
	goto loc_822DE0D4;
loc_822DE0CC:
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x822de0f0
	if (!ctx.cr6.eq) goto loc_822DE0F0;
loc_822DE0D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e2160
	ctx.lr = 0x822DE0EC;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_822DE0F0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x822de100
	if (!ctx.cr6.eq) goto loc_822DE100;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822DE100:
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,1044(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// clrlwi r29,r21,16
	r29.u64 = r21.u32 & 0xFFFF;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x822de18c
	if (!ctx.cr0.eq) goto loc_822DE18C;
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_822DE11C:
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DE124;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de18c
	if (ctx.cr0.eq) goto loc_822DE18C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// beq cr6,0x822de18c
	if (ctx.cr6.eq) goto loc_822DE18C;
	// extsb r11,r21
	ctx.r11.s64 = r21.s8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sthx r11,r30,r27
	REX_STORE_U16(r30.u32 + r27.u32, ctx.r11.u16);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE164;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE178;
	sub_822E2160(ctx, base);
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// beq 0x822de11c
	if (ctx.cr0.eq) goto loc_822DE11C;
loc_822DE18C:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// extsb r10,r21
	ctx.r10.s64 = r21.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r30,0(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822de278
	if (!ctx.cr6.eq) goto loc_822DE278;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// beq cr6,0x822de278
	if (ctx.cr6.eq) goto loc_822DE278;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE1C8;
	sub_822E2160(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// sthx r30,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, r30.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE1F0;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r21,16
	r29.u64 = r21.u32 & 0xFFFF;
	// bne 0x822de274
	if (!ctx.cr0.eq) goto loc_822DE274;
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_822DE208:
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DE210;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de274
	if (ctx.cr0.eq) goto loc_822DE274;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// beq cr6,0x822de274
	if (ctx.cr6.eq) goto loc_822DE274;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// sthx r21,r30,r11
	REX_STORE_U16(r30.u32 + ctx.r11.u32, r21.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE250;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE264;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// beq 0x822de208
	if (ctx.cr0.eq) goto loc_822DE208;
loc_822DE274:
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822DE278:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x822de3c8
	if (ctx.cr6.eq) goto loc_822DE3C8;
	// cmplwi cr6,r29,101
	ctx.cr6.compare<uint32_t>(r29.u32, 101, ctx.xer);
	// beq cr6,0x822de290
	if (ctx.cr6.eq) goto loc_822DE290;
	// cmplwi cr6,r29,69
	ctx.cr6.compare<uint32_t>(r29.u32, 69, ctx.xer);
	// bne cr6,0x822de3c8
	if (!ctx.cr6.eq) goto loc_822DE3C8;
loc_822DE290:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// beq cr6,0x822de3c8
	if (ctx.cr6.eq) goto loc_822DE3C8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r10.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE2C4;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE2D8;
	sub_822E2160(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822de320
	if (!ctx.cr6.eq) goto loc_822DE320;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,45
	ctx.r9.s64 = 45;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE314;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// b 0x822de328
	goto loc_822DE328;
loc_822DE320:
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x822de34c
	if (!ctx.cr6.eq) goto loc_822DE34C;
loc_822DE328:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// bne cr6,0x822de33c
	if (!ctx.cr6.eq) goto loc_822DE33C;
	// li r28,0
	r28.s64 = 0;
	// b 0x822de34c
	goto loc_822DE34C;
loc_822DE33C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE348;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_822DE34C:
	// rlwinm. r11,r21,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r21,16
	r29.u64 = r21.u32 & 0xFFFF;
	// bne 0x822de3c8
	if (!ctx.cr0.eq) goto loc_822DE3C8;
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_822DE35C:
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// bl 0x822dca78
	ctx.lr = 0x822DE364;
	sub_822DCA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de3c8
	if (ctx.cr0.eq) goto loc_822DE3C8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// beq cr6,0x822de3c8
	if (ctx.cr6.eq) goto loc_822DE3C8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// sthx r21,r30,r11
	REX_STORE_U16(r30.u32 + ctx.r11.u32, r21.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bl 0x822dd3e0
	ctx.lr = 0x822DE3A4;
	sub_822DD3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE3B8;
	sub_822E2160(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// beq 0x822de35c
	if (ctx.cr0.eq) goto loc_822DE35C;
loc_822DE3C8:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(r29.u32, 65535, ctx.xer);
	// beq cr6,0x822de3e0
	if (ctx.cr6.eq) goto loc_822DE3E0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e23d8
	ctx.lr = 0x822DE3E0;
	sub_822E23D8(ctx, base);
loc_822DE3E0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de4b8
	if (!ctx.cr6.eq) goto loc_822DE4B8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sthx r8,r10,r29
	REX_STORE_U16(ctx.r10.u32 + r29.u32, ctx.r8.u16);
	// bl 0x822d9828
	ctx.lr = 0x822DE424;
	sub_822D9828(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822de570
	if (ctx.cr0.eq) goto loc_822DE570;
	// addi r7,r30,-1
	ctx.r7.s64 = r30.s64 + -1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822e2a58
	ctx.lr = 0x822DE444;
	sub_822E2A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822de45c
	if (ctx.cr0.eq) goto loc_822DE45C;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x822de5fc
	if (ctx.cr6.eq) goto loc_822DE5FC;
	// cmpwi cr6,r3,34
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 34, ctx.xer);
	// beq cr6,0x822de5fc
	if (ctx.cr6.eq) goto loc_822DE5FC;
loc_822DE45C:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// extsb r11,r14
	ctx.r11.s64 = r14.s8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822DE488;
	sub_822D98F0(ctx, base);
	// b 0x822de4b8
	goto loc_822DE4B8;
loc_822DE48C:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822de614
	if (!ctx.cr6.eq) goto loc_822DE614;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bne cr6,0x822de4b8
	if (!ctx.cr6.eq) goto loc_822DE4B8;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r11.u32);
loc_822DE4B8:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r10,1052(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stw r10,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, ctx.r10.u32);
	// b 0x822de518
	goto loc_822DE518;
loc_822DE4D4:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x822de4f0
	if (!ctx.cr6.eq) goto loc_822DE4F0;
	// lhz r10,2(r18)
	ctx.r10.u64 = REX_LOAD_U16(r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x822de4f0
	if (!ctx.cr6.eq) goto loc_822DE4F0;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
loc_822DE4F0:
	// lwz r3,1044(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// bl 0x822e2160
	ctx.lr = 0x822DE4FC;
	sub_822E2160(ctx, base);
	// lhz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U16(r18.u32 + 0);
	// addi r9,r18,2
	ctx.r9.s64 = r18.s64 + 2;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r9,1052(r1)
	REX_STORE_U32(ctx.r1.u32 + 1052, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822de55c
	if (!ctx.cr6.eq) goto loc_822DE55C;
loc_822DE518:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822de544
	if (!ctx.cr6.eq) goto loc_822DE544;
	// lwz r11,1052(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x822de570
	if (!ctx.cr6.eq) goto loc_822DE570;
	// lwz r11,1052(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x822de570
	if (!ctx.cr6.eq) goto loc_822DE570;
loc_822DE544:
	// lwz r11,1052(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822dd538
	if (!ctx.cr0.eq) goto loc_822DD538;
	// b 0x822de570
	goto loc_822DE570;
loc_822DE558:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
loc_822DE55C:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822de570
	if (ctx.cr6.eq) goto loc_822DE570;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,1044(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// bl 0x822e23d8
	ctx.lr = 0x822DE570;
	sub_822E23D8(ctx, base);
loc_822DE570:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822de584
	if (!ctx.cr6.eq) goto loc_822DE584;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822d98f0
	ctx.lr = 0x822DE584;
	sub_822D98F0(ctx, base);
loc_822DE584:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822de598
	if (!ctx.cr6.eq) goto loc_822DE598;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822d98f0
	ctx.lr = 0x822DE598;
	sub_822D98F0(ctx, base);
loc_822DE598:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x822de634
	if (!ctx.cr6.eq) goto loc_822DE634;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de650
	if (!ctx.cr6.eq) goto loc_822DE650;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822de650
	if (!ctx.cr0.eq) goto loc_822DE650;
	// b 0x822dd4dc
	goto loc_822DD4DC;
loc_822DE5C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
loc_822DE5C8:
	// bl 0x822db6c0
	ctx.lr = 0x822DE5CC;
	sub_822DB6C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822de570
	goto loc_822DE570;
loc_822DE5D8:
	// bl 0x822db6c0
	ctx.lr = 0x822DE5DC;
	sub_822DB6C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// extsb. r10,r23
	ctx.r10.s64 = r23.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822de5f4
	if (ctx.cr0.eq) goto loc_822DE5F4;
	// sth r28,0(r31)
	REX_STORE_U16(r31.u32 + 0, r28.u16);
	// b 0x822de570
	goto loc_822DE570;
loc_822DE5F4:
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// b 0x822de570
	goto loc_822DE570;
loc_822DE5FC:
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
	ctx.lr = 0x822DE614;
	sub_822D69E8(ctx, base);
loc_822DE614:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822de628
	if (ctx.cr6.eq) goto loc_822DE628;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,1044(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// bl 0x822e23d8
	ctx.lr = 0x822DE628;
	sub_822E23D8(ctx, base);
loc_822DE628:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x822de570
	goto loc_822DE570;
loc_822DE634:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822de64c
	if (!ctx.cr6.eq) goto loc_822DE64C;
	// bl 0x822db6c0
	ctx.lr = 0x822DE644;
	sub_822DB6C0(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x822dd4f4
	goto loc_822DD4F4;
loc_822DE64C:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_822DE650:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8233B340) {
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
	ctx.lr = 0x8233B348;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4012);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b4e0
	if (ctx.cr6.eq) goto loc_8233B4E0;
	// lwz r11,3012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3012);
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r6,3392(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r11,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3016(r3)
	REX_STORE_U32(ctx.r3.u32 + 3016, ctx.r7.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3020(r3)
	REX_STORE_U32(ctx.r3.u32 + 3020, ctx.r8.u32);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3024(r3)
	REX_STORE_U32(ctx.r3.u32 + 3024, ctx.r7.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3028(r3)
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r8.u32);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r7,3032(r3)
	REX_STORE_U32(ctx.r3.u32 + 3032, ctx.r7.u32);
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r6,3036(r3)
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r6.u32);
	// stw r8,3040(r3)
	REX_STORE_U32(ctx.r3.u32 + 3040, ctx.r8.u32);
	// bne cr6,0x8233b404
	if (!ctx.cr6.eq) goto loc_8233B404;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3044(r3)
	REX_STORE_U32(ctx.r3.u32 + 3044, ctx.r8.u32);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3048(r3)
	REX_STORE_U32(ctx.r3.u32 + 3048, ctx.r7.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,3052(r3)
	REX_STORE_U32(ctx.r3.u32 + 3052, ctx.r8.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3056(r3)
	REX_STORE_U32(ctx.r3.u32 + 3056, ctx.r7.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3060(r3)
	REX_STORE_U32(ctx.r3.u32 + 3060, ctx.r9.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3064(r3)
	REX_STORE_U32(ctx.r3.u32 + 3064, ctx.r8.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3068(r3)
	REX_STORE_U32(ctx.r3.u32 + 3068, ctx.r9.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,3072(r3)
	REX_STORE_U32(ctx.r3.u32 + 3072, ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,3076(r3)
	REX_STORE_U32(ctx.r3.u32 + 3076, ctx.r9.u32);
	// stw r11,3080(r3)
	REX_STORE_U32(ctx.r3.u32 + 3080, ctx.r11.u32);
loc_8233B404:
	// lwz r11,15304(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15304);
	// lwz r9,15248(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15248);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r8,3980(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 3980);
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r6,r7,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r9,288
	ctx.r11.s64 = ctx.r9.s64 + 288;
	// stw r9,15308(r10)
	REX_STORE_U32(ctx.r10.u32 + 15308, ctx.r9.u32);
	// stw r6,15252(r10)
	REX_STORE_U32(ctx.r10.u32 + 15252, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r11,288
	ctx.r9.s64 = ctx.r11.s64 + 288;
	// stw r11,15312(r10)
	REX_STORE_U32(ctx.r10.u32 + 15312, ctx.r11.u32);
	// addi r11,r9,96
	ctx.r11.s64 = ctx.r9.s64 + 96;
	// stw r9,15316(r10)
	REX_STORE_U32(ctx.r10.u32 + 15316, ctx.r9.u32);
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// stw r11,15320(r10)
	REX_STORE_U32(ctx.r10.u32 + 15320, ctx.r11.u32);
	// lwz r11,144(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// addi r4,r9,96
	ctx.r4.s64 = ctx.r9.s64 + 96;
	// stw r9,15324(r10)
	REX_STORE_U32(ctx.r10.u32 + 15324, ctx.r9.u32);
	// stw r4,15328(r10)
	REX_STORE_U32(ctx.r10.u32 + 15328, ctx.r4.u32);
	// beq cr6,0x8233b480
	if (ctx.cr6.eq) goto loc_8233B480;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,464(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// rlwinm r7,r11,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r4.u32);
	// b 0x8233b498
	goto loc_8233B498;
loc_8233B480:
	// lwz r9,464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r8.u32);
loc_8233B498:
	// lwz r8,140(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r9,15272(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15272);
	// lwz r7,15332(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 15332);
	// mullw r3,r8,r5
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lwz r6,15340(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 15340);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,15348(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 15348);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,15276(r10)
	REX_STORE_U32(ctx.r10.u32 + 15276, ctx.r4.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,15344(r10)
	REX_STORE_U32(ctx.r10.u32 + 15344, ctx.r6.u32);
	// stw r5,15336(r10)
	REX_STORE_U32(ctx.r10.u32 + 15336, ctx.r5.u32);
	// stw r4,15352(r10)
	REX_STORE_U32(ctx.r10.u32 + 15352, ctx.r4.u32);
loc_8233B4E0:
	// lwz r31,140(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,136(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233b5a0
	if (ctx.cr6.eq) goto loc_8233B5A0;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8233B508:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233b594
	if (ctx.cr6.eq) goto loc_8233B594;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
loc_8233B528:
	// lwz r8,140(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// cntlzw r30,r11
	r30.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,136(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// addi r27,r8,-1
	r27.s64 = ctx.r8.s64 + -1;
	// lwz r8,272(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r27,r6,r27
	r27.u64 = r27.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r27,r27
	r27.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r30,r30,27,31,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r27,r27,28,30,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 28) & 0x2;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r7,r27,r7
	ctx.r7.u64 = r27.u64 | ctx.r7.u64;
	// or r30,r30,r5
	r30.u64 = r30.u64 | ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r30,r30,28
	r30.u64 = r30.u32 & 0xF;
	// lwz r27,0(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | r30.u64;
	// rlwinm r30,r27,0,20,15
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rlwinm r7,r7,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | r30.u64;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// bdnz 0x8233b528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233B528;
loc_8233B594:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// blt cr6,0x8233b508
	if (ctx.cr6.lt) goto loc_8233B508;
loc_8233B5A0:
	// lwz r11,276(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stb r29,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, r29.u8);
	// lwz r8,276(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,15(r8)
	REX_STORE_U8(ctx.r8.u32 + 15, r29.u8);
	// lwz r7,276(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,16(r7)
	REX_STORE_U8(ctx.r7.u32 + 16, r29.u8);
	// lwz r6,276(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,17(r6)
	REX_STORE_U8(ctx.r6.u32 + 17, r29.u8);
	// lwz r5,276(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,18(r5)
	REX_STORE_U8(ctx.r5.u32 + 18, r29.u8);
	// lwz r4,276(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// stb r29,19(r4)
	REX_STORE_U8(ctx.r4.u32 + 19, r29.u8);
	// lwz r3,204(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r8,208(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// lwz r31,144(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r7,136(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r11,1900(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1900);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1896(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1896);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r5,-8
	ctx.r3.s64 = ctx.r5.s64 + -8;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// stw r4,1892(r10)
	REX_STORE_U32(ctx.r10.u32 + 1892, ctx.r4.u32);
	// stw r3,15240(r10)
	REX_STORE_U32(ctx.r10.u32 + 15240, ctx.r3.u32);
	// neg r7,r4
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// stw r6,15244(r10)
	REX_STORE_U32(ctx.r10.u32 + 15244, ctx.r6.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// ble cr6,0x8233b64c
	if (!ctx.cr6.gt) goto loc_8233B64C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8233B624:
	// lwz r5,272(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,0,4,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r5,144(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8233b624
	if (ctx.cr6.lt) goto loc_8233B624;
loc_8233B64C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8233B650:
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233b660
	if (ctx.cr6.eq) goto loc_8233B660;
	// lwz r7,1892(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1892);
loc_8233B660:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233b80c
	if (ctx.cr6.eq) goto loc_8233B80C;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8233B66C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r9,r8,-32
	ctx.r9.s64 = ctx.r8.s64 + -32;
loc_8233B674:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x8233b7ec
	if (ctx.cr6.gt) goto loc_8233B7EC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8233b6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233B6DC;
	// bdzf 4*cr6+eq,0x8233b71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233B71C;
	// bdzf 4*cr6+eq,0x8233b74c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233B74C;
	// bdzf 4*cr6+eq,0x8233b770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233B770;
	// bne cr6,0x8233b7b0
	if (!ctx.cr6.eq) goto loc_8233B7B0;
	// lwz r4,1904(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// addi r6,r9,-128
	ctx.r6.s64 = ctx.r9.s64 + -128;
	// subfic r5,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r27,r7,48
	r27.s64 = ctx.r7.s64 + 48;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r4,r27,r8
	ctx.r4.u64 = ctx.r8.u64 - r27.u64;
	// lwz r5,1904(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r6,1904(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// b 0x8233b7ec
	goto loc_8233B7EC;
loc_8233B6DC:
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// addi r4,r6,16
	ctx.r4.s64 = ctx.r6.s64 + 16;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r4,1904(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r6,1904(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// b 0x8233b7ec
	goto loc_8233B7EC;
loc_8233B71C:
	// lwz r27,1904(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// addi r6,r9,-128
	ctx.r6.s64 = ctx.r9.s64 + -128;
	// addi r5,r9,-32
	ctx.r5.s64 = ctx.r9.s64 + -32;
	// addi r4,r6,-64
	ctx.r4.s64 = ctx.r6.s64 + -64;
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// stw r27,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r27.u32);
	// lwz r6,1904(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1904);
	// stw r4,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r6,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// b 0x8233b7ec
	goto loc_8233B7EC;
loc_8233B74C:
	// addi r6,r9,-32
	ctx.r6.s64 = ctx.r9.s64 + -32;
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// addi r5,r9,-64
	ctx.r5.s64 = ctx.r9.s64 + -64;
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// stw r6,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// stw r5,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// stw r5,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// b 0x8233b7ec
	goto loc_8233B7EC;
loc_8233B770:
	// lwz r5,1908(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// addi r6,r9,-160
	ctx.r6.s64 = ctx.r9.s64 + -160;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// addi r6,r7,96
	ctx.r6.s64 = ctx.r7.s64 + 96;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r6,1908(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r4,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// stw r6,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// lwz r4,1908(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r5,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r5.u32);
	// stw r4,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// b 0x8233b7ec
	goto loc_8233B7EC;
loc_8233B7B0:
	// lwz r5,1908(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// addi r6,r9,-160
	ctx.r6.s64 = ctx.r9.s64 + -160;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// addi r6,r7,96
	ctx.r6.s64 = ctx.r7.s64 + 96;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r6,1908(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r4,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// stw r6,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// lwz r4,1908(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1908);
	// stw r5,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r5.u32);
	// stw r4,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r4.u32);
loc_8233B7EC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x8233b674
	if (ctx.cr6.lt) goto loc_8233B674;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// bne 0x8233b66c
	if (!ctx.cr0.eq) goto loc_8233B66C;
loc_8233B80C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8233b650
	if (ctx.cr6.lt) goto loc_8233B650;
	// lwz r11,204(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r9,14852(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14852);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,236(r10)
	REX_STORE_U32(ctx.r10.u32 + 236, ctx.r8.u32);
	// beq cr6,0x8233b854
	if (ctx.cr6.eq) goto loc_8233B854;
	// lwz r11,3816(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b84c
	if (ctx.cr6.eq) goto loc_8233B84C;
	// lwz r9,220(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 220);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8233b850
	goto loc_8233B850;
loc_8233B84C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8233B850:
	// stw r11,3828(r10)
	REX_STORE_U32(ctx.r10.u32 + 3828, ctx.r11.u32);
loc_8233B854:
	// lwz r11,136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// addi r3,r10,3772
	ctx.r3.s64 = ctx.r10.s64 + 3772;
	// lwz r9,140(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r7,1776(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1776);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,1784(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1784);
	// lwz r4,3744(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 3744);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,1780(r10)
	REX_STORE_U32(ctx.r10.u32 + 1780, ctx.r5.u32);
	// stw r11,1788(r10)
	REX_STORE_U32(ctx.r10.u32 + 1788, ctx.r11.u32);
	// bl 0x82353018
	ctx.lr = 0x8233B88C;
	sub_82353018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8235EA08) {
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
	ctx.lr = 0x8235EA10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// lwz r8,3780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r7,3784(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r6,15964(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15964);
	// add r19,r8,r11
	r19.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// add r15,r7,r11
	r15.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8235eaf0
	if (ctx.cr6.eq) goto loc_8235EAF0;
	// lwz r11,20416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235eaf0
	if (!ctx.cr6.eq) goto loc_8235EAF0;
	// lwz r10,3760(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,200(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r3,208(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r8,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r7,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,228(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r5,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,15576(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15576);
	// stw r3,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// stw r18,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r18.u32);
	// stw r16,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8235EAF0:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(r18.u32, r16.u32, ctx.xer);
	// lwz r9,616(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// stw r9,616(r10)
	REX_STORE_U32(ctx.r10.u32 + 616, ctx.r9.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r6,232(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r8,3840(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3832(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,228(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 228);
	// add r17,r8,r11
	r17.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,3836(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r14,204(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r20,136(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r21,208(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bge cr6,0x8235ebf0
	if (!ctx.cr6.lt) goto loc_8235EBF0;
	// lis r25,-32161
	r25.s64 = -2107703296;
	// lis r23,-32161
	r23.s64 = -2107703296;
loc_8235EB50:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235eb64
	if (!ctx.cr6.eq) goto loc_8235EB64;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8235EB64:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8235ebd0
	if (ctx.cr6.eq) goto loc_8235EBD0;
	// subf r27,r30,r24
	r27.u64 = r24.u64 - r30.u64;
loc_8235EB74:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235eb9c
	if (!ctx.cr6.eq) goto loc_8235EB9C;
	// lwz r11,5328(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 5328);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EB9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235EB9C:
	// lwz r11,5340(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 5340);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// blt cr6,0x8235eb74
	if (ctx.cr6.lt) goto loc_8235EB74;
loc_8235EBD0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(r28.u32, r16.u32, ctx.xer);
	// blt cr6,0x8235eb50
	if (ctx.cr6.lt) goto loc_8235EB50;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8235EBF0:
	// lis r26,-32161
	r26.s64 = -2107703296;
	// lis r25,-32161
	r25.s64 = -2107703296;
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(r18.u32, r16.u32, ctx.xer);
	// bge cr6,0x8235eca0
	if (!ctx.cr6.lt) goto loc_8235ECA0;
loc_8235EC04:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235ec18
	if (!ctx.cr6.eq) goto loc_8235EC18;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8235EC18:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8235ec84
	if (ctx.cr6.eq) goto loc_8235EC84;
	// subf r27,r30,r19
	r27.u64 = r19.u64 - r30.u64;
loc_8235EC28:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235ec50
	if (!ctx.cr6.eq) goto loc_8235EC50;
	// lwz r11,5332(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 5332);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235EC50:
	// lwz r11,5336(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 5336);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// blt cr6,0x8235ec28
	if (ctx.cr6.lt) goto loc_8235EC28;
loc_8235EC84:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// add r22,r6,r22
	r22.u64 = ctx.r6.u64 + r22.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(r28.u32, r16.u32, ctx.xer);
	// blt cr6,0x8235ec04
	if (ctx.cr6.lt) goto loc_8235EC04;
loc_8235ECA0:
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(r18.u32, r16.u32, ctx.xer);
	// bge cr6,0x8235ed48
	if (!ctx.cr6.lt) goto loc_8235ED48;
loc_8235ECAC:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235ecc0
	if (!ctx.cr6.eq) goto loc_8235ECC0;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_8235ECC0:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8235ed2c
	if (ctx.cr6.eq) goto loc_8235ED2C;
	// subf r27,r30,r15
	r27.u64 = r15.u64 - r30.u64;
loc_8235ECD0:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235ecf8
	if (!ctx.cr6.eq) goto loc_8235ECF8;
	// lwz r11,5332(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 5332);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235ECF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235ECF8:
	// lwz r11,5336(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 5336);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235ED1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// blt cr6,0x8235ecd0
	if (ctx.cr6.lt) goto loc_8235ECD0;
loc_8235ED2C:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r15,r11,r15
	r15.u64 = ctx.r11.u64 + r15.u64;
	// add r17,r6,r17
	r17.u64 = ctx.r6.u64 + r17.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(r28.u32, r16.u32, ctx.xer);
	// blt cr6,0x8235ecac
	if (ctx.cr6.lt) goto loc_8235ECAC;
loc_8235ED48:
	// lwz r11,15576(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ee28
	if (ctx.cr6.eq) goto loc_8235EE28;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(r18.u32, r16.u32, ctx.xer);
	// lwz r7,3832(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r9,3836(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r10,3840(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// add r24,r8,r7
	r24.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r11,r9
	r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r23,r11,r10
	r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x8235ee28
	if (!ctx.cr6.lt) goto loc_8235EE28;
	// lis r22,-32161
	r22.s64 = -2107703296;
loc_8235ED84:
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8235ee0c
	if (ctx.cr6.eq) goto loc_8235EE0C;
	// subf r26,r25,r23
	r26.u64 = r23.u64 - r25.u64;
loc_8235ED9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8235edf4
	if (ctx.cr6.eq) goto loc_8235EDF4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235edf4
	if (ctx.cr6.eq) goto loc_8235EDF4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8235edf4
	if (ctx.cr6.eq) goto loc_8235EDF4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235edf4
	if (ctx.cr6.eq) goto loc_8235EDF4;
	// lwz r11,5312(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 5312);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// add r5,r26,r30
	ctx.r5.u64 = r26.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235EDF4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(r28.u32, r20.u32, ctx.xer);
	// blt cr6,0x8235ed9c
	if (ctx.cr6.lt) goto loc_8235ED9C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8235EE0C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r25,r6,r25
	r25.u64 = ctx.r6.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r23,r6,r23
	r23.u64 = ctx.r6.u64 + r23.u64;
	// cmplw cr6,r27,r16
	ctx.cr6.compare<uint32_t>(r27.u32, r16.u32, ctx.xer);
	// blt cr6,0x8235ed84
	if (ctx.cr6.lt) goto loc_8235ED84;
loc_8235EE28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823699E8) {
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
	ctx.lr = 0x823699F0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// ori r8,r8,13392
	ctx.r8.u64 = ctx.r8.u64 | 13392;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82369c64
	if (ctx.cr6.gt) goto loc_82369C64;
	// beq cr6,0x82369c14
	if (ctx.cr6.eq) goto loc_82369C14;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82369a80
	if (ctx.cr6.gt) goto loc_82369A80;
	// beq cr6,0x82369aa0
	if (ctx.cr6.eq) goto loc_82369AA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82369a3c
	if (ctx.cr6.eq) goto loc_82369A3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82369a48
	if (!ctx.cr6.eq) goto loc_82369A48;
loc_82369A3C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82369cb4
	if (!ctx.cr6.gt) goto loc_82369CB4;
loc_82369A44:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82369A48:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mullw r8,r31,r11
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r3,r8,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r26,r3,r6
	r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x82369cbc
	if (!ctx.cr6.eq) goto loc_82369CBC;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// b 0x82369ce8
	goto loc_82369CE8;
loc_82369A80:
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r3,r8,13392
	ctx.r3.u64 = ctx.r8.u64 | 13392;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82369b14
	if (ctx.cr6.eq) goto loc_82369B14;
	// lis r8,12849
	ctx.r8.s64 = 842072064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82369a48
	if (!ctx.cr6.eq) goto loc_82369A48;
loc_82369AA0:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r21,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r21.s64 = r20.s32 >> 1;
	// srawi r19,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r19.s64 = ctx.r6.s32 >> 1;
	// lwz r27,308(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r11,r29
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// srawi r23,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r23.s64 = r27.s32 >> 1;
	// add r9,r25,r24
	ctx.r9.u64 = r25.u64 + r24.u64;
	// add r24,r7,r8
	r24.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r23,r28
	ctx.r7.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// srawi r22,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r22.s64 = r26.s32 >> 1;
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r24,r9
	r24.u64 = r24.u64 + ctx.r9.u64;
	// add r9,r7,r22
	ctx.r9.u64 = ctx.r7.u64 + r22.u64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r23.s64 = ctx.r11.s32 >> 2;
	// mullw r7,r31,r3
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r30,r27
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// add r27,r23,r11
	r27.u64 = r23.u64 + ctx.r11.u64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// b 0x82369b7c
	goto loc_82369B7C;
loc_82369B14:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r29.s64 = r31.s32 >> 2;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r28.s64 = r30.s32 >> 2;
	// srawi r21,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r21.s64 = r20.s32 >> 2;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r27.s64 = ctx.r10.s32 >> 2;
	// mullw r25,r29,r3
	r25.s64 = int64_t(r29.s32) * int64_t(ctx.r3.s32);
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// srawi r24,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r24.s64 = ctx.r8.s32 >> 2;
	// add r9,r25,r27
	ctx.r9.u64 = r25.u64 + r27.u64;
	// srawi r22,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r22.s64 = r26.s32 >> 2;
	// add r24,r24,r8
	r24.u64 = r24.u64 + ctx.r8.u64;
	// mullw r23,r28,r7
	r23.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r27.s64 = ctx.r11.s32 >> 2;
loc_82369B60:
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// add r24,r24,r9
	r24.u64 = r24.u64 + ctx.r9.u64;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// add r9,r23,r22
	ctx.r9.u64 = r23.u64 + r22.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
loc_82369B7C:
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r27,r9
	ctx.r11.u64 = r27.u64 + ctx.r9.u64;
	// add r23,r24,r5
	r23.u64 = r24.u64 + ctx.r5.u64;
	// add r22,r11,r4
	r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r24,r8,r4
	r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r26,r7,r26
	r26.u64 = ctx.r7.u64 + r26.u64;
	// add r25,r25,r5
	r25.u64 = r25.u64 + ctx.r5.u64;
	// add r27,r3,r10
	r27.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82369bcc
	if (!ctx.cr6.gt) goto loc_82369BCC;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
loc_82369BAC:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822091c8
	ctx.lr = 0x82369BBC;
	sub_822091C8(ctx, base);
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r30
	r26.u64 = r26.u64 + r30.u64;
	// bne 0x82369bac
	if (!ctx.cr0.eq) goto loc_82369BAC;
loc_82369BCC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x82369da8
	if (!ctx.cr6.gt) goto loc_82369DA8;
loc_82369BD4:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822091c8
	ctx.lr = 0x82369BE4;
	sub_822091C8(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r25,r29,r25
	r25.u64 = r29.u64 + r25.u64;
	// add r24,r28,r24
	r24.u64 = r28.u64 + r24.u64;
	// bl 0x822091c8
	ctx.lr = 0x82369BFC;
	sub_822091C8(ctx, base);
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r23,r29,r23
	r23.u64 = r29.u64 + r23.u64;
	// add r22,r28,r22
	r22.u64 = r28.u64 + r22.u64;
	// bne 0x82369bd4
	if (!ctx.cr0.eq) goto loc_82369BD4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
loc_82369C14:
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r21,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r21.s64 = r20.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r29,r3
	r25.s64 = int64_t(r29.s32) * int64_t(ctx.r3.s32);
	// srawi r27,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r27.s64 = ctx.r8.s32 >> 1;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r9,r25,r24
	ctx.r9.u64 = r25.u64 + r24.u64;
	// add r24,r27,r8
	r24.u64 = r27.u64 + ctx.r8.u64;
	// srawi r22,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r22.s64 = r26.s32 >> 1;
	// mullw r23,r28,r7
	r23.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r27.s64 = ctx.r11.s32 >> 1;
	// b 0x82369b60
	goto loc_82369B60;
loc_82369C64:
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r8,r8,22857
	ctx.r8.u64 = ctx.r8.u64 | 22857;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82369c9c
	if (ctx.cr6.gt) goto loc_82369C9C;
	// beq cr6,0x82369aa0
	if (ctx.cr6.eq) goto loc_82369AA0;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r3,r8,21849
	ctx.r3.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82369cac
	if (ctx.cr6.eq) goto loc_82369CAC;
	// lis r8,21849
	ctx.r8.s64 = 1431896064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82369cac
	if (ctx.cr6.eq) goto loc_82369CAC;
	// b 0x82369a48
	goto loc_82369A48;
loc_82369C9C:
	// lis r8,22870
	ctx.r8.s64 = 1498808320;
	// ori r3,r8,22869
	ctx.r3.u64 = ctx.r8.u64 | 22869;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82369a48
	if (!ctx.cr6.eq) goto loc_82369A48;
loc_82369CAC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82369a44
	if (!ctx.cr6.gt) goto loc_82369A44;
loc_82369CB4:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82369a48
	goto loc_82369A48;
loc_82369CBC:
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subfic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// srawi r29,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r26.s32 >> 31;
	// xor r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// xor r7,r26,r29
	ctx.r7.u64 = r26.u64 ^ r29.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r3,r29,r7
	ctx.r3.u64 = ctx.r7.u64 - r29.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r8.s64 = r31.s32 >> 3;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
loc_82369CE8:
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// rlwinm r8,r10,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r3,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r28,r10,r6
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x82369d24
	if (!ctx.cr6.eq) goto loc_82369D24;
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// b 0x82369d58
	goto loc_82369D58;
loc_82369D24:
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subfic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r10.u64;
	// srawi r31,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r28.s32 >> 31;
	// xor r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r9,r28,r31
	ctx.r9.u64 = r28.u64 ^ r31.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r6,r31,r9
	ctx.r6.u64 = ctx.r9.u64 - r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82369D58:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r7,r5
	r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r29,324(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r27,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r27.s64 = temp.s64;
	// ble cr6,0x82369da8
	if (!ctx.cr6.gt) goto loc_82369DA8;
loc_82369D88:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822091c8
	ctx.lr = 0x82369D98;
	sub_822091C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// bne 0x82369d88
	if (!ctx.cr0.eq) goto loc_82369D88;
loc_82369DA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8237D328) {
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
	ctx.lr = 0x8237D330;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,1780(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r29,r11
	r28.u64 = r29.u64 + ctx.r11.u64;
	// lhzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + ctx.r11.u32);
	// sthx r9,r29,r11
	REX_STORE_U16(r29.u32 + ctx.r11.u32, ctx.r9.u16);
	// beq cr6,0x8237d3c0
	if (ctx.cr6.eq) goto loc_8237D3C0;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8237d3c0
	if (ctx.cr6.eq) goto loc_8237D3C0;
	// rlwinm r9,r5,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r4,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFE;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// sthx r7,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r7.u16);
	// lhzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r6,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r6.u16);
	// lhzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
loc_8237D3C0:
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237d3e8
	if (ctx.cr6.eq) goto loc_8237D3E8;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r26,1
	r26.s64 = 1;
	// sthx r11,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r11.u16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
loc_8237D3E8:
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237d49c
	if (!ctx.cr6.eq) goto loc_8237D49C;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237d42c
	if (!ctx.cr6.eq) goto loc_8237D42C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8237d428
	if (ctx.cr6.eq) goto loc_8237D428;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,21968(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8237d42c
	if (ctx.cr6.eq) goto loc_8237D42C;
loc_8237D428:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8237D42C:
	// lwz r10,20684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237d468
	if (ctx.cr6.eq) goto loc_8237D468;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r7,1780(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,1776(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236d928
	ctx.lr = 0x8237D460;
	sub_8236D928(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8237d4f4
	goto loc_8237D4F4;
loc_8237D468:
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r10,1780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,1776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x823a3e40
	ctx.lr = 0x8237D494;
	sub_823A3E40(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8237d4f4
	goto loc_8237D4F4;
loc_8237D49C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8237d4c4
	if (!ctx.cr6.eq) goto loc_8237D4C4;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhz r8,-2(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + -2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x8237d4e4
	goto loc_8237D4E4;
loc_8237D4C4:
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lhzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_8237D4E4:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x8237d4f4
	if (!ctx.cr6.eq) goto loc_8237D4F4;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
loc_8237D4F4:
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8237d508
	if (ctx.cr6.eq) goto loc_8237D508;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8237d52c
	if (!ctx.cr6.eq) goto loc_8237D52C;
loc_8237D508:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r8.u16);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,1,16,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFF001F);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
loc_8237D52C:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,428(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 428);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sthx r5,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r5.u16);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r3,432(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// srawi r10,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 20;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 & ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sth r5,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r5.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82387808) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x82387810;
	// srawi. r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82387984
	if (!ctx.cr0.gt) goto loc_82387984;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r25,r4,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,-21944
	r26.s64 = ctx.r11.s64 + -21944;
loc_82387828:
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
loc_82387830:
	// lbz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r31,5(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r11,3(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// subf r10,r31,r6
	ctx.r10.u64 = ctx.r6.u64 - r31.u64;
	// lbz r9,6(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze. r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r28.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82387954
	if (ctx.cr0.eq) goto loc_82387954;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r7,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r7.u64;
	// srawi r30,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r30.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 31;
	// xor r10,r30,r7
	ctx.r10.u64 = r30.u64 ^ ctx.r7.u64;
	// subf r29,r7,r10
	r29.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82387954
	if (!ctx.cr6.lt) goto loc_82387954;
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lbz r24,8(r3)
	r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r11,7(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// subf r7,r6,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r24,r31
	ctx.r8.u64 = r31.u64 - r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r7,2
	r24.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r8,2
	r23.s64 = ctx.r8.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823878f4
	if (!ctx.cr6.lt) goto loc_823878F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823878F4:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x82387954
	if (!ctx.cr6.lt) goto loc_82387954;
	// xor r10,r30,r28
	ctx.r10.u64 = r30.u64 ^ r28.u64;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238795c
	if (ctx.cr6.eq) goto loc_8238795C;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r10,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r28.s32 >> 31;
	// xor r9,r28,r10
	ctx.r9.u64 = r28.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82387934
	if (ctx.cr6.lt) goto loc_82387934;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82387934:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// bge cr6,0x82387940
	if (!ctx.cr6.lt) goto loc_82387940;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82387940:
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r9,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// b 0x8238795c
	goto loc_8238795C;
loc_82387954:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8238797c
	if (ctx.cr6.eq) goto loc_8238797C;
loc_8238795C:
	// lbzx r11,r27,r26
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + r26.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82387830
	if (ctx.cr6.lt) goto loc_82387830;
	// b 0x82387980
	goto loc_82387980;
loc_8238797C:
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
loc_82387980:
	// bdnz 0x82387828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82387828;
loc_82387984:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8238E6D8) {
	REX_FUNC_PROLOGUE();
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x8238e804
	if (!ctx.cr0.gt) goto loc_8238E804;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8238E6F0:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r8,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r8,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// lbz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// lbz r8,1(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// stb r8,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r8.u8);
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lbz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// stb r8,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stb r11,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lbz r8,2(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// lbz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r8,13(r3)
	REX_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// lbz r11,7(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// stb r11,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// lbz r8,3(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stb r8,15(r3)
	REX_STORE_U8(ctx.r3.u32 + 15, ctx.r8.u8);
	// lbz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lbz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// stb r8,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// lbz r11,9(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// stb r11,18(r3)
	REX_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// lbz r8,4(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// stb r8,19(r3)
	REX_STORE_U8(ctx.r3.u32 + 19, ctx.r8.u8);
	// lbz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lbz r8,5(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// stb r8,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
	// lbz r11,11(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// stb r11,22(r3)
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// lbz r8,5(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stb r8,23(r3)
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r8.u8);
	// lbz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lbz r8,6(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// stb r8,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r8.u8);
	// lbz r11,13(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 13);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// lbz r8,6(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// stb r8,27(r3)
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r8.u8);
	// lbz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 14);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lbz r8,7(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stb r8,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r8.u8);
	// lbz r11,15(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// lbz r8,7(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stb r8,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, ctx.r8.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x8238e6f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E6F0;
loc_8238E804:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8238e84c
	if (!ctx.cr6.lt) goto loc_8238E84C;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8238E818:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x8238e818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E818;
loc_8238E84C:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82393680) {
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
	ctx.lr = 0x82393688;
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8239375c
	if (!ctx.cr6.gt) goto loc_8239375C;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r7,-2
	r31.s64 = ctx.r7.s64 + -2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r31,2,0,29
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// addi r26,r7,-1
	r26.s64 = ctx.r7.s64 + -1;
	// mullw r24,r6,r3
	r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
loc_823936B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823936e8
	if (!ctx.cr6.gt) goto loc_823936E8;
	// addi r31,r7,-1
	r31.s64 = ctx.r7.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823936D8:
	// lbzx r31,r3,r30
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + r30.u32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823936d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823936D8;
loc_823936E8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ble cr6,0x8239371c
	if (!ctx.cr6.gt) goto loc_8239371C;
	// addi r3,r26,-2
	ctx.r3.s64 = r26.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82393704:
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stwu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82393704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393704;
loc_8239371C:
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r3,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r3.u32);
	// ble cr6,0x8239374c
	if (!ctx.cr6.gt) goto loc_8239374C;
	// addi r3,r28,-4
	ctx.r3.s64 = r28.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82393738:
	// lwzu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// stbx r31,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82393738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393738;
loc_8239374C:
	// add r29,r29,r6
	r29.u64 = r29.u64 + ctx.r6.u64;
	// add r30,r24,r30
	r30.u64 = r24.u64 + r30.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823936b8
	if (ctx.cr6.lt) goto loc_823936B8;
loc_8239375C:
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82393828
	if (!ctx.cr6.gt) goto loc_82393828;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// mullw r27,r6,r26
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
loc_82393784:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823937b4
	if (!ctx.cr6.gt) goto loc_823937B4;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823937A4:
	// lbzx r7,r8,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823937a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823937A4;
loc_823937B4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x823937e8
	if (!ctx.cr6.gt) goto loc_823937E8;
	// addi r8,r30,-2
	ctx.r8.s64 = r30.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823937D0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823937d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823937D0;
loc_823937E8:
	// lwzx r8,r29,r28
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r8.u32);
	// ble cr6,0x82393818
	if (!ctx.cr6.gt) goto loc_82393818;
	// addi r8,r28,-4
	ctx.r8.s64 = r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393804:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82393804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393804;
loc_82393818:
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r27,r4
	ctx.r4.u64 = r27.u64 + ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82393784
	if (ctx.cr6.lt) goto loc_82393784;
loc_82393828:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823938f0
	if (!ctx.cr6.gt) goto loc_823938F0;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// mullw r29,r6,r26
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
loc_8239384C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239387c
	if (!ctx.cr6.gt) goto loc_8239387C;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8239386C:
	// lbzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239386c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239386C;
loc_8239387C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x823938b0
	if (!ctx.cr6.gt) goto loc_823938B0;
	// addi r8,r31,-2
	ctx.r8.s64 = r31.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82393898:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82393898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393898;
loc_823938B0:
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r8.u32);
	// ble cr6,0x823938e0
	if (!ctx.cr6.gt) goto loc_823938E0;
	// addi r8,r28,-4
	ctx.r8.s64 = r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823938CC:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823938cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823938CC;
loc_823938E0:
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239384c
	if (ctx.cr6.lt) goto loc_8239384C;
loc_823938F0:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82397B48) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82397BB0) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82397be4
	if (ctx.cr6.eq) goto loc_82397BE4;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ff78
	ctx.lr = 0x82397BDC;
	sub_8233FF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82397BE4:
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

DEFINE_REX_FUNC(sub_82398E68) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,24
	ctx.r10.s64 = 24;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,8
	ctx.r9.s64 = 8;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// li r8,40
	ctx.r8.s64 = 40;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v60,6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x6)));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvrx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lvlx128 v58,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,-16
	ctx.r10.s64 = -16;
	// lvrx128 v56,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,48
	ctx.r8.s64 = 48;
	// lvlx128 v57,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v55,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v53,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v63,v53
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v50,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r4,23600
	ctx.r9.s64 = ctx.r4.s64 + 23600;
	// vupkhsb128 v47,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vor128 v48,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vupkhsb128 v49,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// li r5,-64
	ctx.r5.s64 = -64;
	// vupkhsb128 v46,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16))));
	// li r4,16
	ctx.r4.s64 = 16;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// vcsxwfp128 v44,v47,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vupkhsb128 v45,v48,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v48.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16))));
	// vcsxwfp128 v13,v49,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v46,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r6,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// vcsxwfp128 v42,v45,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvx128 v10,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,-48
	ctx.r8.s64 = -48;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vmulfp128 v40,v0,v44
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v41,v13,v44
	simde_mm_store_ps(ctx.v41.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v8,v43,v42
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v7,v43,v42
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v12,v63,v41
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmaddfp v8,v11,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v11,v7,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v9,v13,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v39,v12,v40
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vctsxs v13,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v12,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v11,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v10,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// vaddsws v9,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v13,v11
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v7,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v6,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v38,v9,v62
	ctx.v38.s32[0] = ctx.v9.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v38.s32[1] = ctx.v9.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v38.s32[2] = ctx.v9.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v38.s32[3] = ctx.v9.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v37,v8,v62
	ctx.v37.s32[0] = ctx.v8.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v37.s32[1] = ctx.v8.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v37.s32[2] = ctx.v8.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v37.s32[3] = ctx.v8.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v36,v7,v62
	ctx.v36.s32[0] = ctx.v7.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v7.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v7.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v7.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v35,v6,v62
	ctx.v35.s32[0] = ctx.v6.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v35.s32[1] = ctx.v6.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v35.s32[2] = ctx.v6.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v35.s32[3] = ctx.v6.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vmrglw128 v63,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v34,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v33,v38,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vmrglw128 v32,v38,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vmrghw128 v62,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrghw128 v58,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v57,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v59,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v56,v62,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v55,v58,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v54,v57,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v13,v59,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vaddfp128 v11,v55,v56
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v12,v56,v55
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v55.f32)));
	// li r6,-32
	ctx.r6.s64 = -32;
	// vmulfp128 v7,v63,v54
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v63,v13
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// vmulfp128 v52,v10,v54
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v54.f32)));
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// vcfpsxws128 v51,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lvx128 v9,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v8,v9,v11,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v9,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcfpsxws128 v50,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v13,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v49,v53,v52
	simde_mm_store_ps(ctx.v49.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsraw128 v5,v51,v61
	ctx.v5.s32[0] = ctx.v51.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v51.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v51.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v51.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vctsxs v13,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v11,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vsraw128 v4,v50,v61
	ctx.v4.s32[0] = ctx.v50.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v4.s32[1] = ctx.v50.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v4.s32[2] = ctx.v50.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v4.s32[3] = ctx.v50.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vctsxs v0,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vaddsws v12,v13,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcfpsxws128 v13,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// vaddsws v11,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v48,v3,v60
	ctx.v48.s32[0] = ctx.v3.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v48.s32[1] = ctx.v3.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v48.s32[2] = ctx.v3.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v48.s32[3] = ctx.v3.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v1,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v31,v11,v13
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v13.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v13.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v13.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v13.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v47,v2,v60
	ctx.v47.s32[0] = ctx.v2.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v47.s32[1] = ctx.v2.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v47.s32[2] = ctx.v2.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v47.s32[3] = ctx.v2.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vpkswss128 v46,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vsraw128 v45,v1,v60
	ctx.v45.s32[0] = ctx.v1.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v45.s32[1] = ctx.v1.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v45.s32[2] = ctx.v1.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v45.s32[3] = ctx.v1.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v44,v31,v60
	ctx.v44.s32[0] = v31.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v44.s32[1] = v31.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v44.s32[2] = v31.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v44.s32[3] = v31.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vpkswss128 v43,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vpkswss128 v42,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vpkswss128 v41,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v41.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// stvewx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvewx128 v42,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvewx128 v41,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BC2E8) {
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
	// bl 0x822d4e70
	ctx.lr = 0x823BC2F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r28,r11,-9296
	r28.s64 = ctx.r11.s64 + -9296;
	// beq cr6,0x823bc8a8
	if (ctx.cr6.eq) goto loc_823BC8A8;
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r7,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvlx v12,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lvlx v9,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r3,r8
	r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// subf r31,r8,r6
	r31.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lvlx v7,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v2,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r29,r8,r31
	r29.u64 = r31.u64 - ctx.r8.u64;
	// vmrghb v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v8,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v6,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v1,0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r27,r8,r29
	r27.u64 = r29.u64 - ctx.r8.u64;
	// vmrghb v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v3,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v30,0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v27,v5,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// vsubshs v1,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// lvlx v29,0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,-176
	r27.s64 = ctx.r1.s64 + -176;
	// vmrghb v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v12,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmrghb v28,v0,v29
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v24,v7,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrghb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v17,v0,v1
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// vsubshs v23,v28,v7
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vspltish v14,1
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0x1)));
	// vsubshs v19,v0,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsplth v31,v25,1
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v17,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v26,v9,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v25,v4,v8
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vspltish v22,2
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_set1_epi16(short(0x2)));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v16,v0,v23
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vmaxsh v24,v19,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v30,v11,v9
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vspltish v18,5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_set1_epi16(short(0x5)));
	// vsubshs v29,v8,v10
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v21,8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x8)));
	// vmaxsh v23,v16,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// vsubshs v16,v0,v26
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vspltisw v17,4
	simde_mm_store_si128((simde__m128i*)v17.u32, simde_mm_set1_epi32(int(0x4)));
	// vsubshs v3,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v31,v31
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v59,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v16,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v61,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vupkhsh v16,v19
	simde_mm_store_si128((simde__m128i*)v16.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16))));
	// vor128 v60,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor128 v58,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v10,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v9,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// lvx128 v8,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtuh v24,v13,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vcmpgtuh v23,v13,v23
	simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vmaxsh v27,v7,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v7,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v30,v12,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v12,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v7,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v29,v10,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v11,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v24,v23,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vcmpgtuh v23,v13,v8
	simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vcmpgtuh v27,v13,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vcmpgtuh v10,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vcmpgtuh v30,v13,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vcmpgtuh v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v29,v13,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vcmpgtuh v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v24,v23,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v23,v10,v27
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v30,v12,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v29,v11,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v27,v23,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v24,v27
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v30,v0,v23
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vperm v30,v30,v30,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtsh. v18,v30,v18
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v18.u16), 0xFFFF);
	// mfocrf r27,2
	r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r26,r27,0,26,26
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r11,4
	ctx.r11.s64 = 4;
	// vor128 v11,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// vor128 v10,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vor128 v9,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v8,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v7,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// beq cr6,0x823bc7b4
	if (ctx.cr6.eq) goto loc_823BC7B4;
	// vminsh v27,v11,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v29,v5,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor128 v56,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vminsh v24,v8,v10
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vminsh v23,v7,v4
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmaxsh v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v55,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v54,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v0,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v11,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vminsh v29,v27,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vminsh v27,v23,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vmaxsh v24,v13,v0
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v23,v11,v12
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vminsh v29,v27,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v27,v23,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v29,v27,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vcmpgtsh. v23,v19,v29
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v23.u16), 0xFFFF);
	// vupkhsh v24,v29
	simde_mm_store_si128((simde__m128i*)v24.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16))));
	// vcmpgtsw. v19,v16,v24
	simde_mm_store_si128((simde__m128i*)v19.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v16.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v19.u32)), 0xF);
	// vand128 v63,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// mfocrf r26,2
	r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v29,v29
	simde_mm_store_si128((simde__m128i*)v29.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vcmpgtsw. v27,v16,v29
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v16.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v27.u32)), 0xF);
	// mfocrf r24,2
	r24.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v24,v30
	simde_mm_store_si128((simde__m128i*)v24.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16))));
	// vcmpgtsw. v23,v24,v17
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), simde_mm_load_si128((simde__m128i*)v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v23.u32)), 0xF);
	// mfocrf r25,2
	r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v19,v30
	simde_mm_store_si128((simde__m128i*)v19.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vcmpgtsw. v17,v19,v17
	simde_mm_store_si128((simde__m128i*)v17.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v17.u32)), 0xF);
	// mfocrf r23,2
	r23.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r22,r25,0,26,26
	r22.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// mr r25,r23
	r25.u64 = r23.u64;
	// vor128 v13,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(r22.s32, 32, ctx.xer);
	// vor128 v12,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v11,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// beq cr6,0x823bc584
	if (ctx.cr6.eq) goto loc_823BC584;
	// rlwinm r26,r26,0,26,26
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// bne cr6,0x823bc59c
	if (!ctx.cr6.eq) goto loc_823BC59C;
loc_823BC584:
	// rlwinm r26,r25,0,26,26
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// beq cr6,0x823bc7b4
	if (ctx.cr6.eq) goto loc_823BC7B4;
	// rlwinm r26,r24,0,26,26
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// beq cr6,0x823bc7b4
	if (ctx.cr6.eq) goto loc_823BC7B4;
loc_823BC59C:
	// vsubshs v29,v7,v28
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// vsubshs v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r25,r1,-160
	r25.s64 = ctx.r1.s64 + -160;
	// vaddshs v30,v4,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r24,r1,-176
	r24.s64 = ctx.r1.s64 + -176;
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v23,v0,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v19,v27,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v1,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v2,v2
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v17,v23,v29
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vcmpgtsh v16,v31,v19
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vaddshs v29,v30,v30
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v19,v1,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vcmpgtsh v17,v31,v17
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vand128 v52,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvx128 v29,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v53,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v1,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vand128 v50,v28,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// vandc128 v49,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vxor128 v29,v52,v53
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vaddshs v27,v4,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v1,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v51,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vxor128 v1,v50,v49
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vaddshs v28,v6,v29
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v27,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v30,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v30,v10,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v1,v7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v4,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v28,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v20,v1,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v1,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v4,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v30,v19,v23
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v17,v8,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v10,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v19,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// vaddshs v19,v1,v19
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvx128 v4,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v30,v21
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vandc128 v48,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v47,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vaddshs v4,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v19,v2,v30
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v30,v16,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vandc128 v46,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vaddshs v16,v4,v2
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v2,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r25,r1,-160
	r25.s64 = ctx.r1.s64 + -160;
	// vaddshs v2,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v2,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v7,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v16,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v20,v4,v17
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubshs v27,v4,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v4,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v17,v30,v28
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v16,v1,v2
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v1,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v29,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// lvx128 v2,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v2,v27,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v4,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vand128 v45,v1,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v44,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v24,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v42,v45,v47
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vxor128 v41,v44,v48
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v43,v24,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v16,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v40,v20,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v4,v43,v46
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vaddshs v29,v19,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vpkshus128 v38,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vaddshs v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v39,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vaddshs v2,v16,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vpkshus128 v35,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v8,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v21,v29,v27
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v28,v17,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v20,v30,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// stvewx128 v38,r0,r29
	ea = (r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v17,v29,v23
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx128 v38,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v16,v21,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsrah v19,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v37,v40,v51
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vsrah v30,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v36,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v32,v19,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v1,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v33,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vand128 v62,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v34,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vandc128 v61,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vand128 v60,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v5,v32,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vandc128 v59,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vand128 v58,v1,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v33,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v33.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v57,v62,v34
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// stvewx128 v33,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v33.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vpkshus128 v56,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v39,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v54,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvewx128 v39,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v53,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// stvewx128 v35,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v52,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// stvewx128 v35,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v51,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// stvewx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r0,r30
	ea = (r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823bc7bc
	goto loc_823BC7BC;
loc_823BC7B4:
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
loc_823BC7BC:
	// rlwinm r9,r27,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// beq cr6,0x823bc8ac
	if (ctx.cr6.eq) goto loc_823BC8AC;
	// vslh v2,v25,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v7,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v1,v26,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v6,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v29,v2,v25
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v28,v1,v26
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v27,v6,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v9,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v26,v3,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v30,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v25,v9,v9
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v21,v26,v3
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v8,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v7,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v20,v11,v10
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v19,v25,v21
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v16,v0,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v9,v3,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmaxsh v10,v8,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vmaxsh v8,v7,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vmaxsh v11,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsubshs v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v12,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v1,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v30,v11,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v12,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vxor128 v50,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsrah v0,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v49,v50,v18
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsubshs v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vcmpgtsh v29,v31,v0
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcmpgtsh v28,v0,v12
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v27,v11,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v48,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vaddshs v26,v27,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v47,v25,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v46,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v24,v46,v49
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vminsh v23,v30,v24
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vxor v22,v23,v9
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsubshs v0,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v21,v4,v0
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v5,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v45,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vpkshus128 v44,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// stvewx128 v45,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
loc_823BC8A8:
	// lvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823BC8AC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823bcfe4
	if (ctx.cr6.eq) goto loc_823BCFE4;
	// addi r10,r4,-5
	ctx.r10.s64 = ctx.r4.s64 + -5;
	// stw r7,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r30,r1,-176
	r30.s64 = ctx.r1.s64 + -176;
	// vspltish v17,2
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x2)));
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvlx128 v41,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lvrx128 v40,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvlx128 v39,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lvlx128 v38,r7,r8
	temp.u32 = ctx.r7.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v36,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v35,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v39,v36
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vor128 v7,v37,v35
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// lvlx128 v34,r5,r8
	temp.u32 = ctx.r5.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v33,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stvx128 v4,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v18,5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_set1_epi16(short(0x5)));
	// lvrx128 v63,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v23,8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_set1_epi16(short(0x8)));
	// vmrghb v6,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vor128 v7,v34,v33
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v32,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v14,15
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0xF)));
	// lvrx128 v61,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v38,v32
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw v16,4
	simde_mm_store_si128((simde__m128i*)v16.u32, simde_mm_set1_epi32(int(0x4)));
	// vmrghb v5,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v3,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v10,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor128 v7,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsplth v3,v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghb v4,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vor128 v7,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vaddshs v19,v3,v3
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v31,v6,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v1,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrglb v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrglb v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v4,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v11,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v5,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v8,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v11,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrghb v31,v7,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v30,v6,v5
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v29,v6,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v22,v7,v9
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v21,v4,v10
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v20,v4,v10
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vupkhsh v15,v19
	simde_mm_store_si128((simde__m128i*)v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16))));
	// vmrghb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v31
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v29,v1,v7
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v30,v7,v5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v31,v6,v28
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-160
	r29.s64 = ctx.r1.s64 + -160;
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v25,v0,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// addi r28,r1,-128
	r28.s64 = ctx.r1.s64 + -128;
	// vsubshs v24,v0,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v26,v5,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v29,v25,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v30,v24,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v27,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v27,v11,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v24,v8,v10
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v29,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v29,v4,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v30,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v30,v9,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v25,v10,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vor128 v59,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v58,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vsubshs v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v11,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vor128 v56,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsubshs v9,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vor128 v55,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor128 v57,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vor128 v54,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v10,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v7,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vmaxsh v29,v12,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v27,v11,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vor128 v53,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vmaxsh v9,v8,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v12,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lvx128 v6,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtuh v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vcmpgtuh v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmaxsh v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vmaxsh v8,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vcmpgtuh v29,v13,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vcmpgtuh v27,v13,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vcmpgtuh v24,v13,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v11,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcmpgtuh v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vcmpgtuh v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vcmpgtuh v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vaddshs v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v10,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v27,v8,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v29,v29,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v27,v27,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v24,v27,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v29,v0,v24
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vperm v2,v29,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtsh. v27,v2,v18
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v27.u16), 0xFFFF);
	// stvx128 v27,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mfocrf r31,2
	r31.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r30,r31,0,26,26
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	// vor128 v12,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v11,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// vor128 v10,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vor128 v9,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v8,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v7,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vor128 v6,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// beq cr6,0x823bce98
	if (ctx.cr6.eq) goto loc_823BCE98;
	// vminsh v24,v8,v10
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v52,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vminsh v29,v4,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor128 v50,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vminsh v18,v11,v9
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v0,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v12,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v51,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v49,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v48,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmaxsh v13,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v10,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v29,v24,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vminsh v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vmaxsh v18,v12,v13
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmaxsh v0,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v29,v24,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v29,v24,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vcmpgtsh. v24,v19,v29
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v24.u16), 0xFFFF);
	// vupkhsh v18,v29
	simde_mm_store_si128((simde__m128i*)v18.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16))));
	// vcmpgtsw. v19,v15,v18
	simde_mm_store_si128((simde__m128i*)v19.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v19.u32)), 0xF);
	// vand128 v63,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v27.u8)));
	// mfocrf r30,2
	r30.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v18,v29
	simde_mm_store_si128((simde__m128i*)v18.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vcmpgtsw. v15,v15,v18
	simde_mm_store_si128((simde__m128i*)v15.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v15.u32)), 0xF);
	// mfocrf r28,2
	r28.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v24,v29,v16
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v24.u32)), 0xF);
	// mfocrf r29,2
	r29.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v19,v2
	simde_mm_store_si128((simde__m128i*)v19.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v18,v19,v16
	simde_mm_store_si128((simde__m128i*)v18.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v18.u32)), 0xF);
	// mfocrf r27,2
	r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r26,r29,0,26,26
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// vor128 v0,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// mr r29,r27
	r29.u64 = r27.u64;
	// vor128 v13,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(r26.s32, 32, ctx.xer);
	// vor128 v12,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v11,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v10,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// beq cr6,0x823bcbec
	if (ctx.cr6.eq) goto loc_823BCBEC;
	// rlwinm r30,r30,0,26,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// bne cr6,0x823bcc04
	if (!ctx.cr6.eq) goto loc_823BCC04;
loc_823BCBEC:
	// rlwinm r30,r29,0,26,26
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// beq cr6,0x823bce98
	if (ctx.cr6.eq) goto loc_823BCE98;
	// rlwinm r30,r28,0,26,26
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// beq cr6,0x823bce98
	if (ctx.cr6.eq) goto loc_823BCE98;
loc_823BCC04:
	// vsubshs v29,v0,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// vsubshs v2,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r29,r1,-144
	r29.s64 = ctx.r1.s64 + -144;
	// vor128 v47,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// addi r28,r1,-112
	r28.s64 = ctx.r1.s64 + -112;
	// vor128 v46,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmaxsh v24,v29,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v27,v0,v2
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v31,v5,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v10,v4
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtsh v18,v3,v24
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vmaxsh v19,v27,v2
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v2,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v16,v31,v31
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vand128 v45,v28,v18
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// vandc128 v44,v6,v18
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcmpgtsh v15,v3,v19
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vaddshs v24,v2,v2
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v19,v29,v29
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vxor128 v28,v45,v44
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vand128 v43,v1,v15
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vandc128 v42,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v18,v31,v24
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v31,v28,v28
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v27,v6,v28
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vxor128 v1,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vaddshs v15,v24,v29
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v24,v10,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v9,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v1,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v1,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// stvx128 v1,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v27,v27
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v28,v28,v24
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v1,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddshs v19,v19,v29
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v28,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v40,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vaddshs v16,v1,v16
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v0,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v19,v23
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v28,v16,v23
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vandc128 v39,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vaddshs v19,v2,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v23,v18,v24
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v18,v28,v2
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v2,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v16,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v24,v19,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v15,v23,v27
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v19,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v38,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vaddshs v28,v18,v19
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubshs v18,v2,v31
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v16,v15,v0
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vandc128 v37,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v15,v1,v28
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// lvx128 v19,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v18,v19
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsrah v31,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v28,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v19,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v36,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v35,v27,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v16,v4,v4
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vand128 v34,v19,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v18,v36,v38
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vxor128 v33,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vaddshs v28,v11,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vxor128 v19,v34,v39
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vaddshs v27,v9,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v0,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v1,v46,v33
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vpkshus v31,v19,v18
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v16,v24,v16
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// addi r30,r1,-160
	r30.s64 = ctx.r1.s64 + -160;
	// vaddshs v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v15,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v29,v24,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v16,v16,v0
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v15,v23,v13
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmrghb v28,v31,v21
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vmrglb v31,v31,v21
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vsrah v23,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v32,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vandc128 v62,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vand128 v60,v24,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v59,v23,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v58,v21,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v56,v16,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v54,v15,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v61,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v57,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vandc128 v55,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vxor128 v52,v59,v32
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vxor128 v53,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vxor128 v51,v58,v62
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v50,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vxor128 v49,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vpkshus128 v5,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// vpkshus128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// vpkshus128 v2,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16)));
	// vmrghb v29,v5,v22
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v27,v4,v20
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v24,v1,v2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrglb v4,v4,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v2,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v1,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrghb v23,v24,v28
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// vmrghb v21,v5,v4
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v22,v2,v31
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v2,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v29,v29,v27
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vmrghb v4,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v23.u8)));
	// vmrghb v27,v22,v21
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// vmrghb v31,v2,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v28,v24,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// vmrglb v1,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v23.u8)));
	// vmrglb v24,v22,v21
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// vmrghb v23,v4,v27
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v22,v4,v27
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v5,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vmrghb v31,v28,v29
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vmrghb v21,v1,v24
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrglb v20,v1,v24
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrglb v29,v28,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// stvlx v23,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// vmrghb v16,v31,v5
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvrx v23,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v23.u8[i]);
	// vmrglb v15,v31,v5
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvlx v22,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvrx v22,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v22.u8[i]);
	// vmrghb v5,v29,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvlx v21,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// vmrglb v4,v29,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvrx v21,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v21.u8[i]);
	// stvlx v20,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvrx v20,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v20.u8[i]);
	// stvlx v16,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvrx v16,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v16.u8[i]);
	// stvlx v15,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvrx v15,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v15.u8[i]);
	// stvlx v5,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvrx v5,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v5.u8[i]);
	// stvlx v4,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// lvx128 v27,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v13,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// b 0x823bcea0
	goto loc_823BCEA0;
loc_823BCE98:
	// vor v18,v8,v8
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v19,v9,v9
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
loc_823BCEA0:
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x823bcfe4
	if (ctx.cr6.eq) goto loc_823BCFE4;
	// vslh v5,v26,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vsubshs v7,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// vslh v4,v25,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-160
	r30.s64 = ctx.r1.s64 + -160;
	// vsubshs v6,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v31,v5,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v25
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v30,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v24,v2,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v22,v26,v30
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v21,v8,v9
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v7,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v20,v25,v22
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsrah v11,v30,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v16,v0,v10
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v15,v0,v7
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v12,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmaxsh v9,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vmaxsh v8,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vmaxsh v7,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v5,v12,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v31,v12,v6
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v30,v9,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v48,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vminsh v10,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v12,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v47,v48,v27
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vsubshs v9,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vcmpgtsh v29,v12,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vcmpgtsh v28,v3,v12
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v27,v9,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v46,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vaddshs v26,v27,v9
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v45,v25,v46
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vand128 v44,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vand128 v24,v44,v47
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vminsh v23,v30,v24
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vxor v22,v23,v11
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v13,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v12,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v18,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrglh v21,v12,v13
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v20,v12,v13
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vpkshus v13,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmrghh v19,v0,v13
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v18,v0,v13
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v19,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r11,-172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stvx128 v18,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-164(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r27,-152(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lwz r26,-176(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// sth r26,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, r26.u16);
	// lwz r29,-160(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r28,-156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// sth r11,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r11.u16);
	// sth r10,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// sth r30,4(r6)
	REX_STORE_U16(ctx.r6.u32 + 4, r30.u16);
	// sth r29,4(r5)
	REX_STORE_U16(ctx.r5.u32 + 4, r29.u16);
	// sth r28,4(r4)
	REX_STORE_U16(ctx.r4.u32 + 4, r28.u16);
	// lwz r31,-148(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// sth r27,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r27.u16);
	// sth r31,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, r31.u16);
loc_823BCFE4:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8242E260) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242E268;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8242e33c
	if (ctx.cr6.lt) goto loc_8242E33C;
	// beq cr6,0x8242e2d8
	if (ctx.cr6.eq) goto loc_8242E2D8;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bge cr6,0x8242e384
	if (!ctx.cr6.lt) goto loc_8242E384;
	// lwz r11,436(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 436);
	// addi r3,r30,412
	ctx.r3.s64 = r30.s64 + 412;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// b 0x8242e2bc
	goto loc_8242E2BC;
loc_8242E2AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8242e2c4
	if (ctx.cr6.eq) goto loc_8242E2C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8242E2BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e2ac
	if (!ctx.cr6.eq) goto loc_8242E2AC;
loc_8242E2C4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82443938
	ctx.lr = 0x8242E2CC;
	sub_82443938(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,592(r30)
	REX_STORE_U32(r30.u32 + 592, ctx.r11.u32);
	// b 0x8242e384
	goto loc_8242E384;
loc_8242E2D8:
	// lwz r9,476(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 476);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242e384
	if (ctx.cr6.eq) goto loc_8242E384;
	// addi r8,r31,-4
	ctx.r8.s64 = r31.s64 + -4;
loc_8242E2E8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x8242e304
	goto loc_8242E304;
loc_8242E2F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8242e30c
	if (ctx.cr6.eq) goto loc_8242E30C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8242E304:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e2f4
	if (!ctx.cr6.eq) goto loc_8242E2F4;
loc_8242E30C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e32c
	if (!ctx.cr6.eq) goto loc_8242E32C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242e384
	if (ctx.cr6.eq) goto loc_8242E384;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242e2e8
	if (!ctx.cr6.eq) goto loc_8242E2E8;
	// b 0x8242e384
	goto loc_8242E384;
loc_8242E32C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x82443938
	ctx.lr = 0x8242E338;
	sub_82443938(ctx, base);
	// b 0x8242e384
	goto loc_8242E384;
loc_8242E33C:
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x8242e35c
	goto loc_8242E35C;
loc_8242E34C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8242e364
	if (ctx.cr6.eq) goto loc_8242E364;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8242E35C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e34c
	if (!ctx.cr6.eq) goto loc_8242E34C;
loc_8242E364:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8245cef8
	ctx.lr = 0x8242E36C;
	sub_8245CEF8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242e384
	if (ctx.cr0.eq) goto loc_8242E384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242ccb0
	ctx.lr = 0x8242E384;
	sub_8242CCB0(ctx, base);
loc_8242E384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82435408) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435430
	if (ctx.cr6.eq) goto loc_82435430;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82435434
	goto loc_82435434;
loc_82435430:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_82435434:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243544c
	if (!ctx.cr6.gt) goto loc_8243544C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_8243544C:
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
	// bl 0x8242c3b0
	ctx.lr = 0x82435464;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// beq 0x82435498
	if (ctx.cr0.eq) goto loc_82435498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_82435484:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824354b4
	if (ctx.cr6.eq) goto loc_824354B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824354b8
	goto loc_824354B8;
loc_82435498:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_824354A0:
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
loc_824354B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_824354B8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824354a0
	if (!ctx.cr6.lt) goto loc_824354A0;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82435484
	goto loc_82435484;
}

DEFINE_REX_FUNC(sub_82437600) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82434a80
	ctx.lr = 0x82437628;
	sub_82434A80(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243765c
	if (ctx.cr6.eq) goto loc_8243765C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-180
	ctx.r3.s64 = r31.s64 + -180;
	// bl 0x824371d0
	ctx.lr = 0x8243763C;
	sub_824371D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8243765c
	if (!ctx.cr0.lt) goto loc_8243765C;
	// lwz r11,-92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -92);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243765C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243765C:
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

DEFINE_REX_FUNC(sub_824384D0) {
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
	// bge cr6,0x8243850c
	if (!ctx.cr6.lt) goto loc_8243850C;
	// bl 0x824d419c
	ctx.lr = 0x82438500;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8243850c
	if (ctx.cr6.eq) goto loc_8243850C;
	// li r30,1
	r30.s64 = 1;
loc_8243850C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438520
	if (ctx.cr6.eq) goto loc_82438520;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8243857c
	if (ctx.cr6.eq) goto loc_8243857C;
loc_82438520:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8243857c
	if (ctx.cr6.gt) goto loc_8243857C;
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
	ctx.lr = 0x8243854C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243857c
	if (ctx.cr0.eq) goto loc_8243857C;
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
loc_8243857C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438594
	if (ctx.cr6.eq) goto loc_82438594;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82438598
	goto loc_82438598;
loc_82438594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82438598:
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

DEFINE_REX_FUNC(sub_8243B4F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243B510) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443bf0
	sub_82443BF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B540) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243b500
	sub_8243B500(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B570) {
	REX_FUNC_PROLOGUE();
	// lwz r8,184(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8243b588
	if (ctx.cr6.eq) goto loc_8243B588;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8243B588:
	// lwz r3,168(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243b598
	if (ctx.cr6.eq) goto loc_8243B598;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8243B598:
	// lwz r10,88(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8243b5ac
	if (ctx.cr0.eq) goto loc_8243B5AC;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8243B5AC:
	// lwz r11,172(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b5d8
	if (ctx.cr6.eq) goto loc_8243B5D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243B5D8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8243b614
	if (ctx.cr0.eq) goto loc_8243B614;
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b5f4
	if (ctx.cr6.eq) goto loc_8243B5F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8243b5f8
	goto loc_8243B5F8;
loc_8243B5F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243B5F8:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243B614:
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// beq cr6,0x8243b634
	if (ctx.cr6.eq) goto loc_8243B634;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243B634:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8243b650
	if (ctx.cr6.eq) goto loc_8243B650;
	// lwz r3,184(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8243B650:
	// lwz r3,180(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8243E3C8) {
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
	ctx.lr = 0x8243E3D0;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// li r25,1
	r25.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243e40c
	if (ctx.cr6.eq) goto loc_8243E40C;
	// lwsync 
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r25,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, r25.u32);
	// stw r26,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r26.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
loc_8243E40C:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mr r22,r26
	r22.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e438
	if (ctx.cr6.eq) goto loc_8243E438;
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243e438
	if (ctx.cr6.eq) goto loc_8243E438;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8243e438
	if (!ctx.cr6.eq) goto loc_8243E438;
	// mr r22,r25
	r22.u64 = r25.u64;
loc_8243E438:
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r27,224(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 224);
	// blt cr6,0x8243e85c
	if (ctx.cr6.lt) goto loc_8243E85C;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r31,36
	r29.s64 = r31.s64 + 36;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// beq cr6,0x8243e58c
	if (ctx.cr6.eq) goto loc_8243E58C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8243e554
	if (ctx.cr6.eq) goto loc_8243E554;
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x8243e4a8
	if (ctx.cr6.eq) goto loc_8243E4A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8243e4b8
	if (!ctx.cr6.eq) goto loc_8243E4B8;
loc_8243E4A8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8243e518
	if (ctx.cr6.eq) goto loc_8243E518;
loc_8243E4B8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8243e4c8
	if (ctx.cr6.eq) goto loc_8243E4C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8243e4d0
	if (!ctx.cr6.eq) goto loc_8243E4D0;
loc_8243E4C8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8243e518
	if (ctx.cr6.eq) goto loc_8243E518;
loc_8243E4D0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8243e58c
	if (!ctx.cr6.eq) goto loc_8243E58C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r7,8(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243E508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,216(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r25,248(r31)
	REX_STORE_U32(r31.u32 + 248, r25.u32);
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// b 0x8243e58c
	goto loc_8243E58C;
loc_8243E518:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e87c
	if (ctx.cr6.eq) goto loc_8243E87C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243E538;
	sub_822D5870(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243E54C;
	sub_822D5870(ctx, base);
	// stw r26,248(r31)
	REX_STORE_U32(r31.u32 + 248, r26.u32);
	// b 0x8243e87c
	goto loc_8243E87C;
loc_8243E554:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e58c
	if (ctx.cr6.eq) goto loc_8243E58C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243E574;
	sub_822D5870(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8243E588;
	sub_822D5870(ctx, base);
	// stw r26,248(r31)
	REX_STORE_U32(r31.u32 + 248, r26.u32);
loc_8243E58C:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mullw r28,r8,r11
	r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// bne cr6,0x8243e5cc
	if (!ctx.cr6.eq) goto loc_8243E5CC;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822091c8
	ctx.lr = 0x8243E5C8;
	sub_822091C8(ctx, base);
	// stw r26,252(r31)
	REX_STORE_U32(r31.u32 + 252, r26.u32);
loc_8243E5CC:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e6f8
	if (ctx.cr6.eq) goto loc_8243E6F8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8243e6f8
	if (ctx.cr6.eq) goto loc_8243E6F8;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243e6f8
	if (ctx.cr6.eq) goto loc_8243E6F8;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// ble cr6,0x8243e600
	if (!ctx.cr6.gt) goto loc_8243E600;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8243E600:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fdivs f0,f31,f12
	ctx.f0.f64 = double(float(f31.f64 / ctx.f12.f64));
	// ble cr6,0x8243e68c
	if (!ctx.cr6.gt) goto loc_8243E68C;
loc_8243E62C:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8243e67c
	if (!ctx.cr6.gt) goto loc_8243E67C;
loc_8243E63C:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,176(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r6,212(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 212);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r4,r7
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r4,r6
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8243e63c
	if (ctx.cr6.lt) goto loc_8243E63C;
loc_8243E67C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243e62c
	if (ctx.cr6.lt) goto loc_8243E62C;
loc_8243E68C:
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8243e6e4
	if (!ctx.cr6.eq) goto loc_8243E6E4;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243e6e4
	if (ctx.cr6.eq) goto loc_8243E6E4;
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8243e6e4
	if (!ctx.cr6.eq) goto loc_8243E6E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243e6d0
	if (!ctx.cr6.eq) goto loc_8243E6D0;
	// stw r25,72(r31)
	REX_STORE_U32(r31.u32 + 72, r25.u32);
	// b 0x8243e6e4
	goto loc_8243E6E4;
loc_8243E6D0:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8243e6e0
	if (ctx.cr6.gt) goto loc_8243E6E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8243e6e4
	if (!ctx.cr6.eq) goto loc_8243E6E4;
loc_8243E6E0:
	// lwz r27,224(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 224);
loc_8243E6E4:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_8243E6F8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8243e718
	if (!ctx.cr6.eq) goto loc_8243E718;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243e718
	if (ctx.cr6.lt) goto loc_8243E718;
	// stw r25,68(r31)
	REX_STORE_U32(r31.u32 + 68, r25.u32);
	// b 0x8243e720
	goto loc_8243E720;
loc_8243E718:
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// stw r25,4(r23)
	REX_STORE_U32(r23.u32 + 4, r25.u32);
loc_8243E720:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243e7f8
	if (ctx.cr6.eq) goto loc_8243E7F8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x8243e74c
	if (ctx.cr6.eq) goto loc_8243E74C;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,248(r31)
	REX_STORE_U32(r31.u32 + 248, r25.u32);
	// b 0x8243e754
	goto loc_8243E754;
loc_8243E74C:
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8243E754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E754:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8243e774
	if (!ctx.cr6.eq) goto loc_8243E774;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8243e7b8
	goto loc_8243E7B8;
loc_8243E774:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8243e794
	if (!ctx.cr6.eq) goto loc_8243E794;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8243e7b8
	goto loc_8243E7B8;
loc_8243E794:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bne cr6,0x8243e7b0
	if (!ctx.cr6.eq) goto loc_8243E7B0;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8243e7b8
	goto loc_8243E7B8;
loc_8243E7B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8243E7B8:
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
	// divwu r7,r11,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x8243E7F4;
	sub_822091C8(ctx, base);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
loc_8243E7F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8243e854
	if (ctx.cr6.eq) goto loc_8243E854;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243e814
	if (ctx.cr6.eq) goto loc_8243E814;
	// stw r25,72(r31)
	REX_STORE_U32(r31.u32 + 72, r25.u32);
loc_8243E814:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x8243e848
	if (ctx.cr6.eq) goto loc_8243E848;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E83C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,248(r31)
	REX_STORE_U32(r31.u32 + 248, r25.u32);
	// stw r25,244(r31)
	REX_STORE_U32(r31.u32 + 244, r25.u32);
	// b 0x8243e88c
	goto loc_8243E88C;
loc_8243E848:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E854:
	// stw r25,244(r31)
	REX_STORE_U32(r31.u32 + 244, r25.u32);
	// b 0x8243e88c
	goto loc_8243E88C;
loc_8243E85C:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e87c
	if (ctx.cr6.eq) goto loc_8243E87C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243E87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E87C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e88c
	if (ctx.cr6.eq) goto loc_8243E88C;
	// stw r26,4(r23)
	REX_STORE_U32(r23.u32 + 4, r26.u32);
loc_8243E88C:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// stw r26,252(r31)
	REX_STORE_U32(r31.u32 + 252, r26.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stw r9,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8245C210) {
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
	ctx.lr = 0x8245C218;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lwz r5,528(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_8245C234:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8245c284
	goto loc_8245C284;
loc_8245C23C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8245c254
	if (ctx.cr6.eq) goto loc_8245C254;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8245c258
	goto loc_8245C258;
loc_8245C254:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_8245C258:
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c280
	if (ctx.cr6.eq) goto loc_8245C280;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8245C26C:
	// lwz r10,56(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// bdnz 0x8245c26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245C26C;
loc_8245C280:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_8245C284:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8245c23c
	if (!ctx.cr6.eq) goto loc_8245C23C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8245c2a4
	if (ctx.cr6.eq) goto loc_8245C2A4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// cmplwi cr6,r6,13
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 13, ctx.xer);
	// blt cr6,0x8245c234
	if (ctx.cr6.lt) goto loc_8245C234;
loc_8245C2A4:
	// lwz r30,540(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// lwz r28,552(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r29,r11,7712
	r29.s64 = ctx.r11.s64 + 7712;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245c304
	if (ctx.cr6.eq) goto loc_8245C304;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245c2d4
	if (ctx.cr6.eq) goto loc_8245C2D4;
	// bl 0x82473600
	ctx.lr = 0x8245C2D0;
	sub_82473600(ctx, base);
	// stw r27,532(r31)
	REX_STORE_U32(r31.u32 + 532, r27.u32);
loc_8245C2D4:
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 556);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// mullw r4,r11,r30
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8242c3b0
	ctx.lr = 0x8245C2F0;
	sub_8242C3B0(ctx, base);
	// stw r3,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245c35c
	if (ctx.cr0.eq) goto loc_8245C35C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,536(r31)
	REX_STORE_U32(r31.u32 + 536, r30.u32);
loc_8245C304:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8245c354
	if (!ctx.cr6.gt) goto loc_8245C354;
	// lwz r3,544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245c324
	if (ctx.cr6.eq) goto loc_8245C324;
	// bl 0x82473600
	ctx.lr = 0x8245C320;
	sub_82473600(ctx, base);
	// stw r27,544(r31)
	REX_STORE_U32(r31.u32 + 544, r27.u32);
loc_8245C324:
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 556);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// mullw r4,r11,r28
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8242c3b0
	ctx.lr = 0x8245C340;
	sub_8242C3B0(ctx, base);
	// stw r3,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245c35c
	if (ctx.cr0.eq) goto loc_8245C35C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,548(r31)
	REX_STORE_U32(r31.u32 + 548, r28.u32);
loc_8245C354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8245C35C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8245c354
	goto loc_8245C354;
}

DEFINE_REX_FUNC(sub_8245E7B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e500
	sub_8245E500(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E7C8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e578
	sub_8245E578(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E8A0) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8245e94c
	if (ctx.cr6.gt) goto loc_8245E94C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8245e8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E8E8;
	// bdzf 4*cr6+eq,0x8245e8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E8F8;
	// bdzf 4*cr6+eq,0x8245e904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E904;
	// bdzf 4*cr6+eq,0x8245e910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E910;
	// bdzf 4*cr6+eq,0x8245e91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E91C;
	// bdzf 4*cr6+eq,0x8245e92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8245E92C;
	// bne cr6,0x8245e93c
	if (!ctx.cr6.eq) goto loc_8245E93C;
loc_8245E8E8:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82475868
	ctx.lr = 0x8245E8F4;
	sub_82475868(ctx, base);
	// b 0x8245e950
	goto loc_8245E950;
loc_8245E8F8:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82474d40
	ctx.lr = 0x8245E900;
	sub_82474D40(ctx, base);
	// b 0x8245e954
	goto loc_8245E954;
loc_8245E904:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x824745a0
	ctx.lr = 0x8245E90C;
	sub_824745A0(ctx, base);
	// b 0x8245e954
	goto loc_8245E954;
loc_8245E910:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x824745d8
	ctx.lr = 0x8245E918;
	sub_824745D8(ctx, base);
	// b 0x8245e954
	goto loc_8245E954;
loc_8245E91C:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82475598
	ctx.lr = 0x8245E928;
	sub_82475598(ctx, base);
	// b 0x8245e950
	goto loc_8245E950;
loc_8245E92C:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x824756b8
	ctx.lr = 0x8245E938;
	sub_824756B8(ctx, base);
	// b 0x8245e950
	goto loc_8245E950;
loc_8245E93C:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x824757e8
	ctx.lr = 0x8245E948;
	sub_824757E8(ctx, base);
	// b 0x8245e950
	goto loc_8245E950;
loc_8245E94C:
	// bl 0x8245f3a0
	ctx.lr = 0x8245E950;
	sub_8245F3A0(ctx, base);
loc_8245E950:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8245E954:
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

DEFINE_REX_FUNC(sub_82460620) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82460628;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82460648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460668
	if (ctx.cr6.eq) goto loc_82460668;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82460668
	if (ctx.cr6.eq) goto loc_82460668;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d445c
	ctx.lr = 0x82460668;
	__imp__KeSetEvent(ctx, base);
loc_82460668:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460688
	if (ctx.cr6.eq) goto loc_82460688;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82460688
	if (ctx.cr6.eq) goto loc_82460688;
	// bl 0x824d4bfc
	ctx.lr = 0x82460684;
	__imp__XAudioUnregisterRenderDriverClient(ctx, base);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_82460688:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824606a0
	if (ctx.cr6.eq) goto loc_824606A0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824606a0
	if (ctx.cr6.eq) goto loc_824606A0;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_824606A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824606B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824643E8) {
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
	ctx.lr = 0x824643F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x824644f0
	if (!ctx.cr6.gt) goto loc_824644F0;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x82464414;
	sub_82460ED8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// beq cr6,0x824644fc
	if (ctx.cr6.eq) goto loc_824644FC;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82464430;
	sub_822D5870(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824644f0
	if (!ctx.cr6.gt) goto loc_824644F0;
	// li r29,0
	r29.s64 = 0;
loc_82464444:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x82464450;
	sub_82460ED8(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r3,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824644fc
	if (ctx.cr6.eq) goto loc_824644FC;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246447C;
	sub_822D5870(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824644dc
	if (!ctx.cr6.gt) goto loc_824644DC;
	// li r30,0
	r30.s64 = 0;
loc_82464490:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82460ed8
	ctx.lr = 0x82464498;
	sub_82460ED8(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824644fc
	if (ctx.cr6.eq) goto loc_824644FC;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x824644C8;
	sub_822D5870(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82464490
	if (ctx.cr6.lt) goto loc_82464490;
loc_824644DC:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82464444
	if (ctx.cr6.lt) goto loc_82464444;
loc_824644F0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_824644FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82469EF0) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82469ff8
	if (ctx.cr6.eq) goto loc_82469FF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82469fdc
	if (ctx.cr6.eq) goto loc_82469FDC;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82469f78
	if (!ctx.cr6.eq) goto loc_82469F78;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82469f44
	if (ctx.cr6.gt) goto loc_82469F44;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// b 0x8246a050
	goto loc_8246A050;
loc_82469F44:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8246a050
	goto loc_8246A050;
loc_82469F78:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469e20
	ctx.lr = 0x82469F84;
	sub_82469E20(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82469fa0
	if (ctx.cr6.gt) goto loc_82469FA0;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8246a050
	goto loc_8246A050;
loc_82469FA0:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8246a050
	goto loc_8246A050;
loc_82469FDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82469ff8
	if (ctx.cr6.eq) goto loc_82469FF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469e20
	ctx.lr = 0x82469FF0;
	sub_82469E20(ctx, base);
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - r30.u64;
	// b 0x8246a050
	goto loc_8246A050;
loc_82469FF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246a04c
	if (ctx.cr6.eq) goto loc_8246A04C;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8246a018
	if (ctx.cr6.gt) goto loc_8246A018;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x8246a050
	goto loc_8246A050;
loc_8246A018:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8246a050
	goto loc_8246A050;
loc_8246A04C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246A050:
	// lis r10,-1024
	ctx.r10.s64 = -67108864;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246a068
	if (!ctx.cr6.lt) goto loc_8246A068;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// b 0x8246a07c
	goto loc_8246A07C;
loc_8246A068:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8246a07c
	if (!ctx.cr6.gt) goto loc_8246A07C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8246A07C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-25684
	ctx.r3.s64 = ctx.r11.s64 + -25684;
	// bl 0x82469b98
	ctx.lr = 0x8246A088;
	sub_82469B98(ctx, base);
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

DEFINE_REX_FUNC(sub_82472160) {
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
	ctx.lr = 0x82472168;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82472330
	if (ctx.cr6.eq) goto loc_82472330;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82472330
	if (ctx.cr6.eq) goto loc_82472330;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// blt cr6,0x82472328
	if (ctx.cr6.lt) goto loc_82472328;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// clrlwi r24,r7,16
	r24.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r25,r11,-1840
	r25.s64 = ctx.r11.s64 + -1840;
	// addi r27,r10,-1868
	r27.s64 = ctx.r10.s64 + -1868;
	// addi r26,r9,-1896
	r26.s64 = ctx.r9.s64 + -1896;
loc_824721A0:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x824721b0
	if (ctx.cr6.lt) goto loc_824721B0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_824721B0:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r8,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r8.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r31,r9,2
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lwzx r29,r31,r26
	r29.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzx r28,r31,r27
	r28.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r11,8
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r31,r6
	ctx.r10.u64 = r31.u64 + ctx.r6.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// stbu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x82472320
	if (ctx.cr0.eq) goto loc_82472320;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82472224:
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mullw r7,r10,r29
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82472268
	if (!ctx.cr6.gt) goto loc_82472268;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82472274
	goto loc_82472274;
loc_82472268:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82472274
	if (!ctx.cr6.lt) goto loc_82472274;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82472274:
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r7,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82472290
	if (!ctx.cr6.lt) goto loc_82472290;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82472290:
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// add r31,r8,r10
	r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// srawi r9,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r9.s64 = r31.s32 >> 8;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x824722e0
	if (!ctx.cr6.gt) goto loc_824722E0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x824722ec
	goto loc_824722EC;
loc_824722E0:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x824722ec
	if (!ctx.cr6.lt) goto loc_824722EC;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_824722EC:
	// rlwinm r9,r7,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// mullw r6,r7,r6
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82472308
	if (!ctx.cr6.lt) goto loc_82472308;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82472308:
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// bdnz 0x82472224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82472224;
loc_82472320:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bge cr6,0x824721a0
	if (!ctx.cr6.lt) goto loc_824721A0;
loc_82472328:
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - r23.u64;
	// b 0x822d4ec4
	return;
loc_82472330:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82475DB8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82475F18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,3304
	ctx.r11.s64 = ctx.r11.s64 + 3304;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82475f4c
	if (ctx.cr6.eq) goto loc_82475F4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82475F4C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82475f74
	if (ctx.cr6.eq) goto loc_82475F74;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
loc_82475F5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824344e8
	ctx.lr = 0x82475F64;
	sub_824344E8(ctx, base);
	// bl 0x824732b0
	ctx.lr = 0x82475F68;
	sub_824732B0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82475f5c
	if (!ctx.cr6.eq) goto loc_82475F5C;
loc_82475F74:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82475f9c
	if (ctx.cr6.eq) goto loc_82475F9C;
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
loc_82475F84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824344e8
	ctx.lr = 0x82475F8C;
	sub_824344E8(ctx, base);
	// bl 0x824732b0
	ctx.lr = 0x82475F90;
	sub_824732B0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82475f84
	if (!ctx.cr6.eq) goto loc_82475F84;
loc_82475F9C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c468
	ctx.lr = 0x82475FA4;
	sub_8242C468(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8242c468
	ctx.lr = 0x82475FAC;
	sub_8242C468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8242d868
	ctx.lr = 0x82475FBC;
	sub_8242D868(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8242d868
	ctx.lr = 0x82475FC4;
	sub_8242D868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8247C1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8247C1F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8247c21c
	if (!ctx.cr6.eq) goto loc_8247C21C;
loc_8247C20C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8247C21C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r7,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8247c314
	if (ctx.cr6.eq) goto loc_8247C314;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x8247c20c
	if (!ctx.cr6.eq) goto loc_8247C20C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r9,r9,-16184
	ctx.r9.s64 = ctx.r9.s64 + -16184;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247c268
	if (ctx.cr6.eq) goto loc_8247C268;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247c20c
	if (ctx.cr6.eq) goto loc_8247C20C;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8247C268:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,0,23,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247c2c0
	if (!ctx.cr6.eq) goto loc_8247C2C0;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247c300
	if (ctx.cr6.eq) goto loc_8247C300;
loc_8247C2C0:
	// li r8,28
	ctx.r8.s64 = 28;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bl 0x8247b1d8
	ctx.lr = 0x8247C2E0;
	sub_8247B1D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247c34c
	if (ctx.cr6.eq) goto loc_8247C34C;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8247C2FC;
	sub_822D4FA0(ctx, base);
	// b 0x8247c344
	goto loc_8247C344;
loc_8247C300:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// b 0x8247c338
	goto loc_8247C338;
loc_8247C314:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// addi r10,r11,-16168
	ctx.r10.s64 = ctx.r11.s64 + -16168;
	// addi r9,r9,-16184
	ctx.r9.s64 = ctx.r9.s64 + -16184;
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
loc_8247C338:
	// li r8,16
	ctx.r8.s64 = 16;
	// bl 0x8247ada8
	ctx.lr = 0x8247C340;
	sub_8247ADA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8247C344:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8247c35c
	if (!ctx.cr6.eq) goto loc_8247C35C;
loc_8247C34C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8247C35C:
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824867A0) {
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
	ctx.lr = 0x824867A8;
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r8,1820(r1)
	REX_STORE_U32(ctx.r1.u32 + 1820, ctx.r8.u32);
	// addi r8,r1,828
	ctx.r8.s64 = ctx.r1.s64 + 828;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r1,255
	ctx.r10.s64 = ctx.r1.s64 + 255;
	// stw r3,1780(r1)
	REX_STORE_U32(ctx.r1.u32 + 1780, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r4,r8,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r4.u32);
	// rlwinm r25,r9,31,1,31
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r5.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bne cr6,0x82486828
	if (!ctx.cr6.eq) goto loc_82486828;
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// lwz r9,22264(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// b 0x82486838
	goto loc_82486838;
loc_82486828:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,1480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_82486838:
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,1368(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// mullw r11,r25,r7
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(ctx.r7.s32);
	// lwz r9,224(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 224);
	// lhz r23,74(r31)
	r23.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lwz r4,3780(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 3780);
	// lhz r22,76(r31)
	r22.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r3,3784(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 3784);
	// lwz r29,220(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 220);
	// lwz r6,3776(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 3776);
	// lwz r28,272(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 272);
	// lbz r21,33(r31)
	r21.u64 = REX_LOAD_U8(r31.u32 + 33);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mullw r5,r10,r7
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stb r21,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r21.u8);
	// rlwinm r10,r7,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// sth r10,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r10.u16);
	// mullw r10,r8,r25
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// rlwinm r5,r23,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r20,74(r31)
	r20.u64 = REX_LOAD_U16(r31.u32 + 74);
	// mullw r5,r5,r24
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r24.s32);
	// lhz r19,76(r31)
	r19.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r17,r10,r8
	r17.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r18,r22,31,1,31
	r18.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r10,r18,r24
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r24.s32);
	// add r24,r11,r8
	r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r3,r17,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r20,r20,4
	r20.u64 = __builtin_rotateleft32(r20.u32, 4);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r6,r29
	ctx.r9.u64 = ctx.r6.u64 + r29.u64;
	// rotlwi r11,r19,3
	ctx.r11.u64 = __builtin_rotateleft32(r19.u32, 3);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r5,r24,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + r28.u64;
	// mullw r4,r20,r7
	ctx.r4.s64 = int64_t(r20.s32) * int64_t(ctx.r7.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rotlwi r3,r23,4
	ctx.r3.u64 = __builtin_rotateleft32(r23.u32, 4);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// rotlwi r29,r22,3
	r29.u64 = __builtin_rotateleft32(r22.u32, 3);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r24,r3,r7
	r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mullw r23,r29,r7
	r23.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r27.s32, ctx.xer);
	// bge cr6,0x8248717c
	if (!ctx.cr6.lt) goto loc_8248717C;
	// b 0x8248692c
	goto loc_8248692C;
loc_82486924:
	// lwz r23,116(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8248692C:
	// li r27,0
	r27.s64 = 0;
	// stw r24,8(r30)
	REX_STORE_U32(r30.u32 + 8, r24.u32);
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// sth r27,18(r30)
	REX_STORE_U16(r30.u32 + 18, r27.u16);
	// ble cr6,0x82486b94
	if (!ctx.cr6.gt) goto loc_82486B94;
loc_82486944:
	// rlwinm r11,r21,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x4;
	// clrlwi r9,r21,24
	ctx.r9.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824869d0
	if (ctx.cr6.eq) goto loc_824869D0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824869d0
	if (!ctx.cr6.eq) goto loc_824869D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lwz r8,352(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r7,r9,0,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, r29.u32);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, r29.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, r29.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// lwz r4,348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r29,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, r29.u32);
	// b 0x824869d4
	goto loc_824869D4;
loc_824869D0:
	// li r29,0
	r29.s64 = 0;
loc_824869D4:
	// srawi r11,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r11.s64 = r29.s32 >> 2;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r9,r29,140
	ctx.r9.s64 = r29.s64 + 140;
	// lwz r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lwzx r10,r5,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r30.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r28,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r28.s64 = r29.s32 >> 2;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r8,r28,45
	ctx.r8.s64 = r28.s64 + 45;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r6,5100(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 5100);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// lwz r9,1364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1364);
	// lhzx r8,r5,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + r31.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ae2e8
	ctx.lr = 0x82486A48;
	sub_823AE2E8(ctx, base);
	// lbz r9,33(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 33);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82486b14
	if (ctx.cr6.eq) goto loc_82486B14;
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,54(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 54);
	// addi r7,r29,146
	ctx.r7.s64 = r29.s64 + 146;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// clrlwi r7,r28,16
	ctx.r7.u64 = r28.u32 & 0xFFFF;
	// sraw r6,r4,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r6.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r10,r6,1,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFF0;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,32(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// stdux r7,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,40(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,48(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 48);
	// stdux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,56(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 56);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,64(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 64);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 72);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,80(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 80);
	// stdux r7,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,88(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 88);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,96(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 96);
	// stdux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 104);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,112(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 112);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r10,120(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 120);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_82486B14:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// blt cr6,0x824869d4
	if (ctx.cr6.lt) goto loc_824869D4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82486b38
	if (ctx.cr6.eq) goto loc_82486B38;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82486B38:
	// lhz r10,18(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 18);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r7,24
	ctx.r5.s64 = ctx.r7.s64 + 24;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r21,80(r1)
	r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// stw r4,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// blt cr6,0x82486944
	if (ctx.cr6.lt) goto loc_82486944;
loc_82486B94:
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// clrlwi r9,r21,31
	ctx.r9.u64 = r21.u32 & 0x1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r8,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r8.u16);
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// lhz r19,74(r31)
	r19.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lhz r15,76(r31)
	r15.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rotlwi r11,r15,3
	ctx.r11.u64 = __builtin_rotateleft32(r15.u32, 3);
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + r23.u64;
	// rotlwi r11,r19,4
	ctx.r11.u64 = __builtin_rotateleft32(r19.u32, 4);
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// beq cr6,0x82486f64
	if (ctx.cr6.eq) goto loc_82486F64;
	// lhz r28,50(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r9,r28,1
	ctx.r9.u64 = __builtin_rotateleft32(r28.u32, 1);
	// lwz r6,1304(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r7,348(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 348);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// srawi r16,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r16.s64 = r28.s32 >> 1;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// or r14,r29,r6
	r14.u64 = r29.u64 | ctx.r6.u64;
	// rotlwi r18,r28,2
	r18.u64 = __builtin_rotateleft32(r28.u32, 2);
	// rotlwi r20,r28,3
	r20.u64 = __builtin_rotateleft32(r28.u32, 3);
	// add r27,r8,r7
	r27.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r17,r10,r9
	r17.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82486cc4
	if (!ctx.cr6.gt) goto loc_82486CC4;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// li r29,16
	r29.s64 = 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r27,4
	r25.s64 = r27.s64 + 4;
	// add r24,r10,r27
	r24.u64 = ctx.r10.u64 + r27.u64;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
loc_82486C58:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486c80
	if (!ctx.cr6.eq) goto loc_82486C80;
	// lwz r11,-4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486c80
	if (!ctx.cr6.eq) goto loc_82486C80;
	// lwz r11,1328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823797f0
	ctx.lr = 0x82486C80;
	sub_823797F0(ctx, base);
loc_82486C80:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486ca8
	if (!ctx.cr6.eq) goto loc_82486CA8;
	// lwz r11,-4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486ca8
	if (!ctx.cr6.eq) goto loc_82486CA8;
	// lwz r11,1336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823797f0
	ctx.lr = 0x82486CA8;
	sub_823797F0(ctx, base);
loc_82486CA8:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82486c58
	if (!ctx.cr0.eq) goto loc_82486C58;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_82486CC4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// ble cr6,0x82486d28
	if (!ctx.cr6.gt) goto loc_82486D28;
	// li r29,16
	r29.s64 = 16;
	// addi r26,r17,4
	r26.s64 = r17.s64 + 4;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_82486CD8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486d10
	if (!ctx.cr6.eq) goto loc_82486D10;
	// lwz r11,-4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -4);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82486d10
	if (!ctx.cr6.eq) goto loc_82486D10;
	// lwz r11,1340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x823797f0
	ctx.lr = 0x82486D00;
	sub_823797F0(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x823797f0
	ctx.lr = 0x82486D10;
	sub_823797F0(ctx, base);
loc_82486D10:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82486cd8
	if (!ctx.cr0.eq) goto loc_82486CD8;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_82486D28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82486e2c
	if (!ctx.cr6.gt) goto loc_82486E2C;
	// lwz r26,104(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	r29.s64 = 0;
	// mr r24,r27
	r24.u64 = r27.u64;
	// add r25,r10,r26
	r25.u64 = ctx.r10.u64 + r26.u64;
	// add r23,r11,r27
	r23.u64 = ctx.r11.u64 + r27.u64;
	// subf r21,r11,r27
	r21.u64 = r27.u64 - ctx.r11.u64;
	// mr r22,r28
	r22.u64 = r28.u64;
loc_82486D54:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82486d6c
	if (!ctx.cr6.eq) goto loc_82486D6C;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x82486d70
	if (ctx.cr6.eq) goto loc_82486D70;
loc_82486D6C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82486D70:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r27,r6,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bne cr6,0x82486da0
	if (!ctx.cr6.eq) goto loc_82486DA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82486dd0
	if (ctx.cr6.eq) goto loc_82486DD0;
loc_82486DA0:
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x82486DC8;
	sub_82379A30(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82486dd8
	if (!ctx.cr6.eq) goto loc_82486DD8;
loc_82486DD0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82486e04
	if (ctx.cr6.eq) goto loc_82486E04;
loc_82486DD8:
	// lwz r4,1336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x82486E04;
	sub_82379A30(ctx, base);
loc_82486E04:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82486d54
	if (!ctx.cr0.eq) goto loc_82486D54;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_82486E2C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x82486f08
	if (!ctx.cr6.gt) goto loc_82486F08;
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r16,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,0
	r29.s64 = 0;
	// mr r24,r17
	r24.u64 = r17.u64;
	// subf r22,r11,r17
	r22.u64 = r17.u64 - ctx.r11.u64;
	// subf r25,r26,r10
	r25.u64 = ctx.r10.u64 - r26.u64;
	// mr r23,r16
	r23.u64 = r16.u64;
loc_82486E54:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82486e6c
	if (!ctx.cr6.eq) goto loc_82486E6C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x82486e70
	if (ctx.cr6.eq) goto loc_82486E70;
loc_82486E6C:
	// li r28,0
	r28.s64 = 0;
loc_82486E70:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x82486e90
	if (!ctx.cr6.eq) goto loc_82486E90;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82486ee8
	if (ctx.cr6.eq) goto loc_82486EE8;
loc_82486E90:
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// add r6,r25,r26
	ctx.r6.u64 = r25.u64 + r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x82486EBC;
	sub_82379A30(ctx, base);
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x82486EE8;
	sub_82379A30(ctx, base);
loc_82486EE8:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82486e54
	if (!ctx.cr0.eq) goto loc_82486E54;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,1780(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
loc_82486F08:
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// lwz r10,1344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// lwz r7,1332(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,1340(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// lwz r3,1336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// stw r11,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lbz r21,80(r1)
	r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r10.u32);
	// stw r7,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r7.u32);
	// stw r4,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r4.u32);
	// stw r3,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r3.u32);
	// stw r8,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r8.u32);
	// stw r4,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r4.u32);
	// stw r9,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r9.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// stw r6,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r6.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
loc_82486F64:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lwz r8,1304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lhz r22,76(r31)
	r22.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r11,r22,3
	ctx.r11.u64 = __builtin_rotateleft32(r22.u32, 3);
	// lhz r24,74(r31)
	r24.u64 = REX_LOAD_U16(r31.u32 + 74);
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r18,r11,r6
	r18.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r19,r11,r4
	r19.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// rotlwi r10,r24,4
	ctx.r10.u64 = __builtin_rotateleft32(r24.u32, 4);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// add r28,r10,r3
	r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82487164
	if (ctx.cr6.eq) goto loc_82487164;
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r26.s64 = ctx.r11.s32 >> 1;
	// lwz r7,348(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 348);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r21,r11,2
	r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r23,r11,3
	r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r20,r10,r9
	r20.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8248706c
	if (!ctx.cr6.gt) goto loc_8248706C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// subf r25,r10,r8
	r25.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8248701C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x82487054
	if (!ctx.cr6.eq) goto loc_82487054;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x82487054;
	sub_82379A30(ctx, base);
loc_82487054:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x8248701c
	if (!ctx.cr0.eq) goto loc_8248701C;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8248706C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82487104
	if (!ctx.cr6.gt) goto loc_82487104;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r19
	r28.u64 = r19.u64;
	// subf r25,r11,r20
	r25.u64 = r20.u64 - ctx.r11.u64;
	// subf r27,r19,r18
	r27.u64 = r18.u64 - r19.u64;
loc_82487088:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x824870ec
	if (!ctx.cr6.eq) goto loc_824870EC;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// add r6,r28,r27
	ctx.r6.u64 = r28.u64 + r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x824870C0;
	sub_82379A30(ctx, base);
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82379a30
	ctx.lr = 0x824870EC;
	sub_82379A30(ctx, base);
loc_824870EC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82487088
	if (!ctx.cr0.eq) goto loc_82487088;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82487104:
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// lwz r9,1332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r7,1344(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r8,1336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,1340(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r9,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r9.u32);
	// stw r11,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r11.u32);
	// lwz r11,1336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// lwz r26,1780(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1780);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r7.u32);
	// stw r4,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r4.u32);
	// stw r8,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r8.u32);
	// stw r5,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r5.u32);
	// stw r4,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r4.u32);
	// stw r10,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r10.u32);
	// stw r3,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r3.u32);
	// stw r6,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r6.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
loc_82487164:
	// lwz r10,1820(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1820);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lbz r21,80(r1)
	r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82486924
	if (ctx.cr6.lt) goto loc_82486924;
loc_8248717C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r26)
	REX_STORE_U32(r26.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B2328) {
	REX_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x824B2330;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v60,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v1,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v10
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v26,v29,v9
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v28,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824b24d8
	if (!ctx.cr6.eq) goto loc_824B24D8;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	r28.s64 = ctx.r1.s64 + 416;
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
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vmrghb v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v9,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v30,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v29,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v28,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v26,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v25,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v24,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v23,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v22,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824b24dc
	goto loc_824B24DC;
loc_824B24D8:
	// blt cr6,0x824b2554
	if (ctx.cr6.lt) goto loc_824B2554;
loc_824B24DC:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b2554
	if (!ctx.cr6.gt) goto loc_824B2554;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r27,r9,r4
	r27.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r31,-48
	ctx.r10.s64 = r31.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B2510:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r6,1
	r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + r29.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r6,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824b2510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B2510;
loc_824B2554:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0fd8
	ctx.lr = 0x824B2568;
	sub_824B0FD8(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824D18C0) {
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
	// addi r11,r31,8280
	ctx.r11.s64 = r31.s64 + 8280;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D18E0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21628
	ctx.r11.s64 = ctx.r11.s64 + 21628;
	// stw r11,8280(r31)
	REX_STORE_U32(r31.u32 + 8280, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1B00) {
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
	// addi r11,r31,8644
	ctx.r11.s64 = r31.s64 + 8644;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1B20;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21700
	ctx.r11.s64 = ctx.r11.s64 + 21700;
	// stw r11,8644(r31)
	REX_STORE_U32(r31.u32 + 8644, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1D50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27144
	ctx.r9.s64 = ctx.r11.s64 + -27144;
	// addi r11,r10,-23272
	ctx.r11.s64 = ctx.r10.s64 + -23272;
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

DEFINE_REX_FUNC(sub_824D1EB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26880
	ctx.r9.s64 = ctx.r11.s64 + -26880;
	// addi r11,r10,-22804
	ctx.r11.s64 = ctx.r10.s64 + -22804;
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

DEFINE_REX_FUNC(sub_824D2088) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-22040
	ctx.r10.s64 = ctx.r10.s64 + -22040;
	// lwz r11,-27032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -27032);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2358) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,20172
	ctx.r11.s64 = ctx.r11.s64 + 20172;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r3,r9,14408
	ctx.r3.s64 = ctx.r9.s64 + 14408;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2990) {
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
	// li r31,1
	r31.s64 = 1;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
loc_824D29B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d4e38
	ctx.lr = 0x824D29B8;
	sub_821D4E38(ctx, base);
	// addis r30,r30,1
	r30.s64 = r30.s64 + 65536;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,3696
	r30.s64 = r30.s64 + 3696;
	// bge 0x824d29b0
	if (!ctx.cr0.lt) goto loc_824D29B0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14568
	ctx.r3.s64 = ctx.r11.s64 + 14568;
	// bl 0x822d5848
	ctx.lr = 0x824D29D4;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D30D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3150) {
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
	// addi r11,r11,30084
	ctx.r11.s64 = ctx.r11.s64 + 30084;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824d440c
	ctx.lr = 0x824D316C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// bl 0x822d5848
	ctx.lr = 0x824D3178;
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

DEFINE_REX_FUNC(sub_824D3750) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D37C0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3808) {
	REX_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20280
	ctx.r11.s64 = ctx.r11.s64 + 20280;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D3824:
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
	// bdnz 0x824d3824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D3824;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A80) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3AA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25260
	ctx.r3.s64 = ctx.r11.s64 + 25260;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3AF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25508
	ctx.r3.s64 = ctx.r11.s64 + 25508;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25836
	ctx.r3.s64 = ctx.r11.s64 + 25836;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26300
	ctx.r3.s64 = ctx.r11.s64 + 26300;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29784
	ctx.r3.s64 = ctx.r11.s64 + 29784;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3EE0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200020e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4030) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000266
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4190) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d2
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4310) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010196
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4490) {
	REX_FUNC_PROLOGUE();
	// .long 0x201007b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4610) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101d3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4790) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000316
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4910) {
	REX_FUNC_PROLOGUE();
	// .long 0x20003d1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A90) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010147
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4C10) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

