#include "soulcalibur2_funcs.60.h"

DEFINE_REX_FUNC(sub_820E2380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x820E2388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x820e23bc
	if (ctx.cr0.lt) goto loc_820E23BC;
loc_820E23A4:
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x820E23B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x820e23a4
	if (!ctx.cr0.lt) goto loc_820E23A4;
loc_820E23BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820E6EE0) {
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
	ctx.lr = 0x820E6EE8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
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
	ctx.lr = 0x820E6F38;
	sub_822D5598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e6998
	ctx.lr = 0x820E6F44;
	sub_820E6998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820e6fb4
	if (!ctx.cr0.gt) goto loc_820E6FB4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32177
	r27.s64 = -2108751872;
	// addi r28,r11,15980
	r28.s64 = ctx.r11.s64 + 15980;
loc_820E6F64:
	// lwzu r30,4(r29)
	ea = 4 + r29.u32;
	r30.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x820E6F78;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x820E6F9C;
	sub_821EACB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x820E6FA4;
	sub_821EACB0(ctx, base);
	// lfs f0,-700(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bne 0x820e6f64
	if (!ctx.cr0.eq) goto loc_820E6F64;
loc_820E6FB4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,8480
	ctx.r1.s64 = ctx.r1.s64 + 8480;
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820EDD88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820EDD90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820edeb4
	if (!ctx.cr6.eq) goto loc_820EDEB4;
	// bl 0x82135998
	ctx.lr = 0x820EDDAC;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820edeb4
	if (ctx.cr0.eq) goto loc_820EDEB4;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820edec4
	if (ctx.cr6.eq) goto loc_820EDEC4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820edec4
	if (ctx.cr6.eq) goto loc_820EDEC4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r30,r11,-32480
	r30.s64 = ctx.r11.s64 + -32480;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eddec
	if (!ctx.cr6.eq) goto loc_820EDDEC;
	// bl 0x820edcc0
	ctx.lr = 0x820EDDE8;
	sub_820EDCC0(ctx, base);
	// b 0x820edec4
	goto loc_820EDEC4;
loc_820EDDEC:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EDE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f3,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16832);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200710
	ctx.lr = 0x820EDE24;
	sub_82200710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820EDE30;
	sub_82200818(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EDE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,2364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16828(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16828);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f11.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ede84
	if (!ctx.cr6.lt) goto loc_820EDE84;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EDE84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820edec4
	if (ctx.cr6.lt) goto loc_820EDEC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x820edebc
	goto loc_820EDEBC;
loc_820EDEB4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
loc_820EDEBC:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_820EDEC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820F6410) {
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
	ctx.lr = 0x820F6418;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f28
	ctx.lr = 0x820F6420;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// lwz r8,8336(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8336);
	// addi r5,r6,-27152
	ctx.r5.s64 = ctx.r6.s64 + -27152;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,9
	r25.s64 = 9;
	// lwz r11,-27152(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -27152);
	// li r19,3
	r19.s64 = 3;
	// lbz r10,175(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 175);
	// li r23,7
	r23.s64 = 7;
	// stw r30,9360(r3)
	REX_STORE_U32(ctx.r3.u32 + 9360, r30.u32);
	// mr r20,r30
	r20.u64 = r30.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r11,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r11.u32);
	// lwz r11,80(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// stw r10,-27152(r6)
	REX_STORE_U32(ctx.r6.u32 + -27152, ctx.r10.u32);
	// beq cr6,0x820f6490
	if (ctx.cr6.eq) goto loc_820F6490;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// beq cr6,0x820f6488
	if (ctx.cr6.eq) goto loc_820F6488;
	// cmplwi cr6,r11,53
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53, ctx.xer);
	// bne cr6,0x820f6494
	if (!ctx.cr6.eq) goto loc_820F6494;
	// stw r25,9360(r3)
	REX_STORE_U32(ctx.r3.u32 + 9360, r25.u32);
	// b 0x820f6494
	goto loc_820F6494;
loc_820F6488:
	// stw r23,9360(r31)
	REX_STORE_U32(r31.u32 + 9360, r23.u32);
	// b 0x820f6494
	goto loc_820F6494;
loc_820F6490:
	// stw r19,9360(r31)
	REX_STORE_U32(r31.u32 + 9360, r19.u32);
loc_820F6494:
	// lwz r11,9360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9360);
	// li r29,13
	r29.s64 = 13;
	// add r26,r11,r8
	r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r26,13
	ctx.cr6.compare<int32_t>(r26.s32, 13, ctx.xer);
	// ble cr6,0x820f64ac
	if (!ctx.cr6.gt) goto loc_820F64AC;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_820F64AC:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r22,r11,432
	r22.s64 = ctx.r11.s64 + 432;
	// addi r10,r10,-8136
	ctx.r10.s64 = ctx.r10.s64 + -8136;
	// lha r8,88(r8)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 88));
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r6,30(r22)
	ctx.r6.u64 = REX_LOAD_U16(r22.u32 + 30);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi cr6,r6,14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 14, ctx.xer);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x820f64e4
	if (!ctx.cr6.eq) goto loc_820F64E4;
	// addi r24,r31,9440
	r24.s64 = r31.s64 + 9440;
loc_820F64E4:
	// lwz r11,8428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8428);
	// li r21,1
	r21.s64 = 1;
	// lwz r10,8416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8428(r31)
	REX_STORE_U32(r31.u32 + 8428, ctx.r11.u32);
	// stw r10,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, ctx.r10.u32);
	// lbz r11,174(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f6528
	if (ctx.cr0.eq) goto loc_820F6528;
	// lbz r11,175(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f651c
	if (!ctx.cr0.eq) goto loc_820F651C;
	// stw r30,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, r30.u32);
loc_820F651C:
	// li r11,200
	ctx.r11.s64 = 200;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stw r11,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, ctx.r11.u32);
loc_820F6528:
	// lwz r11,8416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8416);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x820f6550
	if (!ctx.cr6.gt) goto loc_820F6550;
	// lwz r11,8480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8480);
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820f6550
	if (!ctx.cr6.eq) goto loc_820F6550;
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
loc_820F6550:
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6574
	if (ctx.cr0.eq) goto loc_820F6574;
	// lwz r11,8452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6574
	if (!ctx.cr6.eq) goto loc_820F6574;
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
loc_820F6574:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8452);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f26,19796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19796);
	f26.f64 = double(temp.f32);
	// lfs f27,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	f27.f64 = double(temp.f32);
	// beq cr6,0x820f6628
	if (ctx.cr6.eq) goto loc_820F6628;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820f65b0
	if (!ctx.cr6.eq) goto loc_820F65B0;
	// bl 0x820fed40
	ctx.lr = 0x820F659C;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// stfs f0,8248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8248, temp.u32);
	// bl 0x820fed40
	ctx.lr = 0x820F65A8;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// b 0x820f65c4
	goto loc_820F65C4;
loc_820F65B0:
	// bl 0x820fed40
	ctx.lr = 0x820F65B4;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f26.f64));
	// stfs f0,8248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8248, temp.u32);
	// bl 0x820fed40
	ctx.lr = 0x820F65C0;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f26.f64));
loc_820F65C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8252, temp.u32);
	// lbz r11,175(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f65dc
	if (ctx.cr0.eq) goto loc_820F65DC;
	// mr r20,r21
	r20.u64 = r21.u64;
loc_820F65DC:
	// lwz r11,8412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6608
	if (!ctx.cr6.eq) goto loc_820F6608;
	// lwz r11,8480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8480);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820f6608
	if (ctx.cr6.eq) goto loc_820F6608;
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
loc_820F6608:
	// stw r30,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,8492(r31)
	REX_STORE_U32(r31.u32 + 8492, r30.u32);
	// stw r30,8496(r31)
	REX_STORE_U32(r31.u32 + 8496, r30.u32);
	// stw r30,8500(r31)
	REX_STORE_U32(r31.u32 + 8500, r30.u32);
	// stw r30,8504(r31)
	REX_STORE_U32(r31.u32 + 8504, r30.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F6624;
	sub_820F4D28(ctx, base);
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
loc_820F6628:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8488(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8488);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f25,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f25.f64 = double(temp.f32);
	// lfs f24,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	f24.f64 = double(temp.f32);
	// lfs f28,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f28.f64 = double(temp.f32);
	// beq cr6,0x820f6790
	if (ctx.cr6.eq) goto loc_820F6790;
	// lwz r11,8452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6790
	if (!ctx.cr6.eq) goto loc_820F6790;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x820f6790
	if (!ctx.cr6.eq) goto loc_820F6790;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r10,630(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x820f667c
	if (!ctx.cr6.eq) goto loc_820F667C;
	// lbz r11,195(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 195);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f6da4
	if (ctx.cr0.eq) goto loc_820F6DA4;
loc_820F667C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x820f676c
	if (ctx.cr6.gt) goto loc_820F676C;
	// bl 0x820fed40
	ctx.lr = 0x820F6690;
	sub_820FED40(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// mulli r10,r26,72
	ctx.r10.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(72));
	// addi r11,r11,2744
	ctx.r11.s64 = ctx.r11.s64 + 2744;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f676c
	if (!ctx.cr6.lt) goto loc_820F676C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addic. r29,r3,8120
	ctx.xer.ca = ctx.r3.u32 > 4294959175;
	r29.s64 = ctx.r3.s64 + 8120;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x820f66fc
	if (ctx.cr0.eq) goto loc_820F66FC;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821a3f70
	ctx.lr = 0x820F66C4;
	sub_821A3F70(ctx, base);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8380(r31)
	REX_STORE_U32(r31.u32 + 8380, r30.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,8532(r31)
	REX_STORE_U32(r31.u32 + 8532, r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8404(r31)
	REX_STORE_U32(r31.u32 + 8404, ctx.r11.u32);
loc_820F66FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8404(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8404);
	// bl 0x820f4240
	ctx.lr = 0x820F6708;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x820f6750
	if (!ctx.cr0.gt) goto loc_820F6750;
	// stw r21,8532(r31)
	REX_STORE_U32(r31.u32 + 8532, r21.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f93d0
	ctx.lr = 0x820F6720;
	sub_820F93D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f93b0
	ctx.lr = 0x820F672C;
	sub_820F93B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9390
	ctx.lr = 0x820F6734;
	sub_820F9390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820F673C;
	sub_820FBB18(ctx, base);
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// b 0x820f6764
	goto loc_820F6764;
loc_820F6750:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8404(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8404);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20500
	ctx.r4.s64 = ctx.r11.s64 + 20500;
	// bl 0x822d55f8
	ctx.lr = 0x820F6764;
	sub_822D55F8(ctx, base);
loc_820F6764:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F676C:
	// lwz r11,8480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8480);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820f6780
	if (ctx.cr6.eq) goto loc_820F6780;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x820f6790
	if (!ctx.cr6.eq) goto loc_820F6790;
loc_820F6780:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,195(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 195);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f6da4
	if (!ctx.cr0.eq) goto loc_820F6DA4;
loc_820F6790:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r10,90(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 90);
	// lfs f30,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x820f69fc
	if (!ctx.cr6.eq) goto loc_820F69FC;
	// lwz r11,8480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8480);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820f69fc
	if (ctx.cr6.eq) goto loc_820F69FC;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(r26.s32, 7, ctx.xer);
	// bgt cr6,0x820f67cc
	if (ctx.cr6.gt) goto loc_820F67CC;
	// lfs f0,8248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f69fc
	if (!ctx.cr6.lt) goto loc_820F69FC;
loc_820F67CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r11,8120
	ctx.xer.ca = ctx.r11.u32 > 4294959175;
	ctx.r11.s64 = ctx.r11.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f69fc
	if (ctx.cr0.eq) goto loc_820F69FC;
	// lhz r10,630(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// lfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x820f6810
	if (!ctx.cr6.eq) goto loc_820F6810;
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x820f6810
	if (!ctx.cr6.eq) goto loc_820F6810;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4d28
	ctx.lr = 0x820F6808;
	sub_820F4D28(ctx, base);
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
	// stw r3,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r3.u32);
loc_820F6810:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,630(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x820f686c
	if (!ctx.cr6.eq) goto loc_820F686C;
	// fcmpu cr6,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f24.f64);
	// blt cr6,0x820f6854
	if (ctx.cr6.lt) goto loc_820F6854;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20496(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820f6854
	if (!ctx.cr6.lt) goto loc_820F6854;
loc_820F6838:
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r10.u32);
	// b 0x820f6c6c
	goto loc_820F6C6C;
loc_820F6854:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x820f686c
	if (!ctx.cr6.eq) goto loc_820F686C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x820f6890
	if (ctx.cr6.lt) goto loc_820F6890;
loc_820F686C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// lfs f0,16172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f6888
	if (!ctx.cr6.eq) goto loc_820F6888;
	// lfs f13,5732(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820f6890
	if (!ctx.cr6.gt) goto loc_820F6890;
loc_820F6888:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x820f68a4
	if (!ctx.cr6.eq) goto loc_820F68A4;
loc_820F6890:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
loc_820F6898:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820F689C:
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F68A4:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x820f68b8
	if (!ctx.cr6.eq) goto loc_820F68B8;
	// lfs f13,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820f6838
	if (ctx.cr6.gt) goto loc_820F6838;
loc_820F68B8:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820f68ec
	if (!ctx.cr6.eq) goto loc_820F68EC;
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x820f68e4
	if (!ctx.cr6.gt) goto loc_820F68E4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f68e4
	if (!ctx.cr0.eq) goto loc_820F68E4;
	// fcmpu cr6,f31,f24
	ctx.cr6.compare(f31.f64, f24.f64);
	// beq cr6,0x820f6838
	if (ctx.cr6.eq) goto loc_820F6838;
loc_820F68E4:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x820f6890
	if (ctx.cr6.eq) goto loc_820F6890;
loc_820F68EC:
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x820f6918
	if (!ctx.cr6.eq) goto loc_820F6918;
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x820f6910
	if (!ctx.cr6.gt) goto loc_820F6910;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f6838
	if (ctx.cr0.eq) goto loc_820F6838;
loc_820F6910:
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x820f6890
	if (ctx.cr6.eq) goto loc_820F6890;
loc_820F6918:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x820f6950
	if (!ctx.cr6.eq) goto loc_820F6950;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820f6950
	if (!ctx.cr6.lt) goto loc_820F6950;
	// lfs f0,5732(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x820f6890
	if (!ctx.cr6.gt) goto loc_820F6890;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,175(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f6890
	if (!ctx.cr0.eq) goto loc_820F6890;
	// b 0x820f6838
	goto loc_820F6838;
loc_820F6950:
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x820f697c
	if (!ctx.cr6.eq) goto loc_820F697C;
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x820f6974
	if (!ctx.cr6.gt) goto loc_820F6974;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f6838
	if (ctx.cr0.eq) goto loc_820F6838;
loc_820F6974:
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820f6890
	if (ctx.cr6.eq) goto loc_820F6890;
loc_820F697C:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f698c
	if (ctx.cr6.eq) goto loc_820F698C;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x820f69a8
	if (!ctx.cr6.eq) goto loc_820F69A8;
loc_820F698C:
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x820f69a8
	if (!ctx.cr6.gt) goto loc_820F69A8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f6838
	if (ctx.cr0.eq) goto loc_820F6838;
loc_820F69A8:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f6890
	if (ctx.cr6.eq) goto loc_820F6890;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x820f6890
	if (ctx.cr6.eq) goto loc_820F6890;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// lfs f0,20484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820f69fc
	if (!ctx.cr6.eq) goto loc_820F69FC;
	// lfs f13,5732(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x820f69ec
	if (!ctx.cr6.gt) goto loc_820F69EC;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820f69ec
	if (!ctx.cr6.lt) goto loc_820F69EC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f6838
	if (ctx.cr0.eq) goto loc_820F6838;
loc_820F69EC:
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x820f69fc
	if (!ctx.cr6.eq) goto loc_820F69FC;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x820f6890
	if (ctx.cr6.lt) goto loc_820F6890;
loc_820F69FC:
	// lha r9,90(r4)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 90));
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bne cr6,0x820f6adc
	if (!ctx.cr6.eq) goto loc_820F6ADC;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(r26.s32, 7, ctx.xer);
	// bge cr6,0x820f6a20
	if (!ctx.cr6.lt) goto loc_820F6A20;
	// lfs f0,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f6adc
	if (!ctx.cr6.lt) goto loc_820F6ADC;
loc_820F6A20:
	// addic. r11,r4,8120
	ctx.xer.ca = ctx.r4.u32 > 4294959175;
	ctx.r11.s64 = ctx.r4.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6adc
	if (ctx.cr0.eq) goto loc_820F6ADC;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,630(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x820f6a58
	if (!ctx.cr6.eq) goto loc_820F6A58;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x820f6a58
	if (!ctx.cr6.eq) goto loc_820F6A58;
	// lfs f0,5732(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x820f6a84
	if (ctx.cr6.lt) goto loc_820F6A84;
loc_820F6A58:
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f6ac0
	if (!ctx.cr6.eq) goto loc_820F6AC0;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x820f6ac0
	if (!ctx.cr6.eq) goto loc_820F6AC0;
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x820f6ac0
	if (!ctx.cr6.lt) goto loc_820F6AC0;
loc_820F6A74:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820fed80
	ctx.lr = 0x820F6A7C;
	sub_820FED80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6aa4
	if (ctx.cr0.eq) goto loc_820F6AA4;
loc_820F6A84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,170(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 170);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f6aa4
	if (!ctx.cr0.eq) goto loc_820F6AA4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_820F6A98:
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r11.u32);
	// b 0x820f6c6c
	goto loc_820F6C6C;
loc_820F6AA4:
	// stw r30,8428(r31)
	REX_STORE_U32(r31.u32 + 8428, r30.u32);
loc_820F6AA8:
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820F6AB4:
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
loc_820F6AB8:
	// stw r10,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r10.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F6AC0:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f6adc
	if (!ctx.cr6.eq) goto loc_820F6ADC;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// bne cr6,0x820f6adc
	if (!ctx.cr6.eq) goto loc_820F6ADC;
	// lfs f0,5732(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x820f6a74
	if (ctx.cr6.lt) goto loc_820F6A74;
loc_820F6ADC:
	// cmpwi cr6,r9,27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 27, ctx.xer);
	// bne cr6,0x820f6b7c
	if (!ctx.cr6.eq) goto loc_820F6B7C;
	// lfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f6afc
	if (ctx.cr6.lt) goto loc_820F6AFC;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// ble cr6,0x820f6b7c
	if (!ctx.cr6.gt) goto loc_820F6B7C;
loc_820F6AFC:
	// addic. r11,r4,8120
	ctx.xer.ca = ctx.r4.u32 > 4294959175;
	ctx.r11.s64 = ctx.r4.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// beq 0x820f6b18
	if (ctx.cr0.eq) goto loc_820F6B18;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_820F6B18:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,5732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16660(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16660);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f6b7c
	if (!ctx.cr6.lt) goto loc_820F6B7C;
	// lhz r11,630(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x820f6b64
	if (!ctx.cr6.eq) goto loc_820F6B64;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bge cr6,0x820f6b64
	if (!ctx.cr6.lt) goto loc_820F6B64;
	// li r10,20
	ctx.r10.s64 = 20;
loc_820F6B48:
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r30,8428(r31)
	REX_STORE_U32(r31.u32 + 8428, r30.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r10,8504(r31)
	REX_STORE_U32(r31.u32 + 8504, ctx.r10.u32);
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// b 0x820f6898
	goto loc_820F6898;
loc_820F6B64:
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x820f6b7c
	if (!ctx.cr6.eq) goto loc_820F6B7C;
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// bge cr6,0x820f6b7c
	if (!ctx.cr6.lt) goto loc_820F6B7C;
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x820f6b48
	goto loc_820F6B48;
loc_820F6B7C:
	// cmpwi cr6,r9,29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 29, ctx.xer);
	// bne cr6,0x820f6da4
	if (!ctx.cr6.eq) goto loc_820F6DA4;
	// lhz r11,630(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x820f6b98
	if (ctx.cr6.eq) goto loc_820F6B98;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x820f6cf8
	if (!ctx.cr6.eq) goto loc_820F6CF8;
loc_820F6B98:
	// lwz r11,8488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6cf8
	if (!ctx.cr6.eq) goto loc_820F6CF8;
	// lfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,8152(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8152);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f6bc0
	if (ctx.cr6.lt) goto loc_820F6BC0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// ble cr6,0x820f6cf8
	if (!ctx.cr6.gt) goto loc_820F6CF8;
loc_820F6BC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9310
	ctx.lr = 0x820F6BC8;
	sub_820F9310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f6cf8
	if (!ctx.cr0.eq) goto loc_820F6CF8;
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f6c44
	if (ctx.cr6.eq) goto loc_820F6C44;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r11,586(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 586);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x820f6c44
	if (ctx.cr6.eq) goto loc_820F6C44;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x820f6c44
	if (ctx.cr6.eq) goto loc_820F6C44;
	// lhz r11,588(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 588);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f6c44
	if (ctx.cr6.eq) goto loc_820F6C44;
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F6C14;
	sub_820F4D28(ctx, base);
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r3.u32);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// stw r10,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r10.u32);
	// stw r23,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r23.u32);
	// stw r11,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r11.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F6C44:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,630(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820f6ca8
	if (!ctx.cr6.eq) goto loc_820F6CA8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x820f6c80
	if (!ctx.cr6.gt) goto loc_820F6C80;
loc_820F6C64:
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
loc_820F6C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F6C6C:
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
loc_820F6C70:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f74
	ctx.lr = 0x820F6C7C;
	// b 0x822d4eb4
	return;
loc_820F6C80:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820f6ca8
	if (!ctx.cr6.eq) goto loc_820F6CA8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,15968(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15968);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x820f6ca8
	if (!ctx.cr6.gt) goto loc_820F6CA8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,5732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x820f6c64
	if (ctx.cr6.lt) goto loc_820F6C64;
loc_820F6CA8:
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x820f6ce8
	if (!ctx.cr6.eq) goto loc_820F6CE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x820f6c64
	if (ctx.cr6.gt) goto loc_820F6C64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x820f6ce8
	if (!ctx.cr6.eq) goto loc_820F6CE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x820f6ce8
	if (!ctx.cr6.gt) goto loc_820F6CE8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,5732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x820f6c64
	if (ctx.cr6.lt) goto loc_820F6C64;
loc_820F6CE8:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
	// stw r19,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r19.u32);
	// b 0x820f6898
	goto loc_820F6898;
loc_820F6CF8:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,630(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 630);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x820f6d10
	if (ctx.cr6.eq) goto loc_820F6D10;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x820f6da4
	if (!ctx.cr6.eq) goto loc_820F6DA4;
loc_820F6D10:
	// lwz r11,8488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6da4
	if (!ctx.cr6.eq) goto loc_820F6DA4;
	// lfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f6da4
	if (!ctx.cr6.lt) goto loc_820F6DA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9310
	ctx.lr = 0x820F6D34;
	sub_820F9310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f6da4
	if (!ctx.cr0.eq) goto loc_820F6DA4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x820f6d94
	if (ctx.cr6.eq) goto loc_820F6D94;
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f6d94
	if (ctx.cr6.eq) goto loc_820F6D94;
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F6D6C;
	sub_820F4D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// li r3,7
	ctx.r3.s64 = 7;
loc_820F6D7C:
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// stw r10,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r10.u32);
	// stw r23,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r23.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F6D94:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,630(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x820f6aa4
	if (ctx.cr6.eq) goto loc_820F6AA4;
loc_820F6DA4:
	// lwz r11,8480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f78d0
	if (!ctx.cr6.eq) goto loc_820F78D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f9310
	ctx.lr = 0x820F6DBC;
	sub_820F9310(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,90(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 90);
	// addi r28,r11,8120
	r28.s64 = ctx.r11.s64 + 8120;
	// cmplwi cr6,r9,27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 27, ctx.xer);
	// lwz r29,5780(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
	// lhz r11,592(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 592);
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// beq cr6,0x820f6dfc
	if (ctx.cr6.eq) goto loc_820F6DFC;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x820f6dfc
	if (ctx.cr6.eq) goto loc_820F6DFC;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
loc_820F6DFC:
	// lhz r11,590(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 590);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f6e18
	if (ctx.cr6.eq) goto loc_820F6E18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f6e24
	if (!ctx.cr6.eq) goto loc_820F6E24;
loc_820F6E18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4d28
	ctx.lr = 0x820F6E20;
	sub_820F4D28(ctx, base);
	// stw r3,8508(r31)
	REX_STORE_U32(r31.u32 + 8508, ctx.r3.u32);
loc_820F6E24:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1496
	ctx.r11.s64 = ctx.r11.s64 + 1496;
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f6fd4
	if (!ctx.cr6.lt) goto loc_820F6FD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,592(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 592);
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x820f6ec0
	if (!ctx.cr6.eq) goto loc_820F6EC0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x820f6ec0
	if (!ctx.cr6.eq) goto loc_820F6EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F6E60;
	sub_820F4AB0(ctx, base);
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x820f6e80
	if (ctx.cr6.eq) goto loc_820F6E80;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820f6e80
	if (ctx.cr6.eq) goto loc_820F6E80;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820f716c
	if (!ctx.cr6.eq) goto loc_820F716C;
loc_820F6E80:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r10,586(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 586);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x820f716c
	if (ctx.cr6.eq) goto loc_820F716C;
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f716c
	if (ctx.cr6.eq) goto loc_820F716C;
loc_820F6E9C:
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F6EB0;
	sub_820F4D28(ctx, base);
	// li r10,30
	ctx.r10.s64 = 30;
loc_820F6EB4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820f6d7c
	goto loc_820F6D7C;
loc_820F6EC0:
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x820f6f18
	if (!ctx.cr6.eq) goto loc_820F6F18;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x820f6f18
	if (!ctx.cr6.eq) goto loc_820F6F18;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r9,586(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 586);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// beq cr6,0x820f6eec
	if (ctx.cr6.eq) goto loc_820F6EEC;
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f6e9c
	if (!ctx.cr6.eq) goto loc_820F6E9C;
loc_820F6EEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f6fe8
	if (!ctx.cr6.lt) goto loc_820F6FE8;
	// li r10,20
	ctx.r10.s64 = 20;
loc_820F6F04:
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// stw r30,8428(r31)
	REX_STORE_U32(r31.u32 + 8428, r30.u32);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r10,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r10.u32);
	// b 0x820f6898
	goto loc_820F6898;
loc_820F6F18:
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
	// lwz r11,8500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x820f6f44
	if (ctx.cr6.eq) goto loc_820F6F44;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// beq cr6,0x820f6f44
	if (ctx.cr6.eq) goto loc_820F6F44;
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(r27.s32, 7, ctx.xer);
	// bne cr6,0x820f6fe8
	if (!ctx.cr6.eq) goto loc_820F6FE8;
loc_820F6F44:
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x820f6f60
	if (ctx.cr6.eq) goto loc_820F6F60;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820f6f60
	if (ctx.cr6.eq) goto loc_820F6F60;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820f6fbc
	if (!ctx.cr6.eq) goto loc_820F6FBC;
loc_820F6F60:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r11,586(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 586);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x820f6fbc
	if (ctx.cr6.eq) goto loc_820F6FBC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x820f6fbc
	if (ctx.cr6.eq) goto loc_820F6FBC;
	// lhz r11,588(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 588);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f6fbc
	if (ctx.cr6.eq) goto loc_820F6FBC;
	// lwz r11,8508(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8508);
	// li r10,180
	ctx.r10.s64 = 180;
	// lwz r9,8324(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r21,8500(r31)
	REX_STORE_U32(r31.u32 + 8500, r21.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r9,0,26,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// stw r10,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r10.u32);
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// stw r9,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r9.u32);
	// stw r8,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r8.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F6FBC:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r21,8500(r31)
	REX_STORE_U32(r31.u32 + 8500, r21.u32);
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
loc_820F6FC8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_820F6FCC:
	// stw r11,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r11.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F6FD4:
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// b 0x820f6c64
	goto loc_820F6C64;
loc_820F6FE8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,30(r22)
	ctx.r11.u64 = REX_LOAD_U16(r22.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// bne cr6,0x820f700c
	if (!ctx.cr6.eq) goto loc_820F700C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,53
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53, ctx.xer);
	// beq cr6,0x820f75c4
	if (ctx.cr6.eq) goto loc_820F75C4;
loc_820F700C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8210cd88
	ctx.lr = 0x820F7014;
	sub_8210CD88(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// ble cr6,0x820f75c4
	if (!ctx.cr6.gt) goto loc_820F75C4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,175(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f75c4
	if (!ctx.cr0.eq) goto loc_820F75C4;
	// lhz r11,618(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 618);
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f7044
	if (ctx.cr0.eq) goto loc_820F7044;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
loc_820F7044:
	// lfs f13,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,8252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,630(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 630);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f7068
	if (ctx.cr6.lt) goto loc_820F7068;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// ble cr6,0x820f70e8
	if (!ctx.cr6.gt) goto loc_820F70E8;
loc_820F7068:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x820f70e8
	if (!ctx.cr6.eq) goto loc_820F70E8;
	// lhz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 88);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x820f70e8
	if (!ctx.cr6.eq) goto loc_820F70E8;
	// lhz r8,592(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 592);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x820f70e8
	if (!ctx.cr6.eq) goto loc_820F70E8;
	// li r4,20
	ctx.r4.s64 = 20;
loc_820F708C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4240
	ctx.lr = 0x820F7094;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x820f70cc
	if (!ctx.cr0.gt) goto loc_820F70CC;
loc_820F709C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f93d0
	ctx.lr = 0x820F70A8;
	sub_820F93D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f93b0
	ctx.lr = 0x820F70B4;
	sub_820F93B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9390
	ctx.lr = 0x820F70BC;
	sub_820F9390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820F70C4;
	sub_820FBB18(ctx, base);
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// b 0x820f6c64
	goto loc_820F6C64;
loc_820F70CC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// b 0x820f6ab8
	goto loc_820F6AB8;
loc_820F70E8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f75c4
	if (!ctx.cr6.lt) goto loc_820F75C4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x820f7488
	if (ctx.cr6.eq) goto loc_820F7488;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x820f7488
	if (ctx.cr6.eq) goto loc_820F7488;
	// lfs f0,32(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,56(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 56));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820f75c4
	if (!ctx.cr6.gt) goto loc_820F75C4;
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 50);
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820f7138
	if (ctx.cr0.eq) goto loc_820F7138;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,5572(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f72a0
	if (ctx.cr6.eq) goto loc_820F72A0;
loc_820F7138:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// andi. r28,r11,91
	r28.u64 = ctx.r11.u64 & 91;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f7158
	if (ctx.cr0.eq) goto loc_820F7158;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820f7158
	if (!ctx.cr0.eq) goto loc_820F7158;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820f7160
	if (!ctx.cr0.eq) goto loc_820F7160;
loc_820F7158:
	// cmplwi cr6,r28,65
	ctx.cr6.compare<uint32_t>(r28.u32, 65, ctx.xer);
	// bne cr6,0x820f7190
	if (!ctx.cr6.eq) goto loc_820F7190;
loc_820F7160:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F7168;
	sub_820F4AB0(ctx, base);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
loc_820F716C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r10,8484(r31)
	REX_STORE_U32(r31.u32 + 8484, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7190:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f71a0
	if (ctx.cr6.eq) goto loc_820F71A0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f71b8
	if (!ctx.cr0.eq) goto loc_820F71B8;
loc_820F71A0:
	// cmplwi cr6,r28,67
	ctx.cr6.compare<uint32_t>(r28.u32, 67, ctx.xer);
	// beq cr6,0x820f71b8
	if (ctx.cr6.eq) goto loc_820F71B8;
	// cmplwi cr6,r28,71
	ctx.cr6.compare<uint32_t>(r28.u32, 71, ctx.xer);
	// beq cr6,0x820f71b8
	if (ctx.cr6.eq) goto loc_820F71B8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// bne cr6,0x820f72a0
	if (!ctx.cr6.eq) goto loc_820F72A0;
loc_820F71B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F71C0;
	sub_820F4AB0(ctx, base);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f6318
	ctx.lr = 0x820F71CC;
	sub_820F6318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820f726c
	if (!ctx.cr0.gt) goto loc_820F726C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,5780(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f723c
	if (ctx.cr6.eq) goto loc_820F723C;
	// lhz r11,78(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 78);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x820f723c
	if (ctx.cr6.lt) goto loc_820F723C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bge cr6,0x820f723c
	if (!ctx.cr6.lt) goto loc_820F723C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x820f7224
	if (!ctx.cr6.eq) goto loc_820F7224;
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r10,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r10.u32);
	// stw r23,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r23.u32);
	// b 0x820f689c
	goto loc_820F689C;
loc_820F7224:
	// lhz r11,90(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 90);
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// beq cr6,0x820f72a0
	if (ctx.cr6.eq) goto loc_820F72A0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x820f6fcc
	goto loc_820F6FCC;
loc_820F723C:
	// lwz r10,8324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// rlwinm r10,r10,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r9.u32);
	// stw r23,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r23.u32);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F726C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// bl 0x820f4240
	ctx.lr = 0x820F7278;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt 0x820f709c
	if (ctx.cr0.gt) goto loc_820F709C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f72a0
	if (!ctx.cr6.eq) goto loc_820F72A0;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
	// stw r25,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r25.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F72A0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x820f75c4
	if (!ctx.cr6.eq) goto loc_820F75C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r10,624(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x820f731c
	if (!ctx.cr6.eq) goto loc_820F731C;
	// lhz r11,5844(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 5844);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f731c
	if (ctx.cr0.eq) goto loc_820F731C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F72CC;
	sub_820F4AB0(ctx, base);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f6318
	ctx.lr = 0x820F72D8;
	sub_820F6318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble 0x820f730c
	if (!ctx.cr0.gt) goto loc_820F730C;
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// stw r11,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F72F4;
	sub_820F4D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r23,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r23.u32);
loc_820F7300:
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F730C:
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// bl 0x820f4240
	ctx.lr = 0x820F7314;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt 0x820f709c
	if (ctx.cr0.gt) goto loc_820F709C;
loc_820F731C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addic. r11,r9,8120
	ctx.xer.ca = ctx.r9.u32 > 4294959175;
	ctx.r11.s64 = ctx.r9.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f75c4
	if (ctx.cr0.eq) goto loc_820F75C4;
	// lwz r11,5780(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 5780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f75c4
	if (ctx.cr6.eq) goto loc_820F75C4;
	// lhz r11,5824(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 5824);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x820f75c4
	if (!ctx.cr6.eq) goto loc_820F75C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F7348;
	sub_820F4AB0(ctx, base);
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x820f7468
	if (!ctx.cr6.gt) goto loc_820F7468;
	// lwz r11,5780(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 5780);
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f737c
	if (ctx.cr6.eq) goto loc_820F737C;
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// lhz r11,54(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_820F737C:
	// lfs f13,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f7410
	if (!ctx.cr6.lt) goto loc_820F7410;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r8,175(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x820f7410
	if (!ctx.cr0.eq) goto loc_820F7410;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bge cr6,0x820f7410
	if (!ctx.cr6.lt) goto loc_820F7410;
	// lhz r10,630(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 630);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820f7410
	if (ctx.cr6.eq) goto loc_820F7410;
	// lwz r10,8364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8364);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f7410
	if (!ctx.cr0.eq) goto loc_820F7410;
	// lbz r11,177(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f7410
	if (!ctx.cr0.eq) goto loc_820F7410;
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f73f0
	if (!ctx.cr0.eq) goto loc_820F73F0;
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f73f0
	if (!ctx.cr0.eq) goto loc_820F73F0;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f75c4
	if (ctx.cr0.eq) goto loc_820F75C4;
loc_820F73E4:
	// li r11,5
	ctx.r11.s64 = 5;
loc_820F73E8:
	// stw r21,8484(r31)
	REX_STORE_U32(r31.u32 + 8484, r21.u32);
	// b 0x820f6a98
	goto loc_820F6A98;
loc_820F73F0:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7408
	if (ctx.cr0.eq) goto loc_820F7408;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820fed80
	ctx.lr = 0x820F7400;
	sub_820FED80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f73e4
	if (!ctx.cr0.eq) goto loc_820F73E4;
loc_820F7408:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820f73e8
	goto loc_820F73E8;
loc_820F7410:
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f7434
	if (ctx.cr0.eq) goto loc_820F7434;
	// lfs f0,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f75c4
	if (!ctx.cr6.lt) goto loc_820F75C4;
loc_820F742C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x820f6f04
	goto loc_820F6F04;
loc_820F7434:
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f75c4
	if (ctx.cr0.eq) goto loc_820F75C4;
	// lfs f0,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f75c4
	if (!ctx.cr6.lt) goto loc_820F75C4;
loc_820F744C:
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r19,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r19.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
	// stw r30,8428(r31)
	REX_STORE_U32(r31.u32 + 8428, r30.u32);
	// b 0x820f6898
	goto loc_820F6898;
loc_820F7468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f6318
	ctx.lr = 0x820F7470;
	sub_820F6318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820f7480
	if (!ctx.cr0.gt) goto loc_820F7480;
loc_820F7478:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7480:
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// b 0x820f708c
	goto loc_820F708C;
loc_820F7488:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820f7504
	if (ctx.cr6.eq) goto loc_820F7504;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820f75c4
	if (!ctx.cr6.eq) goto loc_820F75C4;
	// lhz r11,624(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 624);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820f75c4
	if (!ctx.cr6.eq) goto loc_820F75C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F74AC;
	sub_820F4AB0(ctx, base);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4d28
	ctx.lr = 0x820F74B8;
	sub_820F4D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r11.u32);
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
	// bl 0x820f6318
	ctx.lr = 0x820F74CC;
	sub_820F6318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820f74e0
	if (!ctx.cr0.gt) goto loc_820F74E0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// b 0x820f6fc8
	goto loc_820F6FC8;
loc_820F74E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// bl 0x820f4240
	ctx.lr = 0x820F74EC;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x820f709c
	if (!ctx.cr0.lt) goto loc_820F709C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f40d0
	ctx.lr = 0x820F74FC;
	sub_820F40D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x820f709c
	goto loc_820F709C;
loc_820F7504:
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F7510;
	sub_820F4AB0(ctx, base);
	// stw r3,8528(r31)
	REX_STORE_U32(r31.u32 + 8528, ctx.r3.u32);
	// lwz r11,5780(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7550
	if (ctx.cr6.eq) goto loc_820F7550;
	// lhz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x820f753c
	if (ctx.cr6.eq) goto loc_820F753C;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// beq cr6,0x820f753c
	if (ctx.cr6.eq) goto loc_820F753C;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bne cr6,0x820f7550
	if (!ctx.cr6.eq) goto loc_820F7550;
loc_820F753C:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r30,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, r30.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x820f6ab4
	goto loc_820F6AB4;
loc_820F7550:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f6318
	ctx.lr = 0x820F7558;
	sub_820F6318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble 0x820f757c
	if (!ctx.cr0.gt) goto loc_820F757C;
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F7574;
	sub_820F4D28(ctx, base);
	// li r10,60
	ctx.r10.s64 = 60;
	// b 0x820f6eb4
	goto loc_820F6EB4;
loc_820F757C:
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// bl 0x820f4240
	ctx.lr = 0x820F7584;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x820f70cc
	if (!ctx.cr0.gt) goto loc_820F70CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f93d0
	ctx.lr = 0x820F7598;
	sub_820F93D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f93b0
	ctx.lr = 0x820F75A4;
	sub_820F93B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9390
	ctx.lr = 0x820F75AC;
	sub_820F9390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820F75B4;
	sub_820FBB18(ctx, base);
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r3,4
	ctx.r3.s64 = 4;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x820f689c
	goto loc_820F689C;
loc_820F75C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8210cd88
	ctx.lr = 0x820F75CC;
	sub_8210CD88(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// ble cr6,0x820f77c4
	if (!ctx.cr6.gt) goto loc_820F77C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r30,8484(r31)
	REX_STORE_U32(r31.u32 + 8484, r30.u32);
	// lfs f31,16(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 16);
	f31.f64 = double(temp.f32);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// bne cr6,0x820f75f0
	if (!ctx.cr6.eq) goto loc_820F75F0;
	// fadds f31,f31,f26
	f31.f64 = double(float(f31.f64 + f26.f64));
loc_820F75F0:
	// lbz r10,175(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 175);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f7604
	if (ctx.cr0.eq) goto loc_820F7604;
	// fmr f30,f28
	f30.f64 = f28.f64;
loc_820F7604:
	// lhz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 604);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x820f762c
	if (!ctx.cr6.eq) goto loc_820F762C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x820f7628
	if (!ctx.cr6.gt) goto loc_820F7628;
	// fmr f31,f27
	f31.f64 = f27.f64;
loc_820F7628:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
loc_820F762C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9418
	ctx.lr = 0x820F7634;
	sub_820F9418(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f7640
	if (ctx.cr0.eq) goto loc_820F7640;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
loc_820F7640:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r11,5780(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 5780);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f7664
	if (ctx.cr0.eq) goto loc_820F7664;
	// lhz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// lhz r8,54(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
loc_820F7664:
	// lhz r8,30(r22)
	ctx.r8.u64 = REX_LOAD_U16(r22.u32 + 30);
	// cmplwi cr6,r8,14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14, ctx.xer);
	// bne cr6,0x820f76a4
	if (!ctx.cr6.eq) goto loc_820F76A4;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,80(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// cmplwi cr6,r7,53
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 53, ctx.xer);
	// bne cr6,0x820f76a4
	if (!ctx.cr6.eq) goto loc_820F76A4;
	// addic. r7,r10,8120
	ctx.xer.ca = ctx.r10.u32 > 4294959175;
	ctx.r7.s64 = ctx.r10.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x820f76a4
	if (ctx.cr0.eq) goto loc_820F76A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f76a4
	if (ctx.cr6.eq) goto loc_820F76A4;
	// lha r11,5824(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5824));
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x820f76a4
	if (ctx.cr6.lt) goto loc_820F76A4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x820f7748
	if (!ctx.cr6.gt) goto loc_820F7748;
loc_820F76A4:
	// lfs f0,8252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x820f7748
	if (!ctx.cr6.lt) goto loc_820F7748;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(f30.f64, f29.f64);
	// bne cr6,0x820f7748
	if (!ctx.cr6.eq) goto loc_820F7748;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x820f7748
	if (!ctx.cr6.lt) goto loc_820F7748;
	// lhz r11,630(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 630);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820f7748
	if (ctx.cr6.eq) goto loc_820F7748;
	// lwz r11,8364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8364);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f7748
	if (!ctx.cr0.eq) goto loc_820F7748;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,177(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f7748
	if (!ctx.cr0.eq) goto loc_820F7748;
	// lbz r11,178(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f7748
	if (!ctx.cr0.eq) goto loc_820F7748;
	// lbz r11,179(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f7748
	if (!ctx.cr0.eq) goto loc_820F7748;
	// bl 0x8210cd88
	ctx.lr = 0x820F7708;
	sub_8210CD88(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// ble cr6,0x820f7744
	if (!ctx.cr6.gt) goto loc_820F7744;
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f73f0
	if (!ctx.cr0.eq) goto loc_820F73F0;
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f73f0
	if (!ctx.cr0.eq) goto loc_820F73F0;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7744
	if (ctx.cr0.eq) goto loc_820F7744;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f73e4
	if (ctx.cr6.lt) goto loc_820F73E4;
loc_820F7744:
	// lhz r8,30(r22)
	ctx.r8.u64 = REX_LOAD_U16(r22.u32 + 30);
loc_820F7748:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x820f7764
	if (!ctx.cr6.eq) goto loc_820F7764;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// beq cr6,0x820f7774
	if (ctx.cr6.eq) goto loc_820F7774;
loc_820F7764:
	// lwz r11,8364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8364);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7774
	if (ctx.cr0.eq) goto loc_820F7774;
	// fmr f29,f24
	ctx.fpscr.disableFlushMode();
	f29.f64 = f24.f64;
loc_820F7774:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F777C;
	sub_820F4AB0(ctx, base);
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f7814
	if (ctx.cr0.eq) goto loc_820F7814;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x820f77d8
	if (!ctx.cr6.lt) goto loc_820F77D8;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// beq cr6,0x820f77b8
	if (ctx.cr6.eq) goto loc_820F77B8;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f77b8
	if (!ctx.cr6.lt) goto loc_820F77B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F77B8:
	// lfs f13,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f742c
	if (ctx.cr6.lt) goto loc_820F742C;
loc_820F77C4:
	// stw r30,8484(r31)
	REX_STORE_U32(r31.u32 + 8484, r30.u32);
loc_820F77C8:
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820F77D0:
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F77D8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x820f780c
	if (ctx.cr6.eq) goto loc_820F780C;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// lfs f13,16896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f7800
	if (!ctx.cr6.lt) goto loc_820F7800;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F7800:
	// lfs f13,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f742c
	if (ctx.cr6.lt) goto loc_820F742C;
loc_820F780C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7814:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f7870
	if (ctx.cr0.eq) goto loc_820F7870;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bge cr6,0x820f785c
	if (!ctx.cr6.lt) goto loc_820F785C;
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_820F7828:
	// fadds f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x820f784c
	if (ctx.cr6.eq) goto loc_820F784C;
loc_820F7834:
	// fmuls f0,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f784c
	if (!ctx.cr6.lt) goto loc_820F784C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F784C:
	// lfs f13,8248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f780c
	if (!ctx.cr6.lt) goto loc_820F780C;
	// b 0x820f744c
	goto loc_820F744C;
loc_820F785C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x820f780c
	if (ctx.cr6.eq) goto loc_820F780C;
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x820f7834
	goto loc_820F7834;
loc_820F7870:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f78b8
	if (ctx.cr0.eq) goto loc_820F78B8;
	// lfs f0,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f13,8248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f77c4
	if (!ctx.cr6.lt) goto loc_820F77C4;
	// lwz r11,8324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r10,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r10.u32);
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820f4d28
	ctx.lr = 0x820F78AC;
	sub_820F4D28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x820f7300
	goto loc_820F7300;
loc_820F78B8:
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f77c4
	if (ctx.cr0.eq) goto loc_820F77C4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x820f77c4
	if (!ctx.cr6.lt) goto loc_820F77C4;
	// lfs f0,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f7828
	goto loc_820F7828;
loc_820F78D0:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x820f6c68
	if (ctx.cr6.gt) goto loc_820F6C68;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,19736
	ctx.r12.s64 = ctx.r12.s64 + 19736;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// addi r12,r12,27752
	ctx.r12.s64 = ctx.r12.s64 + 27752;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_820F7CFC;
	case 1:
		goto loc_820F7A68;
	case 2:
		goto loc_820F7D7C;
	case 3:
		goto loc_820F7E4C;
	case 4:
		goto loc_820F7B10;
	case 5:
		goto loc_820F7B6C;
	case 6:
		goto loc_820F7CB0;
	case 7:
		goto loc_820F7988;
	case 8:
		goto loc_820F7904;
	case 9:
		goto loc_820F7904;
	case 10:
		goto loc_820F79B8;
	case 11:
		goto loc_820F7AE0;
	case 12:
		goto loc_820F79E8;
	case 13:
		goto loc_820F7A18;
	case 14:
		goto loc_820F7DA4;
	case 15:
		goto loc_820F7BAC;
	case 16:
		goto loc_820F7A94;
	case 17:
		goto loc_820F7AD4;
	case 18:
		goto loc_820F7C68;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820F7904:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,175(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 175);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f795c
	if (!ctx.cr0.eq) goto loc_820F795C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// bl 0x820f4240
	ctx.lr = 0x820F7920;
	sub_820F4240(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x820f780c
	if (!ctx.cr0.gt) goto loc_820F780C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f93d0
	ctx.lr = 0x820F7934;
	sub_820F93D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f93b0
	ctx.lr = 0x820F7940;
	sub_820F93B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9390
	ctx.lr = 0x820F7948;
	sub_820F9390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820F7950;
	sub_820FBB18(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// b 0x820f77d0
	goto loc_820F77D0;
loc_820F795C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// bne cr6,0x820f7970
	if (!ctx.cr6.eq) goto loc_820F7970;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x820f797c
	goto loc_820F797C;
loc_820F7970:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
loc_820F797C:
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
loc_820F7980:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7988:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4ab0
	ctx.lr = 0x820F7990;
	sub_820F4AB0(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bge cr6,0x820f7980
	if (!ctx.cr6.lt) goto loc_820F7980;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
loc_820F79AC:
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F79B8:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r29.u32);
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
	// bl 0x820fed80
	ctx.lr = 0x820F79D8;
	sub_820FED80(ctx, base);
	// addi r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 10;
	// li r3,5
	ctx.r3.s64 = 5;
loc_820F79E0:
	// stw r11,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, ctx.r11.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F79E8:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
	// li r3,30
	ctx.r3.s64 = 30;
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// bl 0x820fed80
	ctx.lr = 0x820F7A0C;
	sub_820FED80(ctx, base);
	// addi r11,r3,90
	ctx.r11.s64 = ctx.r3.s64 + 90;
	// stw r11,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, ctx.r11.u32);
	// b 0x820f7980
	goto loc_820F7980;
loc_820F7A18:
	// lwz r11,8432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8432);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// stw r9,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r9.u32);
	// stw r11,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, ctx.r11.u32);
	// ble 0x820f7a58
	if (!ctx.cr0.gt) goto loc_820F7A58;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,195(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 195);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f7a58
	if (!ctx.cr0.eq) goto loc_820F7A58;
	// li r11,15
	ctx.r11.s64 = 15;
loc_820F7A50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f6fcc
	goto loc_820F6FCC;
loc_820F7A58:
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// b 0x820f6c68
	goto loc_820F6C68;
loc_820F7A68:
	// stw r29,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r29.u32);
loc_820F7A6C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// bl 0x820fed80
	ctx.lr = 0x820F7A88;
	sub_820FED80(ctx, base);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_820F7A8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f79e0
	goto loc_820F79E0;
loc_820F7A94:
	// lwz r11,8432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8432);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// stw r9,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r9.u32);
	// stw r11,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, ctx.r11.u32);
	// ble 0x820f7a58
	if (!ctx.cr0.gt) goto loc_820F7A58;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,8504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8504);
	// lhz r11,630(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820f7a58
	if (!ctx.cr6.eq) goto loc_820F7A58;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x820f7a50
	goto loc_820F7A50;
loc_820F7AD4:
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// b 0x820f7a6c
	goto loc_820F7A6C;
loc_820F7AE0:
	// lwz r11,8432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8432);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// stw r9,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r9.u32);
	// stw r11,8432(r31)
	REX_STORE_U32(r31.u32 + 8432, ctx.r11.u32);
	// ble 0x820f7a58
	if (!ctx.cr0.gt) goto loc_820F7A58;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r29.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7B10:
	// lwz r10,8512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8512);
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r10.u32);
	// bne 0x820f7b38
	if (!ctx.cr0.eq) goto loc_820F7B38;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f7b38
	if (!ctx.cr0.eq) goto loc_820F7B38;
	// lwz r11,8416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8416);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x820f7478
	if (!ctx.cr6.gt) goto loc_820F7478;
loc_820F7B38:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,630(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820f7b58
	if (ctx.cr6.eq) goto loc_820F7B58;
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// b 0x820f6c6c
	goto loc_820F6C6C;
loc_820F7B58:
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// stw r30,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, r30.u32);
	// stw r30,8484(r31)
	REX_STORE_U32(r31.u32 + 8484, r30.u32);
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7B6C:
	// lwz r11,8256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8256);
	// lwz r10,8512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8512);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r11.u32);
	// stw r10,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r10.u32);
	// bgt 0x820f7b90
	if (ctx.cr0.gt) goto loc_820F7B90;
loc_820F7B84:
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
loc_820F7B88:
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
	// b 0x820f77c8
	goto loc_820F77C8;
loc_820F7B90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f9310
	ctx.lr = 0x820F7B9C;
	sub_820F9310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f7b84
	if (!ctx.cr0.eq) goto loc_820F7B84;
loc_820F7BA4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820f6c6c
	goto loc_820F6C6C;
loc_820F7BAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f9310
	ctx.lr = 0x820F7BB8;
	sub_820F9310(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x820fed40
	ctx.lr = 0x820F7BC0;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1496
	ctx.r11.s64 = ctx.r11.s64 + 1496;
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f7c3c
	if (!ctx.cr6.lt) goto loc_820F7C3C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,10148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 10148);
	// lfs f0,10532(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1968(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1968);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x820f7c3c
	if (!ctx.cr6.lt) goto loc_820F7C3C;
	// lfs f0,1976(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10540(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x820f7c3c
	if (!ctx.cr6.lt) goto loc_820F7C3C;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r30,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r10,8512(r31)
	REX_STORE_U32(r31.u32 + 8512, ctx.r10.u32);
	// stw r9,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r9.u32);
	// b 0x820f7a8c
	goto loc_820F7A8C;
loc_820F7C3C:
	// lwz r11,8256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8256);
	// lwz r10,8512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8512);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8256(r31)
	REX_STORE_U32(r31.u32 + 8256, ctx.r11.u32);
	// stw r10,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r10.u32);
	// ble 0x820f7b84
	if (!ctx.cr0.gt) goto loc_820F7B84;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x820f7ba4
	if (ctx.cr6.lt) goto loc_820F7BA4;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// bne cr6,0x820f7b84
	if (!ctx.cr6.eq) goto loc_820F7B84;
	// b 0x820f7ba4
	goto loc_820F7BA4;
loc_820F7C68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f9310
	ctx.lr = 0x820F7C74;
	sub_820F9310(ctx, base);
	// lwz r10,8324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// bne 0x820f7b88
	if (!ctx.cr0.eq) goto loc_820F7B88;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f7b88
	if (!ctx.cr0.eq) goto loc_820F7B88;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,5780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7b88
	if (ctx.cr6.eq) goto loc_820F7B88;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f7b84
	if (!ctx.cr6.eq) goto loc_820F7B84;
	// b 0x820f7d70
	goto loc_820F7D70;
loc_820F7CB0:
	// lwz r9,8512(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8512);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addic. r10,r11,8120
	ctx.xer.ca = ctx.r11.u32 > 4294959175;
	ctx.r10.s64 = ctx.r11.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r9.u32);
	// beq 0x820f7ba4
	if (ctx.cr0.eq) goto loc_820F7BA4;
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,630(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x820f7ce8
	if (!ctx.cr6.eq) goto loc_820F7CE8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// bgt cr6,0x820f7b84
	if (ctx.cr6.gt) goto loc_820F7B84;
loc_820F7CE8:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x820f7ba4
	if (!ctx.cr6.eq) goto loc_820F7BA4;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x820f7b84
	if (ctx.cr6.gt) goto loc_820F7B84;
	// b 0x820f7ba4
	goto loc_820F7BA4;
loc_820F7CFC:
	// lwz r10,8324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8324);
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r10.u32);
	// bne 0x820f7d1c
	if (!ctx.cr0.eq) goto loc_820F7D1C;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7980
	if (ctx.cr0.eq) goto loc_820F7980;
loc_820F7D1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r9,630(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 630);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x820f7d34
	if (ctx.cr6.eq) goto loc_820F7D34;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x820f7b88
	if (!ctx.cr6.eq) goto loc_820F7B88;
loc_820F7D34:
	// lwz r10,5780(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// addi r11,r11,8120
	ctx.r11.s64 = ctx.r11.s64 + 8120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7b88
	if (ctx.cr6.eq) goto loc_820F7B88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7d70
	if (ctx.cr6.eq) goto loc_820F7D70;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x820f7b88
	if (!ctx.cr6.eq) goto loc_820F7B88;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 56);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820f7b88
	if (ctx.cr6.gt) goto loc_820F7B88;
loc_820F7D70:
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// b 0x820f7980
	goto loc_820F7980;
loc_820F7D7C:
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7d94
	if (ctx.cr0.eq) goto loc_820F7D94;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_820F7D8C:
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// b 0x820f7d9c
	goto loc_820F7D9C;
loc_820F7D94:
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
loc_820F7D9C:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x820f79ac
	goto loc_820F79AC;
loc_820F7DA4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,90(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 90);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f7e3c
	if (!ctx.cr6.eq) goto loc_820F7E3C;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(r26.s32, 7, ctx.xer);
	// blt cr6,0x820f7e3c
	if (ctx.cr6.lt) goto loc_820F7E3C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r11,170(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 170);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f6aa8
	if (!ctx.cr0.eq) goto loc_820F6AA8;
	// addic. r11,r10,8120
	ctx.xer.ca = ctx.r10.u32 > 4294959175;
	ctx.r11.s64 = ctx.r10.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// beq 0x820f7de8
	if (ctx.cr0.eq) goto loc_820F7DE8;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_820F7DE8:
	// lhz r11,630(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 630);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820f7dfc
	if (!ctx.cr6.eq) goto loc_820F7DFC;
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x820f7e1c
	if (ctx.cr6.eq) goto loc_820F7E1C;
loc_820F7DFC:
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f7e0c
	if (!ctx.cr6.eq) goto loc_820F7E0C;
	// cmpwi cr6,r9,46
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 46, ctx.xer);
	// beq cr6,0x820f7e1c
	if (ctx.cr6.eq) goto loc_820F7E1C;
loc_820F7E0C:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f7e28
	if (!ctx.cr6.eq) goto loc_820F7E28;
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// bne cr6,0x820f7e28
	if (!ctx.cr6.eq) goto loc_820F7E28;
loc_820F7E1C:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// b 0x820f7e30
	goto loc_820F7E30;
loc_820F7E28:
	// stw r30,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r30.u32);
	// stw r21,8488(r31)
	REX_STORE_U32(r31.u32 + 8488, r21.u32);
loc_820F7E30:
	// stw r30,8412(r31)
	REX_STORE_U32(r31.u32 + 8412, r30.u32);
	// stw r30,8416(r31)
	REX_STORE_U32(r31.u32 + 8416, r30.u32);
	// b 0x820f7e44
	goto loc_820F7E44;
loc_820F7E3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8480(r31)
	REX_STORE_U32(r31.u32 + 8480, ctx.r11.u32);
loc_820F7E44:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x820f6c70
	goto loc_820F6C70;
loc_820F7E4C:
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7d94
	if (ctx.cr0.eq) goto loc_820F7D94;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// b 0x820f7d8c
	goto loc_820F7D8C;
}

DEFINE_REX_FUNC(sub_82179148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,92(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821799D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1c28
	ctx.lr = 0x82179A00;
	sub_820E1C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
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

DEFINE_REX_FUNC(sub_8217A5B8) {
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
	// mulli r11,r4,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6));
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r31,196
	ctx.r11.s64 = r31.s64 + 196;
	// bl 0x821fecf0
	ctx.lr = 0x8217A5D8;
	sub_821FECF0(ctx, base);
	// lhz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 196);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// sth r11,196(r31)
	REX_STORE_U16(r31.u32 + 196, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_8217B758) {
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
	ctx.lr = 0x8217B760;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,368(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,372(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lwz r30,92(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-4948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f11,1836(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1836);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f0,f10,f0,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f0.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8217b7b8
	if (!ctx.cr6.gt) goto loc_8217B7B8;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 372, temp.u32);
loc_8217B7B8:
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217b7c8
	if (!ctx.cr6.gt) goto loc_8217B7C8;
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
loc_8217B7C8:
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f30.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8217b8cc
	if (!ctx.cr6.lt) goto loc_8217B8CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8217b858
	if (!ctx.cr6.lt) goto loc_8217B858;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,777
	ctx.r4.s64 = 777;
	// addi r6,r11,-5008
	ctx.r6.s64 = ctx.r11.s64 + -5008;
	// bl 0x821f7d50
	ctx.lr = 0x8217B820;
	sub_821F7D50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8217b87c
	if (ctx.cr0.eq) goto loc_8217B87C;
	// bl 0x821fecf0
	ctx.lr = 0x8217B82C;
	sub_821FECF0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,396(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 396);
	// divwu r10,r3,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// bl 0x8217b078
	ctx.lr = 0x8217B854;
	sub_8217B078(ctx, base);
	// b 0x8217b87c
	goto loc_8217B87C;
loc_8217B858:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,771
	ctx.r4.s64 = 771;
	// addi r6,r11,-4956
	ctx.r6.s64 = ctx.r11.s64 + -4956;
	// bl 0x821f7d50
	ctx.lr = 0x8217B868;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b87c
	if (ctx.cr0.eq) goto loc_8217B87C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,396(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 396);
	// bl 0x8217b3b0
	ctx.lr = 0x8217B87C;
	sub_8217B3B0(ctx, base);
loc_8217B87C:
	// stfs f31,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x8217b8b8
	if (!ctx.cr0.gt) goto loc_8217B8B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8217B894:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// stfs f31,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lbz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 352);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8217b894
	if (ctx.cr6.lt) goto loc_8217B894;
loc_8217B8B8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8217ba38
	goto loc_8217BA38;
loc_8217B8CC:
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8217b8f4
	if (!ctx.cr6.gt) goto loc_8217B8F4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
loc_8217B8F4:
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8217b914
	if (!ctx.cr6.gt) goto loc_8217B914;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
loc_8217B914:
	// lfs f1,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8217B91C;
	sub_820E0028(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f1,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8217B928;
	sub_820E0028(ctx, base);
	// fmadds f11,f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(f29.f64, ctx.f1.f64, f31.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r31,354
	ctx.r3.s64 = r31.s64 + 354;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16836(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16836);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4960(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4960);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lbz r11,354(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 354);
	// lbz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 356);
	// lbz r9,355(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 355);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82177820
	ctx.lr = 0x8217B96C;
	sub_82177820(ctx, base);
	// lbz r11,353(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 353);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8217b994
	if (ctx.cr6.eq) goto loc_8217B994;
	// stb r29,353(r31)
	REX_STORE_U8(r31.u32 + 353, r29.u8);
	// bl 0x821fecf0
	ctx.lr = 0x8217B980;
	sub_821FECF0(ctx, base);
	// andi. r11,r3,80
	ctx.r11.u64 = ctx.r3.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217b994
	if (ctx.cr0.eq) goto loc_8217B994;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
loc_8217B994:
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r29,16
	ctx.r8.u64 = r29.u32 & 0xFFFF;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// sth r8,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r8.u16);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8217ba38
	if (!ctx.cr6.gt) goto loc_8217BA38;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// li r9,80
	ctx.r9.s64 = 80;
loc_8217B9C8:
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// sth r8,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r8.u16);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lbz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217b9c8
	if (ctx.cr6.lt) goto loc_8217B9C8;
loc_8217BA38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_821857A0) {
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
	ctx.lr = 0x821857A8;
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,1508(r1)
	REX_STORE_U32(ctx.r1.u32 + 1508, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82184390
	ctx.lr = 0x821857C4;
	sub_82184390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821857d8
	if (ctx.cr0.eq) goto loc_821857D8;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82185984
	if (!ctx.cr0.eq) goto loc_82185984;
loc_821857D8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// bl 0x82184a00
	ctx.lr = 0x821857E8;
	sub_82184A00(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 88);
	// ld r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 168);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// bl 0x82188300
	ctx.lr = 0x82185800;
	sub_82188300(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82208cc8
	ctx.lr = 0x82185808;
	sub_82208CC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82185810;
	sub_82188300(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82208a60
	ctx.lr = 0x8218581C;
	sub_82208A60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stb r30,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, r30.u8);
	// beq cr6,0x82185844
	if (ctx.cr6.eq) goto loc_82185844;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82185844
	if (ctx.cr6.eq) goto loc_82185844;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// bne cr6,0x82185848
	if (!ctx.cr6.eq) goto loc_82185848;
loc_82185844:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82185848:
	// sth r11,208(r1)
	REX_STORE_U16(ctx.r1.u32 + 208, ctx.r11.u16);
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x82185898
	if (ctx.cr0.eq) goto loc_82185898;
	// lwz r4,1508(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x82184390
	ctx.lr = 0x82185864;
	sub_82184390(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82185898
	if (!ctx.cr0.eq) goto loc_82185898;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r10,2
	ctx.r10.s64 = 2;
	// lhz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 208);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// sth r11,208(r1)
	REX_STORE_U16(ctx.r1.u32 + 208, ctx.r11.u16);
loc_82185898:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r5,r1,1508
	ctx.r5.s64 = ctx.r1.s64 + 1508;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r11,104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lbz r11,116(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 116);
	// sth r11,210(r1)
	REX_STORE_U16(ctx.r1.u32 + 210, ctx.r11.u16);
	// bl 0x821855a0
	ctx.lr = 0x821858EC;
	sub_821855A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82185984
	if (!ctx.cr6.eq) goto loc_82185984;
	// lhz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82185984
	if (!ctx.cr6.eq) goto loc_82185984;
	// lbz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r30,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r30.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r30,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r30.u64);
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82233da0
	ctx.lr = 0x82185944;
	sub_82233DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218596c
	if (ctx.cr0.eq) goto loc_8218596C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x82185954;
	sub_82209598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x82187d00
	ctx.lr = 0x82185968;
	sub_82187D00(ctx, base);
	// b 0x82185984
	goto loc_82185984;
loc_8218596C:
	// addi r6,r28,8
	ctx.r6.s64 = r28.s64 + 8;
	// lwz r7,1508(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x821845d8
	ctx.lr = 0x82185984;
	sub_821845D8(ctx, base);
loc_82185984:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218D9C8) {
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
	ctx.lr = 0x8218D9D0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8218da0c
	if (!ctx.cr6.lt) goto loc_8218DA0C;
	// bl 0x821bf238
	ctx.lr = 0x8218D9F8;
	sub_821BF238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x821bf228
	ctx.lr = 0x8218DA04;
	sub_821BF228(ctx, base);
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// b 0x8218da20
	goto loc_8218DA20;
loc_8218DA0C:
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
loc_8218DA20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8218da3c
	if (ctx.cr6.gt) goto loc_8218DA3C;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_8218DA3C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x8218da88
	if (ctx.cr6.lt) goto loc_8218DA88;
	// beq cr6,0x8218da50
	if (ctx.cr6.eq) goto loc_8218DA50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8218dac4
	goto loc_8218DAC4;
loc_8218DA50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f2,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8219f6e0
	ctx.lr = 0x8218DA84;
	sub_8219F6E0(ctx, base);
	// b 0x8218dac4
	goto loc_8218DAC4;
loc_8218DA88:
	// cmpwi cr6,r31,193
	ctx.cr6.compare<int32_t>(r31.s32, 193, ctx.xer);
	// bne cr6,0x8218da94
	if (!ctx.cr6.eq) goto loc_8218DA94;
	// li r31,124
	r31.s64 = 124;
loc_8218DA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8219f6e0
	ctx.lr = 0x8218DAC4;
	sub_8219F6E0(ctx, base);
loc_8218DAC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82191550) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191628) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lhz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 224);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// sth r10,224(r11)
	REX_STORE_U16(ctx.r11.u32 + 224, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191C68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,2960(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2960);
	// lwz r9,2964(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2964);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,100
	ctx.r9.s64 = 100;
	// divw r9,r10,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mulli r9,r9,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,2960(r11)
	REX_STORE_U32(ctx.r11.u32 + 2960, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192ED8) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r30,1
	r30.s64 = 1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,30856(r10)
	REX_STORE_U16(ctx.r10.u32 + 30856, ctx.r11.u16);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// bl 0x82187b58
	ctx.lr = 0x82192F0C;
	sub_82187B58(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82188070
	ctx.lr = 0x82192F14;
	sub_82188070(ctx, base);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r8,r10,-13224
	ctx.r8.s64 = ctx.r10.s64 + -13224;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r7,r10,31868
	ctx.r7.s64 = ctx.r10.s64 + 31868;
	// stw r11,2740(r8)
	REX_STORE_U32(ctx.r8.u32 + 2740, ctx.r11.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,2744(r8)
	REX_STORE_U32(ctx.r8.u32 + 2744, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,2748(r8)
	REX_STORE_U32(ctx.r8.u32 + 2748, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// stw r11,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r11.u32);
	// stw r10,2752(r8)
	REX_STORE_U32(ctx.r8.u32 + 2752, ctx.r10.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stb r11,138(r31)
	REX_STORE_U8(r31.u32 + 138, ctx.r11.u8);
	// stb r11,92(r31)
	REX_STORE_U8(r31.u32 + 92, ctx.r11.u8);
	// bl 0x82191ed8
	ctx.lr = 0x82192F7C;
	sub_82191ED8(ctx, base);
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

DEFINE_REX_FUNC(sub_82197DB4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197DB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82197dd0
	if (ctx.cr6.eq) goto loc_82197DD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82197dd4
	if (!ctx.cr6.eq) goto loc_82197DD4;
loc_82197DD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82197DD4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82198AC0) {
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
	// bl 0x82198a68
	ctx.lr = 0x82198AE0;
	sub_82198A68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82198af8
	if (ctx.cr0.eq) goto loc_82198AF8;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// sth r10,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r10.u16);
loc_82198AF8:
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

DEFINE_REX_FUNC(sub_82199EC0) {
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
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r30,33
	r30.s64 = 33;
	// addi r11,r11,-13224
	ctx.r11.s64 = ctx.r11.s64 + -13224;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
loc_82199EE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82199ef8
	if (ctx.cr6.eq) goto loc_82199EF8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82199EF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x82199cf0
	ctx.lr = 0x82199F04;
	sub_82199CF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// bgt 0x82199ee4
	if (ctx.cr0.gt) goto loc_82199EE4;
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

DEFINE_REX_FUNC(sub_8219B380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B6F8) {
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
	ctx.lr = 0x8219B700;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r7
	r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8219b734
	if (ctx.cr6.eq) goto loc_8219B734;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x820e1df8
	ctx.lr = 0x8219B734;
	sub_820E1DF8(ctx, base);
loc_8219B734:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8219b74c
	if (ctx.cr6.eq) goto loc_8219B74C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219B74C;
	sub_820E1DF8(ctx, base);
loc_8219B74C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219b76c
	if (ctx.cr6.eq) goto loc_8219B76C;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
loc_8219B76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219D010) {
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
	ctx.lr = 0x8219D018;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,76(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,0
	r25.s64 = 0;
	// lwz r24,52(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8219d25c
	if (ctx.cr6.eq) goto loc_8219D25C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r23,-32166
	r23.s64 = -2108030976;
	// lfs f30,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8219D058:
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219d07c
	if (ctx.cr0.eq) goto loc_8219D07C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// sth r11,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r11.u16);
	// bl 0x8219cef8
	ctx.lr = 0x8219D074;
	sub_8219CEF8(ctx, base);
	// sth r3,268(r30)
	REX_STORE_U16(r30.u32 + 268, ctx.r3.u16);
	// b 0x8219d250
	goto loc_8219D250;
loc_8219D07C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r8,r30,60
	ctx.r8.s64 = r30.s64 + 60;
	// lwz r7,24(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d140
	if (ctx.cr6.eq) goto loc_8219D140;
	// lwz r10,92(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 92);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219d0b4
	if (ctx.cr6.eq) goto loc_8219D0B4;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219D0B4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8219d0c0
	if (!ctx.cr6.lt) goto loc_8219D0C0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8219D0C0:
	// lhz r10,268(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 268);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
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
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,6,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3FFFC0;
	// lfsux f0,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
loc_8219D140:
	// lwz r11,108(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 108);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d164
	if (ctx.cr6.eq) goto loc_8219D164;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219D164:
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 56);
	// addi r29,r30,84
	r29.s64 = r30.s64 + 84;
	// lwz r11,7792(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 7792);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lwz r22,1644(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// lwz r28,20(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r11,r28,3
	ctx.r11.s64 = r28.s64 + 3;
	// rlwinm r11,r11,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219D1A8;
	sub_820E1DF8(ctx, base);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1df8
	ctx.lr = 0x8219D1BC;
	sub_820E1DF8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e01b0
	ctx.lr = 0x8219D1C4;
	sub_820E01B0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820e0810
	ctx.lr = 0x8219D1D0;
	sub_820E0810(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x8219D1E0;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x8219D1F0;
	sub_820E1DF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a6ae8
	ctx.lr = 0x8219D1F8;
	sub_821A6AE8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cf8
	ctx.lr = 0x8219D208;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1bf0
	ctx.lr = 0x8219D218;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x820e1b70
	ctx.lr = 0x8219D228;
	sub_820E1B70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x820e1bf0
	ctx.lr = 0x8219D238;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x820e1b70
	ctx.lr = 0x8219D248;
	sub_820E1B70(ctx, base);
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8219D250:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8219d058
	if (!ctx.cr6.eq) goto loc_8219D058;
loc_8219D25C:
	// rlwinm r11,r25,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// sth r11,8(r27)
	REX_STORE_U16(r27.u32 + 8, ctx.r11.u16);
	// beq cr6,0x8219d274
	if (ctx.cr6.eq) goto loc_8219D274;
	// lbz r3,24(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x8219D274;
	sub_8218C0A8(ctx, base);
loc_8219D274:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821A8148) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 89);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821a81d8
	if (!ctx.cr0.eq) goto loc_821A81D8;
	// bl 0x821d1ed0
	ctx.lr = 0x821A8174;
	sub_821D1ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a8188
	if (ctx.cr0.eq) goto loc_821A8188;
loc_821A817C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x821a8278
	goto loc_821A8278;
loc_821A8188:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,22593
	ctx.r10.s64 = 1480654848;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r10,r10,5137
	ctx.r10.u64 = ctx.r10.u64 | 5137;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2980(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// bl 0x82208d38
	ctx.lr = 0x821A81B0;
	sub_82208D38(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821a81cc
	if (ctx.cr0.eq) goto loc_821A81CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// bl 0x822d55f8
	ctx.lr = 0x821A81C8;
	sub_822D55F8(ctx, base);
	// b 0x821a817c
	goto loc_821A817C;
loc_821A81CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,89(r31)
	REX_STORE_U8(r31.u32 + 89, ctx.r11.u8);
	// b 0x821a8278
	goto loc_821A8278;
loc_821A81D8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x821A81EC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a8278
	if (ctx.cr0.eq) goto loc_821A8278;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_821A8204:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821a825c
	if (!ctx.cr6.eq) goto loc_821A825C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,89(r31)
	REX_STORE_U8(r31.u32 + 89, ctx.r11.u8);
	// bne 0x821a825c
	if (!ctx.cr0.eq) goto loc_821A825C;
	// lbz r11,2970(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a823c
	if (ctx.cr0.eq) goto loc_821A823C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a8258
	goto loc_821A8258;
loc_821A823C:
	// li r4,30
	ctx.r4.s64 = 30;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821afa50
	ctx.lr = 0x821A8254;
	sub_821AFA50(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_821A8258:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821A825C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x821A8270;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a8204
	if (!ctx.cr0.eq) goto loc_821A8204;
loc_821A8278:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

DEFINE_REX_FUNC(sub_821AC860) {
	REX_FUNC_PROLOGUE();
	// b 0x821ad928
	sub_821AD928(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821ACAF0) {
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
	ctx.lr = 0x821ACAF8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r27,-32480(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821ab048
	ctx.lr = 0x821ACB08;
	sub_821AB048(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821acb38
	if (!ctx.cr6.eq) goto loc_821ACB38;
	// ori r3,r3,139
	ctx.r3.u64 = ctx.r3.u64 | 139;
	// bl 0x820e68b8
	ctx.lr = 0x821ACB2C;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821ACB30;
	sub_821AAC50(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x821acb48
	goto loc_821ACB48;
loc_821ACB38:
	// ori r3,r3,138
	ctx.r3.u64 = ctx.r3.u64 | 138;
	// bl 0x820e68b8
	ctx.lr = 0x821ACB40;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821ACB44;
	sub_821AAC50(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_821ACB48:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,16468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821acb90
	if (!ctx.cr6.gt) goto loc_821ACB90;
	// li r29,60
	r29.s64 = 60;
loc_821ACB60:
	// lwz r10,68(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 68);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// ble cr6,0x821acb7c
	if (!ctx.cr6.gt) goto loc_821ACB7C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ac9f8
	ctx.lr = 0x821ACB78;
	sub_821AC9F8(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
loc_821ACB7C:
	// lwz r10,16468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16468);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,7
	r29.s64 = r29.s64 + 7;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821acb60
	if (ctx.cr6.lt) goto loc_821ACB60;
loc_821ACB90:
	// bl 0x821d87e0
	ctx.lr = 0x821ACB94;
	sub_821D87E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821acba4
	if (!ctx.cr6.eq) goto loc_821ACBA4;
	// lwz r3,68(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 68);
	// bl 0x821aafa0
	ctx.lr = 0x821ACBA4;
	sub_821AAFA0(ctx, base);
loc_821ACBA4:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,68(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 68);
	// lwz r10,16468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16468);
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// mulli r10,r10,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821ace0c
	if (!ctx.cr6.gt) goto loc_821ACE0C;
	// lwz r10,17792(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17792);
	// lwz r29,17780(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 17780);
	// lwz r28,17784(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 17784);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821acbdc
	if (ctx.cr6.eq) goto loc_821ACBDC;
	// li r30,99
	r30.s64 = 99;
	// b 0x821acc00
	goto loc_821ACC00;
loc_821ACBDC:
	// lwz r10,17788(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17788);
	// lwz r9,17772(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 17772);
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r30,r10,r9
	r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_821ACC00:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// bl 0x820e68b8
	ctx.lr = 0x821ACC10;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfd f4,-25048(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -25048);
	// addi r5,r7,8296
	ctx.r5.s64 = ctx.r7.s64 + 8296;
	// lfs f2,8488(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8488);
	ctx.f2.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
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
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821ACC6C;
	sub_821EAF80(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// bl 0x820e68b8
	ctx.lr = 0x821ACC7C;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8460
	ctx.r4.s64 = ctx.r11.s64 + 8460;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821ACC9C;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821eb1a0
	ctx.lr = 0x821ACCAC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,16676(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16676);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r6,255
	ctx.r11.u64 = ctx.r6.u64 | 255;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f12,16336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16336);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f0,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f9,f11,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f7,f11,f0,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f12,8456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8456);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmadds f6,f11,f0,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f13,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f11,f0,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f11,8452(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8452);
	ctx.f11.f64 = double(temp.f32);
	// fadds f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f9,-8492(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8492);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f10,8448(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8448);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fnmsubs f3,f3,f0,f13
	ctx.f3.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmsubs f11,f7,f0,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f9.f64)));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmsubs f13,f2,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f5,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x821e7d98
	ctx.lr = 0x821ACDD4;
	sub_821E7D98(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-11352
	r31.s64 = ctx.r11.s64 + -11352;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ace00
	if (!ctx.cr6.eq) goto loc_821ACE00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821ACDF8;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_821ACE00:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-11360(r10)
	REX_STORE_U8(ctx.r10.u32 + -11360, ctx.r11.u8);
loc_821ACE0C:
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821C1210) {
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
	ctx.lr = 0x821C1218;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822091c8
	ctx.lr = 0x821C1238;
	sub_822091C8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c9160
	ctx.lr = 0x821C1240;
	sub_822C9160(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// ble cr6,0x821c1338
	if (!ctx.cr6.gt) goto loc_821C1338;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_821C1258:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822091c8
	ctx.lr = 0x821C1268;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9148
	ctx.lr = 0x821C1270;
	sub_822C9148(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1288;
	sub_822091C8(ctx, base);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822c9148
	ctx.lr = 0x821C1290;
	sub_822C9148(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r29,6
	r29.s64 = 6;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
loc_821C12A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822091c8
	ctx.lr = 0x821C12B0;
	sub_822091C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c9148
	ctx.lr = 0x821C12B8;
	sub_822C9148(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r4,r31,2
	ctx.r4.s64 = r31.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C12D0;
	sub_822091C8(ctx, base);
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x822c9148
	ctx.lr = 0x821C12D8;
	sub_822C9148(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C12F0;
	sub_822091C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c9148
	ctx.lr = 0x821C12F8;
	sub_822C9148(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r4,r31,6
	ctx.r4.s64 = r31.s64 + 6;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1310;
	sub_822091C8(ctx, base);
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// bl 0x822c9148
	ctx.lr = 0x821C1318;
	sub_822C9148(ctx, base);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x821c12a0
	if (!ctx.cr0.eq) goto loc_821C12A0;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// bne 0x821c1258
	if (!ctx.cr0.eq) goto loc_821C1258;
loc_821C1338:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x821c135c
	if (!ctx.cr6.gt) goto loc_821C135C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x821c135c
	if (ctx.cr6.eq) goto loc_821C135C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821ff870
	ctx.lr = 0x821C1358;
	sub_821FF870(ctx, base);
	// b 0x821c1360
	goto loc_821C1360;
loc_821C135C:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_821C1360:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821C5010) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821c5044
	if (ctx.cr6.lt) goto loc_821C5044;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x821c5044
	if (!ctx.cr6.lt) goto loc_821C5044;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mulli r10,r3,248
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(248));
	// addi r11,r11,-25704
	ctx.r11.s64 = ctx.r11.s64 + -25704;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x821c5048
	goto loc_821C5048;
loc_821C5044:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821C5048:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x821c5090
	if (ctx.cr6.eq) goto loc_821C5090;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x821c5090
	if (ctx.cr6.eq) goto loc_821C5090;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r9,148
	ctx.r11.s64 = ctx.r9.s64 + 148;
	// bne cr6,0x821c5078
	if (!ctx.cr6.eq) goto loc_821C5078;
	// addi r11,r9,140
	ctx.r11.s64 = ctx.r9.s64 + 140;
loc_821C5078:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x821c5084
	if (ctx.cr6.lt) goto loc_821C5084;
	// li r4,3
	ctx.r4.s64 = 3;
loc_821C5084:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r3,r10,r11
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// blr 
	return;
loc_821C5090:
	// lha r3,158(r9)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 158));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10584(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10584, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C64A0) {
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
	// lfs f0,10312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bl 0x820e00c0
	ctx.lr = 0x821C64D0;
	sub_820E00C0(ctx, base);
	// lfs f0,10580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10588);
	ctx.f13.f64 = double(temp.f32);
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
	// stfs f0,10580(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10580, temp.u32);
	// stfs f13,10588(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10588, temp.u32);
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

DEFINE_REX_FUNC(sub_821C8008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,30
	ctx.r11.s64 = 30;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8BD8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r7,872(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 872);
	// lhz r11,624(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 624);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,1992(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821c8c48
	if (ctx.cr6.eq) goto loc_821C8C48;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c8c2c
	if (ctx.cr6.eq) goto loc_821C8C2C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821c8c60
	if (!ctx.cr6.eq) goto loc_821C8C60;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821c8c60
	goto loc_821C8C60;
loc_821C8C2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,680(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f12.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x821c8c5c
	goto loc_821C8C5C;
loc_821C8C48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r6,5844(r3)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 5844));
	// lfs f0,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r10,3
	ctx.r10.s64 = 3;
loc_821C8C5C:
	// li r9,2
	ctx.r9.s64 = 2;
loc_821C8C60:
	// lha r5,5844(r3)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 5844));
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821c8c84
	if (ctx.cr0.eq) goto loc_821C8C84;
	// lbz r11,59(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 59);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c8c84
	if (!ctx.cr0.gt) goto loc_821C8C84;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c8c84
	if (ctx.cr6.lt) goto loc_821C8C84;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
loc_821C8C84:
	// rlwinm. r11,r4,0,17,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8cbc
	if (ctx.cr0.eq) goto loc_821C8CBC;
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8ca4
	if (ctx.cr0.eq) goto loc_821C8CA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5584);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
loc_821C8CA4:
	// rlwinm. r11,r4,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8cbc
	if (ctx.cr0.eq) goto loc_821C8CBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5584);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
loc_821C8CBC:
	// stfs f0,5588(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5588, temp.u32);
	// stw r6,5572(r3)
	REX_STORE_U32(ctx.r3.u32 + 5572, ctx.r6.u32);
	// stw r8,5576(r3)
	REX_STORE_U32(ctx.r3.u32 + 5576, ctx.r8.u32);
	// stw r9,5580(r3)
	REX_STORE_U32(ctx.r3.u32 + 5580, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD2A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,10244(r3)
	REX_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821cb7d0
	ctx.lr = 0x821CD2D0;
	sub_821CB7D0(ctx, base);
	// stw r30,10036(r31)
	REX_STORE_U32(r31.u32 + 10036, r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CD2FC;
	sub_821C1760(ctx, base);
	// addi r3,r31,8120
	ctx.r3.s64 = r31.s64 + 8120;
	// bl 0x821be4f8
	ctx.lr = 0x821CD304;
	sub_821BE4F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821D0B48) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r31,r11,-8936
	r31.s64 = ctx.r11.s64 + -8936;
	// addi r9,r10,13128
	ctx.r9.s64 = ctx.r10.s64 + 13128;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,1824(r9)
	REX_STORE_U8(ctx.r9.u32 + 1824, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,13016
	ctx.r6.s64 = ctx.r10.s64 + 13016;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821D0BA0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0bb0
	if (ctx.cr0.eq) goto loc_821D0BB0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821aab38
	ctx.lr = 0x821D0BB0;
	sub_821AAB38(ctx, base);
loc_821D0BB0:
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

DEFINE_REX_FUNC(sub_821D17A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821b7a98
	sub_821B7A98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x821d1da8
	if (!ctx.cr6.eq) goto loc_821D1DA8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8212bc38
	sub_8212BC38(ctx, base);
	return;
loc_821D1DA8:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8212bc38
	sub_8212BC38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D2588) {
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
	// bl 0x821afce8
	ctx.lr = 0x821D25A4;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d2660
	if (!ctx.cr0.eq) goto loc_821D2660;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d25d4
	if (!ctx.cr6.eq) goto loc_821D25D4;
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
	ctx.lr = 0x821D25D4;
	sub_821AFA50(ctx, base);
loc_821D25D4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x821d2604
	if (!ctx.cr6.eq) goto loc_821D2604;
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
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lha r5,98(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 98));
	// addis r4,r10,29
	ctx.r4.s64 = ctx.r10.s64 + 1900544;
	// bl 0x8212ee78
	ctx.lr = 0x821D2604;
	sub_8212EE78(ctx, base);
loc_821D2604:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f4,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r10,-4224
	ctx.r11.s64 = ctx.r10.s64 + -4224;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// lfs f5,30024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30024);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,13184(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 13184);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,15632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82115808
	ctx.lr = 0x821D263C;
	sub_82115808(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x821d2654
	if (ctx.cr6.lt) goto loc_821D2654;
	// bl 0x821d1cd8
	ctx.lr = 0x821D264C;
	sub_821D1CD8(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821d4528
	ctx.lr = 0x821D2654;
	sub_821D4528(ctx, base);
loc_821D2654:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_821D2660:
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

DEFINE_REX_FUNC(sub_821D6970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821D6978;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,4
	ctx.r11.s64 = 4;
	// mulli r9,r4,136
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// li r28,0
	r28.s64 = 0;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_821D69A8:
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bge cr6,0x821d69c0
	if (!ctx.cr6.lt) goto loc_821D69C0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_821D69C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821d69a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D69A8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821d69e0
	if (!ctx.cr6.eq) goto loc_821D69E0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// b 0x821d69e4
	goto loc_821D69E4;
loc_821D69E0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821D69E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x821d6a94
	if (ctx.cr6.eq) goto loc_821D6A94;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d6a18
	if (ctx.cr6.eq) goto loc_821D6A18;
	// stw r4,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// b 0x821d6a40
	goto loc_821D6A40;
loc_821D6A18:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r3,r11,22576
	ctx.r3.s64 = ctx.r11.s64 + 22576;
	// bl 0x820fffa0
	ctx.lr = 0x821D6A24;
	sub_820FFFA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821d6a34
	if (!ctx.cr6.eq) goto loc_821D6A34;
loc_821D6A2C:
	// bl 0x82100b00
	ctx.lr = 0x821D6A30;
	sub_82100B00(ctx, base);
	// b 0x821d6a8c
	goto loc_821D6A8C;
loc_821D6A34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821D6A40:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821d6a68
	if (!ctx.cr6.eq) goto loc_821D6A68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82106460
	ctx.lr = 0x821D6A60;
	sub_82106460(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,3864(r11)
	REX_STORE_U32(ctx.r11.u32 + 3864, ctx.r3.u32);
loc_821D6A68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x821d6a8c
	if (ctx.cr6.eq) goto loc_821D6A8C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_821D6A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_821D6A94:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821d6a68
	if (ctx.cr6.lt) goto loc_821D6A68;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,3864(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3864);
	// bl 0x821007c0
	ctx.lr = 0x821D6AAC;
	sub_821007C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821d6a68
	if (!ctx.cr0.eq) goto loc_821D6A68;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821d6a68
	if (ctx.cr6.lt) goto loc_821D6A68;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x821d6a2c
	goto loc_821D6A2C;
}

DEFINE_REX_FUNC(sub_821DC8A0) {
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
	ctx.lr = 0x821DC8A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// lwz r10,220(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 220);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// lha r22,88(r10)
	r22.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 88));
	// bgt cr6,0x821dcb20
	if (ctx.cr6.gt) goto loc_821DCB20;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,13904
	ctx.r12.s64 = ctx.r12.s64 + 13904;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// nop 
	// addi r12,r12,-14088
	ctx.r12.s64 = ctx.r12.s64 + -14088;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821DC900;
	case 1:
		goto loc_821DCAB0;
	case 2:
		goto loc_821DC8F8;
	case 3:
		goto loc_821DCAFC;
	case 4:
		goto loc_821DCB20;
	case 5:
		goto loc_821DCAE0;
	case 6:
		goto loc_821DC8F8;
	case 7:
		goto loc_821DCB20;
	case 8:
		goto loc_821DC8F8;
	case 9:
		goto loc_821DCB20;
	case 10:
		goto loc_821DCB20;
	case 11:
		goto loc_821DC8F8;
	case 12:
		goto loc_821DCB20;
	case 13:
		goto loc_821DC8F8;
	case 14:
		goto loc_821DC8F8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821DC8F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821dcb58
	goto loc_821DCB58;
loc_821DC900:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r9,220(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lwz r11,516(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 516);
	// addi r24,r10,4384
	r24.s64 = ctx.r10.s64 + 4384;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r24,72
	ctx.r8.s64 = r24.s64 + 72;
	// lwz r9,124(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// lhax r31,r10,r8
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// lha r23,128(r9)
	r23.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 128));
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(r31.s32, r22.s32, ctx.xer);
	// bne cr6,0x821dc930
	if (!ctx.cr6.eq) goto loc_821DC930;
	// li r31,-1
	r31.s64 = -1;
loc_821DC930:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ble cr6,0x821dc940
	if (!ctx.cr6.gt) goto loc_821DC940;
	// li r10,8
	ctx.r10.s64 = 8;
loc_821DC940:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821dca84
	if (ctx.cr6.eq) goto loc_821DCA84;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x821dca7c
	if (ctx.cr6.eq) goto loc_821DCA7C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x821dca88
	if (!ctx.cr6.eq) goto loc_821DCA88;
	// lwz r10,80(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dc980
	if (ctx.cr6.eq) goto loc_821DC980;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// mulli r10,r11,9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r11,r9,-10976
	ctx.r11.s64 = ctx.r9.s64 + -10976;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821dc990
	goto loc_821DC990;
loc_821DC980:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// addi r10,r10,-10976
	ctx.r10.s64 = ctx.r10.s64 + -10976;
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821DC990:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
loc_821DC9A0:
	// lbzx r30,r27,r25
	r30.u64 = REX_LOAD_U8(r27.u32 + r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821DC9B4;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821dc9cc
	if (!ctx.cr0.eq) goto loc_821DC9CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c8008
	ctx.lr = 0x821DC9C4;
	sub_821C8008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821dc9fc
	if (ctx.cr0.eq) goto loc_821DC9FC;
loc_821DC9CC:
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// beq cr6,0x821dc9fc
	if (ctx.cr6.eq) goto loc_821DC9FC;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// beq cr6,0x821dc9fc
	if (ctx.cr6.eq) goto loc_821DC9FC;
	// cmpwi cr6,r30,19
	ctx.cr6.compare<int32_t>(r30.s32, 19, ctx.xer);
	// beq cr6,0x821dc9fc
	if (ctx.cr6.eq) goto loc_821DC9FC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821dc9fc
	if (!ctx.cr0.eq) goto loc_821DC9FC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stbu r30,1(r26)
	ea = 1 + r26.u32;
	REX_STORE_U8(ea, r30.u8);
	r26.u32 = ea;
loc_821DC9FC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(r27.s32, 9, ctx.xer);
	// blt cr6,0x821dc9a0
	if (ctx.cr6.lt) goto loc_821DC9A0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821dca3c
	if (!ctx.cr6.eq) goto loc_821DCA3C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x821dca74
	if (!ctx.cr6.eq) goto loc_821DCA74;
loc_821DCA18:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821d7468
	ctx.lr = 0x821DCA24;
	sub_821D7468(ctx, base);
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r23.s32, ctx.xer);
	// beq cr6,0x821dca30
	if (ctx.cr6.eq) goto loc_821DCA30;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821DCA30:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x821dca18
	if (ctx.cr6.eq) goto loc_821DCA18;
	// b 0x821dca6c
	goto loc_821DCA6C;
loc_821DCA3C:
	// bl 0x821fedc8
	ctx.lr = 0x821DCA40;
	sub_821FEDC8(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbzx r31,r11,r10
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_821DCA6C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x821dc990
	if (ctx.cr6.eq) goto loc_821DC990;
loc_821DCA74:
	// lwz r11,516(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 516);
	// b 0x821dca88
	goto loc_821DCA88;
loc_821DCA7C:
	// li r31,19
	r31.s64 = 19;
	// b 0x821dca88
	goto loc_821DCA88;
loc_821DCA84:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_821DCA88:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r24,72
	ctx.r8.s64 = r24.s64 + 72;
	// lhax r11,r10,r24
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + r24.u32));
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r31.u16);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// bge cr6,0x821dcb30
	if (!ctx.cr6.lt) goto loc_821DCB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r10,r24
	REX_STORE_U16(ctx.r10.u32 + r24.u32, ctx.r11.u16);
	// b 0x821dcb30
	goto loc_821DCB30;
loc_821DCAB0:
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r10,516(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 516);
	// addi r9,r9,-10976
	ctx.r9.s64 = ctx.r9.s64 + -10976;
	// mulli r8,r11,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r9,3696
	ctx.r11.s64 = ctx.r9.s64 + 3696;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r31,-4(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// b 0x821dcb30
	goto loc_821DCB30;
loc_821DCAE0:
	// lwz r3,516(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 516);
	// bl 0x821d8370
	ctx.lr = 0x821DCAE8;
	sub_821D8370(ctx, base);
	// lha r31,0(r3)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 0));
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(r31.s32, -2, ctx.xer);
	// bne cr6,0x821dcb30
	if (!ctx.cr6.eq) goto loc_821DCB30;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x821dcb24
	goto loc_821DCB24;
loc_821DCAFC:
	// lwz r3,216(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 216);
	// bl 0x821dc6a8
	ctx.lr = 0x821DCB04;
	sub_821DC6A8(ctx, base);
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821dcb18
	if (ctx.cr6.eq) goto loc_821DCB18;
	// lhz r10,16474(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16474);
	// sth r10,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r10.u16);
loc_821DCB18:
	// lha r3,16472(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16472));
	// b 0x821dcb58
	goto loc_821DCB58;
loc_821DCB20:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821DCB24:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d7468
	ctx.lr = 0x821DCB2C;
	sub_821D7468(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821DCB30:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821dcb54
	if (ctx.cr6.eq) goto loc_821DCB54;
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lha r4,100(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// bl 0x821d7268
	ctx.lr = 0x821DCB50;
	sub_821D7268(ctx, base);
	// sth r3,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r3.u16);
loc_821DCB54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821DCB58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_821E7948) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1672(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x820e1df8
	ctx.lr = 0x821E7974;
	sub_820E1DF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e7990
	if (!ctx.cr6.lt) goto loc_821E7990;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e79b8
	goto loc_821E79B8;
loc_821E7990:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x821E79A8;
	sub_820E1CF8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_821E79B8:
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

DEFINE_REX_FUNC(sub_821E8C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821E8CA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e8cc0
	if (!ctx.cr6.lt) goto loc_821E8CC0;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,1
	r30.s64 = 1;
	// b 0x821e8ccc
	goto loc_821E8CCC;
loc_821E8CC0:
	// rlwinm r11,r7,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_821E8CCC:
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821e8ce0
	if (!ctx.cr6.eq) goto loc_821E8CE0;
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x821e8d00
	goto loc_821E8D00;
loc_821E8CE0:
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// ble cr6,0x821e8cec
	if (!ctx.cr6.gt) goto loc_821E8CEC;
	// li r6,9
	ctx.r6.s64 = 9;
loc_821E8CEC:
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821e8d00
	if (!ctx.cr6.lt) goto loc_821E8D00;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
loc_821E8D00:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f0.u64);
	// lwa r10,-44(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -44));
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r10.u64);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfd f0,-48(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// addi r10,r10,-712
	ctx.r10.s64 = ctx.r10.s64 + -712;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f13.u64);
	// lwz r9,-44(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f0.u64);
	// lwz r31,-44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// bne cr6,0x821e8d90
	if (!ctx.cr6.eq) goto loc_821E8D90;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821e8d88
	if (!ctx.cr6.gt) goto loc_821E8D88;
loc_821E8D74:
	// divw. r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bgt 0x821e8d74
	if (ctx.cr0.gt) goto loc_821E8D74;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e8d98
	if (!ctx.cr6.eq) goto loc_821E8D98;
loc_821E8D88:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821e8d98
	goto loc_821E8D98;
loc_821E8D90:
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
loc_821E8D98:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r8,46
	ctx.r8.s64 = 46;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x821e8e08
	if (ctx.cr6.eq) goto loc_821E8E08;
loc_821E8DBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e8df4
	if (ctx.cr6.eq) goto loc_821E8DF4;
	// divw r8,r9,r4
	ctx.r8.u64 = uint32_t((ctx.r4.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r9.s32 / ctx.r4.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r8,r8,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// divw. r9,r9,r4
	ctx.r9.u64 = uint32_t((ctx.r4.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r9.s32 / ctx.r4.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x821e8dbc
	if (!ctx.cr0.eq) goto loc_821E8DBC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e8e18
	if (!ctx.cr6.eq) goto loc_821E8E18;
loc_821E8DF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e8e18
	if (ctx.cr6.eq) goto loc_821E8E18;
	// li r9,86
	ctx.r9.s64 = 86;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// b 0x821e8e18
	goto loc_821E8E18;
loc_821E8E08:
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821E8E18:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x821e8e44
	if (!ctx.cr6.eq) goto loc_821E8E44;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x821e8e44
	if (!ctx.cr6.gt) goto loc_821E8E44;
	// subfic r9,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r9,r9,43
	ctx.r9.s64 = ctx.r9.s64 + 43;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821E8E44:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e8e68
	if (ctx.cr6.eq) goto loc_821E8E68;
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r9,r29,4,27,27
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
loc_821E8E5C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x821e8e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8E5C;
loc_821E8E68:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821e8e84
	if (ctx.cr6.eq) goto loc_821E8E84;
	// subfic r10,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r10,r10,43
	ctx.r10.s64 = ctx.r10.s64 + 43;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_821E8E84:
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x821e8ecc
	if (!ctx.cr6.gt) goto loc_821E8ECC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821E8EAC:
	// divw r10,r31,r4
	ctx.r10.u64 = uint32_t((ctx.r4.s32 && !(r31.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r31.s32 / ctx.r4.s32 : 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// divw r31,r31,r4
	r31.u64 = uint32_t((ctx.r4.s32 && !(r31.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r31.s32 / ctx.r4.s32 : 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stbu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821e8eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8EAC;
loc_821E8ECC:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821F3020) {
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
	ctx.lr = 0x821F3028;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x821F3030;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lhz r9,2(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// li r25,0
	r25.s64 = 0;
	// lwz r28,8(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821f3168
	if (ctx.cr0.eq) goto loc_821F3168;
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
	// lfs f28,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f28.f64 = double(temp.f32);
	// addi r24,r4,320
	r24.s64 = ctx.r4.s64 + 320;
	// lfs f27,15944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15944);
	f27.f64 = double(temp.f32);
	// lfs f29,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f30,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	f31.f64 = double(temp.f32);
loc_821F3088:
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1d28
	ctx.lr = 0x821F309C;
	sub_820E1D28(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821f3150
	if (ctx.cr6.gt) goto loc_821F3150;
	// lwz r11,416(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 416);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f3150
	if (!ctx.cr6.gt) goto loc_821F3150;
	// addi r30,r26,352
	r30.s64 = r26.s64 + 352;
loc_821F30BC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x821F30CC;
	sub_820E1BA8(ctx, base);
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ec0
	ctx.lr = 0x821F30E0;
	sub_820E1EC0(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821f3110
	if (!ctx.cr6.gt) goto loc_821F3110;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1d28
	ctx.lr = 0x821F30FC;
	sub_820E1D28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821f2f08
	ctx.lr = 0x821F3108;
	sub_821F2F08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f3128
	if (!ctx.cr0.eq) goto loc_821F3128;
loc_821F3110:
	// lwz r11,416(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 416);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f30bc
	if (ctx.cr6.lt) goto loc_821F30BC;
	// b 0x821f3150
	goto loc_821F3150;
loc_821F3128:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,0(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821f3150
	if (!ctx.cr6.gt) goto loc_821F3150;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x821f3148
	if (!ctx.cr6.gt) goto loc_821F3148;
	// stfs f30,0(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// b 0x821f3150
	goto loc_821F3150;
loc_821F3148:
	// fnmsubs f0,f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_821F3150:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f3088
	if (ctx.cr6.lt) goto loc_821F3088;
loc_821F3168:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x821F3174;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821FA7F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821fa858
	if (ctx.cr6.lt) goto loc_821FA858;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821fa858
	if (!ctx.cr0.eq) goto loc_821FA858;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821fa83c
	if (!ctx.cr6.lt) goto loc_821FA83C;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stb r9,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// b 0x821fa858
	goto loc_821FA858;
loc_821FA83C:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821fa858
	if (!ctx.cr6.lt) goto loc_821FA858;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stb r11,36(r9)
	REX_STORE_U8(ctx.r9.u32 + 36, ctx.r11.u8);
loc_821FA858:
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FDFF8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,10408
	ctx.r11.s64 = ctx.r11.s64 + 10408;
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE708) {
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
	// bl 0x820e4bb0
	ctx.lr = 0x821FE718;
	sub_820E4BB0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r3,10416(r11)
	REX_STORE_U32(ctx.r11.u32 + 10416, ctx.r3.u32);
	// bl 0x821fe078
	ctx.lr = 0x821FE724;
	sub_821FE078(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FEC88) {
	REX_FUNC_PROLOGUE();
	// b 0x821fe8c0
	sub_821FE8C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FECF0) {
	REX_FUNC_PROLOGUE();
	// b 0x821fea70
	sub_821FEA70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FEDC8) {
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
	// bl 0x821fe8c0
	ctx.lr = 0x821FEDD8;
	sub_821FE8C0(ctx, base);
	// clrlwi r11,r3,9
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,21056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21056);
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

DEFINE_REX_FUNC(sub_821FF668) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// bne cr6,0x821ff690
	if (!ctx.cr6.eq) goto loc_821FF690;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,26816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26816);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1788(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 1788, temp.u32);
	// b 0x821ff694
	goto loc_821FF694;
loc_821FF690:
	// stfs f1,1788(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 1788, temp.u32);
loc_821FF694:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x821ff6ac
	if (!ctx.cr6.eq) goto loc_821FF6AC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1792(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1792, temp.u32);
	// blr 
	return;
loc_821FF6AC:
	// stfs f2,1792(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 1792, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202558) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x822022b0
	sub_822022B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822025E0) {
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
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x8220260c
	if (!ctx.cr6.lt) goto loc_8220260C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82201ac8
	ctx.lr = 0x82202604;
	sub_82201AC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82200b28
	ctx.lr = 0x8220260C;
	sub_82200B28(ctx, base);
loc_8220260C:
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

DEFINE_REX_FUNC(sub_822034E0) {
	REX_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,18544
	ctx.r11.s64 = ctx.r11.s64 + 18544;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822034F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82203504
	if (ctx.cr6.eq) goto loc_82203504;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r10)
	REX_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
loc_82203504:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822034f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822034F0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204AE0) {
	REX_FUNC_PROLOGUE();
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x82204af0
	if (!ctx.cr6.lt) goto loc_82204AF0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_82204AF0:
	// fcmpu cr6,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204DA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
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

DEFINE_REX_FUNC(sub_82205068) {
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
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,30472
	ctx.r11.s64 = ctx.r11.s64 + 30472;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220518c
	if (ctx.cr0.eq) goto loc_8220518C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8220511c
	if (!ctx.cr6.eq) goto loc_8220511C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822c8af8
	ctx.lr = 0x822050A8;
	sub_822C8AF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822050b8
	if (ctx.cr0.eq) goto loc_822050B8;
loc_822050B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82205190
	goto loc_82205190;
loc_822050B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,52(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822c9828
	ctx.lr = 0x822050CC;
	sub_822C9828(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822050e4
	if (!ctx.cr0.eq) goto loc_822050E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// b 0x8220518c
	goto loc_8220518C;
loc_822050E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80c8
	ctx.lr = 0x822050F8;
	sub_822C80C8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822d4fa0
	ctx.lr = 0x82205108;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822c9ce8
	ctx.lr = 0x82205118;
	sub_822C9CE8(ctx, base);
	// b 0x822050b0
	goto loc_822050B0;
loc_8220511C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82205148
	if (!ctx.cr6.eq) goto loc_82205148;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822c9fc8
	ctx.lr = 0x82205130;
	sub_822C9FC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82205190
	if (ctx.cr0.eq) goto loc_82205190;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// b 0x82205190
	goto loc_82205190;
loc_82205148:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82205188
	if (!ctx.cr6.eq) goto loc_82205188;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822c98f8
	ctx.lr = 0x8220515C;
	sub_822C98F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822050b0
	if (!ctx.cr0.eq) goto loc_822050B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82205184
	if (ctx.cr6.eq) goto loc_82205184;
	// bl 0x822c80a8
	ctx.lr = 0x82205180;
	sub_822C80A8(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_82205184:
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
loc_82205188:
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
loc_8220518C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82205190:
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

DEFINE_REX_FUNC(sub_82209D98) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,1688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1688);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82209e2c
	if (!ctx.cr6.eq) goto loc_82209E2C;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82209e2c
	if (!ctx.cr0.eq) goto loc_82209E2C;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x82209e2c
	if (!ctx.cr6.lt) goto loc_82209E2C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d408c
	ctx.lr = 0x82209DF4;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82209e2c
	if (!ctx.cr0.eq) goto loc_82209E2C;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82209e2c
	if (!ctx.cr6.eq) goto loc_82209E2C;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82209e2c
	if (ctx.cr0.eq) goto loc_82209E2C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209e2c
	if (ctx.cr0.eq) goto loc_82209E2C;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82209E2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d40ac
	ctx.lr = 0x82209E48;
	__imp__XamInputSetState(ctx, base);
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

DEFINE_REX_FUNC(sub_8220F830) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8220f868
	goto loc_8220F868;
loc_8220F868:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f87c
	if (ctx.cr6.eq) goto loc_8220F87C;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x824d437c
	ctx.lr = 0x8220F87C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8220F87C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210508) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12280(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12280(r3)
	REX_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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

DEFINE_REX_FUNC(sub_82210B68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210C40) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82210db8
	if (!ctx.cr6.eq) goto loc_82210DB8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82210dbc
	if (ctx.cr6.eq) goto loc_82210DBC;
loc_82210DB8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82210DBC:
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x82210de0
	if (!ctx.cr6.eq) goto loc_82210DE0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82210de4
	if (ctx.cr6.eq) goto loc_82210DE4;
loc_82210DE0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82210DE4:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
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
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
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

DEFINE_REX_FUNC(sub_82212DE0) {
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
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82212b78
	ctx.lr = 0x82212E50;
	sub_82212B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822158CC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822158D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822158D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r29,13924(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 13924);
	// li r4,502
	ctx.r4.s64 = 502;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82213e40
	ctx.lr = 0x822158F0;
	sub_82213E40(ctx, base);
	// lbz r11,11069(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215908
	if (ctx.cr0.eq) goto loc_82215908;
	// lwz r31,17136(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 17136);
	// b 0x82215964
	goto loc_82215964;
loc_82215908:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13924(r30)
	REX_STORE_U32(r30.u32 + 13924, r31.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// bne cr6,0x82215940
	if (!ctx.cr6.eq) goto loc_82215940;
	// lwz r11,13920(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13920);
	// stw r3,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// b 0x82215958
	goto loc_82215958;
loc_82215940:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13928(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13928);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_82215958:
	// addi r4,r3,2008
	ctx.r4.s64 = ctx.r3.s64 + 2008;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8221c548
	ctx.lr = 0x82215964;
	sub_8221C548(ctx, base);
loc_82215964:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,2008
	ctx.r11.s64 = r31.s64 + 2008;
	// stw r3,13928(r30)
	REX_STORE_U32(r30.u32 + 13928, ctx.r3.u32);
	// stw r11,13932(r30)
	REX_STORE_U32(r30.u32 + 13932, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82217DF8) {
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
	ctx.lr = 0x82217E00;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82215248
	ctx.lr = 0x82217E14;
	sub_82215248(ctx, base);
	// li r11,486
	ctx.r11.s64 = 486;
	// lbz r10,3(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 3);
	// li r9,917
	ctx.r9.s64 = 917;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,918
	ctx.r7.s64 = 918;
	// rlwinm r8,r10,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3528
	ctx.r11.s64 = 3528;
	// li r6,3529
	ctx.r6.s64 = 3529;
	// li r5,3530
	ctx.r5.s64 = 3530;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r4,3531
	ctx.r4.s64 = 3531;
	// lbz r27,7(r30)
	r27.u64 = REX_LOAD_U8(r30.u32 + 7);
	// li r29,3144
	r29.s64 = 3144;
	// li r28,3145
	r28.s64 = 3145;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// li r10,3146
	ctx.r10.s64 = 3146;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r26,3147
	r26.s64 = 3147;
	// li r27,3656
	r27.s64 = 3656;
	// li r24,3659
	r24.s64 = 3659;
	// li r9,3662
	ctx.r9.s64 = 3662;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r23,3665
	r23.s64 = 3665;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 11);
	// li r22,3208
	r22.s64 = 3208;
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | r25.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 15);
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | r25.u64;
	// li r25,4100
	r25.s64 = 4100;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,19(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 19);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// li r7,3209
	ctx.r7.s64 = 3209;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,23(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 23);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3224
	ctx.r5.s64 = 3224;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 27);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r4,3225
	ctx.r4.s64 = 3225;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,31(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 31);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r29,3226
	r29.s64 = 3226;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,35(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 35);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r28,3227
	r28.s64 = 3227;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,39(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 39);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r8,3210
	ctx.r8.s64 = 3210;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r10,3211
	ctx.r10.s64 = 3211;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,43(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 43);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r26,3677
	r26.s64 = 3677;
	// lbz r11,47(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 47);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,51(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 51);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,55(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 55);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,59(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 59);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// li r6,3668
	ctx.r6.s64 = 3668;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,63(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 63);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,67(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 67);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3592
	ctx.r7.s64 = 3592;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,71(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 71);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3589
	ctx.r8.s64 = 3589;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,75(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 75);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,79(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 79);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r9,4103
	ctx.r9.s64 = 4103;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3671
	ctx.r5.s64 = 3671;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3674
	ctx.r11.s64 = 3674;
	// lbz r27,83(r30)
	r27.u64 = REX_LOAD_U8(r30.u32 + 83);
	// or r10,r27,r10
	ctx.r10.u64 = r27.u64 | ctx.r10.u64;
	// li r27,3680
	r27.s64 = 3680;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r24,r10,0,0,23
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,87(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 87);
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | r24.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,91(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 91);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,95(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 95);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,99(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 99);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,103(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 103);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3686
	ctx.r8.s64 = 3686;
	// li r4,3698
	ctx.r4.s64 = 3698;
	// li r29,3701
	r29.s64 = 3701;
	// li r28,3704
	r28.s64 = 3704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,107(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 107);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,111(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 111);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,3692
	ctx.r6.s64 = 3692;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,115(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 115);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3695
	ctx.r5.s64 = 3695;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,119(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 119);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3683
	ctx.r11.s64 = 3683;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,123(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 123);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,3689
	ctx.r9.s64 = 3689;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,127(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 127);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,131(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 131);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 135);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,139(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 139);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,143(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 143);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,147(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 147);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,151(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 151);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,155(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 155);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,159(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 159);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r9,3707
	ctx.r9.s64 = 3707;
	// lbz r11,163(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 163);
	// li r8,3618
	ctx.r8.s64 = 3618;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r10,3615
	ctx.r10.s64 = 3615;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3624
	ctx.r7.s64 = 3624;
	// li r6,3627
	ctx.r6.s64 = 3627;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,3633
	ctx.r5.s64 = 3633;
	// lbz r4,167(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 167);
	// li r11,3636
	ctx.r11.s64 = 3636;
	// li r29,3642
	r29.s64 = 3642;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// li r4,3645
	ctx.r4.s64 = 3645;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r9,0,0,23
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// li r27,3540
	r27.s64 = 3540;
	// li r10,3844
	ctx.r10.s64 = 3844;
	// li r26,3845
	r26.s64 = 3845;
	// li r25,3846
	r25.s64 = 3846;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r24,3847
	r24.s64 = 3847;
	// lbz r21,171(r30)
	r21.u64 = REX_LOAD_U8(r30.u32 + 171);
	// li r23,2069
	r23.s64 = 2069;
	// li r22,2133
	r22.s64 = 2133;
	// or r28,r21,r28
	r28.u64 = r21.u64 | r28.u64;
	// li r9,2584
	ctx.r9.s64 = 2584;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r21,r28,0,0,23
	r21.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// lbz r8,175(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 175);
	// or r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 | r21.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r8,0,0,23
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,179(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 179);
	// or r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 | r28.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,2590
	ctx.r6.s64 = 2590;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,183(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 183);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,72
	ctx.r5.s64 = 72;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,187(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 187);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,191(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 191);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// li r7,2587
	ctx.r7.s64 = 2587;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,195(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 195);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,199(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 199);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,203(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 203);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,207(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 207);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,211(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 211);
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,215(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 215);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,219(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 219);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,223(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 223);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,227(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 227);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,231(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 231);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,235(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 235);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,239(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 239);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x822183c4
	if (!ctx.cr6.gt) goto loc_822183C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822183C4;
	sub_82215008(ctx, base);
loc_822183C4:
	// li r11,501
	ctx.r11.s64 = 501;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8697
	ctx.r11.s64 = 8697;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,501
	ctx.r8.s64 = 501;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82236D00) {
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
	// addi r31,r11,-5740
	r31.s64 = ctx.r11.s64 + -5740;
	// lwz r11,-5740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236d3c
	if (!ctx.cr6.eq) goto loc_82236D3C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,792
	ctx.r3.s64 = 792;
	// bl 0x82236c98
	ctx.lr = 0x82236D30;
	sub_82236C98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236d4c
	if (ctx.cr6.eq) goto loc_82236D4C;
loc_82236D3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82236d50
	goto loc_82236D50;
loc_82236D4C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82236D50:
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

DEFINE_REX_FUNC(sub_82237E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82237E98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,244
	r31.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824d438c
	ctx.lr = 0x82237EB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8223a078
	ctx.lr = 0x82237EC0;
	sub_8223A078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x82237EC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82238A70) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82238A84:
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
	// bne 0x82238a84
	if (!ctx.cr0.eq) goto loc_82238A84;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82238ad4
	if (!ctx.cr6.eq) goto loc_82238AD4;
	// bl 0x822388d8
	ctx.lr = 0x82238AB0;
	sub_822388D8(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-5612
	ctx.r11.s64 = ctx.r11.s64 + -5612;
loc_82238ABC:
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
	// stwcx. r8,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82238abc
	if (!ctx.cr0.eq) goto loc_82238ABC;
loc_82238AD4:
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

DEFINE_REX_FUNC(sub_8223B720) {
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
	// beq cr6,0x8223b76c
	if (ctx.cr6.eq) goto loc_8223B76C;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b75c
	if (ctx.cr6.eq) goto loc_8223B75C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd250
	ctx.lr = 0x8223B754;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8223B75C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x823cd250
	ctx.lr = 0x8223B76C;
	sub_823CD250(ctx, base);
loc_8223B76C:
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

DEFINE_REX_FUNC(sub_8223C898) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8242b7d0
	ctx.lr = 0x8223C8B8;
	sub_8242B7D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223c930
	if (ctx.cr0.lt) goto loc_8223C930;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-30569
	ctx.r11.s64 = -2003369984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x8223c8e8
	if (!ctx.cr6.eq) goto loc_8223C8E8;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8223c8ec
	if (ctx.cr6.eq) goto loc_8223C8EC;
loc_8223C8E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8223C8EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223c930
	if (ctx.cr6.lt) goto loc_8223C930;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8223c908
	if (ctx.cr6.eq) goto loc_8223C908;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8223C908:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223c930
	if (ctx.cr6.lt) goto loc_8223C930;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16125, ctx.xer);
	// bne cr6,0x8223c92c
	if (!ctx.cr6.eq) goto loc_8223C92C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16125, ctx.xer);
	// beq cr6,0x8223c930
	if (ctx.cr6.eq) goto loc_8223C930;
loc_8223C92C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8223C930:
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

DEFINE_REX_FUNC(sub_822429C0) {
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
	ctx.lr = 0x822429C8;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r9,332(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r10,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// li r16,1
	r16.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82242a10
	if (!ctx.cr6.eq) goto loc_82242A10;
	// stw r16,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, r16.u32);
	// stw r16,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, r16.u32);
	// stw r16,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, r16.u32);
	// stw r16,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, r16.u32);
	// stw r16,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, r16.u32);
loc_82242A10:
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r19.u32);
	// ble cr6,0x82243218
	if (!ctx.cr6.gt) goto loc_82243218;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r18,-32161
	r18.s64 = -2107703296;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f8,-6120(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r8.u32 + -6120);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// lfd f7,-25040(r6)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + -25040);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lfs f10,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lis r31,-32172
	r31.s64 = -2108424192;
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
	// lis r30,-32172
	r30.s64 = -2108424192;
	// addi r11,r11,-16832
	ctx.r11.s64 = ctx.r11.s64 + -16832;
	// addi r17,r10,-15184
	r17.s64 = ctx.r10.s64 + -15184;
	// stw r11,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// addi r15,r9,-21988
	r15.s64 = ctx.r9.s64 + -21988;
	// addi r14,r8,-10944
	r14.s64 = ctx.r8.s64 + -10944;
	// addi r6,r31,-10976
	ctx.r6.s64 = r31.s64 + -10976;
	// addi r5,r30,-16868
	ctx.r5.s64 = r30.s64 + -16868;
loc_82242A74:
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r29,r19
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// lwzx r20,r11,r4
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,7
	ctx.cr6.compare<int32_t>(r20.s32, 7, ctx.xer);
	// add r26,r11,r7
	r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bge cr6,0x82242e18
	if (!ctx.cr6.lt) goto loc_82242E18;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// blt cr6,0x82242e18
	if (ctx.cr6.lt) goto loc_82242E18;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	r21.s64 = 0;
	// lwzx r24,r10,r15
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	// lwzx r22,r10,r14
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + r14.u32);
	// slw r11,r16,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (r16.u32 << (r24.u8 & 0x3F));
	// lwzx r28,r10,r5
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r23,r10,r6
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r25,r11,-1
	r25.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82242db8
	if (!ctx.cr6.gt) goto loc_82242DB8;
loc_82242ACC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_82242AD0:
	// lwz r27,328(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,324(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r31,-2(r27)
	r31.u64 = REX_LOAD_U16(r27.u32 + -2);
	// lhz r30,0(r27)
	r30.u64 = REX_LOAD_U16(r27.u32 + 0);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r9.u8 & 0x3F));
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r10.u8 & 0x3F));
	// or r31,r9,r10
	r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r30,r31,18,30,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x2;
loc_82242AFC:
	// lwz r9,312(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + ctx.r8.u32);
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// srw r29,r31,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r30,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, r30.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r29,r29,31
	r29.u64 = r29.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242bc8
	if (!ctx.cr6.eq) goto loc_82242BC8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242bc8
	if (!ctx.cr6.eq) goto loc_82242BC8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242bc8
	if (!ctx.cr6.eq) goto loc_82242BC8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// srw r30,r31,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r30,r30,31
	r30.u64 = r30.u32 & 0x1;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242bc8
	if (!ctx.cr6.eq) goto loc_82242BC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82242afc
	if (!ctx.cr6.lt) goto loc_82242AFC;
loc_82242BC8:
	// lwz r31,324(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addic. r11,r11,-15
	ctx.xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x82242bf8
	if (!ctx.cr0.lt) goto loc_82242BF8;
	// lhz r31,0(r27)
	r31.u64 = REX_LOAD_U16(r27.u32 + 0);
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// stw r30,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, r30.u32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r31,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, r31.u32);
loc_82242BF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242c0c
	if (!ctx.cr6.eq) goto loc_82242C0C;
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82242ad0
	if (ctx.cr6.gt) goto loc_82242AD0;
loc_82242C0C:
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82242e0c
	if (ctx.cr6.lt) goto loc_82242E0C;
	// lwz r29,328(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,324(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mulli r10,r20,56
	ctx.r10.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(56));
	// lhz r8,-2(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + -2);
	// lhz r31,0(r29)
	r31.u64 = REX_LOAD_U16(r29.u32 + 0);
	// subfic r30,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	r30.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r27,r11,r25
	r27.u64 = ctx.r11.u64 & r25.u64;
	// slw r8,r8,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r30.u8 & 0x3F));
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// or r31,r8,r9
	r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r27,r23,31
	r27.u64 = r23.u32 & 0x1;
	// li r9,15
	ctx.r9.s64 = 15;
	// rlwinm r8,r31,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 17) & 0x1FFFF;
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82242cb4
	if (ctx.cr6.eq) goto loc_82242CB4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82242c78
	if (!ctx.cr6.eq) goto loc_82242C78;
	// stfs f10,0(r26)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x82242c9c
	goto loc_82242C9C;
loc_82242C78:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82242c8c
	if (!ctx.cr6.eq) goto loc_82242C8C;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82242c90
	goto loc_82242C90;
loc_82242C8C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82242C90:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// li r9,14
	ctx.r9.s64 = 14;
loc_82242C9C:
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// and r30,r11,r25
	r30.u64 = ctx.r11.u64 & r25.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82242CB4:
	// rlwinm r30,r23,0,16,30
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82242d68
	if (!ctx.cr6.gt) goto loc_82242D68;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82242CD0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82242ce0
	if (!ctx.cr6.eq) goto loc_82242CE0;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x82242cfc
	goto loc_82242CFC;
loc_82242CE0:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82242cf4
	if (!ctx.cr6.eq) goto loc_82242CF4;
	// fmuls f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82242cf8
	goto loc_82242CF8;
loc_82242CF4:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82242CF8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82242CFC:
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & r25.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82242d1c
	if (!ctx.cr6.eq) goto loc_82242D1C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x82242d3c
	goto loc_82242D3C;
loc_82242D1C:
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82242d34
	if (!ctx.cr6.eq) goto loc_82242D34;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82242d38
	goto loc_82242D38;
loc_82242D34:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82242D38:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82242D3C:
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & r25.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f6,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// rlwinm r30,r8,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// bdnz 0x82242cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242CD0;
loc_82242D68:
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r10,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r10.u64 = static_cast<uint64_t>(15) - ctx.r9.u64;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x82242d98
	if (!ctx.cr0.lt) goto loc_82242D98;
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// addi r8,r29,2
	ctx.r8.s64 = r29.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r8,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r9,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
loc_82242D98:
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// blt 0x82242e0c
	if (ctx.cr0.lt) goto loc_82242E0C;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(r21.s32, r22.s32, ctx.xer);
	// blt cr6,0x82242acc
	if (ctx.cr6.lt) goto loc_82242ACC;
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
loc_82242DB8:
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82242e18
	if (!ctx.cr6.eq) goto loc_82242E18;
loc_82242DC4:
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82242dfc
	if (!ctx.cr6.lt) goto loc_82242DFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x82242dfc
	if (ctx.cr0.eq) goto loc_82242DFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82242DF0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82242df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242DF0;
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
loc_82242DFC:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x822430fc
	goto loc_822430FC;
loc_82242E0C:
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
	// stw r16,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r16.u32);
	// b 0x82242dc4
	goto loc_82242DC4;
loc_82242E18:
	// cmpwi cr6,r20,5
	ctx.cr6.compare<int32_t>(r20.s32, 5, ctx.xer);
	// beq cr6,0x82242e28
	if (ctx.cr6.eq) goto loc_82242E28;
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(r20.s32, 6, ctx.xer);
	// bne cr6,0x822430f4
	if (!ctx.cr6.eq) goto loc_822430F4;
loc_82242E28:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(r20.s32, 6, ctx.xer);
	// bne cr6,0x82242ee4
	if (!ctx.cr6.eq) goto loc_82242EE4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82242ed0
	if (!ctx.cr6.gt) goto loc_82242ED0;
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82242E5C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82242e74
	if (!ctx.cr6.eq) goto loc_82242E74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82242E74:
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// bne cr6,0x82242e90
	if (!ctx.cr6.eq) goto loc_82242E90;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82242E90:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// bne cr6,0x82242eac
	if (!ctx.cr6.eq) goto loc_82242EAC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82242EAC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x82242e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242E5C;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82242ed0
	if (ctx.cr6.lt) goto loc_82242ED0;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82242ED0:
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82242fc4
	goto loc_82242FC4;
loc_82242EE4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmul f0,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f7.f64;
	// ble cr6,0x82242fb8
	if (!ctx.cr6.gt) goto loc_82242FB8;
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82242F08:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82242f30
	if (ctx.cr6.eq) goto loc_82242F30;
	// lfs f13,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82242f30
	if (!ctx.cr6.gt) goto loc_82242F30;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82242F30:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82242f58
	if (ctx.cr6.eq) goto loc_82242F58;
	// lfs f13,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82242f58
	if (!ctx.cr6.gt) goto loc_82242F58;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82242F58:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82242f80
	if (ctx.cr6.eq) goto loc_82242F80;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82242f80
	if (!ctx.cr6.gt) goto loc_82242F80;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82242F80:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82242fa4
	if (ctx.cr6.eq) goto loc_82242FA4;
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82242fa4
	if (!ctx.cr6.gt) goto loc_82242FA4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82242FA4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x82242f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242F08;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82242fb8
	if (ctx.cr6.lt) goto loc_82242FB8;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82242FB8:
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82242FC4:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x82242fe8
	if (ctx.cr6.eq) goto loc_82242FE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82242FE8:
	// lwz r9,344(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r31,340(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r10,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, ctx.r9.u32);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r31,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224301c
	if (ctx.cr6.eq) goto loc_8224301C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8224301C:
	// lwz r29,336(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r31,344(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r30,340(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r29,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, r29.u32);
	// stw r31,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, r30.u32);
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	r26.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82243054:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82243078
	if (!ctx.cr6.eq) goto loc_82243078;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82243074
	if (!ctx.cr6.eq) goto loc_82243074;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82243074:
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_82243078:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x8224309c
	if (!ctx.cr6.eq) goto loc_8224309C;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82243098
	if (!ctx.cr6.eq) goto loc_82243098;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82243098:
	// stfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
loc_8224309C:
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x822430c0
	if (!ctx.cr6.eq) goto loc_822430C0;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822430bc
	if (!ctx.cr6.eq) goto loc_822430BC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822430BC:
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 8, temp.u32);
loc_822430C0:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x822430e4
	if (!ctx.cr6.eq) goto loc_822430E4;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822430e0
	if (!ctx.cr6.eq) goto loc_822430E0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822430E0:
	// stfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 12, temp.u32);
loc_822430E4:
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// bdnz 0x82243054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243054;
loc_822430F4:
	// cmpwi cr6,r20,7
	ctx.cr6.compare<int32_t>(r20.s32, 7, ctx.xer);
	// bne cr6,0x822431f4
	if (!ctx.cr6.eq) goto loc_822431F4;
loc_822430FC:
	// fmul f0,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f8.f64;
	// lwz r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x82243124
	if (ctx.cr6.eq) goto loc_82243124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82243124:
	// lwz r10,344(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r9,336(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r31,340(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, r31.u32);
	// rlwinm r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224315c
	if (ctx.cr6.eq) goto loc_8224315C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8224315C:
	// lwz r31,344(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r30,340(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// lwz r29,336(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// stw r10,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r31,348(r3)
	REX_STORE_U32(ctx.r3.u32 + 348, r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r30,344(r3)
	REX_STORE_U32(ctx.r3.u32 + 344, r30.u32);
	// stw r29,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, r29.u32);
loc_82243184:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82243198
	if (!ctx.cr6.eq) goto loc_82243198;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82243198:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822431b0
	if (!ctx.cr6.eq) goto loc_822431B0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822431B0:
	// rlwinm r9,r8,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822431c8
	if (!ctx.cr6.eq) goto loc_822431C8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822431C8:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822431e0
	if (!ctx.cr6.eq) goto loc_822431E0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822431E0:
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bdnz 0x82243184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243184;
	// lwz r29,-12608(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + -12608);
loc_822431F4:
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82242a74
	if (ctx.cr6.lt) goto loc_82242A74;
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243218
	if (ctx.cr6.eq) goto loc_82243218;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
loc_82243218:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82268A80) {
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
	ctx.lr = 0x82268A88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82268b04
	if (ctx.cr6.eq) goto loc_82268B04;
	// cmplwi cr6,r11,2006
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2006, ctx.xer);
	// beq cr6,0x82268aec
	if (ctx.cr6.eq) goto loc_82268AEC;
	// cmplwi cr6,r11,2056
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2056, ctx.xer);
	// beq cr6,0x82268ac4
	if (ctx.cr6.eq) goto loc_82268AC4;
	// cmplwi cr6,r11,2061
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2061, ctx.xer);
	// bne cr6,0x82268b88
	if (!ctx.cr6.eq) goto loc_82268B88;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82268b80
	goto loc_82268B80;
loc_82268AC4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x82268b80
	goto loc_82268B80;
loc_82268AEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8225cf00
	ctx.lr = 0x82268B00;
	sub_8225CF00(ctx, base);
	// b 0x82268b88
	goto loc_82268B88;
loc_82268B04:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// addi r27,r31,44
	r27.s64 = r31.s64 + 44;
	// bl 0x822462c8
	ctx.lr = 0x82268B24;
	sub_822462C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268b88
	if (ctx.cr6.eq) goto loc_82268B88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x82268B38;
	sub_8224DA00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822586e0
	ctx.lr = 0x82268B50;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268b88
	if (ctx.cr6.eq) goto loc_82268B88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,880
	ctx.r4.s64 = ctx.r11.s64 + 880;
	// bl 0x82256ea0
	ctx.lr = 0x82268B6C;
	sub_82256EA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,848
	ctx.r4.s64 = ctx.r11.s64 + 848;
	// bl 0x82256ea0
	ctx.lr = 0x82268B80;
	sub_82256EA0(ctx, base);
loc_82268B80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264118
	ctx.lr = 0x82268B88;
	sub_82264118(ctx, base);
loc_82268B88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8226DE88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226DE90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bge cr6,0x8226deac
	if (!ctx.cr6.lt) goto loc_8226DEAC;
loc_8226DEA0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x8226df84
	goto loc_8226DF84;
loc_8226DEAC:
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 188, temp.u32);
	// stfs f13,192(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 192, temp.u32);
	// lwz r9,200(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 200);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stw r9,200(r7)
	REX_STORE_U32(ctx.r7.u32 + 200, ctx.r9.u32);
	// blt cr6,0x8226dea0
	if (ctx.cr6.lt) goto loc_8226DEA0;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// mulli r10,r30,24
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8226dea0
	if (ctx.cr6.lt) goto loc_8226DEA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225d698
	ctx.lr = 0x8226DF10;
	sub_8225D698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226df24
	if (!ctx.cr0.eq) goto loc_8226DF24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226df84
	goto loc_8226DF84;
loc_8226DF24:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8226df80
	if (!ctx.cr6.gt) goto loc_8226DF80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8226DF34:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x8226c7b0
	ctx.lr = 0x8226DF78;
	sub_8226C7B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8226df34
	if (!ctx.cr0.eq) goto loc_8226DF34;
loc_8226DF80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226DF84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82275BA8) {
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
	ctx.lr = 0x82275BB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82253400
	ctx.lr = 0x82275BC4;
	sub_82253400(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82275c54
	if (ctx.cr6.eq) goto loc_82275C54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82275BD4;
	sub_822D6A10(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x82275BE0;
	sub_82255B48(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82275c54
	if (ctx.cr0.eq) goto loc_82275C54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,1248
	r28.s64 = ctx.r11.s64 + 1248;
	// b 0x82275c38
	goto loc_82275C38;
loc_82275BF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82275c1c
	if (ctx.cr6.eq) goto loc_82275C1C;
	// addi r10,r29,-2
	ctx.r10.s64 = r29.s64 + -2;
loc_82275C04:
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bne cr6,0x82275c04
	if (!ctx.cr6.eq) goto loc_82275C04;
loc_82275C1C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + r29.u32, ctx.r10.u16);
	// bl 0x8225bb70
	ctx.lr = 0x82275C34;
	sub_8225BB70(ctx, base);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
loc_82275C38:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d82e0
	ctx.lr = 0x82275C44;
	sub_822D82E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82275bf4
	if (!ctx.cr0.eq) goto loc_82275BF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82275C54;
	sub_82255B70(ctx, base);
loc_82275C54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822779C8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r31.u32);
	// bl 0x8227cd20
	ctx.lr = 0x822779F4;
	sub_8227CD20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	REX_STORE_U32(r30.u32 + 32, r31.u32);
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,56(r30)
	REX_STORE_U32(r30.u32 + 56, r31.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stw r31,52(r30)
	REX_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r31,60(r30)
	REX_STORE_U32(r30.u32 + 60, r31.u32);
	// stw r31,64(r30)
	REX_STORE_U32(r30.u32 + 64, r31.u32);
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

DEFINE_REX_FUNC(sub_82278790) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82278798;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,30000
	r29.s64 = ctx.r11.s64 + 30000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x822787B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,30028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822787f0
	if (ctx.cr0.eq) goto loc_822787F0;
loc_822787C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x822787dc
	if (!ctx.cr6.eq) goto loc_822787DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x822787e8
	if (ctx.cr6.eq) goto loc_822787E8;
loc_822787DC:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822787c4
	if (!ctx.cr6.eq) goto loc_822787C4;
loc_822787E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227880c
	if (!ctx.cr6.eq) goto loc_8227880C;
loc_822787F0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
loc_822787F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x82278800;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8227880C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x822787f8
	goto loc_822787F8;
}

DEFINE_REX_FUNC(sub_8227A9E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8224c4e0
	ctx.lr = 0x8227AA00;
	sub_8224C4E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8224c540
	ctx.lr = 0x8227AA0C;
	sub_8224C540(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
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

DEFINE_REX_FUNC(sub_8227B738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227B740;
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
	// beq 0x8227b798
	if (ctx.cr0.eq) goto loc_8227B798;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x8227b780
	if (ctx.cr0.lt) goto loc_8227B780;
loc_8227B76C:
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227fdf0
	ctx.lr = 0x8227B778;
	sub_8227FDF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8227b76c
	if (!ctx.cr0.lt) goto loc_8227B76C;
loc_8227B780:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b790
	if (ctx.cr0.eq) goto loc_8227B790;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227B790;
	sub_82255B70(ctx, base);
loc_8227B790:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8227b7b4
	goto loc_8227B7B4;
loc_8227B798:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227fdf0
	ctx.lr = 0x8227B7A0;
	sub_8227FDF0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b7b0
	if (ctx.cr0.eq) goto loc_8227B7B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227B7B0;
	sub_82255B70(ctx, base);
loc_8227B7B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8227B7B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227CF00) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227cf80
	if (ctx.cr0.eq) goto loc_8227CF80;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227cf40
	if (!ctx.cr0.eq) goto loc_8227CF40;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,-12544
	ctx.r4.s64 = ctx.r11.s64 + -12544;
	// bl 0x8227fe50
	ctx.lr = 0x8227CF3C;
	sub_8227FE50(ctx, base);
	// b 0x8227cfe4
	goto loc_8227CFE4;
loc_8227CF40:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8227cfe4
	if (!ctx.cr6.gt) goto loc_8227CFE4;
loc_8227CF54:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8227cf00
	ctx.lr = 0x8227CF68;
	sub_8227CF00(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8227cf54
	if (ctx.cr6.lt) goto loc_8227CF54;
	// b 0x8227cfe4
	goto loc_8227CFE4;
loc_8227CF80:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227cf90
	if (ctx.cr0.eq) goto loc_8227CF90;
loc_8227CF88:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8227cfe0
	goto loc_8227CFE0;
loc_8227CF90:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227cfc0
	if (ctx.cr0.eq) goto loc_8227CFC0;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cf88
	if (ctx.cr0.eq) goto loc_8227CF88;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8227cfe4
	if (!ctx.cr0.eq) goto loc_8227CFE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278a70
	ctx.lr = 0x8227CFBC;
	sub_82278A70(ctx, base);
	// b 0x8227cfdc
	goto loc_8227CFDC;
loc_8227CFC0:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cfe4
	if (ctx.cr0.eq) goto loc_8227CFE4;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227cfe4
	if (ctx.cr6.eq) goto loc_8227CFE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b2c8
	ctx.lr = 0x8227CFDC;
	sub_8227B2C8(ctx, base);
loc_8227CFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8227CFE0:
	// bl 0x82255b70
	ctx.lr = 0x8227CFE4;
	sub_82255B70(ctx, base);
loc_8227CFE4:
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

DEFINE_REX_FUNC(sub_82280348) {
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
	ctx.lr = 0x82280350;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,164(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 164);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// clrlwi. r28,r9,24
	r28.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f31,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	f31.f64 = double(temp.f32);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r26,r29,30,2,31
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq 0x822805e0
	if (ctx.cr0.eq) goto loc_822805E0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82280410:
	// bctrl 
	ctx.lr = 0x82280414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280414:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82280484
	if (!ctx.cr6.eq) goto loc_82280484;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,220(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,184(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228047C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
loc_82280484:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228049C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(r29.u32, 65535, ctx.xer);
	// ble cr6,0x822804b8
	if (!ctx.cr6.gt) goto loc_822804B8;
	// lis r29,0
	r29.s64 = 0;
	// li r26,16383
	r26.s64 = 16383;
	// ori r29,r29,65535
	r29.u64 = r29.u64 | 65535;
loc_822804B8:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bne cr6,0x82280504
	if (!ctx.cr6.eq) goto loc_82280504;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82280504:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280584;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228059C;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822805B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x822805d0
	if (ctx.cr0.lt) goto loc_822805D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822805D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822805D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822805D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
loc_822805E0:
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x822806a8
	if (ctx.cr0.eq) goto loc_822806A8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bctrl 
	ctx.lr = 0x82280600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822805d4
	if (ctx.cr0.lt) goto loc_822805D4;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// li r5,0
	ctx.r5.s64 = 0;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bctrl 
	ctx.lr = 0x822806A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82280414
	goto loc_82280414;
loc_822806A8:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82280410
	goto loc_82280410;
}

DEFINE_REX_FUNC(sub_8228E948) {
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
	// bl 0x8228ca60
	ctx.lr = 0x8228E960;
	sub_8228CA60(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8228e978
	goto loc_8228E978;
loc_8228E968:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e998
	if (ctx.cr6.eq) goto loc_8228E998;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8228E978:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228e968
	if (!ctx.cr6.eq) goto loc_8228E968;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E984:
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
loc_8228E998:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82215e78
	ctx.lr = 0x8228E9A0;
	sub_82215E78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8228e984
	goto loc_8228E984;
}

DEFINE_REX_FUNC(sub_82290BF8) {
	REX_FUNC_PROLOGUE();
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
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v125,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor128 v61,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltisw128 v60,-1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vor128 v62,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vspltisw128 v58,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r11,r11,12912
	ctx.r11.s64 = ctx.r11.s64 + 12912;
	// vspltisw128 v56,-8
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_set1_epi32(int(0xFFFFFFF8)));
	// vrefp128 v13,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v61.f32)));
	// vupkd3d128 v55,v59,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v59.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v59.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v55 = vTemp;
	// vslw128 v57,v60,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcmpeqfp128 v2,v61,v59
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vor128 v0,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vcmpeqfp128 v1,v62,v59
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vor128 v8,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v4,v55,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0x0));
	// vand128 v53,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vspltw128 v52,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vand128 v57,v61,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vspltw128 v55,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vslw128 v54,v61,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vspltw128 v51,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vslw128 v56,v60,v56
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v56.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vspltw128 v63,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vor128 v10,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v52,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vcmpequw128 v12,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vnmsubfp v6,v0,v13,v4
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v57,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v11,v63,v53
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v0,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v9,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v7,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vcmpequw128 v3,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vsel v5,v0,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v10,v11,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v11,v8,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vor128 v9,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vslw128 v58,v62,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor128 v8,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vmaddfp v0,v13,v6,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v7,v11,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v6,v9,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vcmpequw128 v2,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vor128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor128 v126,v12,v12
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v10,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vsel v5,v7,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vor128 v11,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vsel128 v126,v10,v11,v126
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vnmsubfp v6,v8,v0,v4
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v11,v9,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vcmpeqfp v7,v0,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v10,v5,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v125,v10,v10
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmaddfp v0,v0,v6,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpequw128 v127,v125,v60
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v125.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vsel v12,v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v62,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v12.f32)));
	// bl 0x82290a50
	ctx.lr = 0x82290D14;
	sub_82290A50(ctx, base);
	// vaddfp128 v0,v1,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v126.f32)));
	// vor128 v13,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vsel128 v1,v13,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v125,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F998) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229f9c8
	if (ctx.cr6.eq) goto loc_8229F9C8;
	// bl 0x822b8bf8
	ctx.lr = 0x8229F9C4;
	sub_822B8BF8(ctx, base);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
loc_8229F9C8:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229f9dc
	if (ctx.cr6.eq) goto loc_8229F9DC;
	// bl 0x822b8bf8
	ctx.lr = 0x8229F9D8;
	sub_822B8BF8(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_8229F9DC:
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

DEFINE_REX_FUNC(sub_822A11E8) {
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
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822a122c
	if (!ctx.cr6.eq) goto loc_822A122C;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822a122c
	if (!ctx.cr6.eq) goto loc_822A122C;
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822a122c
	if (!ctx.cr6.eq) goto loc_822A122C;
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822a122c
	if (!ctx.cr6.eq) goto loc_822A122C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a127c
	if (ctx.cr0.eq) goto loc_822A127C;
loc_822A122C:
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stw r4,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// stw r5,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r6.u32);
	// stw r7,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r7.u32);
	// beq 0x822a127c
	if (ctx.cr0.eq) goto loc_822A127C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82212de0
	ctx.lr = 0x822A127C;
	sub_82212DE0(ctx, base);
loc_822A127C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3E78) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a3ed8
	if (!ctx.cr6.gt) goto loc_822A3ED8;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a3ed8
	if (!ctx.cr6.gt) goto loc_822A3ED8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822a4640
	ctx.lr = 0x822A3EB4;
	sub_822A4640(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a3ed8
	if (ctx.cr0.eq) goto loc_822A3ED8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a4c98
	ctx.lr = 0x822A3EC8;
	sub_822A4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a4988
	ctx.lr = 0x822A3ED0;
	sub_822A4988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a3edc
	goto loc_822A3EDC;
loc_822A3ED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A3EDC:
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

DEFINE_REX_FUNC(sub_822A6618) {
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
	ctx.lr = 0x822A6620;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f30
	ctx.lr = 0x822A6628;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// addi r26,r5,32
	r26.s64 = ctx.r5.s64 + 32;
	// addi r11,r3,552
	ctx.r11.s64 = ctx.r3.s64 + 552;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822A6654:
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
	// addi r10,r26,-36
	ctx.r10.s64 = r26.s64 + -36;
	// lfs f10,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A6674:
	// lfs f9,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f11,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f0.f64)));
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a6674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6674;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
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
	// bne 0x822a6654
	if (!ctx.cr0.eq) goto loc_822A6654;
	// lfs f13,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f9,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f7,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f6,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f5,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
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
	// fmuls f29,f10,f0
	f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f28,f9,f0
	f28.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 + ctx.f12.f64));
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 + ctx.f0.f64));
	// fmuls f27,f12,f13
	f27.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f27
	ctx.f0.u64 = f27.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f0,f26
	ctx.f0.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A67C8;
	sub_8229F270(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// li r8,8
	ctx.r8.s64 = 8;
loc_822A67D0:
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
loc_822A67E8:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
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
	// bdnz 0x822a67e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A67E8;
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
	// bne 0x822a67d0
	if (!ctx.cr0.eq) goto loc_822A67D0;
	// fsubs f0,f29,f27
	ctx.f0.f64 = double(float(f29.f64 - f27.f64));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f28,f26
	ctx.f13.f64 = double(float(f28.f64 - f26.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
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
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 / ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A68B4;
	sub_8229F270(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// li r8,8
	ctx.r8.s64 = 8;
loc_822A68BC:
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
loc_822A68D4:
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
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,-48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f11,r10,r7
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822a68d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A68D4;
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
	// bne 0x822a68bc
	if (!ctx.cr0.eq) goto loc_822A68BC;
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
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822A695C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822a4f30
	ctx.lr = 0x822A696C;
	sub_822A4F30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f29,164(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A6998;
	sub_822A4ED0(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne 0x822a695c
	if (!ctx.cr0.eq) goto loc_822A695C;
	// li r4,1
	ctx.r4.s64 = 1;
	// fsubs f26,f0,f29
	f26.f64 = double(float(ctx.f0.f64 - f29.f64));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822A69CC;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f3f40
	ctx.lr = 0x822A69D8;
	sub_821F3F40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821f3f40
	ctx.lr = 0x822A69E4;
	sub_821F3F40(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ca328
	ctx.lr = 0x822A69F0;
	sub_822CA328(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1160(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 1160);
	ctx.f0.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f12,516(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 516);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,520(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 520);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fnmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f0.f64)));
loc_822A6A18:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f12,f31,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f11.f64)));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6a18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6A18;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// addi r11,r26,-20
	ctx.r11.s64 = r26.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6A60:
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f8,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f0.f64)));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a6a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6A60;
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f29
	ctx.f12.u64 = f29.u64 & ~0x8000000000000000;
	// fsubs f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f10,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// fabs f0,f29
	ctx.f0.u64 = f29.u64 & ~0x8000000000000000;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fnmsubs f13,f11,f13,f26
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f13.f64, -f26.f64)));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * f26.f64));
	// fdivs f28,f10,f13
	f28.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fadds f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f13,52(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
loc_822A6ACC:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822a6acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6ACC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f29,23040(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 23040);
	f29.f64 = double(temp.f32);
	// lfs f0,23036(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 23036);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6B00:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// blt cr6,0x822a6b20
	if (ctx.cr6.lt) goto loc_822A6B20;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822a6b20
	if (!ctx.cr6.gt) goto loc_822A6B20;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_822A6B20:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// bge cr6,0x822a6b34
	if (!ctx.cr6.lt) goto loc_822A6B34;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822a6b34
	if (!ctx.cr6.lt) goto loc_822A6B34;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822A6B34:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822a6b00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6B00;
	// fadds f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f27,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	f27.f64 = double(temp.f32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
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
	// fmuls f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
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
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6BA4;
	sub_8229F270(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// li r8,8
	ctx.r8.s64 = 8;
loc_822A6BAC:
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
loc_822A6BC4:
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
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,-48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f11,r10,r7
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822a6bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6BC4;
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
	// bne 0x822a6bac
	if (!ctx.cr0.eq) goto loc_822A6BAC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A6C28:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822a6c48
	if (ctx.cr6.lt) goto loc_822A6C48;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// ble cr6,0x822a6c48
	if (!ctx.cr6.gt) goto loc_822A6C48;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
loc_822A6C48:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822a6c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6C28;
	// fdivs f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / f28.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6CA8;
	sub_8229F270(ctx, base);
	// fdivs f13,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 / f29.f64));
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f0,f28,f13
	ctx.f0.f64 = double(float(f28.f64 * ctx.f13.f64));
loc_822A6CBC:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,-48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f11,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f12.f64)));
	// fmadds f12,f10,f31,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f12.f64)));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6CBC;
	// lfs f12,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f28,f26
	ctx.f0.f64 = double(float(f28.f64 + f26.f64));
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 / ctx.f12.f64));
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_822A6D38:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,-48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f12,f10,f31,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f12.f64)));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a6d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A6D38;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
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
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6DF0;
	sub_8229F270(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822a5ac8
	ctx.lr = 0x822A6DFC;
	sub_822A5AC8(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f12,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f29,164(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822A6E38;
	sub_822A5AC8(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
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
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6E9C;
	sub_8229F270(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822a5ac8
	ctx.lr = 0x822A6EA8;
	sub_822A5AC8(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
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
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A6F08;
	sub_8229F270(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f7c
	ctx.lr = 0x822A6F14;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(__restgprlr_23) {
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

DEFINE_REX_FUNC(__restfpr_20) {
	REX_FUNC_PROLOGUE();
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
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
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

DEFINE_REX_FUNC(sub_822D6840) {
	REX_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x822d6850
	if (!ctx.cr0.lt) goto loc_822D6850;
	// b 0x822d4fa0
	sub_822D4FA0(ctx, base);
	return;
loc_822D6850:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x822d6878
	goto loc_822D6878;
loc_822D6864:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_822D6878:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x822d6864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_822D6864;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x822d68a8
	if (ctx.cr0.eq) goto loc_822D68A8;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x822d68cc
	if (!ctx.cr0.eq) goto loc_822D68CC;
loc_822D6894:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x822d6894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D6894;
loc_822D68A8:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_822D68B4:
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x822d68b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D68B4;
	// blr 
	return;
loc_822D68CC:
	// lbz r7,-1(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x822d68cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D68CC;
	// b 0x822d68a8
	goto loc_822D68A8;
}

DEFINE_REX_FUNC(__savevmx_76) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_114) {
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

DEFINE_REX_FUNC(sub_822D9780) {
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
	// bl 0x822d6ff8
	ctx.lr = 0x822D9798;
	sub_822D6FF8(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d97ac
	if (ctx.cr6.eq) goto loc_822D97AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d97b0
	if (!ctx.cr6.eq) goto loc_822D97B0;
loc_822D97AC:
	// bl 0x822dbe48
	ctx.lr = 0x822D97B0;
	sub_822DBE48(ctx, base);
loc_822D97B0:
	// bl 0x822d6ff8
	ctx.lr = 0x822D97B4;
	sub_822D6FF8(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d97d0
	if (!ctx.cr6.eq) goto loc_822D97D0;
	// bl 0x822d6ff8
	ctx.lr = 0x822D97C4;
	sub_822D6FF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x822d9808
	goto loc_822D9808;
loc_822D97D0:
	// bl 0x822d6ff8
	ctx.lr = 0x822D97D4;
	sub_822D6FF8(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d9804
	if (ctx.cr6.eq) goto loc_822D9804;
loc_822D97E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d981c
	if (ctx.cr6.eq) goto loc_822D981C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d97e8
	if (!ctx.cr6.eq) goto loc_822D97E8;
loc_822D9804:
	// bl 0x822dbe48
	ctx.lr = 0x822D9808;
	sub_822DBE48(ctx, base);
loc_822D9808:
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
loc_822D981C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822d9808
	goto loc_822D9808;
}

DEFINE_REX_FUNC(sub_822DCA00) {
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

DEFINE_REX_FUNC(sub_822DCAD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,263
	ctx.r3.u64 = ctx.r11.u64 & 263;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DEB38) {
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
	ctx.lr = 0x822DEB40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x822db6c0
	ctx.lr = 0x822DEB58;
	sub_822DB6C0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822deb84
	if (ctx.cr0.eq) goto loc_822DEB84;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822deb84
	if (!ctx.cr6.eq) goto loc_822DEB84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822debfc
	goto loc_822DEBFC;
loc_822DEB84:
	// bl 0x822db6c0
	ctx.lr = 0x822DEB88;
	sub_822DB6C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x822debe4
	if (!ctx.cr6.gt) goto loc_822DEBE4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_822DEB9C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbzu r3,1(r28)
	ea = 1 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DEBB0;
	sub_822DEAA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822debdc
	if (!ctx.cr6.eq) goto loc_822DEBDC;
	// bl 0x822db6c0
	ctx.lr = 0x822DEBC0;
	sub_822DB6C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x822debe4
	if (!ctx.cr6.eq) goto loc_822DEBE4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x822deaa0
	ctx.lr = 0x822DEBDC;
	sub_822DEAA0(ctx, base);
loc_822DEBDC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x822deb9c
	if (ctx.cr6.gt) goto loc_822DEB9C;
loc_822DEBE4:
	// bl 0x822db6c0
	ctx.lr = 0x822DEBE8;
	sub_822DB6C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822debfc
	if (!ctx.cr6.eq) goto loc_822DEBFC;
	// bl 0x822db6c0
	ctx.lr = 0x822DEBF8;
	sub_822DB6C0(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_822DEBFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822E4380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E60DC) {
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
	// lwz r30,132(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x822e6114
	goto loc_822E6114;
loc_822E6114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd40
	ctx.lr = 0x822E611C;
	sub_822DCD40(ctx, base);
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

DEFINE_REX_FUNC(sub_822E75D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822E7C28) {
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
	ctx.lr = 0x822E7C30;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r20,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r20.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822e802c
	if (ctx.cr6.gt) goto loc_822E802C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e802c
	if (ctx.cr6.eq) goto loc_822E802C;
	// bdz 0x822e7c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E7C84;
	// bdz 0x822e7e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E7E80;
	// b 0x822e7f20
	goto loc_822E7F20;
loc_822E7C84:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e7cc0
	if (ctx.cr6.eq) goto loc_822E7CC0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822ed848
	ctx.lr = 0x822E7C98;
	sub_822ED848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// bl 0x822eeba8
	ctx.lr = 0x822E7CA4;
	sub_822EEBA8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e7cc0
	if (!ctx.cr6.eq) goto loc_822E7CC0;
loc_822E7CB0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb4
	return;
loc_822E7CC0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e7cf4
	if (ctx.cr6.eq) goto loc_822E7CF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7d38
	if (ctx.cr6.eq) goto loc_822E7D38;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E7CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E7CF4:
	// lwz r28,56(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r29,60(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r27,64(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822e7d18
	if (!ctx.cr6.eq) goto loc_822E7D18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r28,2
	r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_822E7D18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822e7d88
	if (!ctx.cr6.eq) goto loc_822E7D88;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7d74
	if (ctx.cr6.eq) goto loc_822E7D74;
	// li r29,64
	r29.s64 = 64;
	// b 0x822e7d88
	goto loc_822E7D88;
loc_822E7D38:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822ed848
	ctx.lr = 0x822E7D40;
	sub_822ED848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7d64
	if (ctx.cr6.eq) goto loc_822E7D64;
	// bl 0x822eeba8
	ctx.lr = 0x822E7D4C;
	sub_822EEBA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e7cf4
	if (!ctx.cr6.eq) goto loc_822E7CF4;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E7D64:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E7D74:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
loc_822E7D88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822e7da8
	if (!ctx.cr6.eq) goto loc_822E7DA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
loc_822E7DA8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,4
	r30.s64 = 4;
	// li r26,12
	r26.s64 = 12;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e7e34
	if (ctx.cr6.eq) goto loc_822E7E34;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E7DCC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822e7dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7DCC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// ld r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 48);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// beq cr6,0x822e7e10
	if (ctx.cr6.eq) goto loc_822E7E10;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_822E7E10:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E7E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e8264
	if (ctx.cr6.lt) goto loc_822E8264;
loc_822E7E34:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E7E58:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822e7e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7E58;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 48);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// b 0x822e81fc
	goto loc_822E81FC;
loc_822E7E80:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e7ec4
	if (ctx.cr6.eq) goto loc_822E7EC4;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822ed4f8
	ctx.lr = 0x822E7E94;
	sub_822ED4F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// bl 0x822ed788
	ctx.lr = 0x822E7EA0;
	sub_822ED788(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x822ed520
	ctx.lr = 0x822E7EB8;
	sub_822ED520(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e8264
	if (ctx.cr6.lt) goto loc_822E8264;
loc_822E7EC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822ed4f8
	ctx.lr = 0x822E7ED8;
	sub_822ED4F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7efc
	if (ctx.cr6.eq) goto loc_822E7EFC;
	// bl 0x822ed788
	ctx.lr = 0x822E7EE4;
	sub_822ED788(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e7f0c
	if (!ctx.cr6.eq) goto loc_822E7F0C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E7EFC:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E7F0C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x822ed520
	ctx.lr = 0x822E7F1C;
	sub_822ED520(ctx, base);
	// b 0x822e8234
	goto loc_822E8234;
loc_822E7F20:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e7f70
	if (ctx.cr6.eq) goto loc_822E7F70;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822ed2a8
	ctx.lr = 0x822E7F34;
	sub_822ED2A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// bl 0x822ed428
	ctx.lr = 0x822E7F40;
	sub_822ED428(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E7F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e8264
	if (ctx.cr6.lt) goto loc_822E8264;
loc_822E7F70:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7fc8
	if (ctx.cr6.eq) goto loc_822E7FC8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e7fc8
	if (!ctx.cr6.eq) goto loc_822E7FC8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e7fc8
	if (!ctx.cr6.eq) goto loc_822E7FC8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E7FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e8238
	goto loc_822E8238;
loc_822E7FC8:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822ed2a8
	ctx.lr = 0x822E7FD0;
	sub_822ED2A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7ff4
	if (ctx.cr6.eq) goto loc_822E7FF4;
	// bl 0x822ed428
	ctx.lr = 0x822E7FDC;
	sub_822ED428(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e8004
	if (!ctx.cr6.eq) goto loc_822E8004;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E7FF4:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E8004:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e8234
	goto loc_822E8234;
loc_822E802C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e8058
	if (ctx.cr6.eq) goto loc_822E8058;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822ed848
	ctx.lr = 0x822E8040;
	sub_822ED848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
	// bl 0x822eeba8
	ctx.lr = 0x822E804C;
	sub_822EEBA8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e7cb0
	if (ctx.cr6.eq) goto loc_822E7CB0;
loc_822E8058:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e808c
	if (ctx.cr6.eq) goto loc_822E808C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e80d0
	if (ctx.cr6.eq) goto loc_822E80D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E808C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E808C:
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r27,44(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822e80b0
	if (!ctx.cr6.eq) goto loc_822E80B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r28,2
	r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_822E80B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822e8120
	if (!ctx.cr6.eq) goto loc_822E8120;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e810c
	if (ctx.cr6.eq) goto loc_822E810C;
	// li r29,64
	r29.s64 = 64;
	// b 0x822e8120
	goto loc_822E8120;
loc_822E80D0:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822ed848
	ctx.lr = 0x822E80D8;
	sub_822ED848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e80fc
	if (ctx.cr6.eq) goto loc_822E80FC;
	// bl 0x822eeba8
	ctx.lr = 0x822E80E4;
	sub_822EEBA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e808c
	if (!ctx.cr6.eq) goto loc_822E808C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E80FC:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x822e8264
	goto loc_822E8264;
loc_822E810C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
loc_822E8120:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822e8140
	if (!ctx.cr6.eq) goto loc_822E8140;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
loc_822E8140:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,1
	r30.s64 = 1;
	// li r26,9
	r26.s64 = 9;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e81c0
	if (ctx.cr6.eq) goto loc_822E81C0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E8164:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822e8164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8164;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// beq cr6,0x822e819c
	if (ctx.cr6.eq) goto loc_822E819C;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_822E819C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E81B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e8264
	if (ctx.cr6.lt) goto loc_822E8264;
loc_822E81C0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x822e8238
	if (ctx.cr6.eq) goto loc_822E8238;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E81E4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822e81e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E81E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_822E81FC:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x822e821c
	if (ctx.cr6.eq) goto loc_822E821C;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_822E821C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E8234:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_822E8238:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x822e8264
	if (ctx.cr6.lt) goto loc_822E8264;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e7750
	ctx.lr = 0x822E825C;
	sub_822E7750(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_822E8264:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822e8280
	if (ctx.cr6.eq) goto loc_822E8280;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E8280:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822e829c
	if (ctx.cr6.eq) goto loc_822E829C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E829C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E829C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x822e82b4
	if (ctx.cr6.lt) goto loc_822E82B4;
	// stw r20,0(r19)
	REX_STORE_U32(r19.u32 + 0, r20.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb4
	return;
loc_822E82B4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x822e82d0
	if (ctx.cr6.eq) goto loc_822E82D0;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E82D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E82D0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8230AAE0) {
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
	ctx.lr = 0x8230AAE8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r24,0
	r24.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r28,r4,-24
	r28.s64 = ctx.r4.s64 + -24;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r24.u16);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230AB28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// cmplwi cr6,r28,20
	ctx.cr6.compare<uint32_t>(r28.u32, 20, ctx.xer);
	// bge cr6,0x8230ab50
	if (!ctx.cr6.lt) goto loc_8230AB50;
loc_8230AB3C:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
loc_8230AB50:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307c58
	ctx.lr = 0x8230AB68;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230AB8C;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,20
	r29.s64 = 20;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r23,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, r23.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lhz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8230ac10
	if (!ctx.cr6.eq) goto loc_8230AC10;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// addic. r30,r10,-20
	ctx.xer.ca = ctx.r10.u32 > 19;
	r30.s64 = ctx.r10.s64 + -20;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230b004
	if (ctx.cr0.eq) goto loc_8230B004;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230ABEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
loc_8230AC10:
	// mulli r30,r23,28
	r30.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(28));
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230AC28;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8230AC44;
	sub_822D5870(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// beq cr6,0x8230afb0
	if (ctx.cr6.eq) goto loc_8230AFB0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// li r21,1
	r21.s64 = 1;
	// li r22,2
	r22.s64 = 2;
loc_8230AC68:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307770
	ctx.lr = 0x8230AC8C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8230acb0
	if (!ctx.cr6.eq) goto loc_8230ACB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r21,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r21.u32);
	// b 0x8230acc8
	goto loc_8230ACC8;
loc_8230ACB0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8230acc4
	if (!ctx.cr6.eq) goto loc_8230ACC4;
	// stwx r22,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r22.u32);
	// b 0x8230acc8
	goto loc_8230ACC8;
loc_8230ACC4:
	// stwx r24,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r24.u32);
loc_8230ACC8:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307770
	ctx.lr = 0x8230ACE0;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230adcc
	if (ctx.cr6.eq) goto loc_8230ADCC;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230AD24;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x822d5870
	ctx.lr = 0x8230AD4C;
	sub_822D5870(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230AD80;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230adcc
	if (ctx.cr6.eq) goto loc_8230ADCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lhz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230adcc
	if (!ctx.cr6.gt) goto loc_8230ADCC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8230ADB8:
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
	// bdnz 0x8230adb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230ADB8;
loc_8230ADCC:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307770
	ctx.lr = 0x8230ADF0;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,12(r9)
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230aedc
	if (ctx.cr6.eq) goto loc_8230AEDC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230AE34;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x822d5870
	ctx.lr = 0x8230AE5C;
	sub_822D5870(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230AE90;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230aedc
	if (ctx.cr6.eq) goto loc_8230AEDC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lhz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230aedc
	if (!ctx.cr6.gt) goto loc_8230AEDC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8230AEC8:
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
	// bdnz 0x8230aec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230AEC8;
loc_8230AEDC:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307770
	ctx.lr = 0x8230AF00;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// sth r10,20(r9)
	REX_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230afa0
	if (ctx.cr6.eq) goto loc_8230AFA0;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// lwz r3,224(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230AF40;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x822d5870
	ctx.lr = 0x8230AF64;
	sub_822D5870(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x8230ab3c
	if (ctx.cr6.gt) goto loc_8230AB3C;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230AF94;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
loc_8230AFA0:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// blt cr6,0x8230ac68
	if (ctx.cr6.lt) goto loc_8230AC68;
loc_8230AFB0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lhz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r28
	ctx.r6.u64 = r28.u64 - ctx.r7.u64;
	// subf. r30,r29,r6
	r30.u64 = ctx.r6.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230b004
	if (ctx.cr0.eq) goto loc_8230B004;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230AFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b004
	if (ctx.cr6.lt) goto loc_8230B004;
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
loc_8230B004:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82320878) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82320880;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823209b0
	if (ctx.cr6.eq) goto loc_823209B0;
	// lwz r3,192(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823208a0
	if (ctx.cr6.eq) goto loc_823208A0;
	// bl 0x823143d0
	ctx.lr = 0x823208A0;
	sub_823143D0(ctx, base);
loc_823208A0:
	// lwz r3,196(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823208b0
	if (ctx.cr6.eq) goto loc_823208B0;
	// bl 0x823143d0
	ctx.lr = 0x823208B0;
	sub_823143D0(ctx, base);
loc_823208B0:
	// lwz r3,296(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823208c0
	if (ctx.cr6.eq) goto loc_823208C0;
	// bl 0x823143d0
	ctx.lr = 0x823208C0;
	sub_823143D0(ctx, base);
loc_823208C0:
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82320928
	if (!ctx.cr6.gt) goto loc_82320928;
	// li r31,0
	r31.s64 = 0;
loc_823208D4:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823208f4
	if (ctx.cr6.eq) goto loc_823208F4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823208f4
	if (ctx.cr6.eq) goto loc_823208F4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x823208F4;
	sub_823143D0(ctx, base);
loc_823208F4:
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320914
	if (ctx.cr6.eq) goto loc_82320914;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320914
	if (ctx.cr6.eq) goto loc_82320914;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x82320914;
	sub_823143D0(ctx, base);
loc_82320914:
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823208d4
	if (ctx.cr6.lt) goto loc_823208D4;
loc_82320928:
	// lwz r3,268(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320938
	if (ctx.cr6.eq) goto loc_82320938;
	// bl 0x823143d0
	ctx.lr = 0x82320938;
	sub_823143D0(ctx, base);
loc_82320938:
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320948
	if (ctx.cr6.eq) goto loc_82320948;
	// bl 0x823143d0
	ctx.lr = 0x82320948;
	sub_823143D0(ctx, base);
loc_82320948:
	// lwz r3,260(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320958
	if (ctx.cr6.eq) goto loc_82320958;
	// bl 0x823143d0
	ctx.lr = 0x82320958;
	sub_823143D0(ctx, base);
loc_82320958:
	// lwz r3,264(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320968
	if (ctx.cr6.eq) goto loc_82320968;
	// bl 0x823143d0
	ctx.lr = 0x82320968;
	sub_823143D0(ctx, base);
loc_82320968:
	// lwz r3,280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320978
	if (ctx.cr6.eq) goto loc_82320978;
	// bl 0x823143d0
	ctx.lr = 0x82320978;
	sub_823143D0(ctx, base);
loc_82320978:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320988
	if (ctx.cr6.eq) goto loc_82320988;
	// bl 0x823143d0
	ctx.lr = 0x82320988;
	sub_823143D0(ctx, base);
loc_82320988:
	// lwz r3,288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320998
	if (ctx.cr6.eq) goto loc_82320998;
	// bl 0x823143d0
	ctx.lr = 0x82320998;
	sub_823143D0(ctx, base);
loc_82320998:
	// lwz r3,292(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823209a8
	if (ctx.cr6.eq) goto loc_823209A8;
	// bl 0x823143d0
	ctx.lr = 0x823209A8;
	sub_823143D0(ctx, base);
loc_823209A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82320770
	ctx.lr = 0x823209B0;
	sub_82320770(ctx, base);
loc_823209B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82326700) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82326734
	if (!ctx.cr6.eq) goto loc_82326734;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8232672c
	if (ctx.cr6.eq) goto loc_8232672C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
loc_8232672C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x823265f0
	sub_823265F0(ctx, base);
	return;
loc_82326734:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82326DA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82326DB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mullw. r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble 0x82326e00
	if (!ctx.cr0.gt) goto loc_82326E00;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82326DDC:
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82326ddc
	if (ctx.cr6.lt) goto loc_82326DDC;
loc_82326E00:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mullw. r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82326e34
	if (!ctx.cr0.gt) goto loc_82326E34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82326E14:
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82326e14
	if (ctx.cr6.lt) goto loc_82326E14;
loc_82326E34:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82326e64
	if (!ctx.cr6.gt) goto loc_82326E64;
loc_82326E44:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82326e44
	if (ctx.cr6.lt) goto loc_82326E44;
loc_82326E64:
	// lwz r10,660(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82326ef4
	if (!ctx.cr6.eq) goto loc_82326EF4;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,664(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 664);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw. r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82326ebc
	if (!ctx.cr0.gt) goto loc_82326EBC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82326E8C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,692(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 692);
	// lhzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r6,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r5,664(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 664);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82326e8c
	if (ctx.cr6.lt) goto loc_82326E8C;
loc_82326EBC:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw. r8,r10,r10
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82326ef4
	if (!ctx.cr0.gt) goto loc_82326EF4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82326ECC:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,700(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 700);
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sthx r7,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82326ecc
	if (ctx.cr6.lt) goto loc_82326ECC;
loc_82326EF4:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82326F08;
	sub_822D5870(ctx, base);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82326F20;
	sub_822D5870(ctx, base);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// stw r5,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r5.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stw r7,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// mullw r3,r4,r29
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// sth r10,48(r30)
	REX_STORE_U16(r30.u32 + 48, ctx.r10.u16);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8232EDA8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232edd4
	if (!ctx.cr6.eq) goto loc_8232EDD4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232EDD4:
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8232ee18
	if (ctx.cr6.eq) goto loc_8232EE18;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8232ee18
	if (ctx.cr6.eq) goto loc_8232EE18;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8232ee04
	if (!ctx.cr6.eq) goto loc_8232EE04;
	// bl 0x82340700
	ctx.lr = 0x8232EDF4;
	sub_82340700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232EE04:
	// bl 0x823514a8
	ctx.lr = 0x8232EE08;
	sub_823514A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232EE18:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82345070
	ctx.lr = 0x8232EE2C;
	sub_82345070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82332CE0) {
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
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// bl 0x82332b68
	ctx.lr = 0x82332CFC;
	sub_82332B68(ctx, base);
	// lbz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 640);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,640(r31)
	REX_STORE_U8(r31.u32 + 640, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_82333C78) {
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
	ctx.lr = 0x82333C80;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r5,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// sth r27,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r27.u16);
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82333cdc
	if (ctx.cr6.eq) goto loc_82333CDC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82333cc8
	if (ctx.cr6.eq) goto loc_82333CC8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82333cdc
	if (!ctx.cr6.eq) goto loc_82333CDC;
loc_82333CC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331190
	ctx.lr = 0x82333CD0;
	sub_82331190(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333CDC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82333d14
	if (!ctx.cr6.eq) goto loc_82333D14;
	// lwz r11,3724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333cfc
	if (!ctx.cr6.eq) goto loc_82333CFC;
loc_82333CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333CFC:
	// li r24,1
	r24.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, r24.u32);
	// stw r24,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333D14:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82333d78
	if (!ctx.cr6.eq) goto loc_82333D78;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82333d78
	if (!ctx.cr6.eq) goto loc_82333D78;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82333cf0
	if (ctx.cr6.lt) goto loc_82333CF0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82333d78
	if (ctx.cr6.eq) goto loc_82333D78;
	// lwz r11,3724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333cf0
	if (ctx.cr6.eq) goto loc_82333CF0;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333d60
	if (ctx.cr6.eq) goto loc_82333D60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347ee0
	ctx.lr = 0x82333D58;
	sub_82347EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82334b48
	if (!ctx.cr6.eq) goto loc_82334B48;
loc_82333D60:
	// li r24,1
	r24.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r24.u32);
	// stw r24,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333D78:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82333dd4
	if (!ctx.cr6.eq) goto loc_82333DD4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82333dd4
	if (!ctx.cr6.eq) goto loc_82333DD4;
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// addi r7,r1,244
	ctx.r7.s64 = ctx.r1.s64 + 244;
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82365dd0
	ctx.lr = 0x82333DA4;
	sub_82365DD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82333db4
	if (!ctx.cr6.eq) goto loc_82333DB4;
	// mr r22,r24
	r22.u64 = r24.u64;
	// b 0x82333dbc
	goto loc_82333DBC;
loc_82333DB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82334b48
	if (!ctx.cr6.eq) goto loc_82334B48;
loc_82333DBC:
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823344fc
	if (ctx.cr6.eq) goto loc_823344FC;
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_82333DD4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82333e04
	if (!ctx.cr6.eq) goto loc_82333E04;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82333e04
	if (!ctx.cr6.eq) goto loc_82333E04;
	// lwz r11,3724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333cf0
	if (ctx.cr6.eq) goto loc_82333CF0;
	// stw r24,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333E04:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82337cb0
	ctx.lr = 0x82333E1C;
	sub_82337CB0(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r8,252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,3732(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3732);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823344fc
	if (!ctx.cr6.eq) goto loc_823344FC;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// ld r10,3640(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 3640);
	// lwz r9,3492(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r27,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r27.u32);
	// std r8,3632(r31)
	REX_STORE_U64(r31.u32 + 3632, ctx.r8.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r7,3640(r31)
	REX_STORE_U64(r31.u32 + 3640, ctx.r7.u64);
	// stw r27,21976(r31)
	REX_STORE_U32(r31.u32 + 21976, r27.u32);
	// stw r27,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r27.u32);
	// stw r27,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r27.u32);
	// bne cr6,0x82333e74
	if (!ctx.cr6.eq) goto loc_82333E74;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// b 0x82333e78
	goto loc_82333E78;
loc_82333E74:
	// stw r27,3492(r31)
	REX_STORE_U32(r31.u32 + 3492, r27.u32);
loc_82333E78:
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82333eb0
	if (ctx.cr6.lt) goto loc_82333EB0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r27,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r27.u32);
	// addi r9,r31,2652
	ctx.r9.s64 = r31.s64 + 2652;
	// addi r8,r31,2696
	ctx.r8.s64 = r31.s64 + 2696;
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r9,2940(r31)
	REX_STORE_U32(r31.u32 + 2940, ctx.r9.u32);
	// stw r8,2952(r31)
	REX_STORE_U32(r31.u32 + 2952, ctx.r8.u32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// stw r11,20708(r31)
	REX_STORE_U32(r31.u32 + 20708, ctx.r11.u32);
	// stw r11,14868(r31)
	REX_STORE_U32(r31.u32 + 14868, ctx.r11.u32);
	// stw r11,21644(r31)
	REX_STORE_U32(r31.u32 + 21644, ctx.r11.u32);
loc_82333EB0:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82333ee0
	if (ctx.cr6.eq) goto loc_82333EE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234caa0
	ctx.lr = 0x82333EC0;
	sub_8234CAA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334488
	if (ctx.cr6.eq) goto loc_82334488;
loc_82333ECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331190
	ctx.lr = 0x82333ED4;
	sub_82331190(ctx, base);
loc_82333ED4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82333EE0:
	// lwz r11,21864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21864);
	// li r26,2
	r26.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334068
	if (ctx.cr6.eq) goto loc_82334068;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82333f64
	if (!ctx.cr6.lt) goto loc_82333F64;
loc_82333F0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333f64
	if (ctx.cr6.eq) goto loc_82333F64;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82333f54
	if (!ctx.cr0.lt) goto loc_82333F54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82333F54;
	sub_823380C8(ctx, base);
loc_82333F54:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82333f0c
	if (ctx.cr6.gt) goto loc_82333F0C;
loc_82333F64:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82333f9c
	if (!ctx.cr0.lt) goto loc_82333F9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82333F9C;
	sub_823380C8(ctx, base);
loc_82333F9C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82334068
	if (ctx.cr6.eq) goto loc_82334068;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82334018
	if (!ctx.cr6.lt) goto loc_82334018;
loc_82333FC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334018
	if (ctx.cr6.eq) goto loc_82334018;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82334008
	if (!ctx.cr0.lt) goto loc_82334008;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334008;
	sub_823380C8(ctx, base);
loc_82334008:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82333fc0
	if (ctx.cr6.gt) goto loc_82333FC0;
loc_82334018:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82334050
	if (!ctx.cr0.lt) goto loc_82334050;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82334050;
	sub_823380C8(ctx, base);
loc_82334050:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82334060
	if (!ctx.cr6.eq) goto loc_82334060;
	// stw r26,22140(r31)
	REX_STORE_U32(r31.u32 + 22140, r26.u32);
	// b 0x8233406c
	goto loc_8233406C;
loc_82334060:
	// stw r24,22140(r31)
	REX_STORE_U32(r31.u32 + 22140, r24.u32);
	// b 0x8233406c
	goto loc_8233406C;
loc_82334068:
	// stw r27,22140(r31)
	REX_STORE_U32(r31.u32 + 22140, r27.u32);
loc_8233406C:
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r27,20684(r31)
	REX_STORE_U32(r31.u32 + 20684, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r27.u32);
	// bne cr6,0x823342ac
	if (!ctx.cr6.eq) goto loc_823342AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r10,-27352
	ctx.r11.s64 = ctx.r10.s64 + -27352;
	// stw r3,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r10,r9,-28020
	ctx.r10.s64 = ctx.r9.s64 + -28020;
	// stw r11,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r11.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r9,r8,-27620
	ctx.r9.s64 = ctx.r8.s64 + -27620;
	// stw r10,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r10.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r8,r7,-27788
	ctx.r8.s64 = ctx.r7.s64 + -27788;
	// stw r9,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r9.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r7,r6,-27516
	ctx.r7.s64 = ctx.r6.s64 + -27516;
	// stw r8,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r8.u32);
	// addi r6,r5,-27284
	ctx.r6.s64 = ctx.r5.s64 + -27284;
	// addi r5,r4,-27200
	ctx.r5.s64 = ctx.r4.s64 + -27200;
	// stw r7,1852(r31)
	REX_STORE_U32(r31.u32 + 1852, ctx.r7.u32);
	// stw r6,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,1872(r31)
	REX_STORE_U32(r31.u32 + 1872, ctx.r5.u32);
	// bl 0x82347468
	ctx.lr = 0x823340EC;
	sub_82347468(ctx, base);
	// stw r27,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r27.u32);
	// stw r27,20684(r31)
	REX_STORE_U32(r31.u32 + 20684, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20688(r31)
	REX_STORE_U32(r31.u32 + 20688, r27.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x8233c8c8
	ctx.lr = 0x82334104;
	sub_8233C8C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234a508
	ctx.lr = 0x82334110;
	sub_8234A508(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333ecc
	if (!ctx.cr6.eq) goto loc_82333ECC;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233413c
	if (ctx.cr6.eq) goto loc_8233413C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8233413c
	if (ctx.cr6.eq) goto loc_8233413C;
	// lwz r10,22220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22220);
	// stw r27,22220(r31)
	REX_STORE_U32(r31.u32 + 22220, r27.u32);
	// stw r10,22224(r31)
	REX_STORE_U32(r31.u32 + 22224, ctx.r10.u32);
loc_8233413C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82334488
	if (!ctx.cr6.eq) goto loc_82334488;
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334288
	if (ctx.cr6.eq) goto loc_82334288;
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334288
	if (ctx.cr6.eq) goto loc_82334288;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334288
	if (!ctx.cr6.gt) goto loc_82334288;
	// lwz r11,3412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334178
	if (!ctx.cr6.eq) goto loc_82334178;
	// stw r27,3412(r31)
	REX_STORE_U32(r31.u32 + 3412, r27.u32);
loc_82334178:
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334190
	if (ctx.cr6.eq) goto loc_82334190;
	// bl 0x8237ba78
	ctx.lr = 0x8233418C;
	sub_8237BA78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82334190:
	// bl 0x8237bb78
	ctx.lr = 0x82334194;
	sub_8237BB78(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// bl 0x822091c8
	ctx.lr = 0x823341AC;
	sub_822091C8(ctx, base);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bl 0x822091c8
	ctx.lr = 0x823341C4;
	sub_822091C8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x822091c8
	ctx.lr = 0x823341DC;
	sub_822091C8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r3,1776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x823341F0;
	sub_822D5870(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82334204;
	sub_822D5870(ctx, base);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82334288
	if (!ctx.cr6.gt) goto loc_82334288;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
loc_8233421C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82334278
	if (!ctx.cr6.gt) goto loc_82334278;
loc_8233422C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r6,3084(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3084);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r27,r9,r6
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, r27.u16);
	// lwz r10,3084(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3084);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r27,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, r27.u16);
	// lwz r3,3088(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3088);
	// stwx r27,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, r27.u32);
	// lwz r10,24(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stwu r9,24(r8)
	ea = 24 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8233422c
	if (ctx.cr6.lt) goto loc_8233422C;
loc_82334278:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233421c
	if (ctx.cr6.lt) goto loc_8233421C;
loc_82334288:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20688(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x82334294;
	sub_8238B010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823310d8
	ctx.lr = 0x8233429C;
	sub_823310D8(ctx, base);
	// stw r24,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r24.u32);
	// stw r24,22092(r31)
	REX_STORE_U32(r31.u32 + 22092, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_823342AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r3,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r3.u32);
	// addi r11,r10,-27144
	ctx.r11.s64 = ctx.r10.s64 + -27144;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r10,r9,-27180
	ctx.r10.s64 = ctx.r9.s64 + -27180;
	// stw r11,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r11.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r9,r8,-26976
	ctx.r9.s64 = ctx.r8.s64 + -26976;
	// stw r10,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r10.u32);
	// addi r8,r7,-27076
	ctx.r8.s64 = ctx.r7.s64 + -27076;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r9,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r9.u32);
	// addi r7,r6,-26940
	ctx.r7.s64 = ctx.r6.s64 + -26940;
	// stw r8,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r8.u32);
	// addi r6,r5,-26904
	ctx.r6.s64 = ctx.r5.s64 + -26904;
	// addi r5,r4,-26884
	ctx.r5.s64 = ctx.r4.s64 + -26884;
	// stw r7,1852(r31)
	REX_STORE_U32(r31.u32 + 1852, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r6.u32);
	// stw r5,1872(r31)
	REX_STORE_U32(r31.u32 + 1872, ctx.r5.u32);
	// bne cr6,0x82334d68
	if (!ctx.cr6.eq) goto loc_82334D68;
	// bl 0x82347468
	ctx.lr = 0x8233431C;
	sub_82347468(ctx, base);
	// stw r24,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r24.u32);
	// stw r27,20688(r31)
	REX_STORE_U32(r31.u32 + 20688, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x8233c8c8
	ctx.lr = 0x82334330;
	sub_8233C8C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236eed0
	ctx.lr = 0x8233433C;
	sub_8236EED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333ecc
	if (!ctx.cr6.eq) goto loc_82333ECC;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82334368
	if (ctx.cr6.eq) goto loc_82334368;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334368
	if (ctx.cr6.eq) goto loc_82334368;
	// lwz r10,22220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22220);
	// stw r26,22220(r31)
	REX_STORE_U32(r31.u32 + 22220, r26.u32);
	// stw r10,22224(r31)
	REX_STORE_U32(r31.u32 + 22224, ctx.r10.u32);
loc_82334368:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82334488
	if (!ctx.cr6.eq) goto loc_82334488;
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334408
	if (ctx.cr6.eq) goto loc_82334408;
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334408
	if (ctx.cr6.eq) goto loc_82334408;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334408
	if (!ctx.cr6.gt) goto loc_82334408;
	// lwz r11,3412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823343a4
	if (!ctx.cr6.eq) goto loc_823343A4;
	// stw r27,3412(r31)
	REX_STORE_U32(r31.u32 + 3412, r27.u32);
loc_823343A4:
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823343bc
	if (ctx.cr6.eq) goto loc_823343BC;
	// bl 0x8237ba78
	ctx.lr = 0x823343B8;
	sub_8237BA78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823343BC:
	// bl 0x8237bb78
	ctx.lr = 0x823343C0;
	sub_8237BB78(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// bl 0x822091c8
	ctx.lr = 0x823343D8;
	sub_822091C8(ctx, base);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bl 0x822091c8
	ctx.lr = 0x823343F0;
	sub_822091C8(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x822091c8
	ctx.lr = 0x82334408;
	sub_822091C8(ctx, base);
loc_82334408:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334444
	if (ctx.cr6.eq) goto loc_82334444;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_82334420:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233443c
	if (ctx.cr6.eq) goto loc_8233443C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8233442C:
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// oris r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 131072;
	// stwu r7,24(r10)
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8233442c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233442C;
loc_8233443C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82334420
	if (!ctx.cr0.eq) goto loc_82334420;
loc_82334444:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,3088(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3088);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x82334464;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20688(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x82334470;
	sub_8238B010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823310d8
	ctx.lr = 0x82334478;
	sub_823310D8(ctx, base);
	// stw r24,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r24.u32);
	// stw r24,22092(r31)
	REX_STORE_U32(r31.u32 + 22092, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82334488:
	// lwz r3,24688(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// stw r24,1948(r31)
	REX_STORE_U32(r31.u32 + 1948, r24.u32);
	// stw r27,20764(r31)
	REX_STORE_U32(r31.u32 + 20764, r27.u32);
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823344b0
	if (ctx.cr6.eq) goto loc_823344B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8232ec60
	ctx.lr = 0x823344A8;
	sub_8232EC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333cf0
	if (!ctx.cr6.eq) goto loc_82333CF0;
loc_823344B0:
	// lwz r11,22288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823344cc
	if (ctx.cr6.eq) goto loc_823344CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82366eb0
	ctx.lr = 0x823344C4;
	sub_82366EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82334b48
	if (!ctx.cr6.eq) goto loc_82334B48;
loc_823344CC:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334508
	if (ctx.cr6.eq) goto loc_82334508;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82334508
	if (ctx.cr6.eq) goto loc_82334508;
	// lwz r11,3724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334604
	if (!ctx.cr6.eq) goto loc_82334604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823310d8
	ctx.lr = 0x823344F4;
	sub_823310D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82334b48
	if (!ctx.cr6.eq) goto loc_82334B48;
loc_823344FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82334508:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334604
	if (ctx.cr6.eq) goto loc_82334604;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823345f4
	if (!ctx.cr6.gt) goto loc_823345F4;
	// lwz r11,3412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3412);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82334564
	if (!ctx.cr6.eq) goto loc_82334564;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82333cf0
	if (ctx.cr6.eq) goto loc_82333CF0;
	// lwz r11,22072(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22072);
	// lwz r10,3432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3412(r31)
	REX_STORE_U32(r31.u32 + 3412, ctx.r8.u32);
	// beq cr6,0x82334558
	if (ctx.cr6.eq) goto loc_82334558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x82334558;
	sub_8237BA78(ctx, base);
loc_82334558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237bb78
	ctx.lr = 0x82334560;
	sub_8237BB78(ctx, base);
	// b 0x82334604
	goto loc_82334604;
loc_82334564:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823345a8
	if (ctx.cr6.eq) goto loc_823345A8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x823345a8
	if (ctx.cr6.eq) goto loc_823345A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334584
	if (!ctx.cr6.eq) goto loc_82334584;
	// stw r27,3412(r31)
	REX_STORE_U32(r31.u32 + 3412, r27.u32);
	// b 0x82334590
	goto loc_82334590;
loc_82334584:
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334598
	if (ctx.cr6.eq) goto loc_82334598;
loc_82334590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x82334598;
	sub_8237BA78(ctx, base);
loc_82334598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237bb78
	ctx.lr = 0x823345A0;
	sub_8237BB78(ctx, base);
	// stw r27,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r27.u32);
	// b 0x82334604
	goto loc_82334604;
loc_823345A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823345dc
	if (!ctx.cr6.eq) goto loc_823345DC;
	// lwz r11,22072(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823345dc
	if (!ctx.cr6.eq) goto loc_823345DC;
	// stw r24,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r24,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, r24.u16);
	// bl 0x823310d8
	ctx.lr = 0x823345CC;
	sub_823310D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_823345DC:
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334604
	if (ctx.cr6.eq) goto loc_82334604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x823345F0;
	sub_8237BA78(ctx, base);
	// b 0x82334604
	goto loc_82334604;
loc_823345F4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82349598
	ctx.lr = 0x82334604;
	sub_82349598(ctx, base);
loc_82334604:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r11,-30208(r10)
	REX_STORE_U32(ctx.r10.u32 + -30208, ctx.r11.u32);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82334630
	if (ctx.cr6.eq) goto loc_82334630;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823346b4
	if (!ctx.cr6.eq) goto loc_823346B4;
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823346b4
	if (!ctx.cr6.eq) goto loc_823346B4;
loc_82334630:
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334690
	if (ctx.cr6.eq) goto loc_82334690;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r10,3200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// addi r9,r11,18040
	ctx.r9.s64 = ctx.r11.s64 + 18040;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82334690
	if (ctx.cr6.eq) goto loc_82334690;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82334690
	if (ctx.cr6.eq) goto loc_82334690;
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82334690
	if (ctx.cr6.gt) goto loc_82334690;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// addi r8,r11,15688
	ctx.r8.s64 = ctx.r11.s64 + 15688;
	// addi r7,r10,15896
	ctx.r7.s64 = ctx.r10.s64 + 15896;
	// addi r6,r9,29440
	ctx.r6.s64 = ctx.r9.s64 + 29440;
	// stw r8,15840(r31)
	REX_STORE_U32(r31.u32 + 15840, ctx.r8.u32);
	// stw r7,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r7.u32);
	// stw r6,15836(r31)
	REX_STORE_U32(r31.u32 + 15836, ctx.r6.u32);
	// b 0x823346b4
	goto loc_823346B4;
loc_82334690:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r9,-32200
	ctx.r9.s64 = -2110259200;
	// addi r8,r11,-32456
	ctx.r8.s64 = ctx.r11.s64 + -32456;
	// addi r7,r10,17504
	ctx.r7.s64 = ctx.r10.s64 + 17504;
	// addi r6,r9,-17352
	ctx.r6.s64 = ctx.r9.s64 + -17352;
	// stw r8,15836(r31)
	REX_STORE_U32(r31.u32 + 15836, ctx.r8.u32);
	// stw r7,15840(r31)
	REX_STORE_U32(r31.u32 + 15840, ctx.r7.u32);
	// stw r6,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r6.u32);
loc_823346B4:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334b50
	if (ctx.cr6.eq) goto loc_82334B50;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334b50
	if (ctx.cr6.eq) goto loc_82334B50;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,-30212(r10)
	REX_STORE_U32(ctx.r10.u32 + -30212, r27.u32);
	// bl 0x823400b0
	ctx.lr = 0x823346DC;
	sub_823400B0(ctx, base);
	// lwz r9,14852(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823348a0
	if (ctx.cr6.eq) goto loc_823348A0;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823348a0
	if (ctx.cr6.eq) goto loc_823348A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82334a70
	if (!ctx.cr6.eq) goto loc_82334A70;
	// lwz r11,3412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334730
	if (!ctx.cr6.eq) goto loc_82334730;
	// lwz r11,22072(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334730
	if (!ctx.cr6.eq) goto loc_82334730;
	// stw r24,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r24,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, r24.u16);
	// bl 0x823310d8
	ctx.lr = 0x82334724;
	sub_823310D8(ctx, base);
	// stw r24,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82334730:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823347b0
	if (ctx.cr6.eq) goto loc_823347B0;
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// stw r27,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334754
	if (ctx.cr6.eq) goto loc_82334754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x82334754;
	sub_8237BA78(ctx, base);
loc_82334754:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237bb78
	ctx.lr = 0x8233475C;
	sub_8237BB78(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// bl 0x822d4fa0
	ctx.lr = 0x82334774;
	sub_822D4FA0(ctx, base);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// bl 0x822d4fa0
	ctx.lr = 0x82334790;
	sub_822D4FA0(ctx, base);
	// lwz r5,212(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x822d4fa0
	ctx.lr = 0x823347AC;
	sub_822D4FA0(ctx, base);
	// stw r24,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r24.u32);
loc_823347B0:
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233486c
	if (ctx.cr6.eq) goto loc_8233486C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8233486c
	if (ctx.cr6.eq) goto loc_8233486C;
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823347dc
	if (ctx.cr6.eq) goto loc_823347DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x823347DC;
	sub_8237BA78(ctx, base);
loc_823347DC:
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334820
	if (!ctx.cr6.eq) goto loc_82334820;
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334820
	if (!ctx.cr6.eq) goto loc_82334820;
	// lwz r11,3092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3092);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// stw r24,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, r24.u32);
	// stw r24,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r24.u32);
	// b 0x82334a70
	goto loc_82334A70;
loc_82334820:
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334850
	if (ctx.cr6.eq) goto loc_82334850;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248a0e0
	ctx.lr = 0x82334834;
	sub_8248A0E0(ctx, base);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// stw r24,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, r24.u32);
	// stw r24,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r24.u32);
	// b 0x82334a70
	goto loc_82334A70;
loc_82334850:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// li r30,-6
	r30.s64 = -6;
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// stw r24,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, r24.u32);
	// stw r24,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r24.u32);
	// b 0x82334a70
	goto loc_82334A70;
loc_8233486C:
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334888
	if (ctx.cr6.eq) goto loc_82334888;
	// stw r24,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, r24.u32);
	// li r30,-6
	r30.s64 = -6;
	// stw r24,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r24.u32);
	// b 0x82334a70
	goto loc_82334A70;
loc_82334888:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82379f98
	ctx.lr = 0x82334890;
	sub_82379F98(ctx, base);
	// stw r24,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r24.u32);
	// b 0x82334a70
	goto loc_82334A70;
loc_823348A0:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334978
	if (!ctx.cr6.eq) goto loc_82334978;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82349598
	ctx.lr = 0x823348B8;
	sub_82349598(ctx, base);
	// lwz r11,14884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823348d4
	if (ctx.cr6.eq) goto loc_823348D4;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// lwz r10,14892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823349a8
	if (!ctx.cr6.eq) goto loc_823349A8;
loc_823348D4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x823349a8
	if (!ctx.cr6.lt) goto loc_823349A8;
	// lwz r11,20400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823349a8
	if (ctx.cr6.eq) goto loc_823349A8;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,204(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r26,15920(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 15920);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,172(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// bctrl 
	ctx.lr = 0x8233492C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r5,3796(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// lwz r30,196(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r26,168(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lwz r11,15916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823349a8
	goto loc_823349A8;
loc_82334978:
	// lwz r11,3412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233498c
	if (!ctx.cr6.eq) goto loc_8233498C;
	// stw r27,3412(r31)
	REX_STORE_U32(r31.u32 + 3412, r27.u32);
	// b 0x82334998
	goto loc_82334998;
loc_8233498C:
	// lwz r11,3432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823349a0
	if (ctx.cr6.eq) goto loc_823349A0;
loc_82334998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba78
	ctx.lr = 0x823349A0;
	sub_8237BA78(ctx, base);
loc_823349A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237bb78
	ctx.lr = 0x823349A8;
	sub_8237BB78(ctx, base);
loc_823349A8:
	// stw r27,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82366fa0
	ctx.lr = 0x823349B4;
	sub_82366FA0(ctx, base);
	// lwz r11,15964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823349c4
	if (ctx.cr6.eq) goto loc_823349C4;
	// stw r27,15972(r31)
	REX_STORE_U32(r31.u32 + 15972, r27.u32);
loc_823349C4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82334a34
	if (ctx.cr6.lt) goto loc_82334A34;
	// lwz r11,14884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823349e4
	if (ctx.cr6.eq) goto loc_823349E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234c7c0
	ctx.lr = 0x823349E4;
	sub_8234C7C0(ctx, base);
loc_823349E4:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823349f8
	if (ctx.cr6.eq) goto loc_823349F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347f10
	ctx.lr = 0x823349F8;
	sub_82347F10(ctx, base);
loc_823349F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82378cb8
	ctx.lr = 0x82334A00;
	sub_82378CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82377298
	ctx.lr = 0x82334A08;
	sub_82377298(ctx, base);
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334a20
	if (ctx.cr6.eq) goto loc_82334A20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489f70
	ctx.lr = 0x82334A1C;
	sub_82489F70(ctx, base);
	// b 0x82334a44
	goto loc_82334A44;
loc_82334A20:
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334a34
	if (ctx.cr6.eq) goto loc_82334A34;
	// li r30,-6
	r30.s64 = -6;
	// b 0x82334a48
	goto loc_82334A48;
loc_82334A34:
	// lwz r11,15840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15840);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334A44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334A44:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82334A48:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// bne cr6,0x82334a68
	if (!ctx.cr6.eq) goto loc_82334A68;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82334a70
	goto loc_82334A70;
loc_82334A68:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82333ecc
	if (!ctx.cr6.eq) goto loc_82333ECC;
loc_82334A70:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334a80
	if (!ctx.cr6.eq) goto loc_82334A80;
	// stw r27,3416(r31)
	REX_STORE_U32(r31.u32 + 3416, r27.u32);
loc_82334A80:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82334e08
	if (!ctx.cr6.eq) goto loc_82334E08;
loc_82334A88:
	// mr r22,r24
	r22.u64 = r24.u64;
loc_82334A8C:
	// sth r24,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, r24.u16);
	// sth r24,0(r23)
	REX_STORE_U16(r23.u32 + 0, r24.u16);
	// lwz r11,3492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,20680(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, ctx.r7.u32);
	// bne cr6,0x82334b30
	if (!ctx.cr6.eq) goto loc_82334B30;
	// lwz r9,20684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20684);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bne cr6,0x82334b30
	if (!ctx.cr6.eq) goto loc_82334B30;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82334ad8
	if (ctx.cr6.eq) goto loc_82334AD8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334af4
	if (!ctx.cr6.eq) goto loc_82334AF4;
loc_82334AD8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334ae8
	if (ctx.cr6.eq) goto loc_82334AE8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82334af4
	if (!ctx.cr6.eq) goto loc_82334AF4;
loc_82334AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20688(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x82334AF4;
	sub_8238B010(ctx, base);
loc_82334AF4:
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334b30
	if (!ctx.cr6.eq) goto loc_82334B30;
	// lwz r11,21776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21776);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82334b30
	if (!ctx.cr6.eq) goto loc_82334B30;
	// lwz r11,21780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334b30
	if (!ctx.cr6.eq) goto loc_82334B30;
	// lwz r11,22136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334b30
	if (ctx.cr6.eq) goto loc_82334B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823312b8
	ctx.lr = 0x82334B2C;
	sub_823312B8(ctx, base);
	// stw r24,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r24.u32);
loc_82334B30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823310d8
	ctx.lr = 0x82334B38;
	sub_823310D8(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82334b44
	if (!ctx.cr6.eq) goto loc_82334B44;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_82334B44:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82334B48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_82334B50:
	// lwz r10,15964(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15964);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334b68
	if (ctx.cr6.eq) goto loc_82334B68;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334b68
	if (ctx.cr6.eq) goto loc_82334B68;
	// stw r27,15972(r31)
	REX_STORE_U32(r31.u32 + 15972, r27.u32);
loc_82334B68:
	// lwz r11,14884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334b7c
	if (ctx.cr6.eq) goto loc_82334B7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234c7c0
	ctx.lr = 0x82334B7C;
	sub_8234C7C0(ctx, base);
loc_82334B7C:
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,-30212(r10)
	REX_STORE_U32(ctx.r10.u32 + -30212, r24.u32);
	// lwz r9,20680(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82334ba0
	if (ctx.cr6.eq) goto loc_82334BA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489d38
	ctx.lr = 0x82334B9C;
	sub_82489D38(ctx, base);
	// b 0x82334bdc
	goto loc_82334BDC;
loc_82334BA0:
	// lwz r11,4004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334bb8
	if (ctx.cr6.eq) goto loc_82334BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82374af8
	ctx.lr = 0x82334BB4;
	sub_82374AF8(ctx, base);
	// b 0x82334bdc
	goto loc_82334BDC;
loc_82334BB8:
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334bcc
	if (ctx.cr6.eq) goto loc_82334BCC;
	// li r30,-6
	r30.s64 = -6;
	// b 0x82334be0
	goto loc_82334BE0;
loc_82334BCC:
	// lwz r11,15836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15836);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334BDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334BDC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82334BE0:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// bne cr6,0x82334c00
	if (!ctx.cr6.eq) goto loc_82334C00;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82334c08
	goto loc_82334C08;
loc_82334C00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82333ecc
	if (!ctx.cr6.eq) goto loc_82333ECC;
loc_82334C08:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334d60
	if (ctx.cr6.eq) goto loc_82334D60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82334c24
	if (ctx.cr6.eq) goto loc_82334C24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82334c30
	if (!ctx.cr6.eq) goto loc_82334C30;
loc_82334C24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340398
	ctx.lr = 0x82334C2C;
	sub_82340398(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82334C30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82333ed4
	if (!ctx.cr6.eq) goto loc_82333ED4;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82334ce8
	if (ctx.cr6.lt) goto loc_82334CE8;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334ce8
	if (ctx.cr6.eq) goto loc_82334CE8;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334ce8
	if (!ctx.cr6.gt) goto loc_82334CE8;
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82334cc8
	if (ctx.cr6.eq) goto loc_82334CC8;
loc_82334C70:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82334cbc
	if (ctx.cr6.eq) goto loc_82334CBC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82334C80:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,3084(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3084);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r27,r4,r8
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, r27.u16);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,3084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r27,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, r27.u16);
	// bdnz 0x82334c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82334C80;
loc_82334CBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82334c70
	if (ctx.cr6.lt) goto loc_82334C70;
loc_82334CC8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,3088(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3088);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x82334CE8;
	sub_822D5870(ctx, base);
loc_82334CE8:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334d60
	if (!ctx.cr6.gt) goto loc_82334D60;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334d60
	if (ctx.cr6.eq) goto loc_82334D60;
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82334d60
	if (ctx.cr6.eq) goto loc_82334D60;
loc_82334D14:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82334d54
	if (ctx.cr6.eq) goto loc_82334D54;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82334D24:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r4,0,15,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// bdnz 0x82334d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82334D24;
loc_82334D54:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82334d14
	if (ctx.cr6.lt) goto loc_82334D14;
loc_82334D60:
	// stw r24,3724(r31)
	REX_STORE_U32(r31.u32 + 3724, r24.u32);
	// b 0x82334a8c
	goto loc_82334A8C;
loc_82334D68:
	// bl 0x82347468
	ctx.lr = 0x82334D6C;
	sub_82347468(ctx, base);
	// stw r24,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r24.u32);
	// stw r24,20684(r31)
	REX_STORE_U32(r31.u32 + 20684, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x8233c8c8
	ctx.lr = 0x82334D84;
	sub_8233C8C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82371b90
	ctx.lr = 0x82334D90;
	sub_82371B90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333ecc
	if (!ctx.cr6.eq) goto loc_82333ECC;
	// lwz r11,21776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21776);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82334dc0
	if (ctx.cr6.eq) goto loc_82334DC0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334dc0
	if (ctx.cr6.eq) goto loc_82334DC0;
	// lwz r11,22220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22220);
	// stw r24,22220(r31)
	REX_STORE_U32(r31.u32 + 22220, r24.u32);
	// stw r11,22224(r31)
	REX_STORE_U32(r31.u32 + 22224, ctx.r11.u32);
	// b 0x82334dc4
	goto loc_82334DC4;
loc_82334DC0:
	// stw r26,288(r31)
	REX_STORE_U32(r31.u32 + 288, r26.u32);
loc_82334DC4:
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82334de8
	if (ctx.cr6.eq) goto loc_82334DE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82334de8
	if (ctx.cr6.eq) goto loc_82334DE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236def0
	ctx.lr = 0x82334DE4;
	sub_8236DEF0(ctx, base);
	// b 0x82334df0
	goto loc_82334DF0;
loc_82334DE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82379f98
	ctx.lr = 0x82334DF0;
	sub_82379F98(ctx, base);
loc_82334DF0:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,22256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22256);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r10,616(r11)
	REX_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// beq cr6,0x82334a88
	if (ctx.cr6.eq) goto loc_82334A88;
loc_82334E08:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82334a8c
	if (ctx.cr6.eq) goto loc_82334A8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331190
	ctx.lr = 0x82334E18;
	sub_82331190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8238ADE8) {
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
	ctx.lr = 0x8238ADF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r10,212(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,216(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,21916(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21916);
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,208(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r26,-28600(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -28600);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r25,r8,r5
	r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// beq cr6,0x8238ae84
	if (ctx.cr6.eq) goto loc_8238AE84;
	// lwz r11,15628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238ae38
	if (!ctx.cr6.eq) goto loc_8238AE38;
	// lwz r7,3776(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// b 0x8238ae3c
	goto loc_8238AE3C;
loc_8238AE38:
	// lwz r7,3832(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3832);
loc_8238AE3C:
	// lwz r10,21924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21924);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,3832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x8238aec8
	if (!ctx.cr6.gt) goto loc_8238AEC8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_8238AE58:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238ae58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238AE58;
	// b 0x8238aec8
	goto loc_8238AEC8;
loc_8238AE84:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r10,3832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r27,188(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 188);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8238aec8
	if (!ctx.cr6.gt) goto loc_8238AEC8;
loc_8238AEA8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238AEB8;
	sub_822D4FA0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// bne 0x8238aea8
	if (!ctx.cr0.eq) goto loc_8238AEA8;
loc_8238AEC8:
	// lwz r11,21920(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238af7c
	if (ctx.cr6.eq) goto loc_8238AF7C;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238aeec
	if (!ctx.cr6.eq) goto loc_8238AEEC;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// b 0x8238aef4
	goto loc_8238AEF4;
loc_8238AEEC:
	// lwz r8,3836(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r7,3840(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3840);
loc_8238AEF4:
	// lwz r10,21928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21928);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r11,3836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x8238af38
	if (!ctx.cr6.gt) goto loc_8238AF38;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8238AF10:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + r26.u64;
	// lbz r4,128(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 128);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238af10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238AF10;
loc_8238AF38:
	// lwz r11,3840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8238b004
	if (!ctx.cr6.gt) goto loc_8238B004;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_8238AF4C:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238af4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238AF4C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8238AF7C:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3780(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r10,3836(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r27,200(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 200);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,208(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 208);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8238afc0
	if (!ctx.cr6.gt) goto loc_8238AFC0;
loc_8238AFA0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238AFB0;
	sub_822D4FA0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// bne 0x8238afa0
	if (!ctx.cr0.eq) goto loc_8238AFA0;
loc_8238AFC0:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r28,200(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,3840(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8238b004
	if (!ctx.cr6.gt) goto loc_8238B004;
loc_8238AFE4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238AFF4;
	sub_822D4FA0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// bne 0x8238afe4
	if (!ctx.cr0.eq) goto loc_8238AFE4;
loc_8238B004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823925B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823925B8;
	// addi r28,r6,-1
	r28.s64 = ctx.r6.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x8239260c
	if (!ctx.cr6.gt) goto loc_8239260C;
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823925E0:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r31,r9,r11
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r11,r7
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// rotlwi r8,r30,4
	ctx.r8.u64 = __builtin_rotateleft32(r30.u32, 4);
	// mulli r31,r31,-406
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(-406));
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823925e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823925E0;
loc_8239260C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r30,r5,4
	r30.s64 = ctx.r5.s64 + 4;
	// mulli r11,r9,-406
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(-406));
	// add r29,r10,r5
	r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rotlwi r10,r8,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,-4(r29)
	REX_STORE_U32(r29.u32 + -4, ctx.r10.u32);
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mulli r11,r8,-217
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82392698
	if (!ctx.cr6.gt) goto loc_82392698;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82392670:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzux r10,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r9,r10,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mulli r10,r8,-217
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82392670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392670;
loc_82392698:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x823926dc
	if (!ctx.cr6.gt) goto loc_823926DC;
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823926B4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r10,226
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(226));
	// srawi r10,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 9;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823926b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823926B4;
loc_823926DC:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// mulli r4,r5,226
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(226));
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,-4(r29)
	REX_STORE_U32(r29.u32 + -4, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82392778
	if (!ctx.cr6.gt) goto loc_82392778;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r3,255
	ctx.r3.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239272C:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mulli r6,r10,227
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(227));
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mulli r8,r10,26
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(26));
	// srawi r10,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 10;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82392764
	if (!ctx.cr6.gt) goto loc_82392764;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
loc_82392764:
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stbx r4,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r4.u8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x8239272c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239272C;
loc_82392778:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82395580) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82395594
	if (!ctx.cr6.eq) goto loc_82395594;
loc_8239558C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82395594:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8239558c
	if (ctx.cr6.eq) goto loc_8239558C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8239558c
	if (!ctx.cr6.lt) goto loc_8239558C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823955d4
	if (!ctx.cr6.eq) goto loc_823955D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82395630
	if (!ctx.cr6.eq) goto loc_82395630;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x82395630
	goto loc_82395630;
loc_823955D4:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x823955f0
	if (!ctx.cr6.eq) goto loc_823955F0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823955f0
	if (!ctx.cr6.eq) goto loc_823955F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82395630
	goto loc_82395630;
loc_823955F0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82395600
	if (!ctx.cr6.eq) goto loc_82395600;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_82395600:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82395618
	if (!ctx.cr0.gt) goto loc_82395618;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82395610:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bdnz 0x82395610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82395610;
loc_82395618:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne cr6,0x82395630
	if (!ctx.cr6.eq) goto loc_82395630;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82395630:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82395654
	if (!ctx.cr6.eq) goto loc_82395654;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82395654:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82396BD0) {
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
	ctx.lr = 0x82396BD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82396c08
	if (!ctx.cr6.gt) goto loc_82396C08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82396cb4
	goto loc_82396CB4;
loc_82396C08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82396c18
	if (!ctx.cr6.eq) goto loc_82396C18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82396cb4
	goto loc_82396CB4;
loc_82396C18:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82396c78
	if (!ctx.cr6.gt) goto loc_82396C78;
loc_82396C20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396c78
	if (ctx.cr6.eq) goto loc_82396C78;
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
	// bge 0x82396c68
	if (!ctx.cr0.lt) goto loc_82396C68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x82396C68;
	sub_823380C8(ctx, base);
loc_82396C68:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396c20
	if (ctx.cr6.gt) goto loc_82396C20;
loc_82396C78:
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
	// bge 0x82396cb0
	if (!ctx.cr0.lt) goto loc_82396CB0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x82396CB0;
	sub_823380C8(ctx, base);
loc_82396CB0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82396CB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82396ce4
	if (!ctx.cr6.eq) goto loc_82396CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82396CE4:
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82396d58
	if (!ctx.cr6.gt) goto loc_82396D58;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_82396CFC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lbzu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r8,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// rlwimi r5,r4,0,0,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r3,r8,0,0,25
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82396cfc
	if (ctx.cr6.lt) goto loc_82396CFC;
loc_82396D58:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82396810
	ctx.lr = 0x82396D64;
	sub_82396810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82396d98
	if (!ctx.cr6.eq) goto loc_82396D98;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82397f00
	ctx.lr = 0x82396D88;
	sub_82397F00(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r8,-9
	ctx.r8.s64 = -9;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_82396D98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823A5268) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x823A5270;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r31,r4,r11
	r31.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r30,r4,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r4,r3
	r28.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r25,8
	r25.s64 = 8;
loc_823A5288:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r28,3
	r27.s64 = r28.s64 + 3;
	// addi r26,r29,3
	r26.s64 = r29.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823A529C:
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// lhz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r3,6(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r24,2(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r23,0(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r22,r28,r11
	r22.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// lbzx r21,r30,r10
	r21.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lbzx r20,r31,r10
	r20.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lbzx r19,r10,r4
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r5,r21,r5
	ctx.r5.s64 = int64_t(r21.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r20,r3
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r19,r24
	ctx.r5.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r23,r22
	ctx.r5.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823a5300
	if (!ctx.cr0.lt) goto loc_823A5300;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823a530c
	goto loc_823A530C;
loc_823A5300:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x823a530c
	if (!ctx.cr6.gt) goto loc_823A530C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_823A530C:
	// add r5,r28,r11
	ctx.r5.u64 = r28.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// stbx r3,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r3.u8);
	// lhz r24,2(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r23,0(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lbz r19,1(r5)
	r19.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbzx r22,r31,r10
	r22.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lbzx r20,r10,r4
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r21,r30,r10
	r21.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// lhz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r3,6(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// mullw r10,r21,r5
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(ctx.r5.s32);
	// mullw r5,r22,r3
	ctx.r5.s64 = int64_t(r22.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r24
	ctx.r3.s64 = r24.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r20,r3
	ctx.r5.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r23
	ctx.r3.s64 = r23.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r3,r19
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(r19.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r5,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r5.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x823a537c
	if (!ctx.cr0.lt) goto loc_823A537C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823a5388
	goto loc_823A5388;
loc_823A537C:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x823a5388
	if (!ctx.cr6.gt) goto loc_823A5388;
	// li r5,255
	ctx.r5.s64 = 255;
loc_823A5388:
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r5,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// lhz r24,4(r7)
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r21,2(r7)
	r21.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lbzx r22,r30,r10
	r22.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// lbz r20,0(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r23,r3
	r23.s64 = ctx.r3.s16;
	// lhz r5,6(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// extsh r21,r21
	r21.s64 = r21.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r3,r3,r5
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r10,r22,r24
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r24.s32);
	// mullw r5,r5,r21
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r21.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r23,r20
	ctx.r5.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r5,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r5.s64 = ctx.r3.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x823a53f8
	if (!ctx.cr0.lt) goto loc_823A53F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823a5404
	goto loc_823A5404;
loc_823A53F8:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x823a5404
	if (!ctx.cr6.gt) goto loc_823A5404;
	// li r5,255
	ctx.r5.s64 = 255;
loc_823A5404:
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// stb r5,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lhz r21,2(r7)
	r21.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lbzx r5,r27,r11
	ctx.r5.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// lhz r23,4(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lbzx r24,r10,r4
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhz r22,6(r7)
	r22.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// lhz r23,0(r7)
	r23.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r22,r22
	r22.s64 = r22.s16;
	// extsh r23,r23
	r23.s64 = r23.s16;
	// mullw r3,r3,r22
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r22.s32);
	// extsh r22,r21
	r22.s64 = r21.s16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r3,r24,r22
	ctx.r3.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r5,r23,r5
	ctx.r5.s64 = int64_t(r23.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r10,r5,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823a5470
	if (!ctx.cr0.lt) goto loc_823A5470;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823a547c
	goto loc_823A547C;
loc_823A5470:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x823a547c
	if (!ctx.cr6.gt) goto loc_823A547C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_823A547C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r26,r11
	REX_STORE_U8(r26.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823a529c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A529C;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r28,r28,r4
	r28.u64 = r28.u64 + ctx.r4.u64;
	// add r29,r29,r6
	r29.u64 = r29.u64 + ctx.r6.u64;
	// bne 0x823a5288
	if (!ctx.cr0.eq) goto loc_823A5288;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823AD590) {
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
	ctx.lr = 0x823AD598;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f2c
	ctx.lr = 0x823AD5A0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r9,484(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fcfid f31,f0
	f31.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f29,-9408(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -9408);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// srawi r22,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r22.s64 = r21.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f0,-9400(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -9400);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfd f13,-25040(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + -25040);
	// fmul f11,f31,f0
	ctx.f11.f64 = f31.f64 * ctx.f0.f64;
	// fmul f28,f12,f29
	f28.f64 = ctx.f12.f64 * f29.f64;
	// fmul f10,f28,f13
	ctx.f10.f64 = f28.f64 * ctx.f13.f64;
	// fsub f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 - ctx.f11.f64;
	// fadd f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f7.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f6.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// ble cr6,0x823ad6d0
	if (!ctx.cr6.gt) goto loc_823AD6D0;
	// subf r29,r10,r21
	r29.u64 = r21.u64 - ctx.r10.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// subf r26,r24,r8
	r26.u64 = ctx.r8.u64 - r24.u64;
	// subf r27,r24,r21
	r27.u64 = r21.u64 - r24.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_823AD668:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x823ad678
	if (ctx.cr6.lt) goto loc_823AD678;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_823AD678:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ad68c
	if (!ctx.cr6.gt) goto loc_823AD68C;
	// add r4,r31,r26
	ctx.r4.u64 = r31.u64 + r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD68C;
	sub_822D4FA0(ctx, base);
loc_823AD68C:
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// blt cr6,0x823ad69c
	if (ctx.cr6.lt) goto loc_823AD69C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_823AD69C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ad6b8
	if (!ctx.cr6.gt) goto loc_823AD6B8;
	// subf r11,r5,r31
	ctx.r11.u64 = r31.u64 - ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD6B8;
	sub_822D4FA0(ctx, base);
loc_823AD6B8:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// add r31,r31,r21
	r31.u64 = r31.u64 + r21.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x823ad668
	if (!ctx.cr0.eq) goto loc_823AD668;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_823AD6D0:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823ad7a4
	if (!ctx.cr6.gt) goto loc_823AD7A4;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r27,r28,r11
	r27.u64 = ctx.r11.u64 - r28.u64;
loc_823AD6E8:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x823ad700
	if (ctx.cr6.lt) goto loc_823AD700;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823AD700:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823ad73c
	if (!ctx.cr6.gt) goto loc_823AD73C;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,460(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r22
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r9
	ctx.r3.u64 = r31.u64 + ctx.r9.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD728;
	sub_822D4FA0(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r23
	ctx.r4.u64 = r31.u64 + r23.u64;
	// add r3,r31,r8
	ctx.r3.u64 = r31.u64 + ctx.r8.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD73C;
	sub_822D4FA0(ctx, base);
loc_823AD73C:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x823ad750
	if (ctx.cr6.lt) goto loc_823AD750;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823AD750:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823ad790
	if (!ctx.cr6.gt) goto loc_823AD790;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r22
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// subf r31,r30,r8
	r31.u64 = ctx.r8.u64 - r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD77C;
	sub_822D4FA0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = r31.u64 + r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD790;
	sub_822D4FA0(ctx, base);
loc_823AD790:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ad6e8
	if (ctx.cr6.lt) goto loc_823AD6E8;
loc_823AD7A4:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r14,r21,-1
	r14.s64 = r21.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r16,r25,r9
	r16.u64 = ctx.r9.u64 - r25.u64;
	// addc r6,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// and r30,r4,r11
	r30.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f27,4000(r10)
	ctx.fpscr.disableFlushMode();
	f27.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// addi r18,r22,-1
	r18.s64 = r22.s64 + -1;
	// subf r19,r25,r24
	r19.u64 = r24.u64 - r25.u64;
	// lfd f26,-9392(r9)
	f26.u64 = REX_LOAD_U64(ctx.r9.u32 + -9392);
	// subfic r20,r25,1
	ctx.xer.ca = r25.u32 <= 1;
	r20.u64 = static_cast<uint64_t>(1) - r25.u64;
	// lfd f25,-9416(r11)
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -9416);
loc_823AD7F4:
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x823ad808
	if (ctx.cr6.lt) goto loc_823AD808;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_823AD808:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ad9c8
	if (!ctx.cr6.lt) goto loc_823AD9C8;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - f28.f64;
	// fmul f30,f11,f26
	f30.f64 = ctx.f11.f64 * f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = f30.f64 / f31.f64;
	// bl 0x822d6768
	ctx.lr = 0x823AD834;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f30.f64);
	// add r6,r30,r25
	ctx.r6.u64 = r30.u64 + r25.u64;
	// lwz r7,396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r10,r6,r20
	ctx.r10.u64 = ctx.r6.u64 + r20.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, f29.f64, f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, f29.f64, f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r29,r9
	r29.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r28,r8
	r28.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + r25.u64;
	// blt cr6,0x823ad89c
	if (ctx.cr6.lt) goto loc_823AD89C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_823AD89C:
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// neg r3,r28
	ctx.r3.s64 = static_cast<int64_t>(-r28.u64);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// add r7,r6,r16
	ctx.r7.u64 = ctx.r6.u64 + r16.u64;
	// neg r10,r29
	ctx.r10.s64 = static_cast<int64_t>(-r29.u64);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// add r3,r6,r19
	ctx.r3.u64 = ctx.r6.u64 + r19.u64;
	// bl 0x823ac460
	ctx.lr = 0x823AD8D8;
	sub_823AC460(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ad9c0
	if (!ctx.cr6.eq) goto loc_823AD9C0;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// lwz r7,460(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r26,436(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r22,1
	ctx.r9.s64 = r22.s64 + 1;
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r28,r8,r31
	r28.u64 = ctx.r8.u64 + r31.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r9,r31
	r27.u64 = ctx.r9.u64 + r31.u64;
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r4,r28,r15
	ctx.r4.u64 = r28.u64 + r15.u64;
	// add r5,r27,r15
	ctx.r5.u64 = r27.u64 + r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = r31.u64 + r15.u64;
	// add r7,r31,r26
	ctx.r7.u64 = r31.u64 + r26.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823ad934
	if (!ctx.cr6.lt) goto loc_823AD934;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_823AD934:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r24,r8,1
	r24.s64 = ctx.r8.s64 + 1;
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// neg r25,r11
	r25.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// neg r23,r10
	r23.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x823ac460
	ctx.lr = 0x823AD96C;
	sub_823AC460(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r9,444(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r28,r17
	ctx.r4.u64 = r28.u64 + r17.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// add r5,r27,r17
	ctx.r5.u64 = r27.u64 + r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = r31.u64 + r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ad998
	if (ctx.cr6.lt) goto loc_823AD998;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_823AD998:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x823ac460
	ctx.lr = 0x823AD9B8;
	sub_823AC460(ctx, base);
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_823AD9C0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823ad7f4
	goto loc_823AD7F4;
loc_823AD9C8:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - r21.u64;
	// addi r23,r11,2
	r23.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bge cr6,0x823ad9e0
	if (!ctx.cr6.lt) goto loc_823AD9E0;
	// li r23,1
	r23.s64 = 1;
loc_823AD9E0:
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r11,r21,r10
	ctx.r11.u64 = ctx.r10.u64 - r21.u64;
	// mullw r19,r23,r21
	r19.s64 = int64_t(r23.s32) * int64_t(r21.s32);
	// addi r16,r11,2
	r16.s64 = ctx.r11.s64 + 2;
	// subf r20,r23,r9
	r20.u64 = ctx.r9.u64 - r23.u64;
loc_823AD9F4:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// blt cr6,0x823ada04
	if (ctx.cr6.lt) goto loc_823ADA04;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_823ADA04:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823adbe8
	if (!ctx.cr6.lt) goto loc_823ADBE8;
	// add r11,r14,r23
	ctx.r11.u64 = r14.u64 + r23.u64;
	// add r31,r19,r14
	r31.u64 = r19.u64 + r14.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - f28.f64;
	// fmul f30,f11,f26
	f30.f64 = ctx.f11.f64 * f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = f30.f64 / f31.f64;
	// bl 0x822d6768
	ctx.lr = 0x823ADA38;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f30.f64);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// add r6,r31,r25
	ctx.r6.u64 = r31.u64 + r25.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, f29.f64, f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, f29.f64, f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// neg r29,r8
	r29.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r30,r5
	r30.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + r25.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// blt cr6,0x823adaa8
	if (ctx.cr6.lt) goto loc_823ADAA8;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_823ADAA8:
	// add r10,r30,r23
	ctx.r10.u64 = r30.u64 + r23.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r31,r30,r21
	r31.u64 = r30.u64 + r21.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// add r9,r29,r23
	ctx.r9.u64 = r29.u64 + r23.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// add r11,r29,r21
	ctx.r11.u64 = r29.u64 + r21.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823ac460
	ctx.lr = 0x823ADADC;
	sub_823AC460(ctx, base);
	// clrlwi r10,r23,31
	ctx.r10.u64 = r23.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823adbd8
	if (ctx.cr6.eq) goto loc_823ADBD8;
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// lwz r3,460(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r9,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// lwz r27,436(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r7,r21,-2
	ctx.r7.s64 = r21.s64 + -2;
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw r6,r11,r22
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r31,r6,r5
	r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r29,r7,r31
	r29.u64 = ctx.r7.u64 + r31.u64;
	// add r28,r8,r31
	r28.u64 = ctx.r8.u64 + r31.u64;
	// subf r30,r11,r4
	r30.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// add r4,r29,r15
	ctx.r4.u64 = r29.u64 + r15.u64;
	// add r5,r28,r15
	ctx.r5.u64 = r28.u64 + r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = r31.u64 + r15.u64;
	// add r7,r31,r27
	ctx.r7.u64 = r31.u64 + r27.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(r22.s32, r30.s32, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// blt cr6,0x823adb50
	if (ctx.cr6.lt) goto loc_823ADB50;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_823ADB50:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r10,r22
	r27.u64 = ctx.r10.u64 + r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// neg r26,r8
	r26.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// add r25,r9,r22
	r25.u64 = ctx.r9.u64 + r22.u64;
	// neg r24,r10
	r24.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x823ac460
	ctx.lr = 0x823ADB88;
	sub_823AC460(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r29,r17
	ctx.r4.u64 = r29.u64 + r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r5,r28,r17
	ctx.r5.u64 = r28.u64 + r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = r31.u64 + r17.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(r22.s32, r30.s32, ctx.xer);
	// bge cr6,0x823adbb0
	if (!ctx.cr6.lt) goto loc_823ADBB0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823ADBB0:
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// bl 0x823ac460
	ctx.lr = 0x823ADBD0;
	sub_823AC460(ctx, base);
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_823ADBD8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r19,r19,r21
	r19.u64 = r19.u64 + r21.u64;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// b 0x823ad9f4
	goto loc_823AD9F4;
loc_823ADBE8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f78
	ctx.lr = 0x823ADBF4;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C4CA0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x823C4CA8;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,23736
	ctx.r11.s64 = ctx.r11.s64 + 23736;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823c4f58
	if (!ctx.cr6.eq) goto loc_823C4F58;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c4d08
	if (!ctx.cr6.eq) goto loc_823C4D08;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c5490
	if (!ctx.cr6.gt) goto loc_823C5490;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_823C4CF4:
	// lwzux r9,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823c4cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C4CF4;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C4D08:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r31,4
	r31.s64 = 4;
	// beq cr6,0x823c4d18
	if (ctx.cr6.eq) goto loc_823C4D18;
	// li r31,6
	r31.s64 = 6;
loc_823C4D18:
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
	// lwz r10,1316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,1324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x823c5490
	if (!ctx.cr6.gt) goto loc_823C5490;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subfic r27,r5,-1
	ctx.xer.ca = ctx.r5.u32 <= 4294967295;
	r27.u64 = static_cast<uint64_t>(-1) - ctx.r5.u64;
	// subfic r26,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	r26.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r28,r9,2
	r28.s64 = ctx.r9.s64 + 2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// subfic r25,r5,-2
	ctx.xer.ca = ctx.r5.u32 <= 4294967294;
	r25.u64 = static_cast<uint64_t>(-2) - ctx.r5.u64;
loc_823C4D68:
	// add r9,r25,r10
	ctx.r9.u64 = r25.u64 + ctx.r10.u64;
	// lhz r29,6(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r24,2(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r23,r29
	r23.s64 = r29.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbzx r21,r3,r9
	r21.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mullw r29,r29,r24
	r29.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// lbzx r24,r25,r10
	r24.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// extsh r23,r22
	r23.s64 = r22.s16;
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + r29.u64;
	// mullw r9,r23,r24
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c4dcc
	if (!ctx.cr0.lt) goto loc_823C4DCC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c4dd8
	goto loc_823C4DD8;
loc_823C4DCC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c4dd8
	if (!ctx.cr6.gt) goto loc_823C4DD8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C4DD8:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// stb r4,-2(r6)
	REX_STORE_U8(ctx.r6.u32 + -2, ctx.r4.u8);
	// lhz r20,4(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r24,-1(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r23,r3,r9
	r23.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbzx r21,r27,r10
	r21.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// lhz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r19,r4
	r19.s64 = ctx.r4.s16;
	// extsh r20,r20
	r20.s64 = r20.s16;
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// mullw r4,r23,r20
	ctx.r4.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r9,r24,r29
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// extsh r29,r22
	r29.s64 = r22.s16;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r9,r29,r21
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c4e44
	if (!ctx.cr0.lt) goto loc_823C4E44;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c4e50
	goto loc_823C4E50;
loc_823C4E44:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c4e50
	if (!ctx.cr6.gt) goto loc_823C4E50;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C4E50:
	// stb r9,-1(r6)
	REX_STORE_U8(ctx.r6.u32 + -1, ctx.r9.u8);
	// lbzx r23,r28,r3
	r23.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r4,r28,r8
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r8.u32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r29,0(r28)
	r29.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lbz r21,0(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r9,r23,r9
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(ctx.r9.s32);
	// lhz r23,2(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// mullw r4,r4,r24
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r24.s32);
	// extsh r24,r22
	r24.s64 = r22.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r24,r29
	ctx.r4.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// extsh r29,r23
	r29.s64 = r23.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r29,r21
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c4eb4
	if (!ctx.cr0.lt) goto loc_823C4EB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c4ec0
	goto loc_823C4EC0;
loc_823C4EB4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c4ec0
	if (!ctx.cr6.gt) goto loc_823C4EC0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C4EC0:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r9,r26,r10
	ctx.r9.u64 = r26.u64 + ctx.r10.u64;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// lbzx r22,r8,r9
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r23,6(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r24,r4
	r24.s64 = ctx.r4.s16;
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbzx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsh r21,r4
	r21.s64 = ctx.r4.s16;
	// lbzx r29,r26,r10
	r29.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// extsh r4,r23
	ctx.r4.s64 = r23.s16;
	// lbz r23,1(r10)
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r9,r9,r21
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// mullw r4,r22,r4
	ctx.r4.s64 = int64_t(r22.s32) * int64_t(ctx.r4.s32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r23,r24
	ctx.r4.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// extsh r24,r22
	r24.s64 = r22.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r29,r24
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c4f2c
	if (!ctx.cr0.lt) goto loc_823C4F2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c4f38
	goto loc_823C4F38;
loc_823C4F2C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c4f38
	if (!ctx.cr6.gt) goto loc_823C4F38;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C4F38:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x823c4d68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C4D68;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C4F58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c5174
	if (!ctx.cr6.eq) goto loc_823C5174;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// beq cr6,0x823c4f70
	if (ctx.cr6.eq) goto loc_823C4F70;
	// li r8,6
	ctx.r8.s64 = 6;
loc_823C4F70:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// lwz r3,1316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r31,1
	r31.s64 = 1;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r3,r3,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r3.u64;
	// ble cr6,0x823c5490
	if (!ctx.cr6.gt) goto loc_823C5490;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_823C4F9C:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r4,-1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r30,-2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r29,6(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r28,4(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbz r27,0(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r6,r30,r6
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// extsh r30,r29
	r30.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r4,r30
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// extsh r4,r28
	ctx.r4.s64 = r28.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r27,r4
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c4ffc
	if (!ctx.cr0.lt) goto loc_823C4FFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5008
	goto loc_823C5008;
loc_823C4FFC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5008
	if (!ctx.cr6.gt) goto loc_823C5008;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5008:
	// stb r9,-2(r31)
	REX_STORE_U8(r31.u32 + -2, ctx.r9.u8);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r29,-1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r28,r6
	r28.s64 = ctx.r6.s16;
	// lhz r27,6(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r26,2(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r9,r30,r28
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// extsh r30,r27
	r30.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r29,r30
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// extsh r30,r26
	r30.s64 = r26.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r4,r30
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c506c
	if (!ctx.cr0.lt) goto loc_823C506C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5078
	goto loc_823C5078;
loc_823C506C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5078
	if (!ctx.cr6.gt) goto loc_823C5078;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5078:
	// stb r9,-1(r31)
	REX_STORE_U8(r31.u32 + -1, ctx.r9.u8);
	// lhz r27,0(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,6(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r6,r30,r4
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r28,r4
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r26,r4
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c50dc
	if (!ctx.cr0.lt) goto loc_823C50DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c50e8
	goto loc_823C50E8;
loc_823C50DC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c50e8
	if (!ctx.cr6.gt) goto loc_823C50E8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C50E8:
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r27,6(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mullw r6,r30,r4
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r28,r4
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r26,r4
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c514c
	if (!ctx.cr0.lt) goto loc_823C514C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c5158
	goto loc_823C5158;
loc_823C514C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c5158
	if (!ctx.cr6.gt) goto loc_823C5158;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C5158:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stb r9,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// add r31,r31,r7
	r31.u64 = r31.u64 + ctx.r7.u64;
	// bdnz 0x823c4f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C4F9C;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
loc_823C5174:
	// addi r9,r1,47
	ctx.r9.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r22,r9,0,0,26
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r24,r22
	r24.u64 = r22.u64;
	// beq cr6,0x823c5190
	if (ctx.cr6.eq) goto loc_823C5190;
	// li r8,6
	ctx.r8.s64 = 6;
loc_823C5190:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x823c51a0
	if (ctx.cr6.eq) goto loc_823C51A0;
	// li r9,6
	ctx.r9.s64 = 6;
loc_823C51A0:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,1316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r23,1324(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// addi r31,r9,-7
	r31.s64 = ctx.r9.s64 + -7;
	// subfic r26,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	r26.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x823c526c
	if (!ctx.cr6.gt) goto loc_823C526C;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_823C51E8:
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r8,r24,-2
	ctx.r8.s64 = r24.s64 + -2;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823C51F8:
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbzx r21,r9,r5
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r20,r9,r29
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r19,6(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// lbzx r21,r9,r30
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// lhz r18,0(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r17,0(r9)
	r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// extsh r20,r19
	r20.s64 = r19.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r20
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// extsh r21,r18
	r21.s64 = r18.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r17
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(r17.s32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// sraw r3,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sthu r4,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x823c51f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C51F8;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r27,r27,r5
	r27.u64 = r27.u64 + ctx.r5.u64;
	// addi r24,r24,64
	r24.s64 = r24.s64 + 64;
	// bne 0x823c51e8
	if (!ctx.cr0.eq) goto loc_823C51E8;
loc_823C526C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823c5490
	if (!ctx.cr6.gt) goto loc_823C5490;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_823C5280:
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r31,4(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r4,r5
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c52f0
	if (!ctx.cr0.lt) goto loc_823C52F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c52fc
	goto loc_823C52FC;
loc_823C52F0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c52fc
	if (!ctx.cr6.gt) goto loc_823C52FC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C52FC:
	// stb r9,-2(r6)
	REX_STORE_U8(ctx.r6.u32 + -2, ctx.r9.u8);
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,6(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r30
	ctx.r5.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r3
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5370
	if (!ctx.cr0.lt) goto loc_823C5370;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c537c
	goto loc_823C537C;
loc_823C5370:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c537c
	if (!ctx.cr6.gt) goto loc_823C537C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C537C:
	// stb r9,-1(r6)
	REX_STORE_U8(ctx.r6.u32 + -1, ctx.r9.u8);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,8(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lhz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c53f0
	if (!ctx.cr0.lt) goto loc_823C53F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c53fc
	goto loc_823C53FC;
loc_823C53F0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c53fc
	if (!ctx.cr6.gt) goto loc_823C53FC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C53FC:
	// stb r9,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,10(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c5470
	if (!ctx.cr0.lt) goto loc_823C5470;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823c547c
	goto loc_823C547C;
loc_823C5470:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x823c547c
	if (!ctx.cr6.gt) goto loc_823C547C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823C547C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x823c5280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5280;
loc_823C5490:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823E0138) {
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
	ctx.lr = 0x823E0140;
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
	// beq cr6,0x823e0174
	if (ctx.cr6.eq) goto loc_823E0174;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E0170;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E0174:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e0190
	if (ctx.cr6.eq) goto loc_823E0190;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E018C;
	sub_823DC0B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E0190:
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
	// bne 0x823e01f8
	if (!ctx.cr0.eq) goto loc_823E01F8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e0200
	goto loc_823E0200;
loc_823E01F8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E0200:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e0258
	if (ctx.cr6.eq) goto loc_823E0258;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,-10496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-10488(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -10492);
	ctx.f0.f64 = double(temp.f32);
loc_823E0228:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e0228
	if (ctx.cr6.lt) goto loc_823E0228;
loc_823E0258:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e0270
	if (ctx.cr6.eq) goto loc_823E0270;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E0270;
	sub_823DC658(ctx, base);
loc_823E0270:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e0478
	if (!ctx.cr6.gt) goto loc_823E0478;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-13044(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -13044);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,2028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2028);
	ctx.f7.f64 = double(temp.f32);
loc_823E02D0:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
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
	// beq cr6,0x823e03f8
	if (ctx.cr6.eq) goto loc_823E03F8;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
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
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_823E03F8:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823e0408
	if (ctx.cr6.lt) goto loc_823E0408;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823E0408:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e0420
	if (!ctx.cr6.gt) goto loc_823E0420;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x823e0424
	if (ctx.cr6.lt) goto loc_823E0424;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x823e0424
	goto loc_823E0424;
loc_823E0420:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823E0424:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823e0434
	if (ctx.cr6.lt) goto loc_823E0434;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823E0434:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e044c
	if (!ctx.cr6.gt) goto loc_823E044C;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x823e0450
	if (ctx.cr6.lt) goto loc_823E0450;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x823e0450
	goto loc_823E0450;
loc_823E044C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823E0450:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r11,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e02d0
	if (ctx.cr6.lt) goto loc_823E02D0;
loc_823E0478:
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

DEFINE_REX_FUNC(sub_823E6498) {
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
	// bl 0x823e59a8
	ctx.lr = 0x823E64B8;
	sub_823E59A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e64cc
	if (ctx.cr0.eq) goto loc_823E64CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823E64CC;
	sub_823CD250(ctx, base);
loc_823E64CC:
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

DEFINE_REX_FUNC(sub_823E73C0) {
	REX_FUNC_PROLOGUE();
	// b 0x823e72f0
	sub_823E72F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E73C8) {
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
	ctx.lr = 0x823E73D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e745c
	if (ctx.cr0.eq) goto loc_823E745C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x823e74cc
	if (ctx.cr6.eq) goto loc_823E74CC;
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
loc_823E7414:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e7444
	if (ctx.cr6.eq) goto loc_823E7444;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 8);
	// mullw r6,r11,r28
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// bl 0x823e73c8
	ctx.lr = 0x823E7444;
	sub_823E73C8(ctx, base);
loc_823E7444:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e7414
	if (ctx.cr6.lt) goto loc_823E7414;
	// b 0x823e74cc
	goto loc_823E74CC;
loc_823E745C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823e7474
	if (!ctx.cr0.eq) goto loc_823E7474;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x823e749c
	goto loc_823E749C;
loc_823E7474:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e748c
	if (ctx.cr6.eq) goto loc_823E748C;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x823e7494
	goto loc_823E7494;
loc_823E748C:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
loc_823E7494:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_823E749C:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_823E74CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823EC3D0) {
	REX_FUNC_PROLOGUE();
	// stw r4,1352(r3)
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r4.u32);
	// stw r5,1344(r3)
	REX_STORE_U32(ctx.r3.u32 + 1344, ctx.r5.u32);
	// stw r6,1348(r3)
	REX_STORE_U32(ctx.r3.u32 + 1348, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ECC98) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// beq cr6,0x823eccf0
	if (ctx.cr6.eq) goto loc_823ECCF0;
	// cmpwi cr6,r11,201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 201, ctx.xer);
	// beq cr6,0x823eccf0
	if (ctx.cr6.eq) goto loc_823ECCF0;
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
	ctx.lr = 0x823ECCF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECCF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eca00
	ctx.lr = 0x823ECCF8;
	sub_823ECA00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823ecd40
	if (ctx.cr6.eq) goto loc_823ECD40;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823ecd44
	if (!ctx.cr6.eq) goto loc_823ECD44;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823ecd30
	if (ctx.cr6.eq) goto loc_823ECD30;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,51
	ctx.r10.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ECD30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECD30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6210
	ctx.lr = 0x823ECD38;
	sub_823F6210(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823ecd44
	goto loc_823ECD44;
loc_823ECD40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823ECD44:
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

DEFINE_REX_FUNC(sub_823EF3F0) {
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
	ctx.lr = 0x823EF3F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ef508
	if (ctx.cr6.eq) goto loc_823EF508;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ef508
	if (ctx.cr6.eq) goto loc_823EF508;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ef444
	if (ctx.cr6.gt) goto loc_823EF444;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ef454
	if (!ctx.cr6.gt) goto loc_823EF454;
loc_823EF444:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,14832
	ctx.r4.s64 = ctx.r11.s64 + 14832;
	// bl 0x823ec3e0
	ctx.lr = 0x823EF454;
	sub_823EC3E0(ctx, base);
loc_823EF454:
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stb r11,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r11.u8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// stb r25,26(r31)
	REX_STORE_U8(r31.u32 + 26, r25.u8);
	// stb r9,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r9.u8);
	// stb r26,28(r31)
	REX_STORE_U8(r31.u32 + 28, r26.u8);
	// beq cr6,0x823ef490
	if (ctx.cr6.eq) goto loc_823EF490;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,3
	ctx.r9.s64 = 3;
	// bne 0x823ef494
	if (!ctx.cr0.eq) goto loc_823EF494;
loc_823EF490:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823EF494:
	// stb r9,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r9.u8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ef4ac
	if (ctx.cr0.eq) goto loc_823EF4AC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r11.u8);
loc_823EF4AC:
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// stb r11,30(r31)
	REX_STORE_U8(r31.u32 + 30, ctx.r11.u8);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ef4f8
	if (!ctx.cr6.gt) goto loc_823EF4F8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,14768
	ctx.r4.s64 = ctx.r11.s64 + 14768;
	// bl 0x823ec418
	ctx.lr = 0x823EF4F0;
	sub_823EC418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823ef504
	goto loc_823EF504;
loc_823EF4F8:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_823EF504:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_823EF508:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823F3DB8) {
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
	ctx.lr = 0x823F3DC0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f1c
	ctx.lr = 0x823F3DC8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f29,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f29.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f28,f29
	f28.f64 = f29.f64;
	// addi r30,r4,12
	r30.s64 = ctx.r4.s64 + 12;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823f3e00
	if (ctx.cr6.eq) goto loc_823F3E00;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F3DF8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823f3df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3DF8;
loc_823F3E00:
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f22,-7224(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7224);
	f22.f64 = double(temp.f32);
	// lfs f23,17176(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17176);
	f23.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f24,22428(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 22428);
	f24.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f30,-13044(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -13044);
	f30.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f21,16288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
	f21.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,2000(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2000);
	f27.f64 = double(temp.f32);
	// lfs f31,2028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2028);
	f31.f64 = double(temp.f32);
loc_823F3E4C:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823f3e64
	if (ctx.cr6.eq) goto loc_823F3E64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_823F3E64:
	// fmadds f0,f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, f27.f64)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwa r9,92(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x823f3ea0
	if (!ctx.cr6.lt) goto loc_823F3EA0;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// b 0x823f3eac
	goto loc_823F3EAC;
loc_823F3EA0:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x823f3eac
	if (!ctx.cr6.gt) goto loc_823F3EAC;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
loc_823F3EAC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823f3f1c
	if (ctx.cr6.eq) goto loc_823F3F1C;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x823f3ed4
	if (ctx.cr6.eq) goto loc_823F3ED4;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_823F3ED4:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x823f3f1c
	if (!ctx.cr6.lt) goto loc_823F3F1C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f3ef4
	if (ctx.cr6.eq) goto loc_823F3EF4;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_823F3EF4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x823f3f1c
	if (ctx.cr6.eq) goto loc_823F3F1C;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_823F3F1C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823f3e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3E4C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x823f2b10
	ctx.lr = 0x823F3F3C;
	sub_823F2B10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f4360
	if (ctx.cr0.lt) goto loc_823F4360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f25.f64 = double(temp.f32);
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(f29.f64, f25.f64);
	// bne cr6,0x823f3f74
	if (!ctx.cr6.eq) goto loc_823F3F74;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
loc_823F3F5C:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x822d5870
	ctx.lr = 0x823F3F70;
	sub_822D5870(ctx, base);
	// b 0x823f435c
	goto loc_823F435C;
loc_823F3F74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f26,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f26.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	ctx.cr6.compare(f29.f64, f26.f64);
	// beq cr6,0x823f3f90
	if (ctx.cr6.eq) goto loc_823F3F90;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(f28.f64, f25.f64);
	// li r6,8
	ctx.r6.s64 = 8;
	// bne cr6,0x823f3f94
	if (!ctx.cr6.eq) goto loc_823F3F94;
loc_823F3F90:
	// li r6,6
	ctx.r6.s64 = 6;
loc_823F3F94:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f23b8
	ctx.lr = 0x823F3FA4;
	sub_823F23B8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f27.f64)));
	// fmadds f13,f13,f31,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, f27.f64)));
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// bne cr6,0x823f401c
	if (!ctx.cr6.eq) goto loc_823F401C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f40ac
	if (!ctx.cr6.eq) goto loc_823F40AC;
	// stb r10,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// b 0x823f3f5c
	goto loc_823F3F5C;
loc_823F401C:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f40ac
	if (!ctx.cr6.eq) goto loc_823F40AC;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
loc_823F404C:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f404c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F404C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r29,r11,22464
	r29.s64 = ctx.r11.s64 + 22464;
	// b 0x823f4128
	goto loc_823F4128;
loc_823F40AC:
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-7216(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7216);
	ctx.f0.f64 = double(temp.f32);
loc_823F40D4:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r8,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f40d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F40D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,22432
	r29.s64 = ctx.r11.s64 + 22432;
loc_823F4128:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x823f415c
	if (ctx.cr6.eq) goto loc_823F415C;
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// b 0x823f4160
	goto loc_823F4160;
loc_823F415C:
	// fmr f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f26.f64;
loc_823F4160:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823f4180
	if (ctx.cr6.eq) goto loc_823F4180;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F4178:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823f4178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F4178;
loc_823F4180:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_823F4190:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823f42d4
	if (!ctx.cr6.lt) goto loc_823F42D4;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F41B8:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823f41cc
	if (ctx.cr6.eq) goto loc_823F41CC;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_823F41CC:
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bgt cr6,0x823f4200
	if (ctx.cr6.gt) goto loc_823F4200;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f41f8
	if (!ctx.cr6.eq) goto loc_823F41F8;
	// fmuls f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823f41f8
	if (ctx.cr6.gt) goto loc_823F41F8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823f4248
	goto loc_823F4248;
loc_823F41F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823f4248
	goto loc_823F4248;
loc_823F4200:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x823f4230
	if (ctx.cr6.lt) goto loc_823F4230;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x823f4228
	if (!ctx.cr6.eq) goto loc_823F4228;
	// fadds f0,f10,f25
	ctx.f0.f64 = double(float(ctx.f10.f64 + f25.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823f4228
	if (ctx.cr6.lt) goto loc_823F4228;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823f4248
	goto loc_823F4248;
loc_823F4228:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823f4248
	goto loc_823F4248;
loc_823F4230:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
loc_823F4248:
	// rlwinm r30,r30,29,3,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r27,r11,21,0,10
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// beq cr6,0x823f42c0
	if (ctx.cr6.eq) goto loc_823F42C0;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lfsx f0,r27,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq cr6,0x823f4284
	if (ctx.cr6.eq) goto loc_823F4284;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_823F4284:
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bge cr6,0x823f42c0
	if (!ctx.cr6.lt) goto loc_823F42C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f42a0
	if (ctx.cr6.eq) goto loc_823F42A0;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f13.f64)));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_823F42A0:
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x823f42c0
	if (ctx.cr6.eq) goto loc_823F42C0;
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_823F42C0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f41b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F41B8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_823F42D4:
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// stb r10,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r8,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// stbu r3,3(r4)
	ea = 3 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r4.u32 = ea;
	// blt cr6,0x823f4190
	if (ctx.cr6.lt) goto loc_823F4190;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// rlwinm r10,r9,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r31,6
	ctx.r11.s64 = r31.s64 + 6;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
loc_823F435C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F4360:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f68
	ctx.lr = 0x823F436C;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82409E08) {
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
	ctx.lr = 0x82409E10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r31,r5,16,16,31
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// ori r10,r10,515
	ctx.r10.u64 = ctx.r10.u64 | 515;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// li r26,16
	r26.s64 = 16;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// ori r9,r9,1543
	ctx.r9.u64 = ctx.r9.u64 | 1543;
	// ori r8,r8,2571
	ctx.r8.u64 = ctx.r8.u64 | 2571;
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// sraw. r11,r26,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r26.s32 < 0) & (((r26.s32 >> temp.u32) << temp.u32) != r26.s32);
	ctx.r11.s64 = r26.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// beq 0x82409e98
	if (ctx.cr0.eq) goto loc_82409E98;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_82409E7C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82409ca8
	ctx.lr = 0x82409E8C;
	sub_82409CA8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// bne 0x82409e7c
	if (!ctx.cr0.eq) goto loc_82409E7C;
loc_82409E98:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r21,r7,r9
	r21.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// bge cr6,0x82409ed4
	if (!ctx.cr6.lt) goto loc_82409ED4;
	// li r24,-16
	r24.s64 = -16;
	// li r27,-128
	r27.s64 = -128;
	// neg r28,r23
	r28.s64 = static_cast<int64_t>(-r23.u64);
	// b 0x82409ee4
	goto loc_82409EE4;
loc_82409ED4:
	// mr r24,r26
	r24.u64 = r26.u64;
	// li r27,128
	r27.s64 = 128;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
loc_82409EE4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// slw r31,r25,r9
	r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82409EFC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// bdnz 0x82409efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82409EFC;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82409f4c
	if (ctx.cr0.eq) goto loc_82409F4C;
loc_82409F14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82409f4c
	if (ctx.cr6.eq) goto loc_82409F4C;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82409ca8
	ctx.lr = 0x82409F2C;
	sub_82409CA8(ctx, base);
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// subf r31,r21,r31
	r31.u64 = r31.u64 - r21.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82409f14
	if (!ctx.cr0.eq) goto loc_82409F14;
loc_82409F4C:
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// subf r10,r26,r29
	ctx.r10.u64 = r29.u64 - r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// clrlwi. r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82409f9c
	if (ctx.cr0.eq) goto loc_82409F9C;
loc_82409F68:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// blt cr6,0x82409f9c
	if (ctx.cr6.lt) goto loc_82409F9C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// clrlwi. r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v7,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// vperm128 v63,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// bne 0x82409f68
	if (!ctx.cr0.eq) goto loc_82409F68;
loc_82409F9C:
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// blt cr6,0x8240a044
	if (ctx.cr6.lt) goto loc_8240A044;
loc_82409FA4:
	// dcbz r0,r11
	ea = (ctx.r11.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// addi r31,r31,-128
	r31.s64 = r31.s64 + -128;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lvx128 v62,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,140(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lvx128 v61,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// vperm128 v61,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// bge cr6,0x82409fa4
	if (!ctx.cr6.lt) goto loc_82409FA4;
loc_8240A044:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// blt cr6,0x8240a070
	if (ctx.cr6.lt) goto loc_8240A070;
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8240A054:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// bdnz 0x8240a054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240A054;
loc_8240A070:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// add r29,r10,r26
	r29.u64 = ctx.r10.u64 + r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8240a0a8
	if (ctx.cr6.eq) goto loc_8240A0A8;
loc_8240A088:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82409ca8
	ctx.lr = 0x8240A098;
	sub_82409CA8(ctx, base);
	// subf. r31,r21,r31
	r31.u64 = r31.u64 - r21.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// bne 0x8240a088
	if (!ctx.cr0.eq) goto loc_8240A088;
loc_8240A0A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8241AF48) {
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
	// lwz r7,100(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241afcc
	if (!ctx.cr6.lt) goto loc_8241AFCC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f13.f64 = double(temp.f32);
loc_8241AF9C:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
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
	// bdnz 0x8241af9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241AF9C;
loc_8241AFCC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241afe8
	if (ctx.cr6.eq) goto loc_8241AFE8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241AFE8;
	sub_82413D40(ctx, base);
loc_8241AFE8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b004
	if (ctx.cr6.eq) goto loc_8241B004;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B004;
	sub_82414110(ctx, base);
loc_8241B004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241C138) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8241C180;
	sub_822D4FA0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241c198
	if (ctx.cr6.eq) goto loc_8241C198;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241C198;
	sub_82413D40(ctx, base);
loc_8241C198:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241c1b0
	if (ctx.cr6.eq) goto loc_8241C1B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414110
	ctx.lr = 0x8241C1B0;
	sub_82414110(ctx, base);
loc_8241C1B0:
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

DEFINE_REX_FUNC(sub_8241E3C8) {
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
	// bl 0x8241d828
	ctx.lr = 0x8241E3E8;
	sub_8241D828(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e3f8
	if (ctx.cr0.eq) goto loc_8241E3F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8241E3F8;
	sub_822C80A8(ctx, base);
loc_8241E3F8:
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

DEFINE_REX_FUNC(sub_8241EC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241EC50;
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
	// bne cr6,0x8241ec8c
	if (!ctx.cr6.eq) goto loc_8241EC8C;
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
	// li r7,1208
	ctx.r7.s64 = 1208;
	// bl 0x8240e308
	ctx.lr = 0x8241EC8C;
	sub_8240E308(ctx, base);
loc_8241EC8C:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241EC98;
	sub_8240E810(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8241ecfc
	if (ctx.cr0.eq) goto loc_8241ECFC;
	// beq cr6,0x8241ecbc
	if (ctx.cr6.eq) goto loc_8241ECBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241ECBC;
	sub_8240E930(ctx, base);
loc_8241ECBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ecf4
	if (ctx.cr6.eq) goto loc_8241ECF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ecf4
	if (ctx.cr6.eq) goto loc_8241ECF4;
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
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x8241ECF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241ECF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241ed50
	goto loc_8241ED50;
loc_8241ECFC:
	// beq cr6,0x8241ed14
	if (ctx.cr6.eq) goto loc_8241ED14;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241ED14;
	sub_8240E930(ctx, base);
loc_8241ED14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ed4c
	if (ctx.cr6.eq) goto loc_8241ED4C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ed4c
	if (ctx.cr6.eq) goto loc_8241ED4C;
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
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x8241ED4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241ED4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241ED50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82420FB8) {
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
	ctx.lr = 0x82420FC0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82420ffc
	if (!ctx.cr6.eq) goto loc_82420FFC;
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
	// li r7,3457
	ctx.r7.s64 = 3457;
	// bl 0x8240e308
	ctx.lr = 0x82420FFC;
	sub_8240E308(ctx, base);
loc_82420FFC:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82421008;
	sub_8240E810(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82421018;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82421048
	if (!ctx.cr6.eq) goto loc_82421048;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18732);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82421050
	goto loc_82421050;
loc_82421048:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-18736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18736);
	ctx.f0.f64 = double(temp.f32);
loc_82421050:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82421098
	if (ctx.cr6.eq) goto loc_82421098;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421098
	if (ctx.cr6.eq) goto loc_82421098;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8241e418
	ctx.lr = 0x82421070;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,67
	ctx.r6.s64 = 67;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// bctrl 
	ctx.lr = 0x82421098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421098:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82425BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// lhz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lhz r6,6(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r5,r9,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lfs f0,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r9,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// sth r11,-80(r1)
	REX_STORE_U16(ctx.r1.u32 + -80, ctx.r11.u16);
	// rlwinm r8,r7,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// lbz r9,-79(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -79);
	// rlwinm r11,r7,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// lbz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -80);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r7,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r7.u64);
	// lfd f13,-72(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// std r9,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r4,r6,8,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// or r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r11,-76(r1)
	REX_STORE_U16(ctx.r1.u32 + -76, ctx.r11.u16);
	// sth r10,-78(r1)
	REX_STORE_U16(ctx.r1.u32 + -78, ctx.r10.u16);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// sth r8,-74(r1)
	REX_STORE_U16(ctx.r1.u32 + -74, ctx.r8.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,-44
	ctx.r10.s64 = ctx.r1.s64 + -44;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// ble cr6,0x82425cfc
	if (!ctx.cr6.gt) goto loc_82425CFC;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-7216(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7216);
	ctx.f0.f64 = double(temp.f32);
loc_82425CAC:
	// subfic r9,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r9.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// lfs f13,-44(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f12,-48(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r8.u64);
	// lfd f11,-72(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f10,-64(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82425cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425CAC;
	// b 0x82425d70
	goto loc_82425D70;
loc_82425CFC:
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
loc_82425D0C:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,-44(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f13.f64 = double(temp.f32);
	// subfic r8,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r8.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lfs f12,-48(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f11,-64(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r9,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f10,-72(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82425d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425D0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-20(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
loc_82425D70:
	// lbz r8,-77(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -77);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -76);
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// lbz r11,-78(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -78);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_82425D94:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82425d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425D94;
	// lbz r8,-74(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -74);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,-73(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -73);
	// addi r9,r3,124
	ctx.r9.s64 = ctx.r3.s64 + 124;
	// lbz r11,-75(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -75);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_82425DD0:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82425dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425DD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242EBF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_8242EBF4:
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
	// bne 0x8242ebf4
	if (!ctx.cr0.eq) goto loc_8242EBF4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82431DA8) {
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
	ctx.lr = 0x82431DB8;
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
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82431f7c
	if (!ctx.cr6.eq) goto loc_82431F7C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82432134
	if (ctx.cr6.eq) goto loc_82432134;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82431E60:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// lfd f0,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r5,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f31,f13,f11,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f31.f64)));
	// beq cr6,0x82431f20
	if (ctx.cr6.eq) goto loc_82431F20;
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
	// b 0x82431f60
	goto loc_82431F60;
loc_82431F20:
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
loc_82431F60:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82431e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431E60;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x82431F70;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82431F7C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f13,f0
	f25.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f30,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f26,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f26.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// lfs f24,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	f26.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f22,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	f22.f64 = double(temp.f32);
	// fmuls f24,f24,f0
	f24.f64 = double(float(f24.f64 * ctx.f0.f64));
	// lfs f13,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f22,f0
	f22.f64 = double(float(f22.f64 * ctx.f0.f64));
	// lfs f20,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f20.f64 = double(temp.f32);
	// fmuls f21,f13,f0
	f21.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f20,f20,f0
	f20.f64 = double(float(f20.f64 * ctx.f0.f64));
	// beq cr6,0x82432134
	if (ctx.cr6.eq) goto loc_82432134;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82431FFC:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// lfd f0,-176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f19,f0
	f19.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// frsp f13,f19
	ctx.f13.f64 = double(float(f19.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f19,f0,f12
	f19.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f19,f13,f11,f19
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f19.f64)));
	// beq cr6,0x824320bc
	if (ctx.cr6.eq) goto loc_824320BC;
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
	// b 0x824320fc
	goto loc_824320FC;
loc_824320BC:
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
loc_824320FC:
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
	// bdnz 0x82431ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431FFC;
loc_82432134:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x8243213C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824419C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824419D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824419F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// b 0x82441a24
	goto loc_82441A24;
loc_824419FC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441a18
	if (ctx.cr6.eq) goto loc_82441A18;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82441a1c
	goto loc_82441A1C;
loc_82441A18:
	// li r31,0
	r31.s64 = 0;
loc_82441A1C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82441a30
	if (ctx.cr6.eq) goto loc_82441A30;
loc_82441A24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824419fc
	if (!ctx.cr6.eq) goto loc_824419FC;
	// b 0x82441a54
	goto loc_82441A54;
loc_82441A30:
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// bl 0x82443938
	ctx.lr = 0x82441A38;
	sub_82443938(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x82441A54;
	sub_82473600(ctx, base);
loc_82441A54:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82443680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82443688;
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824436B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82443348
	ctx.lr = 0x824436BC;
	sub_82443348(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x824436E0;
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
	ctx.lr = 0x824436F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82447218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82447220;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82447240
	if (ctx.cr6.gt) goto loc_82447240;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82447240:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824472a4
	if (!ctx.cr6.gt) goto loc_824472A4;
	// li r30,0
	r30.s64 = 0;
loc_82447254:
	// lwz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82447290
	if (!ctx.cr6.eq) goto loc_82447290;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82465240
	ctx.lr = 0x82447288;
	sub_82465240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824472a4
	if (ctx.cr6.lt) goto loc_824472A4;
loc_82447290:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82447254
	if (ctx.cr6.lt) goto loc_82447254;
loc_824472A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8244C3C0) {
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
	ctx.lr = 0x8244C3C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c414
	if (ctx.cr6.eq) goto loc_8244C414;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c414
	if (ctx.cr6.eq) goto loc_8244C414;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x8244c414
	if (!ctx.cr6.eq) goto loc_8244C414;
loc_8244C408:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8244C414:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8244b758
	ctx.lr = 0x8244C42C;
	sub_8244B758(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r3,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r3.u16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r4,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8246e320
	ctx.lr = 0x8244C450;
	sub_8246E320(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8244c488
	if (!ctx.cr6.eq) goto loc_8244C488;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c488
	if (ctx.cr6.eq) goto loc_8244C488;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8244c5c4
	goto loc_8244C5C4;
loc_8244C488:
	// lhz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 5);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lbz r10,7(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 7);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244c4c4
	if (ctx.cr6.eq) goto loc_8244C4C4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8244b988
	ctx.lr = 0x8244C4C0;
	sub_8244B988(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_8244C4C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c508
	if (ctx.cr6.eq) goto loc_8244C508;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244c508
	if (!ctx.cr6.eq) goto loc_8244C508;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244c4f4
	if (!ctx.cr6.eq) goto loc_8244C4F4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c508
	if (ctx.cr6.eq) goto loc_8244C508;
loc_8244C4F4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8244c504
	if (!ctx.cr6.gt) goto loc_8244C504;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8244C504:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8244C508:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bgt cr6,0x8244c51c
	if (ctx.cr6.gt) goto loc_8244C51C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8244c5c4
	goto loc_8244C5C4;
loc_8244C51C:
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f12,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f11,2028(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2028);
	ctx.f11.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x8244c5b8
	if (ctx.cr6.gt) goto loc_8244C5B8;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
loc_8244C5B8:
	// li r11,36
	ctx.r11.s64 = 36;
	// fctidz f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f0,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.f0.u32);
loc_8244C5C4:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// beq cr6,0x8244c618
	if (ctx.cr6.eq) goto loc_8244C618;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// beq cr6,0x8244c610
	if (ctx.cr6.eq) goto loc_8244C610;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// bne cr6,0x8244c408
	if (!ctx.cr6.eq) goto loc_8244C408;
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244c5f4
	if (ctx.cr6.eq) goto loc_8244C5F4;
	// li r11,355
	ctx.r11.s64 = 355;
	// b 0x8244c61c
	goto loc_8244C61C;
loc_8244C5F4:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,354
	ctx.r8.s64 = ctx.r11.s64 + 354;
	// sth r8,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// b 0x8244c620
	goto loc_8244C620;
loc_8244C610:
	// li r11,353
	ctx.r11.s64 = 353;
	// b 0x8244c61c
	goto loc_8244C61C;
loc_8244C618:
	// li r11,352
	ctx.r11.s64 = 352;
loc_8244C61C:
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_8244C620:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8244c634
	if (ctx.cr6.eq) goto loc_8244C634;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_8244C634:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 20);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r4,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// lbz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U8(r28.u32 + 20);
	// sth r3,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r3.u16);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8244b900
	ctx.lr = 0x8244C670;
	sub_8244B900(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 20);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8244b800
	ctx.lr = 0x8244C690;
	sub_8244B800(ctx, base);
	// sth r3,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r3.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c6b8
	if (ctx.cr6.eq) goto loc_8244C6B8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// bne cr6,0x8244c6b4
	if (!ctx.cr6.eq) goto loc_8244C6B4;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_8244C6B4:
	// sth r11,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r11.u16);
loc_8244C6B8:
	// lwz r11,21(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 21);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244c6f0
	if (ctx.cr6.eq) goto loc_8244C6F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244c6f0
	if (!ctx.cr6.eq) goto loc_8244C6F0;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c6f0
	if (!ctx.cr6.eq) goto loc_8244C6F0;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_8244C6F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r10,r8,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// bl 0x8244ba10
	ctx.lr = 0x8244C728;
	sub_8244BA10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8245D940) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,30932
	ctx.r11.s64 = ctx.r11.s64 + 30932;
	// addi r10,r10,9620
	ctx.r10.s64 = ctx.r10.s64 + 9620;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r4,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// stw r5,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r5.u32);
	// stw r6,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r6.u32);
	// stw r7,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r7.u32);
	// stw r8,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r8.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x8242d278
	ctx.lr = 0x8245D9C8;
	sub_8242D278(ctx, base);
	// addi r3,r31,388
	ctx.r3.s64 = r31.s64 + 388;
	// bl 0x8242d278
	ctx.lr = 0x8245D9D0;
	sub_8242D278(ctx, base);
	// addi r11,r31,648
	ctx.r11.s64 = r31.s64 + 648;
	// stw r30,608(r31)
	REX_STORE_U32(r31.u32 + 608, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,728(r31)
	REX_STORE_U32(r31.u32 + 728, ctx.r11.u32);
	// stw r30,612(r31)
	REX_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,616(r31)
	REX_STORE_U32(r31.u32 + 616, r30.u32);
	// stw r30,620(r31)
	REX_STORE_U32(r31.u32 + 620, r30.u32);
	// stw r30,624(r31)
	REX_STORE_U32(r31.u32 + 624, r30.u32);
	// stw r30,628(r31)
	REX_STORE_U32(r31.u32 + 628, r30.u32);
	// stw r30,632(r31)
	REX_STORE_U32(r31.u32 + 632, r30.u32);
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// stw r30,640(r31)
	REX_STORE_U32(r31.u32 + 640, r30.u32);
	// stw r30,732(r31)
	REX_STORE_U32(r31.u32 + 732, r30.u32);
	// stw r30,736(r31)
	REX_STORE_U32(r31.u32 + 736, r30.u32);
	// stw r30,740(r31)
	REX_STORE_U32(r31.u32 + 740, r30.u32);
	// std r30,744(r31)
	REX_STORE_U64(r31.u32 + 744, r30.u64);
	// std r30,752(r31)
	REX_STORE_U64(r31.u32 + 752, r30.u64);
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

DEFINE_REX_FUNC(sub_8245F5A8) {
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
	ctx.lr = 0x8245F5B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245f5f0
	if (!ctx.cr6.eq) goto loc_8245F5F0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8245f5f0
	if (!ctx.cr6.eq) goto loc_8245F5F0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f65c
	goto loc_8245F65C;
loc_8245F5F0:
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
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F60C;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f620
	if (!ctx.cr0.eq) goto loc_8245F620;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245f65c
	goto loc_8245F65C;
loc_8245F620:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8245f9d8
	ctx.lr = 0x8245F64C;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245f65c
	if (!ctx.cr0.lt) goto loc_8245F65C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F65C;
	sub_82473600(ctx, base);
loc_8245F65C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82460ED8) {
	REX_FUNC_PROLOGUE();
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82461288) {
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
	ctx.lr = 0x82461290;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824612b4
	if (ctx.cr6.eq) goto loc_824612B4;
	// lhz r30,0(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x824612b8
	goto loc_824612B8;
loc_824612B4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_824612B8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,1
	r29.s64 = 1;
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r26,276(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r24,302(r1)
	r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 302);
	// lhz r23,310(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// not r22,r11
	r22.u64 = ~ctx.r11.u64;
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// stw r5,820(r31)
	REX_STORE_U32(r31.u32 + 820, ctx.r5.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r8,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r8.u16);
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r4,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r4.u32);
	// stw r7,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r24,64(r31)
	REX_STORE_U32(r31.u32 + 64, r24.u32);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// stw r9,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r9.u32);
	// ble cr6,0x82461354
	if (!ctx.cr6.gt) goto loc_82461354;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82461344:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82461344
	if (ctx.cr6.gt) goto loc_82461344;
loc_82461354:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r9,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r9.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8246137c
	if (!ctx.cr6.gt) goto loc_8246137C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8246136C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8246136c
	if (ctx.cr6.gt) goto loc_8246136C;
loc_8246137C:
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r8.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82461398
	if (!ctx.cr6.eq) goto loc_82461398;
	// li r9,-129
	ctx.r9.s64 = -129;
	// b 0x824613a8
	goto loc_824613A8;
loc_82461398:
	// li r9,-651
	ctx.r9.s64 = -651;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x824613a8
	if (!ctx.cr6.gt) goto loc_824613A8;
	// li r9,-907
	ctx.r9.s64 = -907;
loc_824613A8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82461550
	if (!ctx.cr6.eq) goto loc_82461550;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r6,r9,31464
	ctx.r6.s64 = ctx.r9.s64 + 31464;
	// lbzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82461550
	if (ctx.cr6.eq) goto loc_82461550;
	// rlwinm r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x824613f0
	if (!ctx.cr6.eq) goto loc_824613F0;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65525
	ctx.r12.u64 = ctx.r12.u64 | 65525;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_824613F0:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r7,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r28,456(r31)
	REX_STORE_U32(r31.u32 + 456, r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82461418
	if (ctx.cr6.eq) goto loc_82461418;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stw r29,456(r31)
	REX_STORE_U32(r31.u32 + 456, r29.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// b 0x824614e8
	goto loc_824614E8;
loc_82461418:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82461438
	if (ctx.cr6.eq) goto loc_82461438;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// b 0x824614e8
	goto loc_824614E8;
loc_82461438:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x824614e8
	if (ctx.cr6.eq) goto loc_824614E8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x822d4ac8
	ctx.lr = 0x8246146C;
	sub_822D4AC8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,-25040(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + -25040);
	// bl 0x822d4ac8
	ctx.lr = 0x8246147C;
	sub_822D4AC8(ctx, base);
	// fdiv f10,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f31.f64 / ctx.f1.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x824614b0
	if (!ctx.cr6.lt) goto loc_824614B0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x824614c0
	goto loc_824614C0;
loc_824614B0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824614C0:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// ble cr6,0x824614dc
	if (!ctx.cr6.gt) goto loc_824614DC;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r9,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r9.u32);
	// b 0x824614e8
	goto loc_824614E8;
loc_824614DC:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r8.u32);
loc_824614E8:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// stw r28,444(r31)
	REX_STORE_U32(r31.u32 + 444, r28.u32);
	// stw r28,448(r31)
	REX_STORE_U32(r31.u32 + 448, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
	// bge cr6,0x8246151c
	if (!ctx.cr6.lt) goto loc_8246151C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r29,448(r31)
	REX_STORE_U32(r31.u32 + 448, r29.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
loc_8246150C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82461510:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_8246151C:
	// ble cr6,0x8246150c
	if (!ctx.cr6.gt) goto loc_8246150C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,444(r31)
	REX_STORE_U32(r31.u32 + 444, r29.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82461510
	if (!ctx.cr6.gt) goto loc_82461510;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82461510
	if (!ctx.cr6.eq) goto loc_82461510;
	// stw r29,460(r31)
	REX_STORE_U32(r31.u32 + 460, r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_82461550:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82471C70) {
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
	ctx.lr = 0x82471C78;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82471ecc
	if (ctx.cr6.eq) goto loc_82471ECC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82471ecc
	if (ctx.cr6.eq) goto loc_82471ECC;
	// rlwinm r26,r4,30,2,31
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82471ec4
	if (ctx.cr6.eq) goto loc_82471EC4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi r22,r7,16
	r22.u64 = ctx.r7.u32 & 0xFFFF;
	// li r24,1
	r24.s64 = 1;
	// li r25,128
	r25.s64 = 128;
	// addi r23,r11,-1840
	r23.s64 = ctx.r11.s64 + -1840;
loc_82471CAC:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// blt cr6,0x82471cbc
	if (ctx.cr6.lt) goto loc_82471CBC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82471CBC:
	// stb r24,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r24.u8);
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// stbu r24,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r24.u8);
	ctx.r5.u32 = ea;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// sthu r25,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// beq 0x82471d3c
	if (ctx.cr0.eq) goto loc_82471D3C;
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r4,1(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r31,2(r3)
	ea = 2 + ctx.r3.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r5,1(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r30,r5,8
	r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// b 0x82471d44
	goto loc_82471D44;
loc_82471D3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82471D44:
	// sth r4,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, r30.u16);
	ctx.r10.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x82471ebc
	if (ctx.cr6.eq) goto loc_82471EBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82471D64:
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// subf r11,r28,r6
	ctx.r11.u64 = ctx.r6.u64 - r28.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r31,r6,r7
	r31.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// andc r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82471dac
	if (!ctx.cr6.gt) goto loc_82471DAC;
	// li r31,7
	r31.s64 = 7;
	// b 0x82471db8
	goto loc_82471DB8;
loc_82471DAC:
	// cmpwi cr6,r31,-8
	ctx.cr6.compare<int32_t>(r31.s32, -8, ctx.xer);
	// bge cr6,0x82471db8
	if (!ctx.cr6.lt) goto loc_82471DB8;
	// li r31,-8
	r31.s64 = -8;
loc_82471DB8:
	// mullw r9,r31,r7
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// ble cr6,0x82471dd0
	if (!ctx.cr6.gt) goto loc_82471DD0;
	// li r6,32767
	ctx.r6.s64 = 32767;
	// b 0x82471ddc
	goto loc_82471DDC;
loc_82471DD0:
	// cmpwi cr6,r6,-32768
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -32768, ctx.xer);
	// bge cr6,0x82471ddc
	if (!ctx.cr6.lt) goto loc_82471DDC;
	// li r6,-32768
	ctx.r6.s64 = -32768;
loc_82471DDC:
	// rlwinm r11,r31,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3C;
	// lwzx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82471df8
	if (!ctx.cr6.lt) goto loc_82471DF8;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82471DF8:
	// lbz r3,1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rotlwi r11,r3,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// subf r9,r27,r9
	ctx.r9.u64 = ctx.r9.u64 - r27.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(ctx.r11.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r11.s32 / r29.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// andc r6,r29,r8
	ctx.r6.u64 = r29.u64 & ~ctx.r8.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82471e48
	if (!ctx.cr6.gt) goto loc_82471E48;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82471e54
	goto loc_82471E54;
loc_82471E48:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82471e54
	if (!ctx.cr6.lt) goto loc_82471E54;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82471E54:
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82471e6c
	if (!ctx.cr6.gt) goto loc_82471E6C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82471e78
	goto loc_82471E78;
loc_82471E6C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82471e78
	if (!ctx.cr6.lt) goto loc_82471E78;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82471E78:
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r8,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82471e98
	if (!ctx.cr6.lt) goto loc_82471E98;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82471E98:
	// rlwinm r8,r31,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82471d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82471D64;
loc_82471EBC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82471cac
	if (!ctx.cr6.eq) goto loc_82471CAC;
loc_82471EC4:
	// subf r3,r21,r5
	ctx.r3.u64 = ctx.r5.u64 - r21.u64;
	// b 0x822d4ebc
	return;
loc_82471ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8247A080) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a0b0
	if (ctx.cr6.eq) goto loc_8247A0B0;
	// bl 0x82460ee8
	ctx.lr = 0x8247A0AC;
	sub_82460EE8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8247A0B0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a0c4
	if (ctx.cr6.eq) goto loc_8247A0C4;
	// bl 0x82460ee8
	ctx.lr = 0x8247A0C0;
	sub_82460EE8(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8247A0C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a0d8
	if (ctx.cr6.eq) goto loc_8247A0D8;
	// bl 0x82460ee8
	ctx.lr = 0x8247A0D4;
	sub_82460EE8(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_8247A0D8:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247A0E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8247a0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247A0E8;
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

DEFINE_REX_FUNC(sub_8247C96C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x822dcd40
	ctx.lr = 0x8247C98C;
	sub_822DCD40(ctx, base);
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

DEFINE_REX_FUNC(sub_8247D358) {
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
	ctx.lr = 0x8247D360;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8247d3c4
	if (ctx.cr6.eq) goto loc_8247D3C4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247d3c4
	if (ctx.cr6.eq) goto loc_8247D3C4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8247d3d0
	if (!ctx.cr6.eq) goto loc_8247D3D0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8247d3b4
	if (ctx.cr6.eq) goto loc_8247D3B4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8247D3B4;
	sub_822D5870(ctx, base);
loc_8247D3B4:
	// bl 0x822db6c0
	ctx.lr = 0x8247D3B8;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247D3C4;
	sub_822D6910(ctx, base);
loc_8247D3C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247D3C8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8247D3D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcc80
	ctx.lr = 0x8247D3D8;
	sub_822DCC80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8247d0c0
	ctx.lr = 0x8247D3F4;
	sub_8247D0C0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x8247d42c
	ctx.lr = 0x8247D404;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247D42C(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8247d3c8
	goto loc_8247D3C8;
}

DEFINE_REX_FUNC(sub_8247F650) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247F658;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// bl 0x822dbd80
	ctx.lr = 0x8247F670;
	sub_822DBD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r30,r11,-11328
	r30.s64 = ctx.r11.s64 + -11328;
	// addi r10,r10,-11324
	ctx.r10.s64 = ctx.r10.s64 + -11324;
loc_8247F684:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8247f714
	if (!ctx.cr6.lt) goto loc_8247F714;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247f708
	if (ctx.cr6.eq) goto loc_8247F708;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f708
	if (ctx.cr0.eq) goto loc_8247F708;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822dccf0
	ctx.lr = 0x8247F6C4;
	sub_822DCCF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f6fc
	if (ctx.cr0.eq) goto loc_8247F6FC;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247f6fc
	if (ctx.cr6.eq) goto loc_8247F6FC;
	// bl 0x822e5f90
	ctx.lr = 0x8247F6F0;
	sub_822E5F90(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_8247F6FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x8247f77c
	ctx.lr = 0x8247F708;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247F77C(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_8247F708:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8247f684
	goto loc_8247F684;
loc_8247F714:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x8247f72c
	ctx.lr = 0x8247F720;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247F72C(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8248A220) {
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
	ctx.lr = 0x8248A228;
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
	// bl 0x82498960
	ctx.lr = 0x8248A248;
	sub_82498960(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r28,r31,22432
	r28.s64 = r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,5108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 5108);
	// bl 0x8248a7b8
	ctx.lr = 0x8248A25C;
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
	// bl 0x82498d80
	ctx.lr = 0x8248A280;
	sub_82498D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a3c0
	if (!ctx.cr6.eq) goto loc_8248A3C0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d0b10
	ctx.lr = 0x8248A298;
	sub_824D0B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a3c0
	if (!ctx.cr6.eq) goto loc_8248A3C0;
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
	// bl 0x824c8840
	ctx.lr = 0x8248A2C0;
	sub_824C8840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a3c0
	if (!ctx.cr6.eq) goto loc_8248A3C0;
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
	// bl 0x824a56a0
	ctx.lr = 0x8248A2E8;
	sub_824A56A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a3c0
	if (!ctx.cr6.eq) goto loc_8248A3C0;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8248a378
	if (ctx.cr6.eq) goto loc_8248A378;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823617a0
	ctx.lr = 0x8248A318;
	sub_823617A0(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3780(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,1368(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1368);
	// lwz r29,3776(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// lhz r30,52(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 52);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r9,r30,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x82360490
	ctx.lr = 0x8248A378;
	sub_82360490(ctx, base);
loc_8248A378:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248ab00
	ctx.lr = 0x8248A384;
	sub_8248AB00(ctx, base);
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8248a3ac
	if (!ctx.cr6.eq) goto loc_8248A3AC;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8248a3ac
	if (!ctx.cr6.eq) goto loc_8248A3AC;
	// lwz r11,15260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8248a3b0
	if (ctx.cr6.eq) goto loc_8248A3B0;
loc_8248A3AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8248A3B0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, ctx.r10.u32);
loc_8248A3C0:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824A3870) {
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
	ctx.lr = 0x824A3878;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x824a38a0
	if (ctx.cr6.eq) goto loc_824A38A0;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_824A38A0:
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x824a38bc
	if (ctx.cr6.eq) goto loc_824A38BC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824A38BC:
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x824a38d8
	if (ctx.cr6.eq) goto loc_824A38D8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824A38D8:
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x824a38f4
	if (ctx.cr6.eq) goto loc_824A38F4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824A38F4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a39a0
	if (!ctx.cr6.eq) goto loc_824A39A0;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// lhz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - r29.u64;
	// subf r8,r28,r3
	ctx.r8.u64 = ctx.r3.u64 - r28.u64;
	// subf r26,r6,r3
	r26.u64 = ctx.r3.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r28,r6
	r25.u64 = ctx.r6.u64 - r28.u64;
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
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// andc r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ~r26.u64;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// andc r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ~r25.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// and r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 & ctx.r3.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x824a39f4
	goto loc_824A39F4;
loc_824A39A0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824a39ec
	if (!ctx.cr6.eq) goto loc_824A39EC;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,102(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x824a39f4
	goto loc_824A39F4;
loc_824A39EC:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824A39F4:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,4
	r28.s64 = 4;
loc_824A39FC:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a3af4
	if (!ctx.cr6.eq) goto loc_824A3AF4;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r9,r4,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// lwz r11,1712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1712);
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,1716(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1716);
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a3af0
	if (ctx.cr6.eq) goto loc_824A3AF0;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a3a6c
	if (!ctx.cr6.eq) goto loc_824A3A6C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x824A3A64;
	sub_824A36B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a3af0
	goto loc_824A3AF0;
loc_824A3A6C:
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// lhz r7,50(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r9,r8,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 52);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r5,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rotlwi r9,r7,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r7,r6,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// rlwinm r8,r3,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,-64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -64, ctx.xer);
	// bge cr6,0x824a3ab8
	if (!ctx.cr6.lt) goto loc_824A3AB8;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// b 0x824a3ac8
	goto loc_824A3AC8;
loc_824A3AB8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x824a3ac8
	if (!ctx.cr6.gt) goto loc_824A3AC8;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_824A3AC8:
	// cmpwi cr6,r8,-64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -64, ctx.xer);
	// bge cr6,0x824a3adc
	if (!ctx.cr6.lt) goto loc_824A3ADC;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// b 0x824a3aec
	goto loc_824A3AEC;
loc_824A3ADC:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x824a3aec
	if (!ctx.cr6.gt) goto loc_824A3AEC;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824A3AEC:
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
loc_824A3AF0:
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
loc_824A3AF4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x824a39fc
	if (!ctx.cr0.eq) goto loc_824A39FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824AA4E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x824a9628
	sub_824A9628(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824AAFB0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x824AAFB8;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x824a9408
	ctx.lr = 0x824AAFD8;
	sub_824A9408(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lvx128 v7,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// vslh v5,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// vslh v4,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,432
	r29.s64 = ctx.r1.s64 + 432;
	// vslh v2,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v5,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	r28.s64 = 1104;
	// lvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v10
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v27,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v9
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v25,v12,v63,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v5,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v24,v11,v62,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vslh v28,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v23,v10,v61,2
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v22,v9,v60,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v19,v27,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v21,v8,v59,2
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vaddshs v17,v2,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v20,v7,v58,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v16,v1,v6
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v18,v6,v57,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v56,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r28
	ea = (r30.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	r27.s64 = 48;
	// li r26,96
	r26.s64 = 96;
	// vsldoi128 v15,v5,v56,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// li r3,144
	ctx.r3.s64 = 144;
	// vaddshs v14,v28,v5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// li r11,192
	ctx.r11.s64 = 192;
	// vaddshs v12,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// li r10,240
	ctx.r10.s64 = 240;
	// vaddshs v11,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// li r9,288
	ctx.r9.s64 = 288;
	// vaddshs v10,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// li r8,336
	ctx.r8.s64 = 336;
	// vaddshs v9,v26,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v8,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v7,v17,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v6,v16,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v5,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v4,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v2,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v1,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v31,v8,v0
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v30,v7,v0
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v29,v6,v0
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v28,v5,v0
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
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
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v24,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824B0FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e8c
	ctx.lr = 0x824B0FE0;
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,96
	ctx.r8.s64 = 96;
	// li r31,144
	r31.s64 = 144;
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,112
	r30.s64 = 112;
	// li r11,160
	ctx.r11.s64 = 160;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v10,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v12,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v9,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v11,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-48
	r31.s64 = ctx.r1.s64 + -48;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vsldoi128 v6,v10,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v5,v9,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vslh v3,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vslh v2,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vslh v31,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v4,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v29,v3,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v2,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v8
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v29,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v28,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v27,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v58,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v59,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r30,-64(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-48(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r31,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, r31.u32);
	// stwx r29,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x824b10f4
	if (!ctx.cr6.eq) goto loc_824B10F4;
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-52(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r30,-44(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
loc_824B10F4:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x824b1200
	if (!ctx.cr6.eq) goto loc_824B1200;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r31,288
	r31.s64 = 288;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,336
	r30.s64 = 336;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,304
	ctx.r10.s64 = 304;
	// li r9,352
	ctx.r9.s64 = 352;
	// lvx128 v57,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lvx128 v10,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v12,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v9,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v11,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vsldoi128 v6,v10,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v5,v9,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vslh v3,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v4,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v3,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v2,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v8
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v29,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v28,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v27,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v52,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r30,-40(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r9,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stwux r6,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stwx r30,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r30.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
loc_824B1200:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824BA228) {
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
	ctx.lr = 0x824BA230;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,50(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// stw r10,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mullw r10,r27,r5
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// stw r8,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// lwz r26,348(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r28,284(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r20,292(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// or r21,r9,r4
	r21.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r24,r8,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r7,r24,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-23032
	r25.s64 = ctx.r11.s64 + -23032;
	// rlwinm r30,r21,6,0,25
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lis r6,115
	ctx.r6.s64 = 7536640;
	// lwzx r5,r7,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r29,r6,115
	r29.u64 = ctx.r6.u64 | 115;
	// rlwinm r4,r5,1,15,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// extsh r23,r5
	r23.s64 = ctx.r5.s16;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r22,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	r22.s64 = ctx.r5.s32 >> 16;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// clrlwi r11,r23,30
	ctx.r11.u64 = r23.u32 & 0x3;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// subf r8,r5,r28
	ctx.r8.u64 = r28.u64 - ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - r30.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r7,r22,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x3C;
	// srawi r16,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r16.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r3.s64 = r22.s32 >> 1;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// rlwinm r11,r3,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// lwzx r10,r7,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// add r15,r10,r11
	r15.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// beq cr6,0x824ba314
	if (ctx.cr6.eq) goto loc_824BA314;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824b9be8
	ctx.lr = 0x824BA30C;
	sub_824B9BE8(ctx, base);
	// lwz r23,96(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,100(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_824BA314:
	// add r11,r27,r24
	ctx.r11.u64 = r27.u64 + r24.u64;
	// lis r27,4
	r27.s64 = 262144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r30,r27
	ctx.r5.u64 = r30.u64 + r27.u64;
	// lwzx r9,r10,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r8,r9,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x10000;
	// extsh r24,r9
	r24.s64 = ctx.r9.s16;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r19,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	r19.s64 = ctx.r9.s32 >> 16;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// clrlwi r11,r24,30
	ctx.r11.u64 = r24.u32 & 0x3;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// subf r3,r9,r28
	ctx.r3.u64 = r28.u64 - ctx.r9.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r19,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3C;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + r29.u64;
	// srawi r14,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r14.s64 = ctx.r10.s32 >> 1;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// srawi r7,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r7.s64 = r19.s32 >> 1;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// rlwinm r10,r7,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r6,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r4,0,16,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ba3ac
	if (ctx.cr6.eq) goto loc_824BA3AC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x824b9be8
	ctx.lr = 0x824BA3A4;
	sub_824B9BE8(ctx, base);
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,96(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824BA3AC:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// rlwinm r30,r21,5,0,26
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwimi r11,r15,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lis r10,59
	ctx.r10.s64 = 3866624;
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// ori r29,r10,59
	r29.u64 = ctx.r10.u64 | 59;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - r30.u64;
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + r29.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ba408
	if (ctx.cr6.eq) goto loc_824BA408;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824b9cb8
	ctx.lr = 0x824BA400;
	sub_824B9CB8(ctx, base);
	// lwz r16,104(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,108(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824BA408:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// add r5,r30,r27
	ctx.r5.u64 = r30.u64 + r27.u64;
	// rlwimi r11,r26,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + r29.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ba454
	if (ctx.cr6.eq) goto loc_824BA454;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824b9cb8
	ctx.lr = 0x824BA450;
	sub_824B9CB8(ctx, base);
	// lwz r14,112(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_824BA454:
	// lis r27,-32162
	r27.s64 = -2107768832;
	// lhz r8,74(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 74);
	// srawi r7,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	ctx.r7.s64 = r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r9.s64 = r23.s32 >> 2;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,-28624(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28624);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r29,r10,r17
	r29.u64 = ctx.r10.u64 + r17.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ba4fc
	if (!ctx.cr0.eq) goto loc_824BA4FC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BA4FC:
	// clrlwi r28,r22,30
	r28.u64 = r22.u32 & 0x3;
	// rlwinm r10,r23,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,-28624(r27)
	REX_STORE_U32(r27.u32 + -28624, ctx.r11.u32);
	// clrlwi r26,r23,30
	r26.u64 = r23.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r25,1
	r25.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwzx r4,r5,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824BA550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ba580
	if (ctx.cr6.eq) goto loc_824BA580;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823af2f0
	ctx.lr = 0x824BA580;
	sub_823AF2F0(ctx, base);
loc_824BA580:
	// lwz r11,-28624(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28624);
	// srawi r9,r19,2
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x3) != 0);
	ctx.r9.s64 = r19.s32 >> 2;
	// srawi r8,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r8.s64 = r24.s32 >> 2;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r9,r17
	r29.u64 = ctx.r9.u64 + r17.u64;
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r26,r10,r18
	r26.u64 = ctx.r10.u64 + r18.u64;
	// rotlwi r30,r10,1
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bne 0x824ba62c
	if (!ctx.cr0.eq) goto loc_824BA62C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BA62C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r28,r19,30
	r28.u64 = r19.u32 & 0x3;
	// stw r11,-28624(r27)
	REX_STORE_U32(r27.u32 + -28624, ctx.r11.u32);
	// rlwinm r11,r24,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xC;
	// clrlwi r27,r24,30
	r27.u64 = r24.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r11,r3,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BA67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ba6ac
	if (ctx.cr6.eq) goto loc_824BA6AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823af2f0
	ctx.lr = 0x824BA6AC;
	sub_823AF2F0(ctx, base);
loc_824BA6AC:
	// lis r30,-32162
	r30.s64 = -2107768832;
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r7,r15,2
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x3) != 0);
	ctx.r7.s64 = r15.s32 >> 2;
	// lwz r23,324(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r9,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	ctx.r9.s64 = r16.s32 >> 2;
	// lwz r22,332(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,-28620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28620);
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r22
	r29.u64 = ctx.r10.u64 + r22.u64;
	// subf. r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bne 0x824ba760
	if (!ctx.cr0.eq) goto loc_824BA760;
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
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BA760:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// clrlwi r28,r15,30
	r28.u64 = r15.u32 & 0x3;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r11,-28620(r30)
	REX_STORE_U32(r30.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r16,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// clrlwi r27,r16,30
	r27.u64 = r16.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BA7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28620);
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x824ba83c
	if (!ctx.cr0.eq) goto loc_824BA83C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BA83C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-28620(r30)
	REX_STORE_U32(r30.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BA884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r10,-28620(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -28620);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// srawi r8,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r8.s64 = r14.s32 >> 2;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf. r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r9,r23
	ctx.r3.u64 = ctx.r9.u64 + r23.u64;
	// add r29,r9,r22
	r29.u64 = ctx.r9.u64 + r22.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bne 0x824ba93c
	if (!ctx.cr0.eq) goto loc_824BA93C;
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
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r10,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r3
	// li r10,0
	ctx.r10.s64 = 0;
loc_824BA93C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r28,r7,30
	r28.u64 = ctx.r7.u32 & 0x3;
	// stw r11,-28620(r30)
	REX_STORE_U32(r30.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r14,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xC;
	// clrlwi r27,r14,30
	r27.u64 = r14.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// bctrl 
	ctx.lr = 0x824BA980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28620);
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x824baa10
	if (!ctx.cr0.eq) goto loc_824BAA10;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BAA10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-28620(r30)
	REX_STORE_U32(r30.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BAA54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

